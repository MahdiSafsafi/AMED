# AMED.X86 generator
#
# https://github.com/MahdiSafsafi/AMED
#
#
package Generator::X86;
use strict;
use warnings;
use Generator::Base;
use JSON::XS;
use Data::Dump qw/pp/;
use feature qw/say/;
use Storable qw/dclone/;
use List::Util qw/uniq min max/;
use Generator::DecisionTree qw/print_tree get_tree array2node/;
use Generator::Utils qw/indented_print/;
use Generator::Binary::Utils qw/get_mask_from_range/;
use Generator::Binary::Utils qw/get_bit_count int2bin/;
use Generator::AutoGenNotice qw/print_autogen_notice/;
our @ISA = qw/Generator::Base/;
use LogOnce;
my $log = LogOnce->new();


sub new {
	my ( $class, $json, $include, $source ) = @_;
	my $self = $class->SUPER::new( $json, $include, $source );
	return $self;
}

sub reginfo_to_c {
	my ( $self, $info ) = @_;
	my $clone = dclone $info;
	foreach my $key (qw/is_first is_even is_last reg encoding /) {
		delete $clone->{$key};
	}
	return $self->node_to_c( 'reginfo', $clone, 1 );
}

sub get_argument_iform {
	my ( $self, $argument ) = @_;
	my $type      = $argument->{type};
	my $size      = $argument->{size} // 0;
	my $symbol    = $argument->{symbol} // '';
	my %reg2iform = (
		GPR => 'r',
		MMX => 'mx',
		FP  => 'f',
		XMM => 'x',
		YMM => 'y',
		ZMM => 'z',
		BND => 'b',
		DR  => 'dbg',
		CR  => 'cntrl'
	);
	my %size2iform = (
		8   => 'b',
		16  => 'w',
		32  => 'd',
		64  => 'q',
		128 => 'x',
		256 => 'y',
		512 => 'z',
	);
	if ( $type =~ /REG/ ) {
		exists $reg2iform{$symbol} and return $reg2iform{$symbol};
	}
	elsif ( $type =~ /MEM/ ) {
		$symbol =~ /^VM[.]$/ and return lc $symbol;
		exists $size2iform{$size} and return sprintf "m%s", $size2iform{$size};
		return 'm';
	}
	elsif ( $type =~ /IMM/ ) {
		exists $size2iform{$size} and return sprintf "i%s", $size2iform{$size};
		return 'i';
	}
	else {
		return '';
	}
}

