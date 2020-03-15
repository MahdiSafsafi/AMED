# AMED base generator.
#
# https://github.com/MahdiSafsafi/AMED
#
#

package Generator::Base;
use strict;
use warnings;
use Generator::Enum;
use Generator::Dictionary;
use Generator::Sequence;
use Generator::AutoGenNotice qw/print_autogen_notice/;
use Data::Dump qw/pp/;
use feature qw/say/;
use List::Util qw/uniq min max/;
use Storable qw/dclone freeze/;
use File::Path qw(make_path);
use CExpression::Parser;
use CExpression::Transformer;
use CExpression::Printer;
use Generator::Utils qw/indented_print/;
use LogOnce;

my $log = LogOnce->new();

sub new {
	my ( $class, $json, $include, $source ) = @_;
	my $self = {
		db        => $json,
		arch      => $json->{arch},
		include   => $include,
		source    => $source,
		groups    => [],
		iclasses  => [],
		pages     => [],
		classes   => [],
		encodings => [],
		templates => [],
	};
	my $qw = sub { "amed_$self->{arch}_$_[0]" };

	-d $include or make_path($include);
	-d $source  or make_path($source);
	my $arch = $self->{arch};
	foreach my $key (qw/group iclass page cclass encoding iform /) {
		my $name = sprintf "%s_%s_%s", 'amed', $arch, $key;
		$self->{enums}->{$key} = my $enum = Generator::Enum->new($name);
		$enum->{optional} = 1;
		$enum->add_top('NONE');
	}
	foreach my $key (qw/mnemonic register/) {
		my $name = sprintf "%s_%s_%s", 'amed', $arch, $key;
		$self->{enums}->{$key} = my $enum = Generator::Enum->new($name);
		$enum->add_top('NONE');
	}
	$self->{argument}           = Generator::Dictionary->new(0);
	$self->{argument}->{static} = 1;
	$self->{aliascond}          = Generator::Dictionary->new(0);
	$self->{aliascond}->add( 'aliascond', 'aliascond', 'false' );

	$self->{tables}           = Generator::Dictionary->new(1);
	$self->{tables}->{static} = 1;
	$self->{reginfo}          = Generator::Dictionary->new(1);

	$self->{aliases} = Generator::Sequence->new( $qw->('aliases_array'), 'uint16_t' );
	$self->{aliases}->add( ['0'] );

	$self->{arguments} = Generator::Sequence->new( $qw->('arguments_array'), 'void*' );
	$self->{widths}    = Generator::Sequence->new( $qw->('widths_array'),    'amed_db_width' );

	$self->{bitdiffs} = Generator::Sequence->new( $qw->('bitdiffs_array'), 'amed_db_bitdiff' );

	$self->{iflags} = Generator::Sequence->new( $qw->('iflags_array'), $arch =~ /aarch(32|64)/ ? 'amed_db_pstate' : 'amed_db_iflags' );
	$self->{iflags}->add( ['{0}'] );

	$self->{bitdiffs}->add(  ['{0}'] );
	$self->{arguments}->add( ['NULL'] );
	bless $self, $class;
	return $self;
}

sub current {
	my ( $self, $what, $value ) = @_;
	defined $value and $self->{current}->{$what} = $value;
	return $self->{current}->{$what};
}

sub process_group {
	my ( $self, $group ) = @_;
	$self->enum( 'group', $group->{id}, $group->{title} );
}

sub process_iclass {
	my ( $self, $iclass ) = @_;
	$self->enum( 'iclass', $iclass->{id}, $iclass->{title} );
}

sub process_class {
	my ( $self, $class ) = @_;
	my $arch = $self->{arch};
	my $page = $class->{tags}->{page};
	my $xid  = $class->{id};
	exists $class->{tags}->{xid} and $xid = $class->{tags}->{xid};
	my $doc = $class->{name};
	$arch =~ /aarch/ and $doc = sprintf "<a href=\"../target/%s/%s.html#%s\">%s</a>", $arch, $page, $xid, $doc;

	$self->enum( 'cclass', $class->{id}, $doc );
}

