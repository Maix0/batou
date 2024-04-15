/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2860.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table14300(t_small_table *v)
{
	v->arr[214499] = sym_subscript;
	v->arr[214500] = sym__arithmetic_expression;
	v->arr[214501] = sym__arithmetic_literal;
	v->arr[214502] = sym__arithmetic_parenthesized_expression;
	v->arr[214503] = sym_string;
	v->arr[214504] = sym_number;
	v->arr[214505] = sym_simple_expansion;
	v->arr[214506] = sym_expansion;
	v->arr[214507] = sym_command_substitution;
	v->arr[214509] = 18;
	v->arr[214509] = 3;
	v->arr[214510] = 1;
	v->arr[214511] = sym_comment;
	v->arr[214512] = 8512;
	v->arr[214513] = 1;
	init_small_table14301(v);
}

void	init_small_table14301(t_small_table *v)
{
	v->arr[214514] = anon_sym_DOLLAR_LBRACK;
	v->arr[214515] = 8514;
	v->arr[214516] = 1;
	v->arr[214517] = anon_sym_DOLLAR;
	v->arr[214518] = 8518;
	v->arr[214519] = 1;
	v->arr[214520] = anon_sym_DQUOTE;
	v->arr[214521] = 8522;
	v->arr[214522] = 1;
	v->arr[214523] = aux_sym_number_token1;
	v->arr[214524] = 8524;
	v->arr[214525] = 1;
	v->arr[214526] = aux_sym_number_token2;
	v->arr[214527] = 8526;
	v->arr[214528] = 1;
	init_small_table14302(v);
}

void	init_small_table14302(t_small_table *v)
{
	v->arr[214529] = anon_sym_DOLLAR_LBRACE;
	v->arr[214530] = 8528;
	v->arr[214531] = 1;
	v->arr[214532] = anon_sym_DOLLAR_LPAREN;
	v->arr[214533] = 8530;
	v->arr[214534] = 1;
	v->arr[214535] = anon_sym_BQUOTE;
	v->arr[214536] = 8532;
	v->arr[214537] = 1;
	v->arr[214538] = anon_sym_DOLLAR_BQUOTE;
	v->arr[214539] = 8542;
	v->arr[214540] = 1;
	v->arr[214541] = sym__brace_start;
	v->arr[214542] = 10220;
	v->arr[214543] = 1;
	init_small_table14303(v);
}

void	init_small_table14303(t_small_table *v)
{
	v->arr[214544] = sym_word;
	v->arr[214545] = 10226;
	v->arr[214546] = 1;
	v->arr[214547] = sym__comment_word;
	v->arr[214548] = 8508;
	v->arr[214549] = 2;
	v->arr[214550] = anon_sym_LPAREN_LPAREN;
	v->arr[214551] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[214552] = 8534;
	v->arr[214553] = 2;
	v->arr[214554] = anon_sym_LT_LPAREN;
	v->arr[214555] = anon_sym_GT_LPAREN;
	v->arr[214556] = 10222;
	v->arr[214557] = 2;
	v->arr[214558] = sym_test_operator;
	init_small_table14304(v);
}

void	init_small_table14304(t_small_table *v)
{
	v->arr[214559] = sym__special_character;
	v->arr[214560] = 10224;
	v->arr[214561] = 3;
	v->arr[214562] = sym__bare_dollar;
	v->arr[214563] = sym_raw_string;
	v->arr[214564] = sym_ansi_c_string;
	v->arr[214565] = 2514;
	v->arr[214566] = 9;
	v->arr[214567] = sym_arithmetic_expansion;
	v->arr[214568] = sym_brace_expression;
	v->arr[214569] = sym_string;
	v->arr[214570] = sym_translated_string;
	v->arr[214571] = sym_number;
	v->arr[214572] = sym_simple_expansion;
	v->arr[214573] = sym_expansion;
	init_small_table14305(v);
}

// file funcs2860.c
