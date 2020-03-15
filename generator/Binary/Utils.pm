package Generator::Binary::Utils;
use Exporter qw/import/;
our @EXPORT=qw/get_bit_count get_mask_from_bin get_mask_from_range get_bin_value int2bin/;

use Carp qw/croak carp/;; 
sub get_bit_count {
	my ( $value, $bit ) = @_;
	$value == 0 and return 1;
	my $result = 0;
	if ( defined $bit ) {
		while ($value) {
			my $status = 1 & $value;
			$bit == $status and $result++;
			$value >>= 1;
		}
	}
	else {
		while ($value) {
			$result++;
			$value >>= 1;
		}
	}
	return $result;
}

sub get_mask_from_bin {
	my ($bin) = @_;
	$bin =~ s/^0b//;
	$bin = scalar reverse $bin;
	my $mask = my $i = 0;
	while ( $bin =~ /\G(.)/gc ) {
		my $char = $1;
		$char =~ /^[01]$/ and $mask |= 1 << $i;
		$i++;
	}
	return $mask;
}

sub get_mask_from_range {
	my ( $from, $to ) = @_;
	defined $to or $to = $from;
	my $mask = 0;
	for my $i ( $from .. $to ) {
		$mask |= 1 << $i;
	}
	return $mask;
}

sub get_bin_value {
	my ($str) = @_;
	$str =~ s/^0b//;
	$str =~ s/x/0/g;
	return oct "0b" . $str;
}

sub int2bin {
	my ( $value, $mask ) = @_;
	defined $mask or $mask = -1;
	my @data = ();
	for my $i ( 0 .. 63 ) {
		my $bit_mask = 1 << $i;
		push @data, $mask & $bit_mask ? ( $value & $bit_mask ) ? 1 : 0 : 'x';
	}
	my $data = scalar reverse join( '', @data );
	return $data;
}
1;