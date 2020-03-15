# lexer for c-expression
#
# https://github.com/MahdiSafsafi/AMED
#

use strict;
use warnings;
use Data::Dump qw/pp/;
use feature qw/say/;

my %keywords = (
	in  => 'IN',
	IN  => 'IN',
	DIV => 'SLASH',
);

sub TOKENIZER {
	my ($parser) = @_;
	for ( ${ $parser->YYInput } ) {
		/\G(\s+)/gc;

		# Two symbol:
		/\G(\&\&)/gc and return ( 'ANDAND', $1 );
		/\G(\|\|)/gc and return ( 'OROR',   $1 );
		/\G(\>\>)/gc and return ( 'GTGT',   $1 );
		/\G(\<\<)/gc and return ( 'LTLT',   $1 );
		/\G(\>\=)/gc and return ( 'GE',     $1 );
		/\G(\<\=)/gc and return ( 'LE',     $1 );
		/\G(\=\=)/gc and return ( 'EQEQ',   $1 );
		/\G(\!\=)/gc and return ( 'NOTEQ',  $1 );

		# One symbol:
		/\G(\,)/gc and return ( 'COMMA',  $1 );
		/\G(\:)/gc and return ( 'COLON',  $1 );
		/\G(\()/gc and return ( 'LPAREN', $1 );
		/\G(\))/gc and return ( 'RPAREN', $1 );
		/\G(\{)/gc and return ( 'LBRACE', $1 );
		/\G(\})/gc and return ( 'RBRACE', $1 );
		/\G(\=)/gc and return ( 'EQ',     $1 );
		/\G(\+)/gc and return ( 'PLUS',   $1 );
		/\G(\-)/gc and return ( 'MINUS',  $1 );
		/\G(\*)/gc and return ( 'STAR',   $1 );
		/\G(\/)/gc and return ( 'SLASH',  $1 );

		/\G(\%)/gc and return ( 'MOD',   $1 );
		/\G(\&)/gc and return ( 'AND',   $1 );
		/\G(\|)/gc and return ( 'OR',    $1 );
		/\G(\^)/gc and return ( 'CARET', $1 );
		/\G(\!)/gc and return ( 'NOT',   $1 );
		/\G(\>)/gc and return ( 'GT',    $1 );
		/\G(\<)/gc and return ( 'LT',    $1 );
		/\G(\~)/gc and return ( 'TIL',   $1 );

		# string:
		/\G('([^']*)')/gc and return ( 'SQSTR', $2 );

		# number:
		/\G(0b[01x]+)/gc       and return ( 'BIN',   $1 );
		/\G(0x[a-f0-9A-F]+)/gc and return ( 'HEX',   $1 );
		/\G(\d+\.\d+)/gc       and return ( 'FLOAT', $1 );
		/\G(\d+)/gc            and return ( 'DEC',   $1 );

		# id:
		if (/\G(\w+)/gc) {
			my $word = $1;
			exists $keywords{$word} and return ( $keywords{$word}, $word );
			return ( 'ID', $word );
		}

		return ( '', undef );
	}
}

sub readForward {
	my $parser = shift;
	my ( $token, $value ) = TOKENIZER($parser);
	push @{ $parser->YYData->{cache} }, ( $token, $value );
	return ( $token, $value );
}

sub __isLT2 {

	# LT token cause a shift/reduce conflict when trying to
	# add <DEC> | <DEC:DEC> patterns.
	# so we fix it here, by reading forward.
	my ($parser) = @_;
	my ( $nextToken, $nextValue ) = readForward($parser);

	$nextToken =~ /^(DEC|ID)$/ or return 0;
	( $nextToken, $nextValue ) = readForward($parser);
	$nextToken eq 'GT' and return 1;
	$nextToken eq 'COLON' or return 0;
	( $nextToken, $nextValue ) = readForward($parser);
	$nextToken =~ /^(DEC|ID)$/ or return 0;
	( $nextToken, $nextValue ) = readForward($parser);
	$nextToken eq 'GT' and return 1;
	return 0;
}

sub resolveLT2 {

	# LT token cause a shift/reduce conflict when trying to
	# add <DEC> | <DEC:DEC> patterns.
	# so we fix it here, by reading forward.
	my ($parser)     = @_;
	my $level        = 0;
	my @stack        = ($level);
	my @LTCacheStack = ( scalar @{ $parser->YYData->{cache} } - 2 );
	my $operators    = {};
	my ( $nextToken, $nextValue ) = readForward($parser);
	while ($nextToken) {
		( $nextToken, $nextValue ) = readForward($parser);
		if ( $nextToken =~ /^(LPAREN)$/ ) {
			$level++;
		}
		elsif ( $nextToken =~ /^(RPAREN)$/ ) {
			$level--;
		}
		elsif ( $nextToken =~ /^(LT)$/ ) {
			push @stack,        $level;
			push @LTCacheStack, scalar @{ $parser->YYData->{cache} } - 2;
		}
		elsif ( $nextToken =~ /^(GT)$/ ) {
			my $gtLevel = pop @stack;
			if ( defined $gtLevel && $gtLevel == $level && !$operators->{$level} ) {
				my $lt = pop @LTCacheStack;
				my $gt = scalar @{ $parser->YYData->{cache} } - 2;
				$parser->YYData->{cache}->[$lt] = 'LT2';
				$parser->YYData->{cache}->[$gt] = 'GT2';
				$level or last;
			}
		}
		elsif ( $nextToken =~ /^(COLON|ID)$/ ) {

		}
		else {
			$operators->{$level}++;
		}
	}
}

sub EXPRESSION_LEXER {
	my ($parser) = @_;
	my ( $token, $value ) = ( '', undef );

	# setup an empty cache if does not exist !
	exists $parser->YYData->{cache} or $parser->YYData->{cache} = [];
	if ( scalar @{ $parser->YYData->{cache} } ) {

		# the cache contains already processed tokens...
		( $token, $value ) = ( shift @{ $parser->YYData->{cache} }, shift @{ $parser->YYData->{cache} } );
	}
	else {
		# cache is empty => must call TOKENIZER.
		( $token, $value ) = TOKENIZER($parser);
		if ( $token eq 'LT' ) {
			push @{ $parser->YYData->{cache} }, ( $token, $value );
			resolveLT2($parser);
			( $token, $value ) = ( shift @{ $parser->YYData->{cache} }, shift @{ $parser->YYData->{cache} } );
		}
	}
	return ( $token, $value );
}

1;
