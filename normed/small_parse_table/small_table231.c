/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs231.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table1155(t_small_table *v)
{
	v->arr[17324] = 1;
	v->arr[17325] = sym__special_character;
	v->arr[17326] = 1185;
	v->arr[17327] = 1;
	v->arr[17328] = sym_test_operator;
	v->arr[17329] = 3050;
	v->arr[17330] = 1;
	v->arr[17331] = anon_sym_LPAREN;
	v->arr[17332] = 3052;
	v->arr[17333] = 1;
	v->arr[17334] = anon_sym_BANG;
	v->arr[17335] = 3058;
	v->arr[17336] = 1;
	v->arr[17337] = anon_sym_TILDE;
	v->arr[17338] = 3060;
	init_small_table1156(v);
}

void	init_small_table1156(t_small_table *v)
{
	v->arr[17339] = 1;
	v->arr[17340] = anon_sym_BQUOTE;
	v->arr[17341] = 3064;
	v->arr[17342] = 1;
	v->arr[17343] = sym_variable_name;
	v->arr[17344] = 3586;
	v->arr[17345] = 1;
	v->arr[17346] = aux_sym__simple_variable_name_token1;
	v->arr[17347] = 2387;
	v->arr[17348] = 1;
	v->arr[17349] = sym_command_substitution;
	v->arr[17350] = 2484;
	v->arr[17351] = 1;
	v->arr[17352] = aux_sym__literal_repeat1;
	v->arr[17353] = 2801;
	init_small_table1157(v);
}

void	init_small_table1157(t_small_table *v)
{
	v->arr[17354] = 1;
	v->arr[17355] = sym__arithmetic_binary_expression;
	v->arr[17356] = 2803;
	v->arr[17357] = 1;
	v->arr[17358] = sym__arithmetic_ternary_expression;
	v->arr[17359] = 2809;
	v->arr[17360] = 1;
	v->arr[17361] = sym__arithmetic_unary_expression;
	v->arr[17362] = 2825;
	v->arr[17363] = 1;
	v->arr[17364] = sym__arithmetic_postfix_expression;
	v->arr[17365] = 3108;
	v->arr[17366] = 1;
	v->arr[17367] = sym__expression;
	v->arr[17368] = 1129;
	init_small_table1158(v);
}

void	init_small_table1158(t_small_table *v)
{
	v->arr[17369] = 2;
	v->arr[17370] = anon_sym_LPAREN_LPAREN;
	v->arr[17371] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[17372] = 1165;
	v->arr[17373] = 2;
	v->arr[17374] = anon_sym_LT_LPAREN;
	v->arr[17375] = anon_sym_GT_LPAREN;
	v->arr[17376] = 1183;
	v->arr[17377] = 2;
	v->arr[17378] = sym_raw_string;
	v->arr[17379] = sym_ansi_c_string;
	v->arr[17380] = 3054;
	v->arr[17381] = 2;
	v->arr[17382] = anon_sym_PLUS_PLUS2;
	v->arr[17383] = anon_sym_DASH_DASH2;
	init_small_table1159(v);
}

void	init_small_table1159(t_small_table *v)
{
	v->arr[17384] = 3056;
	v->arr[17385] = 2;
	v->arr[17386] = anon_sym_DASH2;
	v->arr[17387] = anon_sym_PLUS2;
	v->arr[17388] = 2397;
	v->arr[17389] = 4;
	v->arr[17390] = sym_string;
	v->arr[17391] = sym_number;
	v->arr[17392] = sym_simple_expansion;
	v->arr[17393] = sym_expansion;
	v->arr[17394] = 2456;
	v->arr[17395] = 4;
	v->arr[17396] = sym_arithmetic_expansion;
	v->arr[17397] = sym_brace_expression;
	v->arr[17398] = sym_translated_string;
	init_small_table1160(v);
}

// file funcs231.c
