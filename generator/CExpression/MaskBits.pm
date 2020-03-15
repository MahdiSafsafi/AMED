package CExpression::MaskBits;
use strict;
use warnings;
use feature qw/say/;
use Data::Dump qw/pp/;
use CExpression::Visitor;
use CExpression::Utils qw/make_id make_mask make_dec make_call make_expression make_bool make_reserved/;
use opcodesDB::Utils qw/get_bit_count get_bin_value get_mask_from_bin get_mask_from_range/;

our @ISA = qw/CExpression::Visitor/;

sub test_bits {
	my ( $self, $left, $right ) = @_;
	my $name = $left->{value};
	if ( defined $self->{fields} && exists $self->{fields}->{$name} ) {
		my $field = $self->{fields}->{$name};
		defined $self->{test} or $self->{test} = 0;
		my $pos  = $field->{pos};
		my $size = $field->{size};
		my $mask = 0;
		if ( $right->{type} eq 'bin' ) {
			my $value = $right->{value};
			$mask = get_mask_from_bin($value) << $pos;
		}
		else {
			$mask = get_mask_from_range( 0, $size ) << $pos;
		}
		$self->{test} |= $mask;
	}
}

sub visit_equality_expression {
	my ( $self, $expression ) = @_;
	my $op    = $expression->{op};
	my $left  = $expression->{left} = $self->visit( $expression->{left} );
	my $right = $expression->{right} = $self->visit( $expression->{right} );
	if ( $left->{type} eq 'id' ) {
		$self->test_bits( $left, $right );
	}

	return $expression;
}
1;
