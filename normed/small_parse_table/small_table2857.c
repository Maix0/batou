/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2857.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table14285(t_small_table *v)
{
	v->arr[214274] = sym_test_operator;
	v->arr[214275] = sym__special_character;
	v->arr[214276] = 10210;
	v->arr[214277] = 3;
	v->arr[214278] = sym__bare_dollar;
	v->arr[214279] = sym_raw_string;
	v->arr[214280] = sym_ansi_c_string;
	v->arr[214281] = 6494;
	v->arr[214282] = 9;
	v->arr[214283] = sym_arithmetic_expansion;
	v->arr[214284] = sym_brace_expression;
	v->arr[214285] = sym_string;
	v->arr[214286] = sym_translated_string;
	v->arr[214287] = sym_number;
	v->arr[214288] = sym_simple_expansion;
	init_small_table14286(v);
}

void	init_small_table14286(t_small_table *v)
{
	v->arr[214289] = sym_expansion;
	v->arr[214290] = sym_command_substitution;
	v->arr[214291] = sym_process_substitution;
	v->arr[214293] = 18;
	v->arr[214293] = 3;
	v->arr[214294] = 1;
	v->arr[214295] = sym_comment;
	v->arr[214296] = 3401;
	v->arr[214297] = 1;
	v->arr[214298] = aux_sym_number_token1;
	v->arr[214299] = 3403;
	v->arr[214300] = 1;
	v->arr[214301] = aux_sym_number_token2;
	v->arr[214302] = 3407;
	v->arr[214303] = 1;
	init_small_table14287(v);
}

void	init_small_table14287(t_small_table *v)
{
	v->arr[214304] = anon_sym_DOLLAR_LPAREN;
	v->arr[214305] = 3417;
	v->arr[214306] = 1;
	v->arr[214307] = sym__brace_start;
	v->arr[214308] = 8926;
	v->arr[214309] = 1;
	v->arr[214310] = anon_sym_DOLLAR_LBRACK;
	v->arr[214311] = 8930;
	v->arr[214312] = 1;
	v->arr[214313] = anon_sym_DQUOTE;
	v->arr[214314] = 8934;
	v->arr[214315] = 1;
	v->arr[214316] = anon_sym_DOLLAR_LBRACE;
	v->arr[214317] = 8936;
	v->arr[214318] = 1;
	init_small_table14288(v);
}

void	init_small_table14288(t_small_table *v)
{
	v->arr[214319] = anon_sym_BQUOTE;
	v->arr[214320] = 8938;
	v->arr[214321] = 1;
	v->arr[214322] = anon_sym_DOLLAR_BQUOTE;
	v->arr[214323] = 9696;
	v->arr[214324] = 1;
	v->arr[214325] = sym_word;
	v->arr[214326] = 9704;
	v->arr[214327] = 1;
	v->arr[214328] = sym__comment_word;
	v->arr[214329] = 10214;
	v->arr[214330] = 1;
	v->arr[214331] = anon_sym_DOLLAR;
	v->arr[214332] = 8924;
	v->arr[214333] = 2;
	init_small_table14289(v);
}

void	init_small_table14289(t_small_table *v)
{
	v->arr[214334] = anon_sym_LPAREN_LPAREN;
	v->arr[214335] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[214336] = 8940;
	v->arr[214337] = 2;
	v->arr[214338] = anon_sym_LT_LPAREN;
	v->arr[214339] = anon_sym_GT_LPAREN;
	v->arr[214340] = 9700;
	v->arr[214341] = 2;
	v->arr[214342] = sym_test_operator;
	v->arr[214343] = sym__special_character;
	v->arr[214344] = 9702;
	v->arr[214345] = 3;
	v->arr[214346] = sym__bare_dollar;
	v->arr[214347] = sym_raw_string;
	v->arr[214348] = sym_ansi_c_string;
	init_small_table14290(v);
}

// file funcs2857.c
