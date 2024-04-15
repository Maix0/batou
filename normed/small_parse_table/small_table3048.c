/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs3048.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table15240(t_small_table *v)
{
	v->arr[228599] = sym_subscript;
	v->arr[228600] = sym__arithmetic_expression;
	v->arr[228601] = sym__arithmetic_literal;
	v->arr[228602] = sym__arithmetic_parenthesized_expression;
	v->arr[228603] = sym_string;
	v->arr[228604] = sym_number;
	v->arr[228605] = sym_simple_expansion;
	v->arr[228606] = sym_expansion;
	v->arr[228607] = sym_command_substitution;
	v->arr[228609] = 18;
	v->arr[228609] = 3;
	v->arr[228610] = 1;
	v->arr[228611] = sym_comment;
	v->arr[228612] = 2038;
	v->arr[228613] = 1;
	init_small_table15241(v);
}

void	init_small_table15241(t_small_table *v)
{
	v->arr[228614] = anon_sym_DOLLAR;
	v->arr[228615] = 2044;
	v->arr[228616] = 1;
	v->arr[228617] = aux_sym_number_token1;
	v->arr[228618] = 2046;
	v->arr[228619] = 1;
	v->arr[228620] = aux_sym_number_token2;
	v->arr[228621] = 2050;
	v->arr[228622] = 1;
	v->arr[228623] = anon_sym_DOLLAR_LPAREN;
	v->arr[228624] = 2064;
	v->arr[228625] = 1;
	v->arr[228626] = sym__brace_start;
	v->arr[228627] = 8344;
	v->arr[228628] = 1;
	init_small_table15242(v);
}

void	init_small_table15242(t_small_table *v)
{
	v->arr[228629] = anon_sym_DOLLAR_LBRACK;
	v->arr[228630] = 8348;
	v->arr[228631] = 1;
	v->arr[228632] = anon_sym_DQUOTE;
	v->arr[228633] = 8352;
	v->arr[228634] = 1;
	v->arr[228635] = anon_sym_DOLLAR_LBRACE;
	v->arr[228636] = 8354;
	v->arr[228637] = 1;
	v->arr[228638] = anon_sym_BQUOTE;
	v->arr[228639] = 8356;
	v->arr[228640] = 1;
	v->arr[228641] = anon_sym_DOLLAR_BQUOTE;
	v->arr[228642] = 10846;
	v->arr[228643] = 1;
	init_small_table15243(v);
}

void	init_small_table15243(t_small_table *v)
{
	v->arr[228644] = sym_word;
	v->arr[228645] = 10852;
	v->arr[228646] = 1;
	v->arr[228647] = sym__comment_word;
	v->arr[228648] = 8340;
	v->arr[228649] = 2;
	v->arr[228650] = anon_sym_LPAREN_LPAREN;
	v->arr[228651] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[228652] = 8358;
	v->arr[228653] = 2;
	v->arr[228654] = anon_sym_LT_LPAREN;
	v->arr[228655] = anon_sym_GT_LPAREN;
	v->arr[228656] = 10848;
	v->arr[228657] = 2;
	v->arr[228658] = sym_test_operator;
	init_small_table15244(v);
}

void	init_small_table15244(t_small_table *v)
{
	v->arr[228659] = sym__special_character;
	v->arr[228660] = 10850;
	v->arr[228661] = 3;
	v->arr[228662] = sym__bare_dollar;
	v->arr[228663] = sym_raw_string;
	v->arr[228664] = sym_ansi_c_string;
	v->arr[228665] = 1493;
	v->arr[228666] = 9;
	v->arr[228667] = sym_arithmetic_expansion;
	v->arr[228668] = sym_brace_expression;
	v->arr[228669] = sym_string;
	v->arr[228670] = sym_translated_string;
	v->arr[228671] = sym_number;
	v->arr[228672] = sym_simple_expansion;
	v->arr[228673] = sym_expansion;
	init_small_table15245(v);
}

// file funcs3048.c
