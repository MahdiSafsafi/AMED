package Generator::AutoGenNotice;
use strict;
use warnings;

our $AUTOGEN_NOTICE = <<'__@__';
/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/


/*===----------------------------------------------------------------------===*\
|*                                                                            *|
|*                Automatically generated file, do not edit!                  *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

__@__

use Exporter qw/import/;
our @EXPORT=qw/print_autogen_notice/;

sub print_autogen_notice{
	my($fh)=@_;
	print $fh $AUTOGEN_NOTICE;
}

1;