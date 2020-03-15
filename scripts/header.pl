#!/usr/bin/perl
use strict;
use warnings;
use File::Find;
use autodie;
use feature qw/say/;

my @files  = ();

my $HEADER = <<'EOH';
/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/

EOH

sub wanted {
	local $_ = $File::Find::name;
	/\.([ch])$/ and push @files, $_;
}

find( \&wanted, '..\include' );
find( \&wanted, '..\source'  );

foreach my $file (@files) {
	
	local $/ = undef;
	open my $fh, '<', $file;
	local $_ = <$fh>;
	close $fh;
	
	# remove old header:
	s/\/\*\s*BEGIN_HEADER.+?END_HEADER\s*\*\/\s*//s;
	
	my $header = $HEADER;
	
	$_ =  $header . $_;
	
	open $fh, '>', $file;
	print $fh $_;
	close $fh;
}
1