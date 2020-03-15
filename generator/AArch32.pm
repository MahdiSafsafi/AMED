# AMED.AArch32 generator
#
# https://github.com/MahdiSafsafi/AMED
#
#
package Generator::AArch32;
use strict;
use warnings;
use Generator::ARM;
use JSON::XS;
use Data::Dump qw/pp/;
use List::Util qw/uniq min max/;
our @ISA = qw/Generator::ARM/;


my $file = 'D:\WIP\opcodesDB\json\aarch32.json';
local $/ = undef;
open my $fh, '<', $file;
my $json = JSON::XS::decode_json(<$fh>);
close $fh;
my $include = 'D:\WIP\AMED\include\amed\aarch32\include';
my $source  = 'D:\WIP\AMED\source\aarch32\include';

my $aarch32 = Generator::AArch32->new( $json, $include, $source );
$aarch32->generate();