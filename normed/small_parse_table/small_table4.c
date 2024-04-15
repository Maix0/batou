/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table20(t_small_table *v)
{
	v->arr[299] = sym_herestring_redirect;
	v->arr[300] = 5116;
	v->arr[301] = 1;
	v->arr[302] = sym_subshell;
	v->arr[303] = 1408;
	v->arr[304] = 2;
	v->arr[305] = sym_file_descriptor;
	v->arr[306] = aux_sym_heredoc_redirect_token1;
	v->arr[307] = 1446;
	v->arr[308] = 2;
	v->arr[309] = anon_sym_LPAREN_LPAREN;
	v->arr[310] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[311] = 1448;
	v->arr[312] = 2;
	v->arr[313] = anon_sym_EQ_EQ;
	init_small_table21(v);
}

void	init_small_table21(t_small_table *v)
{
	v->arr[314] = anon_sym_EQ_TILDE;
	v->arr[315] = 1472;
	v->arr[316] = 2;
	v->arr[317] = anon_sym_LT_LPAREN;
	v->arr[318] = anon_sym_GT_LPAREN;
	v->arr[319] = 1444;
	v->arr[320] = 3;
	v->arr[321] = sym_raw_string;
	v->arr[322] = sym_ansi_c_string;
	v->arr[323] = sym_word;
	v->arr[324] = 985;
	v->arr[325] = 9;
	v->arr[326] = sym_arithmetic_expansion;
	v->arr[327] = sym_brace_expression;
	v->arr[328] = sym_string;
	init_small_table22(v);
}

void	init_small_table22(t_small_table *v)
{
	v->arr[329] = sym_translated_string;
	v->arr[330] = sym_number;
	v->arr[331] = sym_simple_expansion;
	v->arr[332] = sym_expansion;
	v->arr[333] = sym_command_substitution;
	v->arr[334] = sym_process_substitution;
	v->arr[335] = 1404;
	v->arr[336] = 21;
	v->arr[337] = anon_sym_SEMI;
	v->arr[338] = anon_sym_PIPE_PIPE;
	v->arr[339] = anon_sym_AMP_AMP;
	v->arr[340] = anon_sym_PIPE;
	v->arr[341] = anon_sym_AMP;
	v->arr[342] = anon_sym_LT;
	v->arr[343] = anon_sym_GT;
	init_small_table23(v);
}

void	init_small_table23(t_small_table *v)
{
	v->arr[344] = anon_sym_LT_LT;
	v->arr[345] = anon_sym_GT_GT;
	v->arr[346] = anon_sym_SEMI_SEMI;
	v->arr[347] = anon_sym_SEMI_AMP;
	v->arr[348] = anon_sym_SEMI_SEMI_AMP;
	v->arr[349] = anon_sym_PIPE_AMP;
	v->arr[350] = anon_sym_AMP_GT;
	v->arr[351] = anon_sym_AMP_GT_GT;
	v->arr[352] = anon_sym_LT_AMP;
	v->arr[353] = anon_sym_GT_AMP;
	v->arr[354] = anon_sym_GT_PIPE;
	v->arr[355] = anon_sym_LT_AMP_DASH;
	v->arr[356] = anon_sym_GT_AMP_DASH;
	v->arr[357] = anon_sym_LT_LT_DASH;
	v->arr[359] = 28;
	init_small_table24(v);
}

void	init_small_table24(t_small_table *v)
{
	v->arr[359] = 3;
	v->arr[360] = 1;
	v->arr[361] = sym_comment;
	v->arr[362] = 677;
	v->arr[363] = 1;
	v->arr[364] = anon_sym_LPAREN;
	v->arr[365] = 1450;
	v->arr[366] = 1;
	v->arr[367] = anon_sym_LT_LT_LT;
	v->arr[368] = 1452;
	v->arr[369] = 1;
	v->arr[370] = anon_sym_DOLLAR_LBRACK;
	v->arr[371] = 1454;
	v->arr[372] = 1;
	v->arr[373] = anon_sym_DOLLAR;
	init_small_table25(v);
}

// file funcs4.c
