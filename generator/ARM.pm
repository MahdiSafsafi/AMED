# AMED AARCH32 && AARCH64 generator
#
# https://github.com/MahdiSafsafi/AMED
#
#
package Generator::ARM;
use Generator::Dictionary;
use Generator::Sequence;
use strict;
use warnings;
use Generator::Base;
use JSON::XS;
use Data::Dump qw/pp/;
use feature qw/say/;
use List::Util qw/uniq min max/;
use Generator::DecisionTree qw/print_tree get_tree array2node/;
use Generator::Utils qw/indented_print/;
use Generator::Binary::Utils qw/get_mask_from_range/;
use Generator::Binary::Utils qw/get_bit_count int2bin/;
use Generator::AutoGenNotice qw/print_autogen_notice/;
our @ISA = qw/Generator::Base/;
use Generator::Binary::Utils qw/get_mask_from_range/;
use LogOnce;
my $log = LogOnce->new();

sub new {
	my ( $class, $json, $include, $source ) = @_;
	my $self = $class->SUPER::new( $json, $include, $source );
	$self->{encodedins} = Generator::Sequence->new( sprintf( "amed_%s_encodedins_array", $self->{arch} ), 'amed_db_encodedin' );
	my @masks = map { $self->mask_to_c($_) } ( { mask => 0, size => 0 } );
	$self->{encodedins}->add( \@masks );
	return $self;
}

sub get_argument_iform {
	my ( $self, $argument ) = @_;
	my $type      = $argument->{type};
	my $size      = $argument->{size} // 0;
	my $symbol    = $argument->{symbol} // '';
	my %reg2iform = (
		GPR32   => 'r',
		GPR64   => 'r',
		SIMD8   => 'b',
		SIMD16  => 'h',
		SIMD32  => 's',
		SIMD64  => 'd',
		SIMD128 => 'q',
		VECREG  => 'v',
		PRDREG  => 'k',
		SVEREG  => 'z',
	);
	my %size2iform = (
		8   => 'b',
		16  => 'h',
		32  => 'w',
		64  => 'd',
		128 => 'q',
	);
	if ( $type =~ /REG/ ) {
		my $reg = exists $argument->{reg} ? $argument->{reg} : $argument;
		my $kind = $reg->{kind} // '';

		exists $reg2iform{$kind} and return $reg2iform{$kind};
	}
	elsif ( $type =~ /LIST/ ) {
		return 'l';
	}
	elsif ( $type =~ /MEM/ ) {
		return 'm';
	}
	elsif ( $type =~ /IMM/ ) {
		return 'i';
	}
	else {
		return '';
	}
}

sub parse_encodedin {
	( my $diagram, local $_ ) = @_;
	my %fields    = ();
	my @encodedin = ();
	$fields{ $_->{name} } = $_ foreach ( @{ $diagram->{fields} } );
	my $mask = 0;
	while (/\G(\s*(\w+)\s*)/gc) {
		my $name = $2;
		my ( $from, $to ) = ( undef, undef );
		if (/\G(<(\d+):(\d+)>)/gc) {
			( $to, $from ) = ( $2, $3 );
		}
		elsif (/\G(<(\d+)>)/gc) {
			( $to, $from ) = ( $2, $2 );
		}
		my $parent = $fields{$name} // goto error;
		my $size   = $parent->{size};
		my $pos    = $parent->{pos};
		my $mask   = 0;
		if ( defined $from ) {
			$mask = get_mask_from_range( $from, $to );
			$size = $to == $from ? 1 : ( $to - $from ) + 1;
		}
		else {
			$mask = get_mask_from_range( 0, $size - 1 );
		}
		$mask <<= $pos;
		push @encodedin, { name => $name, pos => $pos, size => $size, mask => $mask };
		m/\G(:)/gc or last;
	}
	goto end;
  error:
	@encodedin = ();
  end:

	my @masks = ();
	my $size  = 0;
	my $sz    = 0;
	$mask = undef;
	my $pos = undef;

	foreach my $field (@encodedin) {
		$size += $field->{size};
	  again:
		if ( !defined $pos ) {
			$pos  = $field->{pos};
			$mask = $field->{mask};
			$sz   = $field->{size};
		}
		elsif ( $field->{pos} < $pos ) {
			$mask |= $field->{mask};
			$sz += $field->{size};
			$pos = $field->{pos};
		}
		else {
			push @masks, { mask => $mask, size => $sz };
			$pos = undef;
			goto again;
		}
	}
	defined $mask and push @masks, { mask => $mask, size => $sz };
	push @masks, { mask => 0, size => 0 };    # end.
	return \@masks;
}

sub mask_to_c {
	my ( $self, $mask ) = @_;
	return sprintf "{0x%08x, %d}", $mask->{mask}, $mask->{size};
}

sub process_size {
	my ( $self, $size ) = @_;
	my $hash = {};
  again: $size =~ s/^(\d+)x(\d+)/$1*$2/e and goto again;

	if ( $size =~ /^v(\d+)x(\d+)$/i ) {
		$hash->{esize} = $1;
		$hash->{size}  = $2;
	}
	elsif ( $size =~ /^(vl|pl)$/i ) {
		$hash->{size} = uc $1;
	}
	elsif ( $size =~ /^(\d+)$/ ) {
		$hash->{size} = $1;
	}
	else {
		die "unkown size '$size'";
	}
	return $hash;
}