sub get_opcodes {
	my ( $self, $record, $array ) = @_;
	my $id = $record->{id};

	# OPC     : [0x00..0xff]
	# L       : LONG (64) [F T]
	# FEATURES: SET OF    [AMD KNC MPX BMI CLDEMOTE CET]
	# RM      : MODRM.RM  [0..7]
	# REG     : MODRM.REG [0..7]
	# CR      : CONSTRAINT ON REG [F T]
	# MOD     : MODRM.MOD [MEM REG]
	# MP      : MANDATORY PREFIX [NONE 66 F2 F3]
	# LEN     :
	#           OSZ = [16 32 64   ]
	#           VL  = [128 256 512]
	# E       : MVEX.E [F T]
	# W       : REW.W  [F T]
	# B       : REW.B  [F T]
	# ASZ     : ADISIZE LONG(64)  [F T]
	# MAP     : [NONE  0f  0f0f 0f38 0f3a xop8  xop9  xopa]
	# ENC     : [NONE VEX XOP 3DNOW EVEX MVEX]
	# ##############################################################################################
	#            31 25| 24|   23|  22|21 20|19|18 16|15| 14| 13| 12|  11|  10|9 8|7 5| 4|3 1|0     #
	#         FEATURES|  W| MODE|YASZ|  ASZ| E|  ENC|BP|P66|PF3|PF2|ZOSZ|YOSZ|LEN| RM|CR|REG|MODREG#
	# ##############################################################################################

	my %fldinfo = (
		mod      => { from => 0,  to => 0 },
		reg      => { from => 1,  to => 3 },
		cr       => { from => 4,  to => 4 },
		rm       => { from => 5,  to => 7 },
		len      => { from => 8,  to => 9 },
		vl       => { from => 8,  to => 9 },
		yosz     => { from => 10, to => 10 },
		zosz     => { from => 11, to => 11 },
		pf2      => { from => 12, to => 12 },
		pf3      => { from => 13, to => 13 },
		p66      => { from => 14, to => 14 },
		bp       => { from => 15, to => 15 },
		b        => { from => 15, to => 15 },
		enc      => { from => 16, to => 18 },
		e        => { from => 19, to => 19 },
		asz      => { from => 20, to => 21 },
		yasz     => { from => 22, to => 22 },
		mode     => { from => 23, to => 23 },
		w        => { from => 24, to => 24 },
		features => { from => 25, to => 31 },
	);

	my %fields = ();
	my %map    = (
		mod => {
			reg => 1,
			mem => 0,
		},
		osz => {
			16 => 0,
			32 => 1,
			64 => 2,
		},
		asz => {
			16 => 0,
			32 => 1,
			64 => 2,
		},
		vl => {
			128 => 0,
			256 => 1,
			512 => 2,
		},
		map => {
			none   => 0,
			'0f'   => 1,
			'0f0f' => 2,
			'0f38' => 3,
			'0f3a' => 4,
			xop8   => 5,
			xop9   => 6,
			xopa   => 7,
		},
		enc => {
			none    => 0,
			vex     => 1,
			evex    => 2,
			mvex    => 3,
			xop     => 4,
			'3dnow' => 5,
		}
	);

	foreach my $fld (@$array) {
		my $name  = lc $fld->{name};
		my $value = lc $fld->{value};
		if ( $name =~ /^(d64|f64)$/ ) {
			$record->{metadata}->{$name} = $value;
			next;
		}
		elsif ( $name =~ /^rvl$/ ) {
			$record->{metadata}->{rvl} = sprintf "RVL%d", $value;
			next;
		}
		elsif ( $name =~ /^vl$/ ) {
			$record->{metadata}->{rvl} = sprintf "RVL%d", $value;
		}
		$value =~ /^0x[0-9a-f]+$/i and $value = hex $value;
		$fields{$name} = $value;
	}

	# handle special values:
	# ----------------------

	# default:

	exists $fields{$_} or $fields{$_} = 'none' foreach (qw/enc map/);

	exists $fields{mode} and $fields{mode} = $fields{mode} eq '64' ? 1 : 0;

	# constraint for modrm.reg:
	if ( exists $fields{reg} ) {
		my $reg = $fields{reg};
		$reg eq 'nnn' and delete $fields{reg};
		$fields{cr} = $reg =~ /^0+$/ ? 0 : 1;
	}

	# constraint for osz:
	if ( exists $fields{osz} ) {
		my $osz = $fields{osz};
		$fields{zosz} = $fields{yosz} = 0;
		if ( $osz eq 'z' ) {

			# osz = [16, 32] => no64.
			delete $fields{osz};
			$fields{zosz} = 1;
		}
		elsif ( $osz eq 'y' ) {

			# osz = [32, 64] => no16.
			delete $fields{osz};
			$fields{yosz} = 1;
		}
		else {
			if ( $osz eq '16' ) {
				$fields{zosz} = 1;
			}
			elsif ( $osz eq '32' ) {
				$fields{zosz} = $fields{yosz} = 1;
			}
			elsif ( $osz eq '64' ) {
				$fields{yosz} = 1;
			}
		}
	}

	# constraint for asz:
	if ( exists $fields{asz} ) {
		my $asz = $fields{asz};
		$fields{yasz} = 0;
		if ( $asz eq 'y' ) {

			# asz = [32, 64] => no16.
			delete $fields{asz};
			$fields{yasz} = 1;
		}
		elsif ( $asz =~ /^(32|64)$/ ) {
			$fields{yasz} = 1;
		}
	}

	foreach my $key ( keys %fields ) {
		my $value = $fields{$key};
		exists $map{$key}->{$value} and $fields{$key} = $map{$key}->{$value};
	}

	my ( $opcode, $mask ) = ( 0, 0 );

	# handle features:
	my $features = $fldinfo{features};
	my $i        = $features->{from};
	foreach my $key (qw/amd knc mpx bmi cldemote cet/) {
		my $value = $fields{$key};
		if ( defined $value ) {
			$opcode |= $value << $i;
			$mask   |= 1 << $i;
		}
		$i++;
	}

	# fill the diagram:
	foreach my $key ( keys %fldinfo ) {
		my $info = $fldinfo{$key};
		my $shr  = $info->{from};
		if ( exists $fields{$key} ) {
			my $imask = get_mask_from_range( $info->{from}, $info->{to} );
			my $value = $fields{$key};
			$mask   |= $imask;
			$opcode |= $value << $shr;
		}
	}
	return ( $opcode, $mask );
}

sub process_encoding {
	my ( $self, $encoding ) = @_;
	my %fields = ();
	$fields{ $_->{name} } = $_ foreach ( @{ $encoding->{diagram}->{fields} } );
	$fields{MR} and $encoding->{metadata}->{has_modrm} = 1;

	my ( $eopcode, $emask ) = $self->get_opcodes( $encoding, $encoding->{diagram}->{fields} );
	$encoding->{diagram}->{opcode} = $eopcode;
	$encoding->{diagram}->{tmask}  = $encoding->{diagram}->{mask} = $emask;
	$encoding->{diagram}->{cmask}  = 0;
	foreach my $template ( @{ $encoding->{templates} } ) {
		my ( $topcode, $tmask ) = $self->get_opcodes( $template, $template->{bitdiffs}->{fields} );
		$template->{bitdiffs}->{opcode} = $topcode;
		$template->{bitdiffs}->{mask}   = $tmask;
		$tmask   |= $emask;
		$topcode |= $eopcode;

		$template->{diagram}->{opcode} = $topcode;
		$template->{diagram}->{mask}   = $tmask;
		$template->{diagram}->{tmask}  = $tmask;
		$template->{diagram}->{cmask}  = 0;
	}
	Generator::Base::process_encoding(@_);

}

