# decision tree.
#
# https://github.com/MahdiSafsafi/AMED
#
package Generator::DecisionTree;
use strict;
use warnings;
no warnings "portable";
use LogOnce;
use feature qw/say state/;
use Storable qw/dclone/;
use Data::Dump qw/pp/;
use List::Util qw/min max uniq/;
no warnings "recursion";
use Exporter qw/import/;
use CExpression::Utils qw/join_expressions make_expression make_id make_mask/;
use CExpression::Printer;

use Generator::Binary::Utils qw/get_bit_count int2bin/;
use Generator::Utils qw/indented_print/;

my $log = LogOnce->new();

our @EXPORT             = qw/print_tree get_tree init_node node2array array2node/;
our $useSwitch          = 1;
our $minSwitchCaseCount = 3;
our $maxSwitchCaseCount = 400;

my $DIVIDE_TREE_FAILED     = 0;
my $DIVIDE_TREE_OK         = 1;
my $DIVIDE_TREE_EMPTY_MASK = 2;

my %byte2var = (
	1 => 'a',
	2 => 'b',
	3 => 'c',
	4 => 'd',
	5 => 'e',
	6 => 'f',
	7 => 'g',
	8 => 'h',
);
my %byte2shift = (
	1 => 0,
	2 => 8,
	3 => 16,
	4 => 24,
	5 => 32,
	6 => 40,
	7 => 48,
	8 => 56,
);

sub get_blessed_var_from_byte { exists $byte2var{ $_[0] } ? $byte2var{ $_[0] } : '' }

sub get_blessed_byte_from_mask {
	my ($mask) = @_;

	( $mask & 0xffffffffffffff00 ) or return 1;
	( $mask & 0xffffffffffff00ff ) or return 2;
	( $mask & 0xffffffffff00ffff ) or return 3;
	( $mask & 0xffffffff00ffffff ) or return 4;
	( $mask & 0xffffff00ffffffff ) or return 5;
	( $mask & 0xffff00ffffffffff ) or return 6;
	( $mask & 0xff00ffffffffffff ) or return 7;
	( $mask & 0x00ffffffffffffff ) or return 8;
	
	return 0;
}

sub array2node {
	my ($array_ref) = @_;
	my $first = my $node = {};
	my $last = undef;
	foreach my $item (@$array_ref) {
		$last = $node;
		$node = $node->{next} = {};
	}
	$last->{next} = undef;
	return $first;
}

sub node2array {
	my ($node) = @_;
	my @array  = ();
	my $entry  = $node;
	while ($entry) {
		push @array, $entry;
		$entry = $entry->{next};
	}
	return wantarray ? @array : \@array;
}

sub init_node {
	my ( $node, $type ) = @_;
	while ($node) {
		my $what = $node->{data};
		$node->{opcode} = $what->{diagram}->{opcode};
		$node->{mask}   = $what->{diagram}->{mask};
		$node->{type}   = $type;
		$node->{tmask}   = $what->{diagram}->{tmask};
		if ( $type eq 'iclass' ) {
			$node->{id}         = $what->{iid};
			$node->{expression} = $what->{cexpressions};
		}
		elsif ( $type eq 'encoding' ) {
			$node->{id}         = $what->{tags}->{eid};
			$node->{expression} = $what->{cexpressions};
		}
		$node = $node->{next};
	}
}

sub comment_tree {
	my ( $tree, $comment ) = @_;
	push @{ $tree->{comments} }, $comment;
}

sub get_best_node {
	my ($array) = @_;
	my @array   = @$array;
	my $sort    = sub {
		my $n1 = get_bit_count( $a->{mask}, 1 );
		my $n2 = get_bit_count( $b->{mask}, 1 );
		$n1 != $n2 and return $n1 <=> $n2;
		$n1 = $a->{expression} ? 0 : 1;
		$n2 = $b->{expression} ? 0 : 1;
		$n1 != $n2 and return $n2 <=> $n1;
		return 0;
	};
	@array = sort $sort @array;
  again:
	my $first = my $current = shift @array;
	if ( !$first->{mask} && !$first->{expression} ) {
		push @array, $first;
		goto again;
	}
	foreach my $node (@array) {
		$current->{next} = $node;
		$current = $node;
	}
	$current->{next} = undef;
	return $first;
}