sub process_page {
	my ( $self, $page ) = @_;
	my $arch     = $self->{arch};
	my $id       = $page->{id};
	my $title    = $page->{title};
	my $brief    = $page->{brief};
	my $doc      = $brief ? sprintf "%s:%s", $title, $brief : $title;
	my $htmlfile = sprintf "target/%s/%s.html", $arch, $id;

	-f "../html/$htmlfile" and $doc = sprintf "<a href=\"../%s\">%s</a>", $htmlfile, $doc;

	$self->enum( 'page', $id, $doc );
}

sub get_iform {
	my ( $self, $encoding, $template ) = @_;
	my $syntax = $template->{syntax};
	my @iform  = ();
	foreach my $argument ( @{ $syntax->{ast} } ) {
		my $iform = $self->get_argument_iform($argument);
		$iform and push @iform, $iform;
	}
	@iform = uniq @iform;
	unshift @iform, uc $syntax->{mnem};
	my $iform = join( '', @iform );
	return $iform;
}

sub process_node {
	my ( $self, $qlf, $node ) = @_;
}

sub quote_value {
	my ( $self, $qlf, $key, $value ) = @_;
	$value =~ /^[\-\+]?(\d+)(\.\d+)?$/ and return $value;
	if ( $key =~ /items|table/ ) {
		return "&" . $value;
	}
	if ( $key eq 'value' ) {
		$qlf =~ s/\.?(\w+)$//;
		$qlf =~ /(\w+)$/ and $key = uc $1;
	}
	return sprintf "MK_%s(%s)", uc $key, $value;
	return $value;
}

sub node_to_c {
	my ( $self, $qlf, $node, $inline ) = @_;
	my @data = ();
	my $type = 'anonymous';
	$qlf =~ /(\w+)$/ and $type = $1;
	$self->process_node( $qlf, $node );
	if ( ref($node) =~ /ARRAY/ ) {
		foreach my $item (@$node) {
			push @data, $self->node_to_c( $qlf, $item );
		}
		push @data, 'TERMINAL';
	}
	elsif ( ref($node) =~ /HASH/ ) {
		if ( exists $node->{encodedin} ) {
			$node->{has_encodedin} = 1;
		}
		exists $node->{type} and $type = $node->{type};
		foreach my $key ( sort keys %$node ) {
			my $value = $node->{$key} // next;
			my $newqlf = sprintf "%s.%s", $qlf, $key;
			my $c = $self->node_to_c( $newqlf, $value );
			$c =~ /^&/ and $c = sprintf "(void*)%s", $c;
			push @data, sprintf ".%s=%s", $key, $c;
		}
	}
	else {
		return $self->quote_value( $qlf, $type, $node );
	}
	my $data = sprintf "{%s}", join( ', ', @data );
	$inline and return $data;
	my $registered = $self->{argument}->add( lc $type, sprintf( "amed_db_%s", lc $type ), $data );
	return sprintf "&%s", $registered->{'link'};
}

sub process_template {
	my ( $self, $encoding, $template ) = @_;
	$self->current( 'template', $template );
	$template->{index} = scalar @{ $self->{templates} };
	my $syntax     = $template->{syntax};
	my $mnem       = $syntax->{mnem};
	my $iform      = $template->{iform} = $self->get_iform( $encoding, $template );
	my $registered = $self->enum( 'iform', $iform, '' );
	$registered->{mnem} = $self->enum( 'mnemonic', $mnem );

	my @sequences = ();
	foreach my $argument ( @{ $syntax->{ast} } ) {
		my $c = $self->node_to_c( $argument->{type}, $argument );
		push @sequences, $c;
	}
	push @sequences, 'NULL';
	$registered                       = $self->{arguments}->add( \@sequences );
	$registered->{comment}            = $syntax->{text};
	$template->{indexes}->{arguments} = $registered->{index};
	push @{ $self->{templates} }, $template;
	if ( $template->{bitdiffs} ) {
		my $bitdiffs = sprintf( "{0x%08x, 0x%08x}", $template->{bitdiffs}->{opcode}, $template->{bitdiffs}->{mask} );
		$registered = $self->{bitdiffs}->add( [$bitdiffs] );
		$template->{indexes}->{bitdiffs} = $registered->{index};
	}
	else {
		$template->{indexes}->{bitdiffs} = 0;
	}
}

