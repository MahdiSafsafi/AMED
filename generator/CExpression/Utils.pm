package CExpression::Utils;
use strict;
use warnings;
use Exporter qw/import/;
our @EXPORT = qw/make_id make_mask make_dec make_call make_expression make_bool make_reserved
  join_expressions/;
use Generator::Binary::Utils qw/get_bit_count get_bin_value get_mask_from_bin get_mask_from_range/;

sub join_expressions {
	my ( $op, @expressions ) = @_;
	scalar @expressions == 0 and return undef;
	scalar @expressions == 1 and return pop @expressions;
	my $expression = {};
	my $next       = $expression;
	my $previous   = $expression;
	for my $i ( 0 .. scalar @expressions - 1 ) {
		my $current = $expressions[$i];
		if ( $i == scalar @expressions - 1 ) {
			$previous->{right} = $current;
			last;
		}
		$next->{type} = 'expression';
		$next->{left} = $current;
		$next->{op}   = $op;
		$previous     = $next;
		$next = $next->{right} = {};
	}
	return $expression;
}

sub make_bool {
	my ($value) = @_;
	$value and return { type => 'bool', value => 1 };
	return { type => 'bool', value => 0, size => 1 };
}

sub make_id {
	my ( $value, $size ) = @_;
	$size or $size = 32;
	return { type => 'id', value => $value, size => $size };
}

sub make_reserved {
	my $result = make_id(@_);
	$result->{reserved} = 1;
	return $result;
}

sub make_dec {
	my ( $value, $size ) = @_;
	$size or $size = get_bit_count($value);
	return { type => 'dec', value => $value, size => $size };
}

sub make_mask {
	my $result = make_dec(@_);
	$result->{mask} = 1;
	return $result;
}

sub make_call {
	my ( $name, $arguments, $size ) = @_;
	$size or $size = 32;
	return { type => 'call', name => $name, arguments => $arguments, size => $size };
}

sub make_expression {
	my ( $left, $op, $right, $size ) = @_;
	$size or $size = 32;
	return { type => 'expression', left => $left, op => $op, right => $right, size => $size };
}
1;