sub get_node_constraint {
	my ( $node, $mask ) = @_;
	$node->{cmask} or return undef;
	my $cnsts = $node->{cnsts};
	foreach my $cnst (@$cnsts) {
		my $cmask = $cnst->{mask};
		if ( ( $mask & $cmask ) == $cmask ) {
			return $cnst;
		}
	}
	return undef;
}

sub get_global_constraint {
	my ( $node, $outmask ) = @_;
	my ( $gmask, $lmask ) = ( -1, -1 );
	my $entry = $node;
	while ($entry) {
		if ( $entry->{cmask} ) {

			# has constraint
			$lmask = $entry->{cmask};
			$gmask &= $lmask;
		}
		$entry = $entry->{next};
	}
	$gmask ||= $lmask;
	( $gmask == -1 || !$gmask ) and return undef;
	$$outmask = $gmask;
	$entry    = $node;
	while ($entry) {
		my $constraint = get_node_constraint( $entry, $gmask );
		$constraint and return $constraint;
		$entry = $entry->{next};
	}
	return undef;
}

sub fork_node {
	my ($node) = @_;
	my $data   = delete $node->{data};
	my $fork   = dclone $node;
	$node->{data} = $data;
	$fork->{data} = $data;
	return $fork;
}

sub divide_cnsts {
	my ( $tree, $node ) = @_;
  again:
	my $append = sub {
		my ( $toplevel, $dst, $src ) = @_;
		$$src->{next} = undef;
		unless ($$toplevel) {
			$$toplevel = $$dst = $$src;
		}
		else {
			$$dst->{next} = $$src;
			$$dst = $$src;
		}
	};
	my $outmask = 0;
	my $constraint = get_global_constraint( $node, \$outmask );
	unless ($constraint) {

		return divide_tree( $tree, $node );
	}

	my ( $gcmask, $gcvalue, $ctext ) = ( $constraint->{mask}, $constraint->{value}, $constraint->{text} );

	my $cnode  = my $ccurrent  = undef;
	my $ncnode = my $nccurrent = undef;
	my $entry  = $node;

	while ($entry) {
		my $current = $entry;
		my $cnsts   = $current->{cnsts};
		my $opcode  = $current->{opcode};
		my $mask    = $current->{mask};
		$entry = $entry->{next};
		my $constraint = get_node_constraint( $current, $gcmask );
		if ($constraint) {
			my ( $cmask, $cvalue ) = ( $constraint->{mask}, $constraint->{value} );
			unless ($gcmask) {
				$gcmask  = $cmask;
				$gcvalue = $cvalue;
				$ctext   = $constraint->{text};
			}
			if ( $cmask == $gcmask && $gcvalue == $cvalue ) {
				$append->( \$cnode, \$ccurrent, \$current );
				$current->{cmask} &= ~$gcmask;
				next;
			}
		}

		if ( ( ( $mask & $gcmask ) == $gcmask ) ) {
			if ( ( $opcode & $gcmask ) == $gcvalue ) {
				$append->( \$ncnode, \$nccurrent, \$current );
			}
			else {
				$append->( \$cnode, \$ccurrent, \$current );
			}
			next;
		}
		$current->{next} = undef;
		my $fork = fork_node($current);
		$append->( \$ncnode, \$nccurrent, \$current );
		$append->( \$cnode,  \$ccurrent,  \$fork );
	}

	unless ($ncnode) {
		$node = $cnode;
		goto again;
	}

	comment_tree( $tree, $ctext );
	$tree->{expression} = sprintf( "(%s & 0x%08x) != 0x%08x", 'opcode', $gcmask, $gcvalue );
	$tree->{type} = 'if';
	$tree->{case}->{0} = { expression => '', case => {} };
	$tree->{case}->{1} = { expression => '', case => {} };
  end:
	$cnode  and divide_tree( $tree->{case}->{1}, $cnode );
	$ncnode and divide_tree( $tree->{case}->{0}, $ncnode );
}

sub state_has_cnsts {
	my ( $tree, $node ) = @_;
	my $entry = $node;
	while ($entry) {
		$entry->{cmask} and return 1;
		$entry = $entry->{next};
	}
	return 0;
}

sub cnsts_to_cexpression {
	my ($cnsts) = @_;
	my @data = ();
	foreach my $item (@$cnsts) {
		push @data, sprintf "(opcode & 0x%08x) != 0x%08x", $item->{mask}, $item->{value};
	}
	scalar @data > 1 and @data = map { "($_)" } @data;
	my $data = join( ' && ', @data );
	return $data;
}

