########################################################################################
#
#    This file was generated using Parse::Eyapp version 1.21.
#
# Copyright © 2006, 2007, 2008, 2009, 2010, 2011, 2012 Casiano Rodriguez-Leon.
# Copyright © 2017 William N. Braswell, Jr.
# All Rights Reserved.
#
# Parse::Yapp is Copyright © 1998, 1999, 2000, 2001, Francois Desarmenien.
# Parse::Yapp is Copyright © 2017 William N. Braswell, Jr.
# All Rights Reserved.
#
#        Don't edit this file, use source file 'Grammar.eyp' instead.
#
#             ANY CHANGE MADE HERE WILL BE LOST !
#
########################################################################################
package CExpression::Parser;
use strict;

push @CExpression::Parser::ISA, 'Parse::Eyapp::Driver';




BEGIN {
  # This strange way to load the modules is to guarantee compatibility when
  # using several standalone and non-standalone Eyapp parsers

  require Parse::Eyapp::Driver unless Parse::Eyapp::Driver->can('YYParse');
  require Parse::Eyapp::Node unless Parse::Eyapp::Node->can('hnew'); 
}
  

sub unexpendedInput { defined($_) ? substr($_, (defined(pos $_) ? pos $_ : 0)) : '' }



# Default lexical analyzer
our $LEX = sub {
    my $self = shift;
    my $pos;

    for (${$self->input}) {
      

      m{\G(\s+)}gc and $self->tokenline($1 =~ tr{\n}{});

      

      /\G(GTGT)/gc and return ($1, $1);
      /\G(LTLT)/gc and return ($1, $1);
      /\G(LE)/gc and return ($1, $1);
      /\G(EQEQ)/gc and return ($1, $1);
      /\G(OROR)/gc and return ($1, $1);
      /\G(ANDAND)/gc and return ($1, $1);
      /\G(GE)/gc and return ($1, $1);
      /\G(NOTEQ)/gc and return ($1, $1);
      /\G(LPAREN)/gc and return ($1, $1);
      /\G(PLUS)/gc and return ($1, $1);
      /\G(NOT)/gc and return ($1, $1);
      /\G(STAR)/gc and return ($1, $1);
      /\G(COLON)/gc and return ($1, $1);
      /\G(AND)/gc and return ($1, $1);
      /\G(OR)/gc and return ($1, $1);
      /\G(TIL)/gc and return ($1, $1);
      /\G(MINUS)/gc and return ($1, $1);
      /\G(CARET)/gc and return ($1, $1);
      /\G(GT)/gc and return ($1, $1);
      /\G(LT)/gc and return ($1, $1);
      /\G(COMMA)/gc and return ($1, $1);
      /\G(RPAREN)/gc and return ($1, $1);
      /\G(EQ)/gc and return ($1, $1);
      /\G(LBRACE)/gc and return ($1, $1);
      /\G(SLASH)/gc and return ($1, $1);
      /\G(MOD)/gc and return ($1, $1);
      /\G(RBRACE)/gc and return ($1, $1);
      /\G(HEX)/gc and return ($1, $1);
      /\G(DEC)/gc and return ($1, $1);
      /\G(FLOAT)/gc and return ($1, $1);
      /\G(BIN)/gc and return ($1, $1);
      /\G(IN)/gc and return ($1, $1);
      /\G(GT2)/gc and return ($1, $1);
      /\G(ID)/gc and return ($1, $1);
      /\G(LT2)/gc and return ($1, $1);
      /\G(SQSTR)/gc and return ($1, $1);


      return ('', undef) if ($_ eq '') || (defined(pos($_)) && (pos($_) >= length($_)));
      /\G\s*(\S+)/;
      my $near = substr($1,0,10); 

      return($near, $near);

     # die( "Error inside the lexical analyzer near '". $near
     #     ."'. Line: ".$self->line()
     #     .". File: '".$self->YYFilename()."'. No match found.\n");
    }
  }
;


#line 103 Parser.pm

my $warnmessage =<< "EOFWARN";
Warning!: Did you changed the \@CExpression::Parser::ISA variable inside the header section of the eyapp program?
EOFWARN

