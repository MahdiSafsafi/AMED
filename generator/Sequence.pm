package Generator::Sequence;
use strict;
use warnings;

sub new {
	my ( $class, $name,$type ) = @_;
	my $self = {
		type  => $type,
		name  => $name,
		seen  => {},
		items => [],
		index => 0,
	};
	bless $self, $class;
	return $self;
}

sub is_empty{ 
	my($self)=@_;
	scalar @{$self->{items}} == 0;
}

sub add {
	my ( $self, $array ) = @_;
	my $count = scalar @$array;
	my $txt   = join( ', ', @$array );
	my $seen  = $self->{seen};
	my $index = $self->{index};
	exists $seen->{$txt} and return $seen->{$txt};
	push @{ $self->{items} },
	  my $new = {
		data  => $txt,
		index => $index,
		iindex=> scalar @{$self->{items}},
	  };
	$seen->{$txt} = $new;
	$index += $count;
	$self->{index} = $index;
	return $new;
}

sub generate {
	my ( $self, $fh ) = @_;
	printf $fh "const %s %s[] = \n", $self->{type}, $self->{name};
	printf $fh "{\n";
	for my $i ( 0 .. scalar @{ $self->{items} } - 1 ) {
		my $item    = $self->{items}->[$i];
		my $index   = $item->{index};
		my $data    = $item->{data};
		my $comment = $item->{comment};
		printf $fh "  /* %-4d */ %s,", $index, $data;
		$comment and printf $fh " // %s", $comment;
		printf $fh "\n";
	}
	printf $fh "};\n\n";
}

1;