sub process_encoding {
	my ( $self, $encoding ) = @_;
	my $arch = $self->{arch};
	my $id   = $encoding->{id};
	$self->current( 'encoding', $encoding );
	$self->{seen}->{encodings}->{$id} = $encoding;
	if ( exists $encoding->{aliascond} ) {
		$self->{indexes}->{aliascond} = $self->register_aliascond($encoding);
		my $alias_of = $encoding->{metadata}->{aliasof};
		push @{ $self->{seen}->{encodings}->{$alias_of}->{aliases} }, $encoding;
	}
	my $index = $encoding->{index} = scalar @{ $self->{encodings} };

	$encoding->{first_template_index} = scalar @{ $self->{templates} };
	foreach my $template ( @{ $encoding->{templates} } ) {
		$self->process_template( $encoding, $template );
	}
	$encoding->{last_template_index} = scalar @{ $self->{templates} };
	push @{ $self->{encodings} }, $encoding;

	my $page = $encoding->{tags}->{page};
	my $doc = $encoding->{name} // $id;
	$arch =~ /aarch/ and $doc = sprintf "<a href=\"../target/%s/%s.html#%s\">%s</a>", $arch, $page, $id, $doc;
	$self->enum_top( 'encoding', $id, $doc );

}

sub process_record {
	my ( $self, $record ) = @_;
	my $rectype = $record->{rectype};

	# FATATL: this does not dispath to top class !
	my %record_processor = (
		GROUP    => \&process_group,
		ICLASS   => \&process_iclass,
		PAGE     => \&process_page,
		CLASS    => \&process_class,
		ENCODING => \&process_encoding,
	);
	if ( $rectype eq 'GROUP' ) {
		$self->process_group($record);
	}
	elsif ( $rectype eq 'ICLASS' ) {
		$self->process_iclass($record);
	}
	elsif ( $rectype eq 'PAGE' ) {
		$self->process_page($record);
	}
	elsif ( $rectype eq 'CLASS' ) {
		$self->process_class($record);
	}
	if ( $rectype eq 'ENCODING' ) {
		$self->process_encoding($record);
	}
	else {
		# warn.
	}
}

sub enum {
	my ( $self, $enum, $name, $doc ) = @_;
	$self->{enums}->{$enum}->add( $name, $doc );
}

sub enum_top {
	my ( $self, $enum, $name, $doc ) = @_;
	$self->{enums}->{$enum}->add_top( $name, $doc );
}

sub process_widths {
	my ( $self, $widths ) = @_;
	$widths or return;
	foreach my $item (@$widths) {
		my $name = delete $item->{name};
		my $c = $self->node_to_c( 'width', $item, 1 );
		$c .= "/* $name */";
		my $registered = $self->{widths}->add( [$c] );

		$self->{seen}->{widths}->{$name} = $registered->{iindex};
	}
}

sub process_tables {
	my ( $self, $tables ) = @_;
	$tables or return;
	foreach my $table (@$tables) {
		my $name = $table->{id};
		my $type = $table->{type} // 'tv';
		$type = sprintf "amed_db_%s", $type;
		my @items = ();
		foreach my $item ( @{ $table->{items} } ) {
			my $c = $self->node_to_c( 'tv', $item, 1 );
			push @items, $c;
		}
		my $count = scalar @items;
		my $c = sprintf "\n{%s}\n", join( ",\n", @items );

		if ( $table->{array} ) {
			my $registered = $self->{tables}->add( sprintf( "%s[%d]", $name, $count ), $type, $c );
		}
		else {
			my $registered = $self->{tables}->add( sprintf( "%s_items[%d]", $name, $count ), $type, $c );
			$registered = $self->{tables}->add( $name, 'amed_db_table', sprintf( "{ .count=%d, .items=(void*)&%s_items[0] }", $count, $name ) );
		}
	}
}

sub reginfo_to_c {
	my ( $self, $info ) = @_;
	return $self->node_to_c( 'reginfo', $info, 1 );
}

sub process_registers {
	my ( $self, $registers ) = @_;
	$registers or return;
	my @data = ();
	foreach my $item (@$registers) {
		$self->enum( 'register', $item->{reg}, '' );
		push @data, sprintf "%s", $self->reginfo_to_c($item);
	}
	my $data = join( ", \n", @data );
	$self->{reginfo}->add( sprintf( "amed_%s_reginfo_array[]", $self->{arch} ), 'amed_db_reginfo', "{\n$data}" );
}