sub new {
  my($class)=shift;
  ref($class) and $class=ref($class);

  warn $warnmessage unless __PACKAGE__->isa('Parse::Eyapp::Driver'); 
  my($self)=$class->SUPER::new( 
    yyversion => '1.21',
    yyGRAMMAR  =>
[#[productionNameAndLabel => lhs, [ rhs], bypass]]
  [ '_SUPERSTART' => '$start', [ 'start', '$end' ], 0 ],
  [ 'start_1' => 'start', [ 'expression' ], 0 ],
  [ 'expression_2' => 'expression', [ 'logicalOrExpression' ], 0 ],
  [ 'logicalOrExpression_3' => 'logicalOrExpression', [ 'logicalOrExpression', 'OROR', 'logicalAndExpression' ], 0 ],
  [ 'logicalOrExpression_4' => 'logicalOrExpression', [ 'logicalAndExpression' ], 0 ],
  [ 'logicalAndExpression_5' => 'logicalAndExpression', [ 'logicalAndExpression', 'ANDAND', 'orExpression' ], 0 ],
  [ 'logicalAndExpression_6' => 'logicalAndExpression', [ 'orExpression' ], 0 ],
  [ 'orExpression_7' => 'orExpression', [ 'orExpression', 'OR', 'xorExpression' ], 0 ],
  [ 'orExpression_8' => 'orExpression', [ 'xorExpression' ], 0 ],
  [ 'xorExpression_9' => 'xorExpression', [ 'xorExpression', 'CARET', 'andExpression' ], 0 ],
  [ 'xorExpression_10' => 'xorExpression', [ 'andExpression' ], 0 ],
  [ 'andExpression_11' => 'andExpression', [ 'andExpression', 'AND', 'equalityExpression' ], 0 ],
  [ 'andExpression_12' => 'andExpression', [ 'equalityExpression' ], 0 ],
  [ 'equalityExpression_13' => 'equalityExpression', [ 'equalityExpression', 'EQEQ', 'relationalExpression' ], 0 ],
  [ 'equalityExpression_14' => 'equalityExpression', [ 'equalityExpression', 'NOTEQ', 'relationalExpression' ], 0 ],
  [ 'equalityExpression_15' => 'equalityExpression', [ 'relationalExpression' ], 0 ],
  [ 'relationalExpression_16' => 'relationalExpression', [ 'relationalExpression', 'LT', 'shiftExpression' ], 0 ],
  [ 'relationalExpression_17' => 'relationalExpression', [ 'relationalExpression', 'GT', 'shiftExpression' ], 0 ],
  [ 'relationalExpression_18' => 'relationalExpression', [ 'relationalExpression', 'LE', 'shiftExpression' ], 0 ],
  [ 'relationalExpression_19' => 'relationalExpression', [ 'relationalExpression', 'GE', 'shiftExpression' ], 0 ],
  [ 'relationalExpression_20' => 'relationalExpression', [ 'shiftExpression' ], 0 ],
  [ 'shiftExpression_21' => 'shiftExpression', [ 'shiftExpression', 'LTLT', 'addExpression' ], 0 ],
  [ 'shiftExpression_22' => 'shiftExpression', [ 'shiftExpression', 'GTGT', 'addExpression' ], 0 ],
  [ 'shiftExpression_23' => 'shiftExpression', [ 'addExpression' ], 0 ],
  [ 'addExpression_24' => 'addExpression', [ 'addExpression', 'PLUS', 'mulExpression' ], 0 ],
  [ 'addExpression_25' => 'addExpression', [ 'addExpression', 'MINUS', 'mulExpression' ], 0 ],
  [ 'addExpression_26' => 'addExpression', [ 'mulExpression' ], 0 ],
  [ 'mulExpression_27' => 'mulExpression', [ 'mulExpression', 'STAR', 'unaryExpression' ], 0 ],
  [ 'mulExpression_28' => 'mulExpression', [ 'mulExpression', 'SLASH', 'unaryExpression' ], 0 ],
  [ 'mulExpression_29' => 'mulExpression', [ 'mulExpression', 'MOD', 'unaryExpression' ], 0 ],
  [ 'mulExpression_30' => 'mulExpression', [ 'unaryExpression' ], 0 ],
  [ 'unaryExpression_31' => 'unaryExpression', [ 'unaryOperator', 'postfixExpression' ], 0 ],
  [ 'unaryExpression_32' => 'unaryExpression', [ 'postfixExpression' ], 0 ],
  [ 'unaryOperator_33' => 'unaryOperator', [ 'PLUS' ], 0 ],
  [ 'unaryOperator_34' => 'unaryOperator', [ 'MINUS' ], 0 ],
  [ 'unaryOperator_35' => 'unaryOperator', [ 'NOT' ], 0 ],
  [ 'postfixExpression_36' => 'postfixExpression', [ 'inExpression' ], 0 ],
  [ 'inExpression_37' => 'inExpression', [ 'sliceExpression', 'IN', 'array' ], 0 ],
  [ 'inExpression_38' => 'inExpression', [ 'sliceExpression' ], 0 ],
  [ '_OPTIONAL' => 'OPTIONAL-1', [ 'items' ], 0 ],
  [ '_OPTIONAL' => 'OPTIONAL-1', [  ], 0 ],
  [ 'array_41' => 'array', [ 'LBRACE', 'OPTIONAL-1', 'RBRACE' ], 0 ],
  [ 'items_42' => 'items', [ 'items', 'COMMA', 'item' ], 0 ],
  [ 'items_43' => 'items', [ 'item' ], 0 ],
  [ 'item_44' => 'item', [ 'expression' ], 0 ],
  [ 'sliceExpression_45' => 'sliceExpression', [ 'sliceExpressionList' ], 0 ],
  [ 'sliceExpressionList_46' => 'sliceExpressionList', [ 'sliceExpressionList', 'COLON', 'partExpression' ], 0 ],
  [ 'sliceExpressionList_47' => 'sliceExpressionList', [ 'partExpression' ], 0 ],
  [ 'partExpression_48' => 'partExpression', [ 'primaryExpression', 'LT2', 'part', 'GT2' ], 0 ],
  [ 'partExpression_49' => 'partExpression', [ 'primaryExpression', 'LT2', 'part', 'COLON', 'part', 'GT2' ], 0 ],
  [ 'partExpression_50' => 'partExpression', [ 'primaryExpression' ], 0 ],
  [ 'part_51' => 'part', [ 'id' ], 0 ],
  [ 'part_52' => 'part', [ 'dec' ], 0 ],
  [ 'part_53' => 'part', [ 'call' ], 0 ],
  [ 'primaryExpression_54' => 'primaryExpression', [ 'LPAREN', 'expression', 'RPAREN' ], 0 ],
  [ 'primaryExpression_55' => 'primaryExpression', [ 'BIN' ], 0 ],
  [ 'primaryExpression_56' => 'primaryExpression', [ 'HEX' ], 0 ],
  [ 'primaryExpression_57' => 'primaryExpression', [ 'FLOAT' ], 0 ],
  [ 'primaryExpression_58' => 'primaryExpression', [ 'SQSTR' ], 0 ],
  [ 'primaryExpression_59' => 'primaryExpression', [ 'id' ], 0 ],
  [ 'primaryExpression_60' => 'primaryExpression', [ 'dec' ], 0 ],
  [ 'primaryExpression_61' => 'primaryExpression', [ 'call' ], 0 ],
  [ '_OPTIONAL' => 'OPTIONAL-2', [ 'argumentExpressionList' ], 0 ],
  [ '_OPTIONAL' => 'OPTIONAL-2', [  ], 0 ],
  [ 'call_64' => 'call', [ 'ID', 'LPAREN', 'OPTIONAL-2', 'RPAREN' ], 0 ],
  [ 'id_65' => 'id', [ 'ID' ], 0 ],
  [ 'dec_66' => 'dec', [ 'DEC' ], 0 ],
  [ 'argumentExpressionList_67' => 'argumentExpressionList', [ 'argumentExpressionList', 'COMMA', 'expression' ], 0 ],
  [ 'argumentExpressionList_68' => 'argumentExpressionList', [ 'expression' ], 0 ],
],
    yyLABELS  =>
{
  '_SUPERSTART' => 0,
  'start_1' => 1,
  'expression_2' => 2,
  'logicalOrExpression_3' => 3,
  'logicalOrExpression_4' => 4,
  'logicalAndExpression_5' => 5,
  'logicalAndExpression_6' => 6,
  'orExpression_7' => 7,
  'orExpression_8' => 8,
  'xorExpression_9' => 9,
  'xorExpression_10' => 10,
  'andExpression_11' => 11,
  'andExpression_12' => 12,
  'equalityExpression_13' => 13,
  'equalityExpression_14' => 14,
  'equalityExpression_15' => 15,
  'relationalExpression_16' => 16,
  'relationalExpression_17' => 17,
  'relationalExpression_18' => 18,
  'relationalExpression_19' => 19,
  'relationalExpression_20' => 20,
  'shiftExpression_21' => 21,
  'shiftExpression_22' => 22,
  'shiftExpression_23' => 23,
  'addExpression_24' => 24,
  'addExpression_25' => 25,
  'addExpression_26' => 26,
  'mulExpression_27' => 27,
  'mulExpression_28' => 28,
  'mulExpression_29' => 29,
  'mulExpression_30' => 30,
  'unaryExpression_31' => 31,
  'unaryExpression_32' => 32,
  'unaryOperator_33' => 33,
  'unaryOperator_34' => 34,
  'unaryOperator_35' => 35,
  'postfixExpression_36' => 36,
  'inExpression_37' => 37,
  'inExpression_38' => 38,
  '_OPTIONAL' => 39,
  '_OPTIONAL' => 40,
  'array_41' => 41,
  'items_42' => 42,
  'items_43' => 43,
  'item_44' => 44,
  'sliceExpression_45' => 45,
  'sliceExpressionList_46' => 46,
  'sliceExpressionList_47' => 47,
  'partExpression_48' => 48,
  'partExpression_49' => 49,
  'partExpression_50' => 50,
  'part_51' => 51,
  'part_52' => 52,
  'part_53' => 53,
  'primaryExpression_54' => 54,
  'primaryExpression_55' => 55,
  'primaryExpression_56' => 56,
  'primaryExpression_57' => 57,
  'primaryExpression_58' => 58,
  'primaryExpression_59' => 59,
  'primaryExpression_60' => 60,
  'primaryExpression_61' => 61,
  '_OPTIONAL' => 62,
  '_OPTIONAL' => 63,
  'call_64' => 64,
  'id_65' => 65,
  'dec_66' => 66,
  'argumentExpressionList_67' => 67,
  'argumentExpressionList_68' => 68,
},
    yyTERMS  =>
{ '' => { ISSEMANTIC => 0 },
	AND => { ISSEMANTIC => 1 },
	ANDAND => { ISSEMANTIC => 1 },
	BIN => { ISSEMANTIC => 1 },
	CARET => { ISSEMANTIC => 1 },
	COLON => { ISSEMANTIC => 1 },
	COMMA => { ISSEMANTIC => 1 },
	DEC => { ISSEMANTIC => 1 },
	EQEQ => { ISSEMANTIC => 1 },
	FLOAT => { ISSEMANTIC => 1 },
	GE => { ISSEMANTIC => 1 },
	GT => { ISSEMANTIC => 1 },
	GT2 => { ISSEMANTIC => 1 },
	GTGT => { ISSEMANTIC => 1 },
	HEX => { ISSEMANTIC => 1 },
	ID => { ISSEMANTIC => 1 },
	IN => { ISSEMANTIC => 1 },
	LBRACE => { ISSEMANTIC => 1 },
	LE => { ISSEMANTIC => 1 },
	LPAREN => { ISSEMANTIC => 1 },
	LT => { ISSEMANTIC => 1 },
	LT2 => { ISSEMANTIC => 1 },
	LTLT => { ISSEMANTIC => 1 },
	MINUS => { ISSEMANTIC => 1 },
	MOD => { ISSEMANTIC => 1 },
	NOT => { ISSEMANTIC => 1 },
	NOTEQ => { ISSEMANTIC => 1 },
	OR => { ISSEMANTIC => 1 },
	OROR => { ISSEMANTIC => 1 },
	PLUS => { ISSEMANTIC => 1 },
	RBRACE => { ISSEMANTIC => 1 },
	RPAREN => { ISSEMANTIC => 1 },
	SLASH => { ISSEMANTIC => 1 },
	SQSTR => { ISSEMANTIC => 1 },
	STAR => { ISSEMANTIC => 1 },
	error => { ISSEMANTIC => 0 },
},
    yyFILENAME  => 'Grammar.eyp',
    yystates =>
[
	{#State 0
		ACTIONS => {
			'BIN' => 13,
			'DEC' => 1,
			'LPAREN' => 7,
			'MINUS' => 22,
			'HEX' => 6,
			'ID' => 29,
			'PLUS' => 4,
			'NOT' => 2,
			'FLOAT' => 8,
			'SQSTR' => 33
		},
		GOTOS => {
			'logicalAndExpression' => 24,
			'xorExpression' => 26,
			'shiftExpression' => 11,
			'id' => 25,
			'equalityExpression' => 10,
			'dec' => 9,
			'relationalExpression' => 23,
			'unaryOperator' => 5,
			'mulExpression' => 21,
			'start' => 3,
			'inExpression' => 31,
			'addExpression' => 18,
			'sliceExpressionList' => 17,
			'call' => 16,
			'logicalOrExpression' => 20,
			'postfixExpression' => 32,
			'expression' => 19,
			'primaryExpression' => 14,
			'partExpression' => 28,
			'andExpression' => 12,
			'sliceExpression' => 27,
			'orExpression' => 30,
			'unaryExpression' => 15
		}
	},
	{#State 1
		DEFAULT => -66
	},
	{#State 2
		DEFAULT => -35
	},
	{#State 3
		ACTIONS => {
			'' => 34
		}
	},
	{#State 4
		DEFAULT => -33
	},
	{#State 5
		ACTIONS => {
			'HEX' => 6,
			'ID' => 29,
			'SQSTR' => 33,
			'LPAREN' => 7,
			'DEC' => 1,
			'BIN' => 13,
			'FLOAT' => 8
		},
		GOTOS => {
			'id' => 25,
			'postfixExpression' => 35,
			'dec' => 9,
			'sliceExpressionList' => 17,
			'inExpression' => 31,
			'call' => 16,
			'partExpression' => 28,
			'primaryExpression' => 14,
			'sliceExpression' => 27
		}
	},
	{#State 6
		DEFAULT => -56
	},
	{#State 7
		ACTIONS => {
			'FLOAT' => 8,
			'SQSTR' => 33,
			'DEC' => 1,
			'BIN' => 13,
			'LPAREN' => 7,
			'MINUS' => 22,
			'ID' => 29,
			'HEX' => 6,
			'PLUS' => 4,
			'NOT' => 2
		},
		GOTOS => {
			'logicalAndExpression' => 24,
			'equalityExpression' => 10,
			'dec' => 9,
			'shiftExpression' => 11,
			'xorExpression' => 26,
			'id' => 25,
			'mulExpression' => 21,
			'relationalExpression' => 23,
			'unaryOperator' => 5,
			'call' => 16,
			'addExpression' => 18,
			'inExpression' => 31,
			'sliceExpressionList' => 17,
			'postfixExpression' => 32,
			'expression' => 36,
			'logicalOrExpression' => 20,
			'sliceExpression' => 27,
			'andExpression' => 12,
			'primaryExpression' => 14,
			'partExpression' => 28,
			'orExpression' => 30,
			'unaryExpression' => 15
		}
	},
	{#State 8
		DEFAULT => -57
	},
	{#State 9
		DEFAULT => -60
	},
	{#State 10
		ACTIONS => {
			'ANDAND' => -12,
			'NOTEQ' => 37,
			'OROR' => -12,
			'RPAREN' => -12,
			'RBRACE' => -12,
			'COMMA' => -12,
			'EQEQ' => 38,
			'OR' => -12,
			'CARET' => -12,
			'AND' => -12,
			'' => -12
		}
	},
	{#State 11
		ACTIONS => {
			'RPAREN' => -20,
			'ANDAND' => -20,
			'LT' => -20,
			'CARET' => -20,
			'GT' => -20,
			'COMMA' => -20,
			'LTLT' => 40,
			'GTGT' => 39,
			'OROR' => -20,
			'NOTEQ' => -20,
			'OR' => -20,
			'RBRACE' => -20,
			'EQEQ' => -20,
			'AND' => -20,
			'' => -20,
			'LE' => -20,
			'GE' => -20
		}
	},
	{#State 12
		ACTIONS => {
			'OR' => -10,
			'CARET' => -10,
			'RBRACE' => -10,
			'COMMA' => -10,
			'RPAREN' => -10,
			'OROR' => -10,
			'ANDAND' => -10,
			'' => -10,
			'AND' => 41
		}
	},
	{#State 13
		DEFAULT => -55
	},
	{#State 14
		ACTIONS => {
			'LE' => -50,
			'GE' => -50,
			'' => -50,
			'SLASH' => -50,
			'AND' => -50,
			'MOD' => -50,
			'COLON' => -50,
			'LT2' => 42,
			'RBRACE' => -50,
			'EQEQ' => -50,
			'OR' => -50,
			'NOTEQ' => -50,
			'OROR' => -50,
			'LTLT' => -50,
			'GTGT' => -50,
			'PLUS' => -50,
			'MINUS' => -50,
			'STAR' => -50,
			'COMMA' => -50,
			'IN' => -50,
			'LT' => -50,
			'GT' => -50,
			'CARET' => -50,
			'ANDAND' => -50,
			'RPAREN' => -50
		}
	},
	{#State 15
		DEFAULT => -30
	},
	{#State 16
		DEFAULT => -61
	},
	{#State 17
		ACTIONS => {
			'STAR' => -45,
			'LTLT' => -45,
			'GTGT' => -45,
			'PLUS' => -45,
			'MINUS' => -45,
			'ANDAND' => -45,
			'RPAREN' => -45,
			'COMMA' => -45,
			'IN' => -45,
			'LT' => -45,
			'CARET' => -45,
			'GT' => -45,
			'AND' => -45,
			'SLASH' => -45,
			'MOD' => -45,
			'COLON' => 43,
			'LE' => -45,
			'GE' => -45,
			'' => -45,
			'NOTEQ' => -45,
			'OROR' => -45,
			'RBRACE' => -45,
			'EQEQ' => -45,
			'OR' => -45
		}
	},
	{#State 18
		ACTIONS => {
			'OR' => -23,
			'EQEQ' => -23,
			'RBRACE' => -23,
			'OROR' => -23,
			'NOTEQ' => -23,
			'' => -23,
			'LE' => -23,
			'GE' => -23,
			'AND' => -23,
			'CARET' => -23,
			'GT' => -23,
			'LT' => -23,
			'COMMA' => -23,
			'RPAREN' => -23,
			'ANDAND' => -23,
			'MINUS' => 45,
			'GTGT' => -23,
			'PLUS' => 44,
			'LTLT' => -23
		}
	},
	{#State 19
		DEFAULT => -1
	},
	{#State 20
		ACTIONS => {
			'RPAREN' => -2,
			'OROR' => 46,
			'RBRACE' => -2,
			'COMMA' => -2,
			'' => -2
		}
	},
	{#State 21
		ACTIONS => {
			'COMMA' => -26,
			'LT' => -26,
			'GT' => -26,
			'CARET' => -26,
			'ANDAND' => -26,
			'RPAREN' => -26,
			'LTLT' => -26,
			'PLUS' => -26,
			'GTGT' => -26,
			'MINUS' => -26,
			'STAR' => 49,
			'RBRACE' => -26,
			'EQEQ' => -26,
			'OR' => -26,
			'NOTEQ' => -26,
			'OROR' => -26,
			'GE' => -26,
			'LE' => -26,
			'' => -26,
			'SLASH' => 47,
			'AND' => -26,
			'MOD' => 48
		}
	},
	{#State 22
		DEFAULT => -34
	},
	{#State 23
		ACTIONS => {
			'OROR' => -15,
			'NOTEQ' => -15,
			'OR' => -15,
			'RBRACE' => -15,
			'EQEQ' => -15,
			'AND' => -15,
			'' => -15,
			'LE' => 53,
			'GE' => 52,
			'RPAREN' => -15,
			'ANDAND' => -15,
			'LT' => 51,
			'GT' => 50,
			'CARET' => -15,
			'COMMA' => -15
		}
	},
	{#State 24
		ACTIONS => {
			'RPAREN' => -4,
			'OROR' => -4,
			'ANDAND' => 54,
			'' => -4,
			'COMMA' => -4,
			'RBRACE' => -4
		}
	},
	{#State 25
		DEFAULT => -59
	},
	{#State 26
		ACTIONS => {
			'' => -8,
			'RBRACE' => -8,
			'COMMA' => -8,
			'CARET' => 55,
			'OR' => -8,
			'ANDAND' => -8,
			'OROR' => -8,
			'RPAREN' => -8
		}
	},
	{#State 27
		ACTIONS => {
			'SLASH' => -38,
			'AND' => -38,
			'MOD' => -38,
			'' => -38,
			'LE' => -38,
			'GE' => -38,
			'OROR' => -38,
			'NOTEQ' => -38,
			'OR' => -38,
			'RBRACE' => -38,
			'EQEQ' => -38,
			'STAR' => -38,
			'MINUS' => -38,
			'LTLT' => -38,
			'GTGT' => -38,
			'PLUS' => -38,
			'RPAREN' => -38,
			'ANDAND' => -38,
			'IN' => 56,
			'LT' => -38,
			'GT' => -38,
			'CARET' => -38,
			'COMMA' => -38
		}
	},
	{#State 28
		DEFAULT => -47
	},
	{#State 29
		ACTIONS => {
			'GT2' => -65,
			'LTLT' => -65,
			'GTGT' => -65,
			'PLUS' => -65,
			'LPAREN' => 57,
			'MINUS' => -65,
			'STAR' => -65,
			'COMMA' => -65,
			'IN' => -65,
			'LT' => -65,
			'CARET' => -65,
			'GT' => -65,
			'ANDAND' => -65,
			'RPAREN' => -65,
			'LE' => -65,
			'GE' => -65,
			'' => -65,
			'AND' => -65,
			'MOD' => -65,
			'SLASH' => -65,
			'COLON' => -65,
			'LT2' => -65,
			'RBRACE' => -65,
			'EQEQ' => -65,
			'OR' => -65,
			'NOTEQ' => -65,
			'OROR' => -65
		}
	},
	{#State 30
		ACTIONS => {
			'' => -6,
			'OR' => 58,
			'COMMA' => -6,
			'RBRACE' => -6,
			'RPAREN' => -6,
			'OROR' => -6,
			'ANDAND' => -6
		}
	},
	{#State 31
		DEFAULT => -36
	},
	{#State 32
		DEFAULT => -32
	},
	{#State 33
		DEFAULT => -58
	},
	{#State 34
		DEFAULT => 0
	},
	{#State 35
		DEFAULT => -31
	},
	{#State 36
		ACTIONS => {
			'RPAREN' => 59
		}
	},
	{#State 37
		ACTIONS => {
			'BIN' => 13,
			'DEC' => 1,
			'PLUS' => 4,
			'NOT' => 2,
			'LPAREN' => 7,
			'MINUS' => 22,
			'ID' => 29,
			'HEX' => 6,
			'FLOAT' => 8,
			'SQSTR' => 33
		},
		GOTOS => {
			'call' => 16,
			'inExpression' => 31,
			'addExpression' => 18,
			'sliceExpressionList' => 17,
			'dec' => 9,
			'shiftExpression' => 11,
			'id' => 25,
			'postfixExpression' => 32,
			'sliceExpression' => 27,
			'primaryExpression' => 14,
			'partExpression' => 28,
			'mulExpression' => 21,
			'relationalExpression' => 60,
			'unaryOperator' => 5,
			'unaryExpression' => 15
		}
	},
	{#State 38
		ACTIONS => {
			'FLOAT' => 8,
			'SQSTR' => 33,
			'BIN' => 13,
			'DEC' => 1,
			'MINUS' => 22,
			'LPAREN' => 7,
			'HEX' => 6,
			'ID' => 29,
			'PLUS' => 4,
			'NOT' => 2
		},
		GOTOS => {
			'call' => 16,
			'sliceExpressionList' => 17,
			'inExpression' => 31,
			'addExpression' => 18,
			'dec' => 9,
			'id' => 25,
			'postfixExpression' => 32,
			'shiftExpression' => 11,
			'sliceExpression' => 27,
			'partExpression' => 28,
			'primaryExpression' => 14,
			'mulExpression' => 21,
			'unaryExpression' => 15,
			'unaryOperator' => 5,
			'relationalExpression' => 61
		}
	},
	{#State 39
		ACTIONS => {
			'FLOAT' => 8,
			'SQSTR' => 33,
			'BIN' => 13,
			'DEC' => 1,
			'MINUS' => 22,
			'LPAREN' => 7,
			'ID' => 29,
			'HEX' => 6,
			'PLUS' => 4,
			'NOT' => 2
		},
		GOTOS => {
			'mulExpression' => 21,
			'unaryOperator' => 5,
			'unaryExpression' => 15,
			'sliceExpression' => 27,
			'primaryExpression' => 14,
			'partExpression' => 28,
			'dec' => 9,
			'id' => 25,
			'postfixExpression' => 32,
			'call' => 16,
			'inExpression' => 31,
			'addExpression' => 62,
			'sliceExpressionList' => 17
		}
	},
	{#State 40
		ACTIONS => {
			'FLOAT' => 8,
			'SQSTR' => 33,
			'DEC' => 1,
			'BIN' => 13,
			'PLUS' => 4,
			'NOT' => 2,
			'LPAREN' => 7,
			'MINUS' => 22,
			'ID' => 29,
			'HEX' => 6
		},
		GOTOS => {
			'unaryOperator' => 5,
			'unaryExpression' => 15,
			'mulExpression' => 21,
			'partExpression' => 28,
			'primaryExpression' => 14,
			'sliceExpression' => 27,
			'postfixExpression' => 32,
			'id' => 25,
			'dec' => 9,
			'sliceExpressionList' => 17,
			'addExpression' => 63,
			'inExpression' => 31,
			'call' => 16
		}
	},
	{#State 41
		ACTIONS => {
			'NOT' => 2,
			'PLUS' => 4,
			'HEX' => 6,
			'ID' => 29,
			'MINUS' => 22,
			'LPAREN' => 7,
			'DEC' => 1,
			'BIN' => 13,
			'SQSTR' => 33,
			'FLOAT' => 8
		},
		GOTOS => {
			'call' => 16,
			'addExpression' => 18,
			'inExpression' => 31,
			'sliceExpressionList' => 17,
			'postfixExpression' => 32,
			'sliceExpression' => 27,
			'primaryExpression' => 14,
			'partExpression' => 28,
			'unaryExpression' => 15,
			'dec' => 9,
			'equalityExpression' => 64,
			'shiftExpression' => 11,
			'id' => 25,
			'mulExpression' => 21,
			'relationalExpression' => 23,
			'unaryOperator' => 5
		}
	},
	{#State 42
		ACTIONS => {
			'ID' => 29,
			'DEC' => 1
		},
		GOTOS => {
			'id' => 65,
			'part' => 68,
			'dec' => 66,
			'call' => 67
		}
	},
	{#State 43
		ACTIONS => {
			'FLOAT' => 8,
			'DEC' => 1,
			'BIN' => 13,
			'LPAREN' => 7,
			'HEX' => 6,
			'ID' => 29,
			'SQSTR' => 33
		},
		GOTOS => {
			'id' => 25,
			'dec' => 9,
			'primaryExpression' => 14,
			'partExpression' => 69,
			'call' => 16
		}
	},
	{#State 44
		ACTIONS => {
			'MINUS' => 22,
			'LPAREN' => 7,
			'ID' => 29,
			'HEX' => 6,
			'PLUS' => 4,
			'NOT' => 2,
			'BIN' => 13,
			'DEC' => 1,
			'SQSTR' => 33,
			'FLOAT' => 8
		},
		GOTOS => {
			'unaryExpression' => 15,
			'unaryOperator' => 5,
			'mulExpression' => 70,
			'partExpression' => 28,
			'primaryExpression' => 14,
			'sliceExpression' => 27,
			'postfixExpression' => 32,
			'id' => 25,
			'dec' => 9,
			'sliceExpressionList' => 17,
			'inExpression' => 31,
			'call' => 16
		}
	},
	{#State 45
		ACTIONS => {
			'PLUS' => 4,
			'NOT' => 2,
			'MINUS' => 22,
			'LPAREN' => 7,
			'ID' => 29,
			'HEX' => 6,
			'BIN' => 13,
			'DEC' => 1,
			'SQSTR' => 33,
			'FLOAT' => 8
		},
		GOTOS => {
			'id' => 25,
			'postfixExpression' => 32,
			'dec' => 9,
			'sliceExpressionList' => 17,
			'inExpression' => 31,
			'call' => 16,
			'unaryOperator' => 5,
			'unaryExpression' => 15,
			'mulExpression' => 71,
			'partExpression' => 28,
			'primaryExpression' => 14,
			'sliceExpression' => 27
		}
	},
	{#State 46
		ACTIONS => {
			'FLOAT' => 8,
			'SQSTR' => 33,
			'DEC' => 1,
			'BIN' => 13,
			'MINUS' => 22,
			'LPAREN' => 7,
			'ID' => 29,
			'HEX' => 6,
			'PLUS' => 4,
			'NOT' => 2
		},
		GOTOS => {
			'call' => 16,
			'addExpression' => 18,
			'inExpression' => 31,
			'sliceExpressionList' => 17,
			'postfixExpression' => 32,
			'andExpression' => 12,
			'sliceExpression' => 27,
			'primaryExpression' => 14,
			'partExpression' => 28,
			'orExpression' => 30,
			'unaryExpression' => 15,
			'logicalAndExpression' => 72,
			'dec' => 9,
			'equalityExpression' => 10,
			'xorExpression' => 26,
			'shiftExpression' => 11,
			'id' => 25,
			'mulExpression' => 21,
			'relationalExpression' => 23,
			'unaryOperator' => 5
		}
	},
	{#State 47
		ACTIONS => {
			'SQSTR' => 33,
			'FLOAT' => 8,
			'NOT' => 2,
			'PLUS' => 4,
			'ID' => 29,
			'HEX' => 6,
			'LPAREN' => 7,
			'MINUS' => 22,
			'BIN' => 13,
			'DEC' => 1
		},
		GOTOS => {
			'dec' => 9,
			'postfixExpression' => 32,
			'id' => 25,
			'call' => 16,
			'inExpression' => 31,
			'sliceExpressionList' => 17,
			'unaryOperator' => 5,
			'unaryExpression' => 73,
			'sliceExpression' => 27,
			'primaryExpression' => 14,
			'partExpression' => 28
		}
	},
	{#State 48
		ACTIONS => {
			'NOT' => 2,
			'PLUS' => 4,
			'ID' => 29,
			'HEX' => 6,
			'LPAREN' => 7,
			'MINUS' => 22,
			'BIN' => 13,
			'DEC' => 1,
			'SQSTR' => 33,
			'FLOAT' => 8
		},
		GOTOS => {
			'sliceExpression' => 27,
			'partExpression' => 28,
			'primaryExpression' => 14,
			'unaryExpression' => 74,
			'unaryOperator' => 5,
			'call' => 16,
			'sliceExpressionList' => 17,
			'inExpression' => 31,
			'dec' => 9,
			'postfixExpression' => 32,
			'id' => 25
		}
	},
	{#State 49
		ACTIONS => {
			'FLOAT' => 8,
			'SQSTR' => 33,
			'BIN' => 13,
			'DEC' => 1,
			'NOT' => 2,
			'PLUS' => 4,
			'ID' => 29,
			'HEX' => 6,
			'LPAREN' => 7,
			'MINUS' => 22
		},
		GOTOS => {
			'sliceExpression' => 27,
			'primaryExpression' => 14,
			'partExpression' => 28,
			'unaryOperator' => 5,
			'unaryExpression' => 75,
			'call' => 16,
			'inExpression' => 31,
			'sliceExpressionList' => 17,
			'dec' => 9,
			'id' => 25,
			'postfixExpression' => 32
		}
	},
	{#State 50
		ACTIONS => {
			'ID' => 29,
			'HEX' => 6,
			'LPAREN' => 7,
			'MINUS' => 22,
			'NOT' => 2,
			'PLUS' => 4,
			'DEC' => 1,
			'BIN' => 13,
			'SQSTR' => 33,
			'FLOAT' => 8
		},
		GOTOS => {
			'mulExpression' => 21,
			'unaryExpression' => 15,
			'unaryOperator' => 5,
			'sliceExpression' => 27,
			'primaryExpression' => 14,
			'partExpression' => 28,
			'dec' => 9,
			'shiftExpression' => 76,
			'id' => 25,
			'postfixExpression' => 32,
			'call' => 16,
			'inExpression' => 31,
			'addExpression' => 18,
			'sliceExpressionList' => 17
		}
	},
	{#State 51
		ACTIONS => {
			'BIN' => 13,
			'DEC' => 1,
			'NOT' => 2,
			'PLUS' => 4,
			'HEX' => 6,
			'ID' => 29,
			'LPAREN' => 7,
			'MINUS' => 22,
			'FLOAT' => 8,
			'SQSTR' => 33
		},
		GOTOS => {
			'partExpression' => 28,
			'primaryExpression' => 14,
			'sliceExpression' => 27,
			'unaryOperator' => 5,
			'unaryExpression' => 15,
			'mulExpression' => 21,
			'sliceExpressionList' => 17,
			'addExpression' => 18,
			'inExpression' => 31,
			'call' => 16,
			'id' => 25,
			'postfixExpression' => 32,
			'shiftExpression' => 77,
			'dec' => 9
		}
	},
	{#State 52
		ACTIONS => {
			'DEC' => 1,
			'BIN' => 13,
			'NOT' => 2,
			'PLUS' => 4,
			'HEX' => 6,
			'ID' => 29,
			'LPAREN' => 7,
			'MINUS' => 22,
			'FLOAT' => 8,
			'SQSTR' => 33
		},
		GOTOS => {
			'partExpression' => 28,
			'primaryExpression' => 14,
			'sliceExpression' => 27,
			'unaryOperator' => 5,
			'unaryExpression' => 15,
			'mulExpression' => 21,
			'sliceExpressionList' => 17,
			'inExpression' => 31,
			'addExpression' => 18,
			'call' => 16,
			'id' => 25,
			'postfixExpression' => 32,
			'shiftExpression' => 78,
			'dec' => 9
		}
	},
	{#State 53
		ACTIONS => {
			'HEX' => 6,
			'ID' => 29,
			'MINUS' => 22,
			'LPAREN' => 7,
			'NOT' => 2,
			'PLUS' => 4,
			'BIN' => 13,
			'DEC' => 1,
			'SQSTR' => 33,
			'FLOAT' => 8
		},
		GOTOS => {
			'unaryExpression' => 15,
			'unaryOperator' => 5,
			'mulExpression' => 21,
			'partExpression' => 28,
			'primaryExpression' => 14,
			'sliceExpression' => 27,
			'id' => 25,
			'postfixExpression' => 32,
			'shiftExpression' => 79,
			'dec' => 9,
			'sliceExpressionList' => 17,
			'addExpression' => 18,
			'inExpression' => 31,
			'call' => 16
		}
	},
	{#State 54
		ACTIONS => {
			'BIN' => 13,
			'DEC' => 1,
			'PLUS' => 4,
			'NOT' => 2,
			'MINUS' => 22,
			'LPAREN' => 7,
			'ID' => 29,
			'HEX' => 6,
			'FLOAT' => 8,
			'SQSTR' => 33
		},
		GOTOS => {
			'orExpression' => 80,
			'unaryExpression' => 15,
			'primaryExpression' => 14,
			'partExpression' => 28,
			'sliceExpression' => 27,
			'andExpression' => 12,
			'postfixExpression' => 32,
			'inExpression' => 31,
			'addExpression' => 18,
			'sliceExpressionList' => 17,
			'call' => 16,
			'relationalExpression' => 23,
			'unaryOperator' => 5,
			'mulExpression' => 21,
			'shiftExpression' => 11,
			'xorExpression' => 26,
			'id' => 25,
			'dec' => 9,
			'equalityExpression' => 10
		}
	},
	{#State 55
		ACTIONS => {
			'BIN' => 13,
			'DEC' => 1,
			'ID' => 29,
			'HEX' => 6,
			'MINUS' => 22,
			'LPAREN' => 7,
			'NOT' => 2,
			'PLUS' => 4,
			'FLOAT' => 8,
			'SQSTR' => 33
		},
		GOTOS => {
			'unaryExpression' => 15,
			'andExpression' => 81,
			'sliceExpression' => 27,
			'primaryExpression' => 14,
			'partExpression' => 28,
			'postfixExpression' => 32,
			'call' => 16,
			'addExpression' => 18,
			'inExpression' => 31,
			'sliceExpressionList' => 17,
			'mulExpression' => 21,
			'relationalExpression' => 23,
			'unaryOperator' => 5,
			'dec' => 9,
			'equalityExpression' => 10,
			'shiftExpression' => 11,
			'id' => 25
		}
	},
	{#State 56
		ACTIONS => {
			'LBRACE' => 82
		},
		GOTOS => {
			'array' => 83
		}
	},
	{#State 57
		ACTIONS => {
			'FLOAT' => 8,
			'RPAREN' => -63,
			'SQSTR' => 33,
			'BIN' => 13,
			'DEC' => 1,
			'HEX' => 6,
			'ID' => 29,
			'LPAREN' => 7,
			'MINUS' => 22,
			'NOT' => 2,
			'PLUS' => 4
		},
		GOTOS => {
			'sliceExpression' => 27,
			'andExpression' => 12,
			'primaryExpression' => 14,
			'partExpression' => 28,
			'orExpression' => 30,
			'unaryExpression' => 15,
			'call' => 16,
			'inExpression' => 31,
			'addExpression' => 18,
			'sliceExpressionList' => 17,
			'expression' => 84,
			'postfixExpression' => 32,
			'logicalOrExpression' => 20,
			'OPTIONAL-2' => 86,
			'mulExpression' => 21,
			'argumentExpressionList' => 85,
			'relationalExpression' => 23,
			'unaryOperator' => 5,
			'logicalAndExpression' => 24,
			'equalityExpression' => 10,
			'dec' => 9,
			'shiftExpression' => 11,
			'xorExpression' => 26,
			'id' => 25
		}
	},
	{#State 58
		ACTIONS => {
			'DEC' => 1,
			'BIN' => 13,
			'PLUS' => 4,
			'NOT' => 2,
			'LPAREN' => 7,
			'MINUS' => 22,
			'HEX' => 6,
			'ID' => 29,
			'FLOAT' => 8,
			'SQSTR' => 33
		},
		GOTOS => {
			'unaryExpression' => 15,
			'partExpression' => 28,
			'primaryExpression' => 14,
			'sliceExpression' => 27,
			'andExpression' => 12,
			'postfixExpression' => 32,
			'sliceExpressionList' => 17,
			'inExpression' => 31,
			'addExpression' => 18,
			'call' => 16,
			'unaryOperator' => 5,
			'relationalExpression' => 23,
			'mulExpression' => 21,
			'id' => 25,
			'shiftExpression' => 11,
			'xorExpression' => 87,
			'equalityExpression' => 10,
			'dec' => 9
		}
	},
	{#State 59
		DEFAULT => -54
	},
	{#State 60
		ACTIONS => {
			'NOTEQ' => -14,
			'OROR' => -14,
			'EQEQ' => -14,
			'RBRACE' => -14,
			'OR' => -14,
			'AND' => -14,
			'LE' => 53,
			'GE' => 52,
			'' => -14,
			'ANDAND' => -14,
			'RPAREN' => -14,
			'COMMA' => -14,
			'CARET' => -14,
			'GT' => 50,
			'LT' => 51
		}
	},
	{#State 61
		ACTIONS => {
			'COMMA' => -13,
			'GT' => 50,
			'CARET' => -13,
			'LT' => 51,
			'ANDAND' => -13,
			'RPAREN' => -13,
			'LE' => 53,
			'GE' => 52,
			'' => -13,
			'AND' => -13,
			'EQEQ' => -13,
			'RBRACE' => -13,
			'OR' => -13,
			'NOTEQ' => -13,
			'OROR' => -13
		}
	},
	{#State 62
		ACTIONS => {
			'' => -22,
			'LE' => -22,
			'GE' => -22,
			'AND' => -22,
			'OR' => -22,
			'EQEQ' => -22,
			'RBRACE' => -22,
			'OROR' => -22,
			'NOTEQ' => -22,
			'MINUS' => 45,
			'GTGT' => -22,
			'PLUS' => 44,
			'LTLT' => -22,
			'GT' => -22,
			'CARET' => -22,
			'LT' => -22,
			'COMMA' => -22,
			'RPAREN' => -22,
			'ANDAND' => -22
		}
	},
	{#State 63
		ACTIONS => {
			'LTLT' => -21,
			'PLUS' => 44,
			'GTGT' => -21,
			'MINUS' => 45,
			'COMMA' => -21,
			'LT' => -21,
			'CARET' => -21,
			'GT' => -21,
			'ANDAND' => -21,
			'RPAREN' => -21,
			'LE' => -21,
			'GE' => -21,
			'' => -21,
			'AND' => -21,
			'RBRACE' => -21,
			'EQEQ' => -21,
			'OR' => -21,
			'NOTEQ' => -21,
			'OROR' => -21
		}
	},
	{#State 64
		ACTIONS => {
			'' => -11,
			'AND' => -11,
			'OR' => -11,
			'CARET' => -11,
			'RBRACE' => -11,
			'COMMA' => -11,
			'EQEQ' => 38,
			'RPAREN' => -11,
			'OROR' => -11,
			'ANDAND' => -11,
			'NOTEQ' => 37
		}
	},
	{#State 65
		DEFAULT => -51
	},
	{#State 66
		DEFAULT => -52
	},
	{#State 67
		DEFAULT => -53
	},
	{#State 68
		ACTIONS => {
			'GT2' => 89,
			'COLON' => 88
		}
	},
	{#State 69
		DEFAULT => -46
	},
	{#State 70
		ACTIONS => {
			'CARET' => -24,
			'GT' => -24,
			'LT' => -24,
			'COMMA' => -24,
			'RPAREN' => -24,
			'ANDAND' => -24,
			'MINUS' => -24,
			'GTGT' => -24,
			'PLUS' => -24,
			'LTLT' => -24,
			'STAR' => 49,
			'OR' => -24,
			'EQEQ' => -24,
			'RBRACE' => -24,
			'OROR' => -24,
			'NOTEQ' => -24,
			'' => -24,
			'LE' => -24,
			'GE' => -24,
			'SLASH' => 47,
			'AND' => -24,
			'MOD' => 48
		}
	},
	{#State 71
		ACTIONS => {
			'OR' => -25,
			'EQEQ' => -25,
			'RBRACE' => -25,
			'OROR' => -25,
			'NOTEQ' => -25,
			'' => -25,
			'GE' => -25,
			'LE' => -25,
			'MOD' => 48,
			'AND' => -25,
			'SLASH' => 47,
			'GT' => -25,
			'CARET' => -25,
			'LT' => -25,
			'COMMA' => -25,
			'RPAREN' => -25,
			'ANDAND' => -25,
			'MINUS' => -25,
			'GTGT' => -25,
			'PLUS' => -25,
			'LTLT' => -25,
			'STAR' => 49
		}
	},
	{#State 72
		ACTIONS => {
			'RBRACE' => -3,
			'COMMA' => -3,
			'' => -3,
			'ANDAND' => 54,
			'OROR' => -3,
			'RPAREN' => -3
		}
	},
	{#State 73
		DEFAULT => -28
	},
	{#State 74
		DEFAULT => -29
	},
	{#State 75
		DEFAULT => -27
	},
	{#State 76
		ACTIONS => {
			'RBRACE' => -17,
			'EQEQ' => -17,
			'OR' => -17,
			'NOTEQ' => -17,
			'OROR' => -17,
			'LE' => -17,
			'GE' => -17,
			'' => -17,
			'AND' => -17,
			'COMMA' => -17,
			'LT' => -17,
			'CARET' => -17,
			'GT' => -17,
			'ANDAND' => -17,
			'RPAREN' => -17,
			'LTLT' => 40,
			'GTGT' => 39
		}
	},
	{#State 77
		ACTIONS => {
			'' => -16,
			'LE' => -16,
			'GE' => -16,
			'AND' => -16,
			'OR' => -16,
			'RBRACE' => -16,
			'EQEQ' => -16,
			'OROR' => -16,
			'NOTEQ' => -16,
			'LTLT' => 40,
			'GTGT' => 39,
			'LT' => -16,
			'CARET' => -16,
			'GT' => -16,
			'COMMA' => -16,
			'RPAREN' => -16,
			'ANDAND' => -16
		}
	},
	{#State 78
		ACTIONS => {
			'AND' => -19,
			'' => -19,
			'LE' => -19,
			'GE' => -19,
			'OROR' => -19,
			'NOTEQ' => -19,
			'OR' => -19,
			'EQEQ' => -19,
			'RBRACE' => -19,
			'GTGT' => 39,
			'LTLT' => 40,
			'RPAREN' => -19,
			'ANDAND' => -19,
			'GT' => -19,
			'CARET' => -19,
			'LT' => -19,
			'COMMA' => -19
		}
	},
	{#State 79
		ACTIONS => {
			'RBRACE' => -18,
			'EQEQ' => -18,
			'OR' => -18,
			'NOTEQ' => -18,
			'OROR' => -18,
			'LE' => -18,
			'GE' => -18,
			'' => -18,
			'AND' => -18,
			'COMMA' => -18,
			'LT' => -18,
			'CARET' => -18,
			'GT' => -18,
			'ANDAND' => -18,
			'RPAREN' => -18,
			'LTLT' => 40,
			'GTGT' => 39
		}
	},
	{#State 80
		ACTIONS => {
			'OR' => 58,
			'RBRACE' => -5,
			'COMMA' => -5,
			'OROR' => -5,
			'RPAREN' => -5,
			'ANDAND' => -5,
			'' => -5
		}
	},
	{#State 81
		ACTIONS => {
			'' => -9,
			'AND' => 41,
			'COMMA' => -9,
			'RBRACE' => -9,
			'CARET' => -9,
			'OR' => -9,
			'ANDAND' => -9,
			'OROR' => -9,
			'RPAREN' => -9
		}
	},
	{#State 82
		ACTIONS => {
			'RBRACE' => -40,
			'SQSTR' => 33,
			'FLOAT' => 8,
			'PLUS' => 4,
			'NOT' => 2,
			'MINUS' => 22,
			'LPAREN' => 7,
			'HEX' => 6,
			'ID' => 29,
			'DEC' => 1,
			'BIN' => 13
		},
		GOTOS => {
			'orExpression' => 30,
			'unaryExpression' => 15,
			'primaryExpression' => 14,
			'partExpression' => 28,
			'items' => 90,
			'andExpression' => 12,
			'sliceExpression' => 27,
			'logicalOrExpression' => 20,
			'expression' => 91,
			'postfixExpression' => 32,
			'addExpression' => 18,
			'inExpression' => 31,
			'sliceExpressionList' => 17,
			'call' => 16,
			'relationalExpression' => 23,
			'unaryOperator' => 5,
			'mulExpression' => 21,
			'item' => 93,
			'OPTIONAL-1' => 92,
			'xorExpression' => 26,
			'shiftExpression' => 11,
			'id' => 25,
			'equalityExpression' => 10,
			'dec' => 9,
			'logicalAndExpression' => 24
		}
	},
	{#State 83
		DEFAULT => -37
	},
	{#State 84
		DEFAULT => -68
	},
	{#State 85
		ACTIONS => {
			'COMMA' => 94,
			'RPAREN' => -62
		}
	},
	{#State 86
		ACTIONS => {
			'RPAREN' => 95
		}
	},
	{#State 87
		ACTIONS => {
			'' => -7,
			'OR' => -7,
			'CARET' => 55,
			'COMMA' => -7,
			'RBRACE' => -7,
			'RPAREN' => -7,
			'OROR' => -7,
			'ANDAND' => -7
		}
	},
	{#State 88
		ACTIONS => {
			'ID' => 29,
			'DEC' => 1
		},
		GOTOS => {
			'call' => 67,
			'id' => 65,
			'part' => 96,
			'dec' => 66
		}
	},
	{#State 89
		DEFAULT => -48
	},
	{#State 90
		ACTIONS => {
			'COMMA' => 97,
			'RBRACE' => -39
		}
	},
	{#State 91
		DEFAULT => -44
	},
	{#State 92
		ACTIONS => {
			'RBRACE' => 98
		}
	},
	{#State 93
		DEFAULT => -43
	},
	{#State 94
		ACTIONS => {
			'BIN' => 13,
			'DEC' => 1,
			'PLUS' => 4,
			'NOT' => 2,
			'MINUS' => 22,
			'LPAREN' => 7,
			'HEX' => 6,
			'ID' => 29,
			'FLOAT' => 8,
			'SQSTR' => 33
		},
		GOTOS => {
			'primaryExpression' => 14,
			'partExpression' => 28,
			'sliceExpression' => 27,
			'andExpression' => 12,
			'orExpression' => 30,
			'unaryExpression' => 15,
			'addExpression' => 18,
			'inExpression' => 31,
			'sliceExpressionList' => 17,
			'call' => 16,
			'expression' => 99,
			'postfixExpression' => 32,
			'logicalOrExpression' => 20,
			'relationalExpression' => 23,
			'unaryOperator' => 5,
			'mulExpression' => 21,
			'logicalAndExpression' => 24,
			'xorExpression' => 26,
			'shiftExpression' => 11,
			'id' => 25,
			'dec' => 9,
			'equalityExpression' => 10
		}
	},
	{#State 95
		DEFAULT => -64
	},
	{#State 96
		ACTIONS => {
			'GT2' => 100
		}
	},
	{#State 97
		ACTIONS => {
			'PLUS' => 4,
			'NOT' => 2,
			'MINUS' => 22,
			'LPAREN' => 7,
			'HEX' => 6,
			'ID' => 29,
			'BIN' => 13,
			'DEC' => 1,
			'SQSTR' => 33,
			'FLOAT' => 8
		},
		GOTOS => {
			'dec' => 9,
			'equalityExpression' => 10,
			'id' => 25,
			'shiftExpression' => 11,
			'xorExpression' => 26,
			'logicalAndExpression' => 24,
			'item' => 101,
			'mulExpression' => 21,
			'unaryOperator' => 5,
			'relationalExpression' => 23,
			'expression' => 91,
			'postfixExpression' => 32,
			'logicalOrExpression' => 20,
			'call' => 16,
			'sliceExpressionList' => 17,
			'inExpression' => 31,
			'addExpression' => 18,
			'unaryExpression' => 15,
			'orExpression' => 30,
			'sliceExpression' => 27,
			'andExpression' => 12,
			'partExpression' => 28,
			'primaryExpression' => 14
		}
	},
	{#State 98
		DEFAULT => -41
	},
	{#State 99
		DEFAULT => -67
	},
	{#State 100
		DEFAULT => -49
	},
	{#State 101
		DEFAULT => -42
	}
],
    yyrules  =>
[
	[#Rule _SUPERSTART
		 '$start', 2, undef
#line 1868 Parser.pm
	],
	[#Rule start_1
		 'start', 1, undef
#line 1872 Parser.pm
	],
	[#Rule expression_2
		 'expression', 1, undef
#line 1876 Parser.pm
	],
	[#Rule logicalOrExpression_3
		 'logicalOrExpression', 3,
sub {
#line 19 "Grammar.eyp"
 { type => 'expression', left => $_[1], op => $_[2], right => $_[3]  } }
#line 1883 Parser.pm
	],
	[#Rule logicalOrExpression_4
		 'logicalOrExpression', 1, undef
#line 1887 Parser.pm
	],
	[#Rule logicalAndExpression_5
		 'logicalAndExpression', 3,
sub {
#line 24 "Grammar.eyp"
 { type => 'expression', left => $_[1], op => $_[2], right => $_[3]  } }
#line 1894 Parser.pm
	],
	[#Rule logicalAndExpression_6
		 'logicalAndExpression', 1, undef
#line 1898 Parser.pm
	],
	[#Rule orExpression_7
		 'orExpression', 3,
sub {
#line 29 "Grammar.eyp"
 { type => 'expression', left => $_[1], op => $_[2], right => $_[3]  } }
#line 1905 Parser.pm
	],
	[#Rule orExpression_8
		 'orExpression', 1, undef
#line 1909 Parser.pm
	],
	[#Rule xorExpression_9
		 'xorExpression', 3,
sub {
#line 34 "Grammar.eyp"
 { type => 'expression', left => $_[1], op => $_[2], right => $_[3]  } }
#line 1916 Parser.pm
	],
	[#Rule xorExpression_10
		 'xorExpression', 1, undef
#line 1920 Parser.pm
	],
	[#Rule andExpression_11
		 'andExpression', 3,
sub {
#line 39 "Grammar.eyp"
 { type => 'expression', left => $_[1], op => $_[2], right => $_[3]  } }
#line 1927 Parser.pm
	],
	[#Rule andExpression_12
		 'andExpression', 1, undef
#line 1931 Parser.pm
	],
	[#Rule equalityExpression_13
		 'equalityExpression', 3,
sub {
#line 44 "Grammar.eyp"
 { type => 'expression', left => $_[1], op => $_[2], right => $_[3]  } }
#line 1938 Parser.pm
	],
	[#Rule equalityExpression_14
		 'equalityExpression', 3,
sub {
#line 45 "Grammar.eyp"
 { type => 'expression', left => $_[1], op => $_[2], right => $_[3]  } }
#line 1945 Parser.pm
	],
	[#Rule equalityExpression_15
		 'equalityExpression', 1, undef
#line 1949 Parser.pm
	],
	[#Rule relationalExpression_16
		 'relationalExpression', 3,
sub {
#line 50 "Grammar.eyp"
 { type => 'expression', left => $_[1], op => $_[2], right => $_[3]  } }
#line 1956 Parser.pm
	],
	[#Rule relationalExpression_17
		 'relationalExpression', 3,
sub {
#line 51 "Grammar.eyp"
 { type => 'expression', left => $_[1], op => $_[2], right => $_[3]  } }
#line 1963 Parser.pm
	],
	[#Rule relationalExpression_18
		 'relationalExpression', 3,
sub {
#line 52 "Grammar.eyp"
 { type => 'expression', left => $_[1], op => $_[2], right => $_[3]  } }
#line 1970 Parser.pm
	],
	[#Rule relationalExpression_19
		 'relationalExpression', 3,
sub {
#line 53 "Grammar.eyp"
 { type => 'expression', left => $_[1], op => $_[2], right => $_[3]  } }
#line 1977 Parser.pm
	],
	[#Rule relationalExpression_20
		 'relationalExpression', 1, undef
#line 1981 Parser.pm
	],
	[#Rule shiftExpression_21
		 'shiftExpression', 3,
sub {
#line 58 "Grammar.eyp"
 { type => 'expression', left => $_[1], op => $_[2], right => $_[3]  } }
#line 1988 Parser.pm
	],
	[#Rule shiftExpression_22
		 'shiftExpression', 3,
sub {
#line 59 "Grammar.eyp"
 { type => 'expression', left => $_[1], op => $_[2], right => $_[3]  } }
#line 1995 Parser.pm
	],
	[#Rule shiftExpression_23
		 'shiftExpression', 1, undef
#line 1999 Parser.pm
	],
	[#Rule addExpression_24
		 'addExpression', 3,
sub {
#line 64 "Grammar.eyp"
 { type => 'expression', left => $_[1], op => $_[2], right => $_[3]  } }
#line 2006 Parser.pm
	],
	[#Rule addExpression_25
		 'addExpression', 3,
sub {
#line 65 "Grammar.eyp"
 { type => 'expression', left => $_[1], op => $_[2], right => $_[3]  } }
#line 2013 Parser.pm
	],
	[#Rule addExpression_26
		 'addExpression', 1, undef
#line 2017 Parser.pm
	],
	[#Rule mulExpression_27
		 'mulExpression', 3,
sub {
#line 70 "Grammar.eyp"
 { type => 'expression', left => $_[1], op => $_[2], right => $_[3]  } }
#line 2024 Parser.pm
	],
	[#Rule mulExpression_28
		 'mulExpression', 3,
sub {
#line 71 "Grammar.eyp"
 { type => 'expression', left => $_[1], op => $_[2], right => $_[3]  } }
#line 2031 Parser.pm
	],
	[#Rule mulExpression_29
		 'mulExpression', 3,
sub {
#line 72 "Grammar.eyp"
 { type => 'expression', left => $_[1], op => $_[2], right => $_[3]  } }
#line 2038 Parser.pm
	],
	[#Rule mulExpression_30
		 'mulExpression', 1, undef
#line 2042 Parser.pm
	],
	[#Rule unaryExpression_31
		 'unaryExpression', 2,
sub {
#line 77 "Grammar.eyp"
 { type => 'unary', op => $_[1], expression => $_[2] } }
#line 2049 Parser.pm
	],
	[#Rule unaryExpression_32
		 'unaryExpression', 1, undef
#line 2053 Parser.pm
	],
	[#Rule unaryOperator_33
		 'unaryOperator', 1, undef
#line 2057 Parser.pm
	],
	[#Rule unaryOperator_34
		 'unaryOperator', 1, undef
#line 2061 Parser.pm
	],
	[#Rule unaryOperator_35
		 'unaryOperator', 1, undef
#line 2065 Parser.pm
	],
	[#Rule postfixExpression_36
		 'postfixExpression', 1, undef
#line 2069 Parser.pm
	],
	[#Rule inExpression_37
		 'inExpression', 3,
sub {
#line 92 "Grammar.eyp"
 { type => 'inexpression', left => $_[1], items => $_[3] } }
#line 2076 Parser.pm
	],
	[#Rule inExpression_38
		 'inExpression', 1, undef
#line 2080 Parser.pm
	],
	[#Rule _OPTIONAL
		 'OPTIONAL-1', 1,
sub {
#line 97 "Grammar.eyp"
 goto &Parse::Eyapp::Driver::YYActionforT_single }
#line 2087 Parser.pm
	],
	[#Rule _OPTIONAL
		 'OPTIONAL-1', 0,
sub {
#line 97 "Grammar.eyp"
 goto &Parse::Eyapp::Driver::YYActionforT_empty }
#line 2094 Parser.pm
	],
	[#Rule array_41
		 'array', 3,
sub {
#line 97 "Grammar.eyp"
 $_[2][0] // [] }
#line 2101 Parser.pm
	],
	[#Rule items_42
		 'items', 3,
sub {
#line 101 "Grammar.eyp"
 push @{$_[1]}, $_[3]; $_[1] }
#line 2108 Parser.pm
	],
	[#Rule items_43
		 'items', 1,
sub {
#line 102 "Grammar.eyp"
 [ $_[1] ] }
#line 2115 Parser.pm
	],
	[#Rule item_44
		 'item', 1, undef
#line 2119 Parser.pm
	],
	[#Rule sliceExpression_45
		 'sliceExpression', 1,
sub {
#line 110 "Grammar.eyp"
 my $tmp = scalar @{$_[1]} == 1 ? $_[1]->[0] : { type => 'slice', arguments => $_[1] // [] }; $tmp }
#line 2126 Parser.pm
	],
	[#Rule sliceExpressionList_46
		 'sliceExpressionList', 3,
sub {
#line 114 "Grammar.eyp"
 push @{$_[1]}, $_[3]; $_[1] }
#line 2133 Parser.pm
	],
	[#Rule sliceExpressionList_47
		 'sliceExpressionList', 1,
sub {
#line 115 "Grammar.eyp"
 [$_[1]] }
#line 2140 Parser.pm
	],
	[#Rule partExpression_48
		 'partExpression', 4,
sub {
#line 119 "Grammar.eyp"
 { type => 'part', expression => $_[1], from => $_[3], to => $_[3]  } }
#line 2147 Parser.pm
	],
	[#Rule partExpression_49
		 'partExpression', 6,
sub {
#line 120 "Grammar.eyp"
 { type => 'part', expression => $_[1], from => $_[3], to => $_[5]  } }
#line 2154 Parser.pm
	],
	[#Rule partExpression_50
		 'partExpression', 1, undef
#line 2158 Parser.pm
	],
	[#Rule part_51
		 'part', 1, undef
#line 2162 Parser.pm
	],
	[#Rule part_52
		 'part', 1, undef
#line 2166 Parser.pm
	],
	[#Rule part_53
		 'part', 1, undef
#line 2170 Parser.pm
	],
	[#Rule primaryExpression_54
		 'primaryExpression', 3,
sub {
#line 131 "Grammar.eyp"
 $_[2] }
#line 2177 Parser.pm
	],
	[#Rule primaryExpression_55
		 'primaryExpression', 1,
sub {
#line 132 "Grammar.eyp"
 { type => 'bin',		value => $_[1] } }
#line 2184 Parser.pm
	],
	[#Rule primaryExpression_56
		 'primaryExpression', 1,
sub {
#line 133 "Grammar.eyp"
 { type => 'hex',		value => $_[1] } }
#line 2191 Parser.pm
	],
	[#Rule primaryExpression_57
		 'primaryExpression', 1,
sub {
#line 134 "Grammar.eyp"
 { type => 'float', 	value => $_[1] } }
#line 2198 Parser.pm
	],
	[#Rule primaryExpression_58
		 'primaryExpression', 1,
sub {
#line 135 "Grammar.eyp"
 { type => 'sqstr',	value => $_[1] } }
#line 2205 Parser.pm
	],
	[#Rule primaryExpression_59
		 'primaryExpression', 1, undef
#line 2209 Parser.pm
	],
	[#Rule primaryExpression_60
		 'primaryExpression', 1, undef
#line 2213 Parser.pm
	],
	[#Rule primaryExpression_61
		 'primaryExpression', 1, undef
#line 2217 Parser.pm
	],
	[#Rule _OPTIONAL
		 'OPTIONAL-2', 1,
sub {
#line 142 "Grammar.eyp"
 goto &Parse::Eyapp::Driver::YYActionforT_single }
#line 2224 Parser.pm
	],
	[#Rule _OPTIONAL
		 'OPTIONAL-2', 0,
sub {
#line 142 "Grammar.eyp"
 goto &Parse::Eyapp::Driver::YYActionforT_empty }
#line 2231 Parser.pm
	],
	[#Rule call_64
		 'call', 4,
sub {
#line 142 "Grammar.eyp"
 { type => 'call', name => $_[1], arguments => $_[3][0] // [] } }
#line 2238 Parser.pm
	],
	[#Rule id_65
		 'id', 1,
sub {
#line 145 "Grammar.eyp"
 { type => 'id',		value => $_[1] } }
#line 2245 Parser.pm
	],
	[#Rule dec_66
		 'dec', 1,
sub {
#line 148 "Grammar.eyp"
 { type => 'dec',		value => $_[1] } }
#line 2252 Parser.pm
	],
	[#Rule argumentExpressionList_67
		 'argumentExpressionList', 3,
sub {
#line 152 "Grammar.eyp"
 push @{$_[1]}, $_[3]; $_[1] }
#line 2259 Parser.pm
	],
	[#Rule argumentExpressionList_68
		 'argumentExpressionList', 1,
sub {
#line 153 "Grammar.eyp"
 [ $_[1] ] }
#line 2266 Parser.pm
	]
],
#line 2269 Parser.pm
    yybypass       => 0,
    yybuildingtree => 0,
    yyprefix       => '',
    yyaccessors    => {
   },
    yyconflicthandlers => {}
,
    yystateconflict => {  },
    @_,
  );
  bless($self,$class);

  $self->make_node_classes('TERMINAL', '_OPTIONAL', '_STAR_LIST', '_PLUS_LIST', 
         '_SUPERSTART', 
         'start_1', 
         'expression_2', 
         'logicalOrExpression_3', 
         'logicalOrExpression_4', 
         'logicalAndExpression_5', 
         'logicalAndExpression_6', 
         'orExpression_7', 
         'orExpression_8', 
         'xorExpression_9', 
         'xorExpression_10', 
         'andExpression_11', 
         'andExpression_12', 
         'equalityExpression_13', 
         'equalityExpression_14', 
         'equalityExpression_15', 
         'relationalExpression_16', 
         'relationalExpression_17', 
         'relationalExpression_18', 
         'relationalExpression_19', 
         'relationalExpression_20', 
         'shiftExpression_21', 
         'shiftExpression_22', 
         'shiftExpression_23', 
         'addExpression_24', 
         'addExpression_25', 
         'addExpression_26', 
         'mulExpression_27', 
         'mulExpression_28', 
         'mulExpression_29', 
         'mulExpression_30', 
         'unaryExpression_31', 
         'unaryExpression_32', 
         'unaryOperator_33', 
         'unaryOperator_34', 
         'unaryOperator_35', 
         'postfixExpression_36', 
         'inExpression_37', 
         'inExpression_38', 
         '_OPTIONAL', 
         '_OPTIONAL', 
         'array_41', 
         'items_42', 
         'items_43', 
         'item_44', 
         'sliceExpression_45', 
         'sliceExpressionList_46', 
         'sliceExpressionList_47', 
         'partExpression_48', 
         'partExpression_49', 
         'partExpression_50', 
         'part_51', 
         'part_52', 
         'part_53', 
         'primaryExpression_54', 
         'primaryExpression_55', 
         'primaryExpression_56', 
         'primaryExpression_57', 
         'primaryExpression_58', 
         'primaryExpression_59', 
         'primaryExpression_60', 
         'primaryExpression_61', 
         '_OPTIONAL', 
         '_OPTIONAL', 
         'call_64', 
         'id_65', 
         'dec_66', 
         'argumentExpressionList_67', 
         'argumentExpressionList_68', );
  $self;
}

#line 156 "Grammar.eyp"

require 'Lexer.pl';
__PACKAGE__->lexer(\&EXPRESSION_LEXER);


=for None

=cut


#line 2366 Parser.pm



1;
