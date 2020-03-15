package Generator::Enum;
use strict;
use warnings;
use Data::Dump qw/pp/;
use feature qw/say/;
use List::Util qw/min max uniq/;

sub new {
	my ( $class, $name ) = @_;
	my $self = {
		name  => $name,
		seen  => {},
		items => [],
	};
	bless $self, $class;
	$self;
}

sub is_empty{ 
	my($self)=@_;
	scalar @{$self->{items}} == 0;
}

sub add {
	my ( $self, $item, $doc ) = @_;
	exists $self->{seen}->{$item} and return $self->{seen}->{$item};
	my $name = sprintf "%s_%s", uc($self->{name}), $item;
	push @{ $self->{items} },
	  my $new = {
		name => $name,
		text => $item,
		doc  => $doc,
	  };
	$self->{seen}->{$item} = $new;
	return $new;
}

sub add_top {
	my ( $self, $item, $doc ) = @_;
	my $registered = $self->add( $item, $doc );
	$registered->{top} = 1;
	$registered;
}

sub add_bottom {
	my ( $self, $item, $doc ) = @_;
	my $registered = $self->add( $item, $doc );
	$registered->{bottom} = 1;
	$registered;
}

sub process {
	my ($self) = @_;
	my ( @top, @bottom, @middle ) = ( (), (), () );
	foreach my $item ( @{ $self->{items} } ) {
		if ( $item->{top} ) {
			push @top, $item;
		}
		elsif ( $item->{bottom} ) {
			push @bottom, $item;
		}
		else {
			push @middle, $item;
		}
	}
	if ( $self->{sort} ) {
		@top    = sort @top;
		@bottom = sort @bottom;
		@middle = sort @middle;
	}
	my @items = ();
	@top    and push @items, @top;
	@bottom and push @items, @bottom;
	@middle and push @items, @middle;

	my ($max_text_len) = (0);
	for my $i ( 0 .. $#items ) {
		my $item = $items[$i];
		$max_text_len = max( $max_text_len, length( $item->{text} ) );
		$item->{value} = $i;
	}

	$self->{max_text_length} = $max_text_len;
	$self->{items}           = \@items;
}

sub generate {
	my ( $self, $fh ) = @_;
	$self->process();
	my $name = $self->{name};
	printf $fh "#define %s_MAX_TEXT_LENGTH (%d + 1)\n\n", uc $name, $self->{max_text_length};
	
	printf $fh "typedef enum _%s\n", $name;
	printf $fh "{\n";
	foreach my $item ( @{ $self->{items} } ) {
		my ( $name, $doc ) = ( $item->{name}, $item->{doc} );
		printf $fh "  %s,", $name;
		$doc and printf $fh " //!< %s", $doc;
		printf $fh "\n";
	}
	printf $fh "} %s;\n\n", $name;
}

sub generate_strings {
	my ( $self, $fh ) = @_;
	my $name = $self->{name};
	my $first = $self->{items}->[0];
	my $last = $self->{items}->[-1];
	my $map_name = sprintf "%s_map", $name;
	
	printf $fh "static const char* %s[] =\n", $map_name;
	printf $fh "{\n";
	foreach my $item ( @{ $self->{items} } ) {
		my $name = $item->{name};
		my $txt  = $item->{text};
		printf $fh "  /* %s */ \"%s\",", $name, $txt;
		printf $fh "\n";
	}
	printf $fh "};\n\n";

	printf $fh "const char* %s_to_string(uint32_t value)\n", $name;
	printf $fh "{\n";
	printf $fh "  assert(value >= %s && value <= %s);\n", $first->{name}, $last->{name};
	printf $fh "  return %s[value];\n",$map_name;
	printf $fh "}\n\n";

}
1;
