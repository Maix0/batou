/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs328.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table1640(t_small_table *v)
{
	v->arr[24599] = sym_word;
	v->arr[24600] = 1968;
	v->arr[24601] = 9;
	v->arr[24602] = sym_arithmetic_expansion;
	v->arr[24603] = sym_brace_expression;
	v->arr[24604] = sym_string;
	v->arr[24605] = sym_translated_string;
	v->arr[24606] = sym_number;
	v->arr[24607] = sym_simple_expansion;
	v->arr[24608] = sym_expansion;
	v->arr[24609] = sym_command_substitution;
	v->arr[24610] = sym_process_substitution;
	v->arr[24611] = 2072;
	v->arr[24612] = 19;
	v->arr[24613] = anon_sym_SEMI;
	init_small_table1641(v);
}

void	init_small_table1641(t_small_table *v)
{
	v->arr[24614] = anon_sym_PIPE_PIPE;
	v->arr[24615] = anon_sym_AMP_AMP;
	v->arr[24616] = anon_sym_PIPE;
	v->arr[24617] = anon_sym_AMP;
	v->arr[24618] = anon_sym_LT;
	v->arr[24619] = anon_sym_GT;
	v->arr[24620] = anon_sym_LT_LT;
	v->arr[24621] = anon_sym_GT_GT;
	v->arr[24622] = anon_sym_SEMI_SEMI;
	v->arr[24623] = anon_sym_PIPE_AMP;
	v->arr[24624] = anon_sym_AMP_GT;
	v->arr[24625] = anon_sym_AMP_GT_GT;
	v->arr[24626] = anon_sym_LT_AMP;
	v->arr[24627] = anon_sym_GT_AMP;
	v->arr[24628] = anon_sym_GT_PIPE;
	init_small_table1642(v);
}

void	init_small_table1642(t_small_table *v)
{
	v->arr[24629] = anon_sym_LT_AMP_DASH;
	v->arr[24630] = anon_sym_GT_AMP_DASH;
	v->arr[24631] = anon_sym_LT_LT_DASH;
	v->arr[24633] = 21;
	v->arr[24633] = 3;
	v->arr[24634] = 1;
	v->arr[24635] = sym_comment;
	v->arr[24636] = 3580;
	v->arr[24637] = 1;
	v->arr[24638] = anon_sym_DQUOTE;
	v->arr[24639] = 3610;
	v->arr[24640] = 1;
	v->arr[24641] = anon_sym_DOLLAR_LBRACK;
	v->arr[24642] = 3612;
	v->arr[24643] = 1;
	init_small_table1643(v);
}

void	init_small_table1643(t_small_table *v)
{
	v->arr[24644] = anon_sym_DOLLAR;
	v->arr[24645] = 3616;
	v->arr[24646] = 1;
	v->arr[24647] = aux_sym_number_token1;
	v->arr[24648] = 3618;
	v->arr[24649] = 1;
	v->arr[24650] = aux_sym_number_token2;
	v->arr[24651] = 3620;
	v->arr[24652] = 1;
	v->arr[24653] = anon_sym_DOLLAR_LBRACE;
	v->arr[24654] = 3622;
	v->arr[24655] = 1;
	v->arr[24656] = anon_sym_DOLLAR_LPAREN;
	v->arr[24657] = 3624;
	v->arr[24658] = 1;
	init_small_table1644(v);
}

void	init_small_table1644(t_small_table *v)
{
	v->arr[24659] = anon_sym_BQUOTE;
	v->arr[24660] = 3626;
	v->arr[24661] = 1;
	v->arr[24662] = anon_sym_DOLLAR_BQUOTE;
	v->arr[24663] = 3632;
	v->arr[24664] = 1;
	v->arr[24665] = sym__brace_start;
	v->arr[24666] = 4133;
	v->arr[24667] = 1;
	v->arr[24668] = sym__special_character;
	v->arr[24669] = 4135;
	v->arr[24670] = 1;
	v->arr[24671] = sym_test_operator;
	v->arr[24672] = 2270;
	v->arr[24673] = 1;
	init_small_table1645(v);
}

// file funcs328.c
