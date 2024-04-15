/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs283.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table1415(t_small_table *v)
{
	v->arr[21224] = 7;
	v->arr[21225] = anon_sym_PIPE;
	v->arr[21226] = anon_sym_LT;
	v->arr[21227] = anon_sym_GT;
	v->arr[21228] = anon_sym_LT_LT;
	v->arr[21229] = anon_sym_AMP_GT;
	v->arr[21230] = anon_sym_LT_AMP;
	v->arr[21231] = anon_sym_GT_AMP;
	v->arr[21232] = 1491;
	v->arr[21233] = 9;
	v->arr[21234] = anon_sym_PIPE_PIPE;
	v->arr[21235] = anon_sym_AMP_AMP;
	v->arr[21236] = anon_sym_GT_GT;
	v->arr[21237] = anon_sym_PIPE_AMP;
	v->arr[21238] = anon_sym_AMP_GT_GT;
	init_small_table1416(v);
}

void	init_small_table1416(t_small_table *v)
{
	v->arr[21239] = anon_sym_GT_PIPE;
	v->arr[21240] = anon_sym_LT_AMP_DASH;
	v->arr[21241] = anon_sym_GT_AMP_DASH;
	v->arr[21242] = anon_sym_LT_LT_DASH;
	v->arr[21243] = 2211;
	v->arr[21244] = 9;
	v->arr[21245] = sym_arithmetic_expansion;
	v->arr[21246] = sym_brace_expression;
	v->arr[21247] = sym_string;
	v->arr[21248] = sym_translated_string;
	v->arr[21249] = sym_number;
	v->arr[21250] = sym_simple_expansion;
	v->arr[21251] = sym_expansion;
	v->arr[21252] = sym_command_substitution;
	v->arr[21253] = sym_process_substitution;
	init_small_table1417(v);
}

void	init_small_table1417(t_small_table *v)
{
	v->arr[21255] = 27;
	v->arr[21255] = 71;
	v->arr[21256] = 1;
	v->arr[21257] = sym_comment;
	v->arr[21258] = 2628;
	v->arr[21259] = 1;
	v->arr[21260] = sym_word;
	v->arr[21261] = 2634;
	v->arr[21262] = 1;
	v->arr[21263] = anon_sym_LT_LT_LT;
	v->arr[21264] = 2636;
	v->arr[21265] = 1;
	v->arr[21266] = anon_sym_DOLLAR_LBRACK;
	v->arr[21267] = 2638;
	v->arr[21268] = 1;
	init_small_table1418(v);
}

void	init_small_table1418(t_small_table *v)
{
	v->arr[21269] = anon_sym_DOLLAR;
	v->arr[21270] = 2640;
	v->arr[21271] = 1;
	v->arr[21272] = sym__special_character;
	v->arr[21273] = 2642;
	v->arr[21274] = 1;
	v->arr[21275] = anon_sym_DQUOTE;
	v->arr[21276] = 2646;
	v->arr[21277] = 1;
	v->arr[21278] = aux_sym_number_token1;
	v->arr[21279] = 2648;
	v->arr[21280] = 1;
	v->arr[21281] = aux_sym_number_token2;
	v->arr[21282] = 2650;
	v->arr[21283] = 1;
	init_small_table1419(v);
}

void	init_small_table1419(t_small_table *v)
{
	v->arr[21284] = anon_sym_DOLLAR_LBRACE;
	v->arr[21285] = 2652;
	v->arr[21286] = 1;
	v->arr[21287] = anon_sym_DOLLAR_LPAREN;
	v->arr[21288] = 2654;
	v->arr[21289] = 1;
	v->arr[21290] = anon_sym_BQUOTE;
	v->arr[21291] = 2656;
	v->arr[21292] = 1;
	v->arr[21293] = anon_sym_DOLLAR_BQUOTE;
	v->arr[21294] = 2660;
	v->arr[21295] = 1;
	v->arr[21296] = sym_test_operator;
	v->arr[21297] = 2662;
	v->arr[21298] = 1;
	init_small_table1420(v);
}

// file funcs283.c
