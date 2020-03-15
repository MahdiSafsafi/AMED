# expression visitor
#
# https://github.com/MahdiSafsafi/AMED
#
package CExpression::Visitor;
use strict;
use warnings;
use feature qw/say/;
use Data::Dump qw/pp/;

sub new {
	my ($class) = @_;
	my $self = {};
	bless $self, $class;
	return $self;
}

sub visit_arithmetic_expression {
	my ( $self, $expression ) = @_;
	my $op = $expression->{op};
	$expression->{left}  = $self->visit( $expression->{left} );
	$expression->{right} = $self->visit( $expression->{right} );
	return $expression;
}

sub visit_binary_expression {
	my ( $self, $expression ) = @_;
	my $op = $expression->{op};
	$expression->{left}  = $self->visit( $expression->{left} );
	$expression->{right} = $self->visit( $expression->{right} );
	return $expression;
}

sub visit_shift_expression {
	my ( $self, $expression ) = @_;
	my $op = $expression->{op};
	$expression->{left}  = $self->visit( $expression->{left} );
	$expression->{right} = $self->visit( $expression->{right} );
	return $expression;
}

sub visit_logical_expression {
	my ( $self, $expression ) = @_;
	my $op = $expression->{op};
	$expression->{left}  = $self->visit( $expression->{left} );
	$expression->{right} = $self->visit( $expression->{right} );
	return $expression;
}

sub visit_equality_expression {
	my ( $self, $expression ) = @_;
	my $op = $expression->{op};
	$expression->{left}  = $self->visit( $expression->{left} );
	$expression->{right} = $self->visit( $expression->{right} );
	return $expression;
}

sub visit_relational_expression {
	my ( $self, $expression ) = @_;
	my $op = $expression->{op};
	$expression->{left}  = $self->visit( $expression->{left} );
	$expression->{right} = $self->visit( $expression->{right} );
	return $expression;
}

sub visit_expression {
	my ( $self, $expression ) = @_;
	my $op = $expression->{op};

	$op eq '||' and return $self->visit_logical_expression($expression);
	$op eq '&&' and return $self->visit_logical_expression($expression);

	$op eq '<<' and return $self->visit_shift_expression($expression);
	$op eq '>>' and return $self->visit_shift_expression($expression);

	$op eq '==' and return $self->visit_equality_expression($expression);
	$op eq '!=' and return $self->visit_equality_expression($expression);

	$op eq '>=' and return $self->visit_relational_expression($expression);
	$op eq '<=' and return $self->visit_relational_expression($expression);
	$op eq '>'  and return $self->visit_relational_expression($expression);
	$op eq '<'  and return $self->visit_relational_expression($expression);

	$op eq '|' and return $self->visit_binary_expression($expression);
	$op eq '&' and return $self->visit_binary_expression($expression);
	$op eq '^' and return $self->visit_binary_expression($expression);

	$op eq '+' and return $self->visit_arithmetic_expression($expression);
	$op eq '-' and return $self->visit_arithmetic_expression($expression);
	$op eq '*' and return $self->visit_arithmetic_expression($expression);
	$op eq '/' and return $self->visit_arithmetic_expression($expression);

	warn sprintf "unhandled op '%s'", $op;
	$expression->{left}  = $self->visit( $expression->{left} );
	$expression->{right} = $self->visit( $expression->{right} );
	return $expression;
}

sub visit_unary {
	my ( $self, $unary ) = @_;
	$unary->{expression} = $self->visit( $unary->{expression} );
	return $unary;
}

sub visit_part {
	my ( $self, $part ) = @_;
	$part->{expression} = $self->visit( $part->{expression} );
	return $part;
}

sub visit_slice {
	my ( $self, $slice ) = @_;
	foreach my $i ( 0 .. scalar @{ $slice->{arguments} } - 1 ) {
		$slice->{arguments}->[$i] = $self->visit( $slice->{arguments}->[$i] );
	}
	return $slice;
}

sub visit_call {
	my ( $self, $call ) = @_;
	for my $i ( 0 .. scalar @{ $call->{arguments} } - 1 ) {
		$call->{arguments}->[$i] = $self->visit( $call->{arguments}->[$i] );
	}
	return $call;
}

sub visit_bool {
	my ( $self, $bool ) = @_;
	return $bool;
}

sub visit_dec {
	my ( $self, $dec ) = @_;
	return $dec;
}

sub visit_hex {
	my ( $self, $hex ) = @_;
	return $hex;
}

sub visit_bin {
	my ( $self, $bin ) = @_;
	return $bin;
}

sub visit_float {
	my ( $self, $float ) = @_;
	return $float;
}

sub visit_id {
	my ( $self, $id ) = @_;
	return $id;
}

sub visit_reserved {
	my ( $self, $id ) = @_;
	return $id;
}

sub visit_field {
	my ( $self, $field ) = @_;
	return $field;
}

sub visit_sqstr {
	my ( $self, $sqstr ) = @_;
	return $sqstr;
}

sub visit {
	my ( $self, $what ) = @_;
	my $type = $what->{type};
	
	if ( $type eq 'expression' ) {
		return $self->visit_expression($what);
	}
	elsif ( $type eq 'unary' ) {
		return $self->visit_unary($what);
	}
	elsif ( $type eq 'part' ) {
		return $self->visit_part($what);
	}
	elsif ( $type eq 'slice' ) {
		return $self->visit_slice($what);
	}
	elsif ( $type eq 'call' ) {
		return $self->visit_call($what);
	}
	elsif ( $type eq 'dec' ) {
		return $self->visit_dec($what);
	}
	elsif ( $type eq 'bin' ) {
		return $self->visit_bin($what);
	}
	elsif ( $type eq 'hex' ) {
		return $self->visit_hex($what);
	}
	elsif ( $type eq 'float' ) {
		return $self->visit_float($what);
	}
	elsif ( $type eq 'id' ) {
		return $self->visit_id($what);
	}
	elsif ( $type eq 'sqstr' ) {
		return $self->visit_sqstr($what);
	}
	elsif ( $type eq 'field' ) {
		return $self->visit_field($what);
	}
	elsif ( $type eq 'bool' ) {
		return $self->visit_bool($what);
	}
	else {
		die sprintf "unhandled type '%s'", $type;
	}
}
1;
