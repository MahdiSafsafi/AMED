# AMED.Shared stuff
#
# https://github.com/MahdiSafsafi/AMED
#
#
package Generator::Shared;
use strict;
use warnings;
use JSON::XS;
use Data::Dump qw/pp/;
use List::Util qw/uniq min max/;
use Generator::Enum;

my $file = 'D:\WIP\opcodesDB\json\shared.json';
local $/ = undef;
open my $fh, '<', $file;
my $json = JSON::XS::decode_json(<$fh>);
close $fh;

$file = 'D:\WIP\AMED\include\amed\shared\enums.inc';
open $fh, '>', $file;
$file = 'D:\WIP\AMED\source\strings.inc';
open my $fs, '>', $file;

foreach my $enum ( @{ $json->{enums} } ) {
	my $id = sprintf "amed_%s", lc $enum->{id};
	my $obj = Generator::Enum->new($id);
	foreach my $item ( @{ $enum->{items} } ) {
		$obj->add_top( $item->{name} );
	}
	$obj->generate($fh);
	$obj->generate_strings($fs);
}
close $fs;
close $fh;
1;
