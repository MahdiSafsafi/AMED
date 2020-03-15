use strict;
use warnings;
use autodie;
use feature qw/say/;
use Data::Dump q/pp/;

my %table = ();
my %nexts = (
	op1 => 'CRn',
	CRn => 'CRm',
	CRm => 'op2',
);

open my $fh, '<', 'sysop.txt';
while (<$fh>) {
	chomp;
	# skip blank line && comment.
	/^\s*(#|$)/ and next;
	
	my $item = {};
	while (/\G(\s*(\w+)=(\S+)\s*)/gc) {
		my ( $name, $value ) = ( $2, $3 );
		$value =~ /^[01]+$/ and $value = oct "0b" . $value;
		$item->{$name} = $value;
	}
	push @{ $table{$item->{op1}}->{$item->{CRn}}->{$item->{CRm}}->{$item->{op2}} }, $item;
}
close $fh;

sub indented_print {
	my ( $fh, $indent, $text ) = @_;
	$fh or $fh = *STDOUT;
	$indent and printf $fh "%${indent}s", ' ';
	print $fh "$text";
}

sub print_case {
	my ( $fh, $name, $hash, $indent ) = @_;
	indented_print( $fh, $indent, sprintf "switch(%s)\n", $name );
	indented_print( $fh, $indent, "{\n" );
	indented_print( $fh, $indent, "default : break;\n" );

	foreach my $key ( sort { $a - $b } keys %$hash ) {
		indented_print( $fh, $indent, sprintf "case %d:\n", $key );
		$indent+=4;
		my $hash2 = $hash->{$key};
		my $break = 1;
		if ( ref($hash2) =~ /ARRAY/ ) {
			if ( scalar @$hash2 > 1 ) {
				warn "i found a conflict. see c-source file for more information.";
				indented_print( $fh, $indent, 'conflicts:' );
			}
			foreach my $item (@$hash2) {
				my $str = sprintf 'op1=0b%03b CRn=0b%04b CRm=0b%04b op2=0b%03b', $item->{op1}, $item->{CRn}, $item->{CRm}, $item->{op2},;
				indented_print( $fh, $indent, sprintf "// %s\n", $str );
				indented_print( $fh, $indent, sprintf "return %s; // %s\n", $item->{type}, $item->{token} );
				$break = 0;
			}
		}
		else {
			my $next = $nexts{$name};
			print_case($fh, $next, $hash2, $indent );
		}
		$break and indented_print( $fh, $indent, "break;\n" );
		$indent-=4;
	}
	
	indented_print( $fh, $indent, "}\n" );
}

# generate c code:
open $fh, '>', 'sysop.inc';
printf $fh "static uint32_t SysOp(uint8_t op1, uint8_t CRn, uint8_t CRm, uint8_t op2)\n";
printf $fh "{\n";
print_case($fh, 'op1', \%table, 4 );
indented_print( $fh, 4, "/* not an alias. */" );
indented_print( $fh, 4, "return Sys_SYS;" );
printf $fh "}\n";
close $fh;
1;