sub divide_hi_bits {
	my ( $tree, $node ) = @_;
	my @nodes = node2array($node);
	@nodes = sort {
		my $n1 = get_bit_count( $a->{tmask}, 1 );
		my $n2 = get_bit_count( $b->{tmask}, 1 );
		$n2 <=> $n1;
	} @nodes;
	my $first = my $current = shift @nodes;
	foreach my $node (@nodes) {
		$current->{next} = $node;
		$current = $node;
	}
	$current->{next} = undef;
	my @expression = ( sprintf( "(%s & 0x%08x) == 0x%08x", 'opcode', $first->{data}->{diagram}->{mask}, $first->{data}->{diagram}->{opcode} ) );
	my $cnsts = $first->{cnsts};    # $first->{data}->{diagram}->{cnsts};
	$cnsts && @$cnsts and push @expression, cnsts_to_cexpression($cnsts);
	scalar @expression > 1 and @expression = map { "($_)" } @expression;
	my $expression = join( ' && ', @expression );
	$tree->{expression} = $expression;
	$tree->{type}       = 'if';
	my $next = $first->{next};
	$first->{next} = undef;
	$tree->{case}->{0} = { expression => '', case => {} };
	$tree->{case}->{1} = { expression => '', case => {} };
	divide_tree( $tree->{case}->{1}, $first );
	divide_tree( $tree->{case}->{0}, $next );
}

sub mark_conflicts {
	my ($node) = @_;
	my $entry = $node;
	while ($entry) {
		my $current = $entry->{data};
		$entry = $entry->{next};
		if ($entry) {
			my $next = $entry->{data};
			$current->{next} = $next->{index};
			$next->{next}    = 0;
		}
	}
}

sub get_full_expression {
	my ($node) = @_;
	my @data = ();
	$node->{mask} and push @data, sprintf "(opcode & 0x%08x) == 0x%08x", $node->{mask}, $node->{opcode};
	if ( $node->{data}->{cnsts} && scalar @{ $node->{data}->{cnsts} } ) {
		foreach my $cnst ( @{ $node->{data}->{cnsts} } ) {
			push @data, sprintf "(opcode & 0x%08x) != 0x%08x", $node->{mask}, $node->{value};
		}
	}
	scalar @data > 1 and @data = map { "($_)" } @data;
	my $data = join( ' && ', @data );
	return $data;
}

sub divide_conflict_node {
	my ( $tree, $node ) = @_;
	my @nodes    = node2array($node);
	my $conflict = undef;
	foreach my $first (@nodes) {
		my $mask = -1;
		foreach my $second (@nodes) {
			$first == $second and next;
			$mask &= $second->{mask};
		}
		if ( !$mask ) {
			defined $conflict and return 0;    # another conflict node.
			$conflict = $first;
		}
	}
	if ( $conflict && $conflict->{cnsts} && scalar @{ $conflict->{cnsts} } ) {
		return $conflict;
	}
	else {
		return 0;
	}
	@nodes = grep { $_ != $conflict } @nodes;
	my $next = array2node( \@nodes );
	$tree->{type}       = 'if';
	$tree->{expression} = get_full_expression($conflict);
	$tree->{case}->{0} = { expression => '', case => {} };
	$tree->{case}->{1} = { expression => '', case => {} };
	divide_tree( $tree->{case}->{1}, $conflict );
	divide_tree( $tree->{case}->{0}, $next );
}

sub divide_conflicts {
	my ( $tree, $node ) = @_;
	
	unless ( $node->{conflict} ) {
		my @nodes = node2array($node);
		comment_tree( $tree, 'conflicts:' );
		foreach my $node (@nodes) {
			$node->{conflict}++;
			my $comment = sprintf "%s.%-20s : %s", $node->{type}, $node->{id}, int2bin( $node->{opcode}, $node->{mask} );
			comment_tree( $tree, $comment );
		}
	}

	# divide_conflict_node($tree, $node) and return;

	if ( state_has_cnsts( $tree, $node ) ) {
		divide_cnsts( $tree, $node );
	}
	else {
		divide_hi_bits( $tree, $node );
	}
}

