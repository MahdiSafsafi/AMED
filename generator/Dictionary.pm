package Generator::Dictionary;
use strict;
use warnings;

sub new {
	my ( $class, $uniq ) = @_;
	my $self = {
		is_uniq => $uniq,
		seen    => {},
		names   => {},
		items   => [],
	};
	bless $self, $class;
	return $self;
}

sub is_empty{ 
	my($self)=@_;
	scalar @{$self->{items}} == 0;
}

sub add {
	my ( $self, $name, $type, $data ) = @_;
	my $seen = $self->{seen};
	if($self->{is_uniq}){
		
	}else{
		exists $seen->{$data} and return $seen->{$data};
	}
	$self->{names}->{$name} //= 0;
	my $index = scalar @{ $self->{items} };
	my $link = $self->{is_uniq} ? $name : sprintf "%s%d", $name, $self->{names}->{$name}++;
	push @{ $self->{items} },
	  my $new = {
		data   => $data,
		index  => $index,
		name   => $name,
		type   => $type,
		'link' => $link,
	  };
	$seen->{$data} = $new;
	return $new;
}

sub generate {
	my ( $self, $fh ) = @_;
	foreach my $item ( @{ $self->{items} } ) {
		my $comment = $item->{comment};
		$self->{static} and printf $fh "static ";
		printf $fh "const %s %s = %s;", $item->{type}, $item->{link}, $item->{data};
		$comment and printf $fh " // %s", $comment;
		printf $fh "\n";
	}
}
1;
