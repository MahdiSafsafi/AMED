# AMED.AArch64 generator
#
# https://github.com/MahdiSafsafi/AMED
#
#
package Generator::AArch64;
use strict;
use warnings;
use Generator::ARM;
use JSON::XS;
use Data::Dump qw/pp/;
use List::Util qw/uniq min max/;
our @ISA = qw/Generator::ARM/;


my $file = 'D:\WIP\opcodesDB\json\aarch64.json';
local $/ = undef;
open my $fh, '<', $file;
my $json = JSON::XS::decode_json(<$fh>);
close $fh;
my $include = 'D:\WIP\AMED\include\amed\aarch64\include';
my $source  = 'D:\WIP\AMED\source\aarch64\include';

my $aarch64 = Generator::AArch64->new( $json, $include, $source );
$aarch64->generate();