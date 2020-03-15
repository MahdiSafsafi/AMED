# arm expression to c-expression.
#
# https://github.com/MahdiSafsafi/AMED
#
package CExpression::Transformer;
use strict;
use warnings;
use feature qw/say/;
use Data::Dump qw/pp/;
use CExpression::Visitor;
use CExpression::Utils qw/make_id make_mask make_dec make_call make_expression make_bool make_reserved/;
use Generator::Binary::Utils qw/get_bit_count get_bin_value get_mask_from_bin get_mask_from_range/;

our @ISA = qw/CExpression::Visitor/;

sub visit_id {
	my ( $self, $id ) = @_;
	my $name = $id->{value};
	if ( !$id->{reserved} && defined $self->{fields} && exists $self->{fields}->{$name} ) {
		my $field = $self->{fields}->{$name};
		my $value = $field->{value};
		my $size  = $field->{size};
		my $pos   = $field->{'pos'};
		$value =~ /^[01]+$/ and return make_dec( oct "0b" . $value, $size );
		my $mask = make_mask( get_mask_from_range( 0, $size-1 ) << $pos );
		my $and = make_expression( make_reserved( 'opcode', 32 ), '&', $mask );
		my $shr = make_expression( $and, '>>', make_dec($pos), $size );
		return $shr;
	}
	$id->{size} or $id->{size} = 32;
	return $id;
}

sub visit_hex {
	my ( $self, $hex ) = @_;
	return make_dec( hex( $hex->{value} ) );
}

sub visit_bin {
	my ( $self, $bin ) = @_;
	my $value = $bin->{value};
	$value =~ s/^0b//;
	$value =~ /^[01]+$/ and return make_dec( oct "0b" . $value, length $value );
	return $bin;
}


sub visit_logical_expression {
	my ( $self, $expression ) = @_;
	my $op    = $expression->{op};
	my $left  = $expression->{left} = $self->visit( $expression->{left} );
	my $right = $expression->{right} = $self->visit( $expression->{right} );
	if ( $left->{type} eq 'bool' && $right->{type} eq 'bool' ) {
		$op eq '||' and return make_bool( $left->{value} || $right->{value} );
		$op eq '&&' and return make_bool( $left->{value} && $right->{value} );
	}
	return $expression;
}

sub visit_equality_expression {
	my ( $self, $expression ) = @_;
	my $op    = $expression->{op};
	my $left  = $expression->{left} = $self->visit( $expression->{left} );
	my $right = $expression->{right} = $self->visit( $expression->{right} );
	if ( $left->{type} eq 'dec' && $right->{type} eq 'dec' ) {
		$op eq '==' and return make_bool( $left->{value} == $right->{value} );
		$op eq '!=' and return make_bool( $left->{value} != $right->{value} );
	}
	elsif ( $left->{type} eq 'bool' && $right->{type} eq 'bool' ) {
		$op eq '==' and return make_bool( $left->{value} == $right->{value} );
		$op eq '!=' and return make_bool( $left->{value} != $right->{value} );
	}
	elsif ( $right->{type} eq 'bin' ) {
		my $mask          = make_mask( get_mask_from_bin( $right->{value} ) );
		my $newLeft       = make_expression( $left, '&', $mask );
		my $newExpression = make_expression( $newLeft, $op, make_mask( get_bin_value( $right->{value} ) ) );
		return $newExpression;
	}
	return $expression;
}

sub visit_binary_expression {
	my ( $self, $expression ) = @_;
	my $op    = $expression->{op};
	my $left  = $expression->{left} = $self->visit( $expression->{left} );
	my $right = $expression->{right} = $self->visit( $expression->{right} );
	if ( $left->{type} eq 'dec' && $right->{type} eq 'dec' ) {
		$op eq '&' and return make_dec( $left->{value} & $right->{value} );
		$op eq '|' and return make_dec( $left->{value} | $right->{value} );
		$op eq '^' and return make_dec( $left->{value} ^ $right->{value} );
	}
	return $expression;
}

sub visit_shift_expression {
	my ( $self, $expression ) = @_;
	my $op    = $expression->{op};
	my $left  = $expression->{left} = $self->visit( $expression->{left} );
	my $right = $expression->{right} = $self->visit( $expression->{right} );
	if ( $left->{type} eq 'dec' && $right->{type} eq 'dec' ) {
		$op eq '>>' and return make_dec( $left->{value} >> $right->{value} );
		$op eq '<<' and return make_dec( $left->{value} << $right->{value} );
	}
	return $expression;
}

sub visit_isones {
	my ( $self, $call ) = @_;
	my $arg  = $self->visit( $call->{arguments}->[0] );
	my $size = $arg->{size};
	my $mask = get_mask_from_range( 0, $size - 1 );
	return make_expression( $arg, '==', make_mask($mask), $size );
}

sub visit_call {
	my ( $self, $call ) = @_;
	my $name = $call->{name};
	if($name eq 'part'){
		return $self->optimize_part($call);
	}
	elsif ( $name eq 'IsOnes' ) {
		return $self->visit_isones($call);
	}
	for my $i ( 0 .. scalar @{ $call->{arguments} } - 1 ) {
		$call->{arguments}->[$i] = $self->visit( $call->{arguments}->[$i] );
	}
	return $call;
}

sub visit_part {
	my ( $self, $part ) = @_;
	my ( $from, $to ) = ( $part->{from}, $part->{to} );
	my $primary = $part->{expression};
	my $size = $part->{expression}->{size};
	if($from->{type} eq 'dec' && $to->{type} eq 'dec'){
		$size = ( $to->{value} - $from->{value} ) + 1;
		my $mask  = get_mask_from_range( 0, $size  );
		my $and = make_expression($primary ,'&', make_mask($mask));
		my $shr = make_expression($primary, '>>', $from);
		return $self->visit($shr);
	}
	
	my $call = make_call( 'part', [ $part->{expression}, $from, $to ], $size );
	return $self->visit($call);
}

sub visit_slice {
	my ( $self, $slice ) = @_;
	my $count = scalar @{ $slice->{arguments} };
	my $size  = 0;
	my $i     = $count;
	while ( $i-- ) {
		my $argument = $self->visit( $slice->{arguments}->[$i] );
		$slice->{arguments}->[$i] = make_expression( $argument, '<<', make_dec($size) );
		$size += $argument->{size};
	}
	my $expression = {};
	my $next       = $expression;
	my $previous   = $expression;
	for my $i ( 0 .. scalar @{ $slice->{arguments} } - 1 ) {
		my $argument = $slice->{arguments}->[$i];
		if ( $i == scalar @{ $slice->{arguments} } - 1 ) {
			$previous->{right} = $argument;
			last;
		}
		$next->{type} = 'expression';
		$next->{left} = $argument;
		$next->{op}   = '|';
		$next->{size} = 32;
		$previous     = $next;
		$next = $next->{right} = {};
	}
	$expression->{size} = $size;
	return $self->visit($expression);
}
1;
