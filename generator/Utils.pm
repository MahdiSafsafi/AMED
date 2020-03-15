package Generator::Utils;
use strict;
use warnings;
use Exporter qw/import/;
our @EXPORT=qw/indented_print is_valid_decoding_path/;

sub indented_print {
	my ( $fh, $indent, $text ) = @_;
	$fh or $fh = *STDOUT;
	$indent and printf $fh "%${indent}s", ' ';
	print $fh "$text";
}

sub is_valid_decoding_path {
	my ($path) = @_;
	my %orders = (
		'group'    => 4,
		'iclass'   => 3,
		'class'    => 2,
		'encoding' => 1,
	);
	my $previous_order = 4;
	my %seen           = ();
	my @splited        = split /\./, $path;
	foreach my $word (@splited) {
		$word = lc $word;
		$seen{$word}++ and return 0;
		my $order = $orders{$word} // return 0;
		$order <= $previous_order or return 0;
		$previous_order = $order;
	}
	return 1;
}

1;