# c-expression printer
#
# https://github.com/MahdiSafsafi/AMED
#
package CExpression::Printer;
use strict;
use warnings;
use CExpression::Visitor;
use feature qw/say/;
our @ISA = qw/CExpression::Visitor/;

sub new {
	my ($class) = @_;
	my $self = $class->SUPER::new();
	return $self;
}

sub visit_expression {
	my ( $self, $expression ) = @_;
	my $left  = $self->visit( $expression->{left} );
	my $op    = $expression->{op};
	my $right = $self->visit( $expression->{right} );
	return sprintf "(%s %s %s)", $left, $op, $right;
}

sub visit_unary {
	my ( $self, $expression ) = @_;
	return sprintf "%s%s", $expression->{op}, $self->visit( $expression->{expression} );
}

sub visit_part {
	my ( $self, $expression ) = @_;
	return $self->visit( $expression->{expression} );
}

sub visit_slice {
	my ( $self, $expression ) = @_;
	my @arguments = ();
	for my $i ( 0 .. scalar @{ $expression->{arguments} } - 1 ) {
		$expression->{arguments}->[$i] = $self->visit( $expression->{arguments}->[$i] );
	}
	my $arguments = join( ', ', @arguments );
	return sprintf "%s(%s)", $expression->{name}, $arguments;
}

sub visit_call {
	my ( $self, $expression ) = @_;
	my @arguments = ();
	for my $i ( 0 .. scalar @{ $expression->{arguments} } - 1 ) {
		push @arguments, $self->visit( $expression->{arguments}->[$i] );
	}
	my $arguments = join( ', ', @arguments );
	return sprintf "%s(%s)", $expression->{name}, $arguments;
}

sub visit_bool {
	my ( $self, $expression ) = @_;
	return $expression->{value} ? 'true' : 'false';
}

sub visit_dec {
	my ( $self, $expression ) = @_;
	$expression->{mask} and return sprintf "0x%08x", $expression->{value};
	return $expression->{value};
}

sub visit_hex {
	my ( $self, $expression ) = @_;
	return $expression->{value};
}

sub visit_bin {
	my ( $self, $expression ) = @_;
	return $expression->{value};
}

sub visit_float {
	my ( $self, $expression ) = @_;
	return $expression->{value};
}

sub visit_id {
	my ( $self, $expression ) = @_;
	return $expression->{value};
}

sub visit_sqstr {
	my ( $self, $expression ) = @_;
	return $expression->{value};
}

sub visit_field {
	my ( $self, $expression ) = @_;
	return $expression->{value};
}

sub print {
	my ( $self, $expression ) = @_;
	return $self->visit($expression);
}
1;