sub process_static_enums {
	my ( $self, $enums ) = @_;
	$enums or return;
	foreach my $enum (@$enums) {
		my $id = sprintf "amed_%s_%s", $self->{arch}, lc $enum->{id};
		$self->{enums}->{$id} = my $obj = Generator::Enum->new($id);
		$obj->{optional} = $enum->{optional};
		foreach my $item ( @{ $enum->{items} } ) {
			$obj->add_top( $item->{name} );
		}
	}
}

sub load_database {
	my ($self) = @_;
	my $db = $self->{db};
	$self->process_widths( $db->{widths} );
	$self->process_registers( $db->{registers} );
	$self->process_tables( $db->{tables} );
	$self->process_static_enums( $db->{enums} );
	foreach my $record ( @{ $db->{records} } ) {
		$self->process_record($record);
	}
}

sub generate_files {
	my ($self) = @_;
	foreach my $key (qw/aliases reginfo widths tables argument arguments encodedins bitdiffs iflags/) {
		my $object = $self->{$key} // next;
		$object->is_empty() and next;
		my $file = sprintf "%s/%s.inc", $self->{source}, $key;
		open my $fh, '>', $file;
		print_autogen_notice($fh);
		$object->generate($fh);
		close $fh;
	}
	my %strings = ();
	my $file = sprintf "%s/enums.inc", $self->{include};
	open my $fh, '>', $file;
	printf $fh '/*! @file */' . "\n";
	printf $fh '/*! @brief enums */' . "\n";

	foreach my $key ( keys %{ $self->{enums} } ) {
		my $object = $self->{enums}->{$key};
		$object->generate($fh);
		if ( $object->{optional} ) {
			push @{ $strings{'optional-strings'} }, $object;
		}
		else {
			push @{ $strings{'strings'} }, $object;
		}
	}
	close $fh;

	foreach my $key ( keys %strings ) {
		my $file = sprintf "%s/%s.inc", $self->{source}, $key;
		open my $fh, '>', $file;
		print_autogen_notice($fh);
		foreach my $object ( @{ $strings{$key} } ) {
			$object->generate_strings($fh);
		}
		close $fh;
	}
}

sub sets_to_c {
	my ( $self, $macro, $sets ) = @_;
	my @data = ();
	push @data, sprintf( "%s(%s)", $macro, $_ ) foreach ( sort @$sets );
	my $data = join( '|', @data );
	return $data;
}

sub template_to_c {
	my ( $self, $template ) = @_;
	my @data    = ();
	my $indexes = $template->{indexes};
	push @data, sprintf ".iform=MK_IFORM(%s)", $template->{iform};
	push @data, sprintf ".bitdiffs=%d",        $indexes->{bitdiffs};
	push @data, sprintf ".arguments=%d",       $indexes->{arguments};
	my $metadata   = $template->{metadata};
	my $iflags     = delete $metadata->{iflags};
	my $extensions = delete $metadata->{extensions};

	my %info = ( %{ $template->{metadata} } );
	$iflags and push @data, sprintf ".iflags=%d", $self->iflags_to_c($iflags);
	$extensions and push @data, sprintf ".extensions=%s", $self->sets_to_c( "MK_EXTENSION", $extensions );
	foreach my $key ( sort keys %info ) {
		my $value = $info{$key};
		if ( $value =~ /^[\-\+]?(\d+)(\.\d+)?$/ ) {
			push @data, sprintf ".%s=%s", $key, $value;
		}
		else {
			my $macro = sprintf "MK_%s", uc $key;
			push @data, sprintf ".%s=%s(%s)", $key, $macro, $value;
		}
	}
	my $data = sprintf "{%s}", join( ', ', @data );
	return $data;
}