sub process_node {
	my ( $self, $qlf, $node ) = @_;
	ref($node) =~ /HASH/ or return;
	foreach my $key (qw/vdt vds/) {
		exists $node->{$key} or next;
		$node->{$key} = $node->{$key}->{value};
	}
	my $encoding = $self->current('encoding');
	my $template = $self->current('template');
	delete $node->{range};
	exists $node->{kind} and $node->{symbol} = delete $node->{kind};
	my $type = $node->{type} // '';
	if ( $type =~ /^(MEM|LM)$/i && exists $node->{size} ) {
		$node->{size} = $self->process_size( $node->{size} );
	}

	if ( exists $node->{encodedin} && defined $node->{encodedin} ) {
		my $masks = parse_encodedin( $encoding->{diagram}, $node->{encodedin} );
		@$masks = map { $self->mask_to_c($_) } @$masks;
		my $registered = $self->{encodedins}->add($masks);
		$registered->{comment} = $node->{encodedin};
		$node->{encodedin}     = $registered->{'index'};
	}
}

sub process_constraints {
	my ( $self, $record ) = @_;
	my $cnsts = exists $record->{cnsts} ? $record->{cnsts} : undef;
	$record->{diagram}->{tmask} = $record->{diagram}->{mask};
	$record->{diagram}->{cmask} = 0;
	$cnsts or return 1;
	my %fields = ();
	$fields{ $_->{name} } = $_ foreach ( @{ $record->{diagram}->{fields} } );
	my @patterns = $cnsts =~ /(\S+)/g;
	my @cnsts    = ();

	foreach my $pattern (@patterns) {

		$pattern =~ /^([^!=]+)!=0b([01x]+)$/ or return undef;
		my ( $names, $values ) = ( $1, $2 );
		my @names = split( ':', $names );
		my ( $mask, $cvalue ) = ( 0, 0 );
		foreach my $name (@names) {
			my $field = $fields{$name} // return undef;
			my $size  = $field->{size};
			my $pos   = $field->{pos};
			my @value = ();
			for my $i ( 0 .. $size - 1 ) {
				$values =~ s/^(.)//;
				push @value, $1;
			}
			foreach my $char ( reverse @value ) {
				if ( $char eq '1' ) {
					$mask   |= 1 << $pos;
					$cvalue |= 1 << $pos;
				}
				elsif ( $char eq '0' ) {
					$mask |= 1 << $pos;
				}
				$pos++;
			}
		}
		$record->{diagram}->{tmask} |= $mask;
		$record->{diagram}->{cmask} |= $mask;
		push @cnsts, { text => $pattern, mask => $mask, value => $cvalue };
	}

	$record->{diagram}->{cnsts} = \@cnsts;

	return 0;
}

sub process_encoding {
	my ( $self, $encoding ) = @_;
	$self->process_constraints($encoding);
	$encoding->{metadata}->{datasize}
	  and $encoding->{metadata}->{datasize} = sprintf "DS_%s", $encoding->{metadata}->{datasize};
	Generator::Base::process_encoding(@_);
}

sub generate_isaform_disasm {
	my ( $self, $isaform, $array ) = @_;
	my $arch     = $self->{arch};
	my $toplevel = undef;
	my $node     = undef;
	my $current  = undef;
	foreach my $record ( @{$array} ) {
		my $cnsts = $record->{diagram}->{cnsts};
		if ($cnsts) {
			my @clone = @$cnsts;
			$cnsts = \@clone;
		}
		$current = {
			data   => $record,
			id     => $record->{id},
			opcode => $record->{diagram}->{opcode},
			mask   => $record->{diagram}->{mask},
			cmask  => $record->{diagram}->{cmask},
			tmask  => $record->{diagram}->{tmask},
			type   => $record->{rectype},
			cnsts  => $cnsts,
			index  => $record->{index},
			next   => undef,
		};
		unless ($toplevel) {
			$toplevel = $node = $current;
		}
		else {
			$node->{next} = $current;
			$node = $current;
		}
	}

	my $tree     = get_tree($toplevel);
	my $filename = sprintf "lookup-%s", $isaform;
	my $file     = sprintf "%s\\%s.inc", $self->{source}, lc $filename;
	open my $fh, '>', $file;
	print_autogen_notice($fh);
	my $function = sprintf "uint32_t\n%s_lookup_%s(uint32_t opcode)", $arch, lc $isaform;
	printf $fh "$function\n";
	printf $fh "{\n";
	indented_print( $fh, 2, sprintf "unsigned char a = (opcode >> 0 ) & 0xff;\n" );
	indented_print( $fh, 2, sprintf "unsigned char b = (opcode >> 8 ) & 0xff;\n" );
	indented_print( $fh, 2, sprintf "unsigned char c = (opcode >> 16) & 0xff;\n" );
	indented_print( $fh, 2, sprintf "unsigned char d = (opcode >> 24) & 0xff;\n" );
	indented_print( $fh, 2, "\n" );
	print_tree( $fh, 2, $tree );
	indented_print( $fh, 2, sprintf "return 0;\n" );
	printf $fh "};\n\n";
	close $fh;
}

sub generate_disasm {
	my ($self) = @_;
	my %isaforms = ();
	foreach my $encoding ( @{ $self->{encodings} } ) {
		my $metadata = $encoding->{metadata};
		$metadata->{invalid} and next;
		$metadata->{alias}   and next;
		my $isaform = $metadata->{isaform};
		push @{ $isaforms{$isaform} }, $encoding;
	}
	foreach my $key ( keys %isaforms ) {
		my $array = $isaforms{$key};
		$self->generate_isaform_disasm( $key, $array );
	}
}
