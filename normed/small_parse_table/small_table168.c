/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs168.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table840(t_small_table *v)
{
	v->arr[12599] = 1181;
	v->arr[12600] = 1;
	v->arr[12601] = sym__special_character;
	v->arr[12602] = 1185;
	v->arr[12603] = 1;
	v->arr[12604] = sym_test_operator;
	v->arr[12605] = 3050;
	v->arr[12606] = 1;
	v->arr[12607] = anon_sym_LPAREN;
	v->arr[12608] = 3052;
	v->arr[12609] = 1;
	v->arr[12610] = anon_sym_BANG;
	v->arr[12611] = 3058;
	v->arr[12612] = 1;
	v->arr[12613] = anon_sym_TILDE;
	init_small_table841(v);
}

void	init_small_table841(t_small_table *v)
{
	v->arr[12614] = 3060;
	v->arr[12615] = 1;
	v->arr[12616] = anon_sym_BQUOTE;
	v->arr[12617] = 3062;
	v->arr[12618] = 1;
	v->arr[12619] = aux_sym__simple_variable_name_token1;
	v->arr[12620] = 3064;
	v->arr[12621] = 1;
	v->arr[12622] = sym_variable_name;
	v->arr[12623] = 2387;
	v->arr[12624] = 1;
	v->arr[12625] = sym_command_substitution;
	v->arr[12626] = 2484;
	v->arr[12627] = 1;
	v->arr[12628] = aux_sym__literal_repeat1;
	init_small_table842(v);
}

void	init_small_table842(t_small_table *v)
{
	v->arr[12629] = 2801;
	v->arr[12630] = 1;
	v->arr[12631] = sym__arithmetic_binary_expression;
	v->arr[12632] = 2803;
	v->arr[12633] = 1;
	v->arr[12634] = sym__arithmetic_ternary_expression;
	v->arr[12635] = 2809;
	v->arr[12636] = 1;
	v->arr[12637] = sym__arithmetic_unary_expression;
	v->arr[12638] = 2825;
	v->arr[12639] = 1;
	v->arr[12640] = sym__arithmetic_postfix_expression;
	v->arr[12641] = 3158;
	v->arr[12642] = 1;
	v->arr[12643] = sym__expression;
	init_small_table843(v);
}

void	init_small_table843(t_small_table *v)
{
	v->arr[12644] = 1129;
	v->arr[12645] = 2;
	v->arr[12646] = anon_sym_LPAREN_LPAREN;
	v->arr[12647] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[12648] = 1165;
	v->arr[12649] = 2;
	v->arr[12650] = anon_sym_LT_LPAREN;
	v->arr[12651] = anon_sym_GT_LPAREN;
	v->arr[12652] = 1183;
	v->arr[12653] = 2;
	v->arr[12654] = sym_raw_string;
	v->arr[12655] = sym_ansi_c_string;
	v->arr[12656] = 3054;
	v->arr[12657] = 2;
	v->arr[12658] = anon_sym_PLUS_PLUS2;
	init_small_table844(v);
}

void	init_small_table844(t_small_table *v)
{
	v->arr[12659] = anon_sym_DASH_DASH2;
	v->arr[12660] = 3056;
	v->arr[12661] = 2;
	v->arr[12662] = anon_sym_DASH2;
	v->arr[12663] = anon_sym_PLUS2;
	v->arr[12664] = 2397;
	v->arr[12665] = 4;
	v->arr[12666] = sym_string;
	v->arr[12667] = sym_number;
	v->arr[12668] = sym_simple_expansion;
	v->arr[12669] = sym_expansion;
	v->arr[12670] = 2456;
	v->arr[12671] = 4;
	v->arr[12672] = sym_arithmetic_expansion;
	v->arr[12673] = sym_brace_expression;
	init_small_table845(v);
}

// file funcs168.c