sub iflags_to_c {
	my ( $self, $iflags ) = @_;
	my @data          = ();
	my $get_flag_info = sub {
		my ($value) = @_;
		my %map = (
			U   => { unchanged              => 1, },
			Z   => { modified               => 1, cleared => 1 },
			S   => { modified               => 1, set => 1 },
			T   => { tested                 => 1 },
			R   => { tested                 => 1 },
			M   => { modified               => 1 },
			W   => { modified               => 1 },
			X   => { tested                 => 1, modified => 1 },
			RW  => { tested                 => 1, modified => 1 },
			RCW => { tested                 => 1, conditionally_modified => 1 },
			CW  => { conditionally_modified => 1 },
			CZ  => { conditionally_modified => 1, cleared => 1 },
			CS  => { conditionally_modified => 1, set => 1 },
			CR => { conditionally_tested => 1 },
		);
		my @data          = ();
		my $conditionally = 0;
		my $hash          = $map{$value};
		$hash or die $value;
		foreach my $key ( sort keys %$hash ) {
			my $value = $hash->{$key};
			push @data, sprintf ".%s=%d", $key, $value;
		}
		my $data = join( ', ', @data );
		return sprintf "{%s}", $data;
	};
	foreach my $key ( sort keys %$iflags ) {
		my $value = $iflags->{$key};

		push @data, sprintf ".%s=%s", lc $key, $get_flag_info->($value);

	}
	my $data = sprintf "{%s}", join( ', ', @data );
	my $registered = $self->{iflags}->add( [$data] );
	return $registered->{index};
}

sub inline_array_to_c {
	my ( $self, $name, $array, $max ) = @_;
	my @data = ();
	for my $i ( 0 .. $max - 1 ) {
		my $item = $array->[$i] // last;
		push @data, sprintf "%s(%s)", uc "MK_$name", $item;
	}
	my $data = join( ', ', @data );

	return sprintf "{%s}", $data;
	return $data;
}

sub register_encoding_aliases {
	my ( $self, $encoding ) = @_;
	$encoding->{aliases} or return;

	my @indexes = ();
	my @comment = ();
	foreach my $alias ( @{ $encoding->{aliases} } ) {
		push @indexes, $alias->{index};
		push @comment, $alias->{id};
	}
	$encoding->{metadata}->{has_alias} = 1;
	push @indexes, 0;
	my $indexes = join( ', ', @indexes );
	my $comment = sprintf "%s: %s", $encoding->{id}, join( ' ', @comment );
	my $registered = $self->{aliases}->add( \@indexes );
	$registered->{comment} = $comment;
	$encoding->{indexes}->{aliases} = $registered->{index};
}

sub encoding_to_c {
	my ( $self, $encoding ) = @_;
	$self->register_encoding_aliases($encoding);
	my @data = ();
	my %info = ( %{ $encoding->{tags} }, %{ $encoding->{metadata} } );
	$encoding->{pstate} and $encoding->{iflags} = $encoding->{pstate};
	$encoding->{iflags} and $info{iflags} = $self->iflags_to_c( $encoding->{iflags} );
	my $exceptions = $encoding->{exceptions};
	my $extensions = $encoding->{extensions};
	my $categories = $encoding->{categories};

	$categories and push @data, sprintf ".categories=%s", $self->inline_array_to_c( 'category',  $categories, 4 );
	$exceptions and push @data, sprintf ".exceptions=%s", $self->inline_array_to_c( 'exception', $exceptions, 4 );
	$extensions and push @data, sprintf ".extensions=%s", $self->inline_array_to_c( 'extension', $extensions, 4 );

	push @data, sprintf ".first_template=%d", $encoding->{first_template_index};
	push @data, sprintf ".template_count=%d", $encoding->{last_template_index} - $encoding->{first_template_index};
	exists $encoding->{indexes}->{aliascond} and push @data, sprintf ".aliascond=%d", $encoding->{indexes}->{aliascond};
	exists $encoding->{indexes}->{aliases}   and push @data, sprintf ".aliases=%d",   $encoding->{indexes}->{aliases};
	foreach my $key ( sort keys %info ) {
		my $value = $info{$key};
		if ( $value =~ /^[\-\+]?(\d+)(\.\d+)?$/ ) {
			push @data, sprintf ".%s=%s", $key, $value;
		}
		else {
			my $macro = sprintf "MK_%s", uc $key;
			push @data, sprintf ".%s=%s(%s)", $key, $macro, $value;
		}
	}
	if ( $self->{arch} =~ /aarch32|aarch64/ ) {
		push @data, sprintf ".opcode=0x%08x", $encoding->{diagram}->{opcode};
		push @data, sprintf ".mask=0x%08x",   $encoding->{diagram}->{mask};

	}
	my $data = sprintf "{%s}", join( ', ', @data );
	return $data;
}