sub add_entry {
	my ( $self, $table, $encoding ) = @_;
	$encoding->{id}=~/^INVALID$/ and return;
	my %fields = ();
	$fields{ $_->{name} } = $_->{value} foreach ( @{ $encoding->{diagram}->{fields} } );
	my $map   = $fields{MAP} // '';
	my $op    = hex $fields{OP};
	my %maped = (
		'0f'   => 1,
		'0f0f' => 2,
		'0f38' => 3,
		'0f3a' => 4,
		'xop8' => 5,
		'xop9' => 6,
		'xopa' => 7,
	);

	$map and $op += ( $maped{$map} * 256 );
	unless ( $table->[$op] ) {
		my $name = $fields{OP};
		$fields{MAP} and $name = sprintf "%s.%s", $fields{MAP}, $name;
		$table->[$op] = { name => $name, };
	}
	push @{ $table->[$op]->{encodings} }, $encoding;
}

sub generate_disasm {
	my ($self) = @_;

	# init table:
	my $table = [];
	$self->add_entry( $table, $_ ) foreach ( @{ $self->{encodings} } );

	my $filename = sprintf "lookup-x86",;
	my $file = sprintf "%s\\%s.inc", $self->{source}, lc $filename;
	open my $fh, '>', $file;
	print_autogen_notice($fh);
	my $function = "static uint32_t x86_lookup(unsigned int index, unsigned int opcode)";
	printf $fh "$function\n";
	printf $fh "{\n";

	# local variables:
	indented_print( $fh, 2, sprintf "unsigned char a = (opcode >> 0 ) & 0xff;\n" );
	indented_print( $fh, 2, sprintf "unsigned char b = (opcode >> 8 ) & 0xff;\n" );
	indented_print( $fh, 2, sprintf "unsigned char c = (opcode >> 16) & 0xff;\n" );
	indented_print( $fh, 2, sprintf "unsigned char d = (opcode >> 24) & 0xff;\n" );
	indented_print( $fh, 2, "\n" );

	# switch index:
	indented_print( $fh, 2, "switch(index)\n" );
	indented_print( $fh, 2, "{\n" );

	for my $i ( 0 .. scalar @$table - 1 ) {
		my $entry = $table->[$i];
		unless ($entry) {

			# invalid entry:
			indented_print( $fh, 2, "/* invalid */\n" );
			indented_print( $fh, 2, sprintf "case %d:\n", $i );
			indented_print( $fh, 4, "return 0;\n" );
			next;
		}

		# valid entry:
		indented_print( $fh, 2, sprintf "/* %s */\n", $entry->{name} );
		indented_print( $fh, 2, sprintf "case %d:\n", $i );

		my $current = my $node = my $toplevel = undef;
		foreach my $encoding ( @{ $entry->{encodings} } ) {
			$encoding->{id}=~/^INVALID$/ and next;
			my $encoding_index = $encoding->{index};
				
			foreach my $template ( @{ $encoding->{templates} } ) {
				my $tdiagram       = $template->{diagram};
				my $tid            = sprintf "%s::%s", $encoding->{id}, $template->{iform};
				my $template_index = $template->{index};
				$encoding_index > 0xfff0 and die "encoding index is too big.";

				my $result = sprintf "%d << 16 | %d",$encoding_index, $template_index;
				$current = {
					data    => $template,
					id      => $tid,
					opcode  => $tdiagram->{opcode},
					mask    => $tdiagram->{mask},
					cmask   => $tdiagram->{cmask},
					tmask   => $tdiagram->{tmask},
					type    => 'TEMPLATE',
					comment => $template->{syntax}->{text},
					cnsts   => [],
					index   => $result,
					next    => undef,
				};

				unless ($toplevel) {
					$toplevel = $node = $current;
				}
				else {
					$node->{next} = $current;
					$node = $current;
				}
			}
		}
		my $tree = get_tree($toplevel);
		print_tree( $fh, 4, $tree );

		# break index:
		indented_print( $fh, 2, "break;\n" );
	}

	# end switch index:
	indented_print( $fh, 2, "}\n" );

	# default result:
	indented_print( $fh, 2, sprintf "return 0;\n" );

	# end function:
	printf $fh "};\n\n";

	# end file:
	close $fh;
}

sub process_node {
	my ( $self, $qlf, $node ) = @_;
	ref($node) =~ /HASH/ or return;
	my $type = $node->{type} // '';

	if ( exists $node->{encodedin} ) {
		$node->{encodedin} = uc $node->{encodedin};

	}

	if ( exists $node->{size} && $node->{size} =~ /^[A-Z]/i ) {
		my $size = $node->{size};
		$size = $self->{seen}->{widths}->{$size};
		$node->{size} = -$size;
	}
}

my $file = 'D:\WIP\opcodesDB\json\x86.json';
local $/ = undef;
open my $fh, '<', $file;
my $json = JSON::XS::decode_json(<$fh>);
close $fh;
my $include = 'D:\WIP\AMED\include\amed\x86\include';
my $source  = 'D:\WIP\AMED\source\x86\include';

my $x86 = Generator::X86->new( $json, $include, $source );
$x86->generate();
1;