sub divide_tree_terminal {
	my ( $tree, $node ) = @_;
	if ( defined $node->{next} ) {
		divide_conflicts( $tree, $node );
	}
	elsif ( $node->{child} ) {
		$tree->{node} = $node;
		divide_tree( $tree, $node->{child} );
	}
	else {
		$tree->{node} = $node;
	}
	return $DIVIDE_TREE_OK;
}

sub get_effective_mask {
	my ($node) = @_;
	my $entry  = $node;
	my $mask   = -1;
	my ( $zero, $one ) = ( -1, -1 );
	while ($entry) {
		$mask &= $entry->{mask};
		my $value = $entry->{opcode} & $mask;
		$one  &= $value;
		$zero &= ( ~$value ) & $mask;
		$entry = $entry->{next};
	}
	my $imask = $one | $zero;
	$mask ^= $imask;
	return $mask;
}

sub divide_tree_using_switch {
	my ( $tree, $node ) = @_;
	$useSwitch or return $DIVIDE_TREE_FAILED;
	my $entry = $node;
	my $mask  = get_effective_mask($node);
	$mask or goto finished;

	my $number_of_bit = get_bit_count( $mask, 1 );
	$number_of_bit < 2 and return $DIVIDE_TREE_FAILED;

	my $byte = get_blessed_byte_from_mask($mask) or return $DIVIDE_TREE_FAILED;
	my $var  = get_blessed_var_from_byte($byte)  or return $DIVIDE_TREE_FAILED;

	my $case = {};
	my $min  = undef;
	my $sr   = $byte2shift{$byte};

	$entry = $node;
	while ($entry) {
		my $value = $entry->{opcode} & $mask;
		$value >>= $sr;
		defined $min or $min = $value;
		$min = min( $min, $value );
		$case->{$value}++;
		$entry = $entry->{next};
	}
	my $case_count = scalar keys %$case;
	( $case_count < $minSwitchCaseCount || $case_count > $maxSwitchCaseCount )
	  and return $DIVIDE_TREE_FAILED;

	$case  = {};
	$entry = $node;
	my $nexts = {};
	while ($entry) {
		my $tmp = $entry;
		$tmp->{mask} &= ~$mask;
		my $value = $tmp->{opcode} & $mask;
		$value >>= $sr;
		$value -= $min;
		$entry = $entry->{next};
		if ( !exists $case->{$value} ) {
			$case->{$value}  = $tmp;
			$nexts->{$value} = $tmp;
			$tmp->{next}     = undef;
		}
		else {
			# my $previous = $case->{$value};
			# $case->{$value} = $tmp;
			# $tmp->{next} = $previous;
			$tmp->{next} = undef;
			my $previous = $nexts->{$value};
			$previous->{next} = $tmp;
			$nexts->{$value} = $tmp;
		}
	}
	my $var_mask = $mask >> $sr;

	$tree->{expression} =
	  $min
	  ? sprintf( "(%s & 0x%02x) - %d", $var, $var_mask, $min )
	  : sprintf( "%s & 0x%02x",        $var, $var_mask );

	$tree->{type} = 'switch';
	$tree->{case} = $case;
	foreach my $key ( sort keys %$case ) {
		my $value = $case->{$key};
		divide_tree( $case->{$key} = {}, $value );
	}
	return $DIVIDE_TREE_OK;

  finished:
	return divide_tree_terminal( $tree, $node );
}