sub register_aliascond {
	my ( $self, $encoding ) = @_;
	my %fields = ();
	$fields{ $_->{name} } = $_ foreach ( @{ $encoding->{diagram}->{fields} } );
	my $aliascond   = $encoding->{aliascond};
	my $parser      = CExpression::Parser->new();
	my $transformer = CExpression::Transformer->new();
	my $printer     = CExpression::Printer->new();
	$transformer->{fields} = \%fields;
	$parser->YYInput($aliascond);
	my $ast = $parser->Run();
	$ast = $transformer->visit($ast);
	my $c = $printer->visit($ast);
	my $registered = $self->{aliascond}->add( 'aliascond', 'aliascond', $c );
	$registered->{comment} = $aliascond;
	$encoding->{indexes}->{aliascond} = $registered->{index};
	return $registered->{index};
}

sub generate_templates {
	my ($self) = @_;
	my $file = sprintf "%s/%s.inc", $self->{source}, 'templates';
	my $arch = $self->{arch};
	open my $fh, '>', $file;
	print_autogen_notice($fh);
	printf $fh "const amed_db_template amed_%s_templates_array[] = \n", $arch;
	printf $fh "{\n";
	foreach my $template ( @{ $self->{templates} } ) {
		my $text = $self->template_to_c($template);
		printf $fh "  %s,\n", $text;
	}
	printf $fh "};\n";
	close $fh;
}

sub generate_encodings {
	my ($self) = @_;
	my $arch = $self->{arch};
	my $file = sprintf "%s/%s.inc", $self->{source}, 'encodings';
	open my $fh, '>', $file;
	print_autogen_notice($fh);
	printf $fh "const amed_db_encoding amed_%s_encodings_array[] = \n", $arch;
	printf $fh "{\n";
	foreach my $encoding ( @{ $self->{encodings} } ) {
		my $text = $self->encoding_to_c($encoding);
		printf $fh "  %s,\n", $text;
	}
	printf $fh "};\n";
	close $fh;

}

sub generate_iform2mnem_map {
	my ($self) = @_;
	my $file = sprintf "%s/iform2mnem.inc", $self->{source};
	open my $fh, '>', $file;
	print_autogen_notice($fh);
	my $object = $self->{enums}->{'iform'};
	my $arch   = $self->{arch};

	printf $fh "const unsigned short int amed_%s_iform2mnem_array[] = \n", $arch;
	printf $fh "{\n";
	foreach my $item ( @{ $object->{items} } ) {
		my $mnem = $item->{mnem};
		printf $fh "  /* %s */ %s,\n", $item->{name}, $mnem->{name} // 0;
	}
	printf $fh "};\n\n";
	close $fh;
}

sub generate_aliasconds {
	my ($self) = @_;
	my $arch = $self->{arch};
	my $file = sprintf "%s\\aliasconds.inc", $self->{source};

	open my $fh, '>', $file or die $!;
	print_autogen_notice($fh);
	printf $fh "static bool is_alias_condition_ok(%s_internal *pinternal, uint32_t index){\n", lc $arch;
	my $level = 2;
	indented_print( $fh, $level, sprintf "const uint32_t opcode = pinternal->opcode;\n" );
	indented_print( $fh, $level, sprintf "switch(index)\n" );
	indented_print( $fh, $level, sprintf "{\n" );

	foreach my $item ( @{ $self->{aliascond}->{items} } ) {
		indented_print( $fh, $level, sprintf "case %d:\n", $item->{index} );
		$level += 2;
		$item->{comment} and indented_print( $fh, $level, sprintf "/* %s */\n", $item->{comment} );
		indented_print( $fh, $level, sprintf "return %s;\n", $item->{data} );
		$level -= 2;
	}
	indented_print( $fh, $level, sprintf "}\n" );
	indented_print( $fh, $level, sprintf "return false;\n" );

	printf $fh "};\n\n";
	close $fh;
}

sub generate {
	my ($self) = @_;
	$self->load_database();
	$self->generate_encodings();
	$self->generate_templates();
	$self->generate_files();
	$self->generate_disasm();
	$self->generate_iform2mnem_map();
	$self->generate_aliasconds();
}

1;
