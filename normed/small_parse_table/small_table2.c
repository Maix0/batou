/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table10(t_small_table *v)
{
	v->arr[149] = anon_sym_DOLLAR_LBRACE;
	v->arr[150] = 1426;
	v->arr[151] = 1;
	v->arr[152] = anon_sym_DOLLAR_LPAREN;
	v->arr[153] = 1428;
	v->arr[154] = 1;
	v->arr[155] = anon_sym_BQUOTE;
	v->arr[156] = 1430;
	v->arr[157] = 1;
	v->arr[158] = anon_sym_DOLLAR_BQUOTE;
	v->arr[159] = 1434;
	v->arr[160] = 1;
	v->arr[161] = sym_test_operator;
	v->arr[162] = 1436;
	v->arr[163] = 1;
	init_small_table11(v);
}

void	init_small_table11(t_small_table *v)
{
	v->arr[164] = sym__bare_dollar;
	v->arr[165] = 1438;
	v->arr[166] = 1;
	v->arr[167] = sym__brace_start;
	v->arr[168] = 535;
	v->arr[169] = 1;
	v->arr[170] = aux_sym_command_repeat2;
	v->arr[171] = 1045;
	v->arr[172] = 1;
	v->arr[173] = aux_sym__literal_repeat1;
	v->arr[174] = 1181;
	v->arr[175] = 1;
	v->arr[176] = sym_herestring_redirect;
	v->arr[177] = 1182;
	v->arr[178] = 1;
	init_small_table12(v);
}

void	init_small_table12(t_small_table *v)
{
	v->arr[179] = sym_concatenation;
	v->arr[180] = 4977;
	v->arr[181] = 1;
	v->arr[182] = sym_subshell;
	v->arr[183] = 1402;
	v->arr[184] = 2;
	v->arr[185] = anon_sym_LPAREN_LPAREN;
	v->arr[186] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[187] = 1406;
	v->arr[188] = 2;
	v->arr[189] = anon_sym_EQ_EQ;
	v->arr[190] = anon_sym_EQ_TILDE;
	v->arr[191] = 1432;
	v->arr[192] = 2;
	v->arr[193] = anon_sym_LT_LPAREN;
	init_small_table13(v);
}

void	init_small_table13(t_small_table *v)
{
	v->arr[194] = anon_sym_GT_LPAREN;
	v->arr[195] = 1442;
	v->arr[196] = 2;
	v->arr[197] = sym_file_descriptor;
	v->arr[198] = aux_sym_heredoc_redirect_token1;
	v->arr[199] = 1400;
	v->arr[200] = 3;
	v->arr[201] = sym_raw_string;
	v->arr[202] = sym_ansi_c_string;
	v->arr[203] = sym_word;
	v->arr[204] = 874;
	v->arr[205] = 9;
	v->arr[206] = sym_arithmetic_expansion;
	v->arr[207] = sym_brace_expression;
	v->arr[208] = sym_string;
	init_small_table14(v);
}

void	init_small_table14(t_small_table *v)
{
	v->arr[209] = sym_translated_string;
	v->arr[210] = sym_number;
	v->arr[211] = sym_simple_expansion;
	v->arr[212] = sym_expansion;
	v->arr[213] = sym_command_substitution;
	v->arr[214] = sym_process_substitution;
	v->arr[215] = 1440;
	v->arr[216] = 22;
	v->arr[217] = anon_sym_SEMI;
	v->arr[218] = anon_sym_PIPE_PIPE;
	v->arr[219] = anon_sym_AMP_AMP;
	v->arr[220] = anon_sym_PIPE;
	v->arr[221] = anon_sym_AMP;
	v->arr[222] = anon_sym_LT;
	v->arr[223] = anon_sym_GT;
	init_small_table15(v);
}

// file funcs2.c