sub divide_tree_using_if {
	my ( $tree, $node ) = @_;
	goto finished unless ( $node->{next} );
  doItAgain:
	my ( $bit, $mask ) = ( -1, -1 );
	my $entry = $node;
	while ($entry) {
		$mask &= $entry->{mask};
		$entry = $entry->{next};
	}

	$mask or goto finished;

	++$bit while ( !( $mask & ( 1 << $bit ) ) );
	my $bitmask = ( 1 << $bit );

	my $byte = get_blessed_byte_from_mask($bitmask) or return $DIVIDE_TREE_FAILED;
	my $var  = get_blessed_var_from_byte($byte)     or return $DIVIDE_TREE_FAILED;
	
	my $sr       = $byte2shift{$byte};
	my $var_mask = $bitmask >> $sr;

	$tree->{expression} = sprintf "%s & 0x%02x", $var, $var_mask;
	$tree->{type} = 'if';

	my $node0 = my $list0 = { next => undef };
	my $node1 = my $list1 = { next => undef };

	$entry = $node;
	while ($entry) {
		if ( $entry->{opcode} & $bitmask ) {
			$entry->{mask} &= ~$bitmask;
			$node1->{next} = $entry;
			$entry         = $entry->{next};
			$node1         = $node1->{next};
			$node1->{next} = undef;
		}
		else {
			$entry->{mask} &= ~$bitmask;
			$node0->{next} = $entry;
			$entry         = $entry->{next};
			$node0         = $node0->{next};
			$node0->{next} = undef;
		}
	}

	if ( !$list0->{next} ) {
		$node = $list1->{next};
		goto doItAgain;
	}
	elsif ( !$list1->{next} ) {
		$node = $list0->{next};
		goto doItAgain;
	}

	$tree->{case}->{0} = { expression => '', case => {} };
	$tree->{case}->{1} = { expression => '', case => {} };
	divide_tree( $tree->{case}->{0}, $list0->{next} );
	divide_tree( $tree->{case}->{1}, $list1->{next} );
	return $DIVIDE_TREE_OK;

  finished:
	return divide_tree_terminal( $tree, $node );
}

sub divide_tree {
	my ( $tree, $node ) = @_;
	die "node is empty" unless (%$node);

	state $deepRecursion = 0;
	die "deep recursion in divide_tree!" if ( $deepRecursion++ > 100000 );
	my $result = $DIVIDE_TREE_FAILED;

	$result = divide_tree_using_switch( $tree, $node );
	$result or $result = divide_tree_using_if( $tree, $node );
	return $result;
}

sub print_tree {
	my ( $fh, $indent, $tree ) = @_;
	my $expression = $tree->{expression};
	my $node       = $tree->{node};
	my $type       = $tree->{type} // '';
	my $comments   = $tree->{comments};
	if ($comments) {
		indented_print( $fh, $indent, sprintf "// %s\n", $_ ) foreach (@$comments);
	}
	if ($node) {
		my $type = $node->{type};

		my $entry = $node;
		while ($entry) {
			if ( $entry->{cnsts} ) {
				my @text = ();
				push @text, $_->{text} foreach ( @{ $entry->{cnsts} } );
				my $text = join( ' ', @text );

				#	indented_print( $fh, $indent, sprintf "// %s\n", $text );
			}
			indented_print( $fh, $indent, sprintf "// %s.%s\n", $entry->{type}, $entry->{id} );
			$entry->{comment} 
			and indented_print( $fh, $indent, sprintf "// %s;\n", $entry->{comment} );
			indented_print( $fh, $indent, sprintf "return %s;\n", $entry->{index} );

			$entry = $entry->{next};
		}
	}
	if ( $type eq 'if' ) {
		indented_print( $fh, $indent, sprintf "if (%s)\n", $expression );
		indented_print( $fh, $indent, "{\n" );
		print_tree( $fh, $indent + 2, $tree->{case}->{1} );
		indented_print( $fh, $indent, "}\n" );
		indented_print( $fh, $indent, "else\n" );
		indented_print( $fh, $indent, "{\n" );
		print_tree( $fh, $indent + 2, $tree->{case}->{0} );
		indented_print( $fh, $indent, "}\n" );
	}
	elsif ( $type eq 'switch' ) {
		my $count = scalar keys %{ $tree->{case} };
		indented_print( $fh, $indent, sprintf "// the following switch contains %d case.\n", $count );
		indented_print( $fh, $indent, sprintf "switch (%s)\n",                               $expression );
		indented_print( $fh, $indent, "{\n" );
		$indent += 2;
		foreach my $key ( sort { $a - $b } keys %{ $tree->{case} } ) {
			indented_print( $fh, $indent, sprintf "case 0x%02x:\n", $key );
			indented_print( $fh, $indent, "{\n" );
			print_tree( $fh, $indent + 2, $tree->{case}->{$key} );
			indented_print( $fh, $indent + 2, "break;\n" );
			indented_print( $fh, $indent,     "}\n" );
		}
		indented_print( $fh, $indent, "default: break;\n" );
		$indent -= 2;
		indented_print( $fh, $indent, "}\n" );
	}
}

sub get_tree {
	my ($node) = @_;
	my $tree = {};
	divide_tree( $tree, $node );
	return $tree;
}

1;
