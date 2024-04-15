/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs0.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table0(t_small_table *v)
{
	v->arr[0] = 28;
	v->arr[0] = 3;
	v->arr[1] = 1;
	v->arr[2] = sym_comment;
	v->arr[3] = 415;
	v->arr[4] = 1;
	v->arr[5] = anon_sym_LPAREN;
	v->arr[6] = 1410;
	v->arr[7] = 1;
	v->arr[8] = anon_sym_LT_LT_LT;
	v->arr[9] = 1412;
	v->arr[10] = 1;
	v->arr[11] = anon_sym_DOLLAR_LBRACK;
	v->arr[12] = 1414;
	v->arr[13] = 1;
	init_small_table1(v);
}

void	init_small_table1(t_small_table *v)
{
	v->arr[14] = anon_sym_DOLLAR;
	v->arr[15] = 1416;
	v->arr[16] = 1;
	v->arr[17] = sym__special_character;
	v->arr[18] = 1418;
	v->arr[19] = 1;
	v->arr[20] = anon_sym_DQUOTE;
	v->arr[21] = 1420;
	v->arr[22] = 1;
	v->arr[23] = aux_sym_number_token1;
	v->arr[24] = 1422;
	v->arr[25] = 1;
	v->arr[26] = aux_sym_number_token2;
	v->arr[27] = 1424;
	v->arr[28] = 1;
	init_small_table2(v);
}

void	init_small_table2(t_small_table *v)
{
	v->arr[29] = anon_sym_DOLLAR_LBRACE;
	v->arr[30] = 1426;
	v->arr[31] = 1;
	v->arr[32] = anon_sym_DOLLAR_LPAREN;
	v->arr[33] = 1428;
	v->arr[34] = 1;
	v->arr[35] = anon_sym_BQUOTE;
	v->arr[36] = 1430;
	v->arr[37] = 1;
	v->arr[38] = anon_sym_DOLLAR_BQUOTE;
	v->arr[39] = 1434;
	v->arr[40] = 1;
	v->arr[41] = sym_test_operator;
	v->arr[42] = 1436;
	v->arr[43] = 1;
	init_small_table3(v);
}

void	init_small_table3(t_small_table *v)
{
	v->arr[44] = sym__bare_dollar;
	v->arr[45] = 1438;
	v->arr[46] = 1;
	v->arr[47] = sym__brace_start;
	v->arr[48] = 540;
	v->arr[49] = 1;
	v->arr[50] = aux_sym_command_repeat2;
	v->arr[51] = 1045;
	v->arr[52] = 1;
	v->arr[53] = aux_sym__literal_repeat1;
	v->arr[54] = 1181;
	v->arr[55] = 1;
	v->arr[56] = sym_herestring_redirect;
	v->arr[57] = 1182;
	v->arr[58] = 1;
	init_small_table4(v);
}

void	init_small_table4(t_small_table *v)
{
	v->arr[59] = sym_concatenation;
	v->arr[60] = 4991;
	v->arr[61] = 1;
	v->arr[62] = sym_subshell;
	v->arr[63] = 1402;
	v->arr[64] = 2;
	v->arr[65] = anon_sym_LPAREN_LPAREN;
	v->arr[66] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[67] = 1406;
	v->arr[68] = 2;
	v->arr[69] = anon_sym_EQ_EQ;
	v->arr[70] = anon_sym_EQ_TILDE;
	v->arr[71] = 1408;
	v->arr[72] = 2;
	v->arr[73] = sym_file_descriptor;
	init_small_table5(v);
}

// file funcs0.c
