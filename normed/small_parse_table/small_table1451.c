/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1451.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table7255(t_small_table *v)
{
	v->arr[108824] = 1;
	v->arr[108825] = aux_sym_number_token1;
	v->arr[108826] = 377;
	v->arr[108827] = 1;
	v->arr[108828] = aux_sym_number_token2;
	v->arr[108829] = 379;
	v->arr[108830] = 1;
	v->arr[108831] = anon_sym_DOLLAR_LBRACE;
	v->arr[108832] = 381;
	v->arr[108833] = 1;
	v->arr[108834] = anon_sym_DOLLAR_LPAREN;
	v->arr[108835] = 385;
	v->arr[108836] = 1;
	v->arr[108837] = anon_sym_DOLLAR_BQUOTE;
	v->arr[108838] = 389;
	init_small_table7256(v);
}

void	init_small_table7256(t_small_table *v)
{
	v->arr[108839] = 1;
	v->arr[108840] = sym_test_operator;
	v->arr[108841] = 391;
	v->arr[108842] = 1;
	v->arr[108843] = sym__brace_start;
	v->arr[108844] = 5807;
	v->arr[108845] = 1;
	v->arr[108846] = sym__special_character;
	v->arr[108847] = 5809;
	v->arr[108848] = 1;
	v->arr[108849] = anon_sym_BQUOTE;
	v->arr[108850] = 2641;
	v->arr[108851] = 1;
	v->arr[108852] = aux_sym__literal_repeat1;
	v->arr[108853] = 3006;
	init_small_table7257(v);
}

void	init_small_table7257(t_small_table *v)
{
	v->arr[108854] = 1;
	v->arr[108855] = sym__expression;
	v->arr[108856] = 183;
	v->arr[108857] = 2;
	v->arr[108858] = anon_sym_PLUS_PLUS2;
	v->arr[108859] = anon_sym_DASH_DASH2;
	v->arr[108860] = 185;
	v->arr[108861] = 2;
	v->arr[108862] = anon_sym_DASH2;
	v->arr[108863] = anon_sym_PLUS2;
	v->arr[108864] = 352;
	v->arr[108865] = 2;
	v->arr[108866] = anon_sym_LPAREN_LPAREN;
	v->arr[108867] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[108868] = 373;
	init_small_table7258(v);
}

void	init_small_table7258(t_small_table *v)
{
	v->arr[108869] = 2;
	v->arr[108870] = sym_raw_string;
	v->arr[108871] = sym_ansi_c_string;
	v->arr[108872] = 387;
	v->arr[108873] = 2;
	v->arr[108874] = anon_sym_LT_LPAREN;
	v->arr[108875] = anon_sym_GT_LPAREN;
	v->arr[108876] = 3071;
	v->arr[108877] = 6;
	v->arr[108878] = sym_binary_expression;
	v->arr[108879] = sym_ternary_expression;
	v->arr[108880] = sym_unary_expression;
	v->arr[108881] = sym_postfix_expression;
	v->arr[108882] = sym_parenthesized_expression;
	v->arr[108883] = sym_concatenation;
	init_small_table7259(v);
}

void	init_small_table7259(t_small_table *v)
{
	v->arr[108884] = 2521;
	v->arr[108885] = 9;
	v->arr[108886] = sym_arithmetic_expansion;
	v->arr[108887] = sym_brace_expression;
	v->arr[108888] = sym_string;
	v->arr[108889] = sym_translated_string;
	v->arr[108890] = sym_number;
	v->arr[108891] = sym_simple_expansion;
	v->arr[108892] = sym_expansion;
	v->arr[108893] = sym_command_substitution;
	v->arr[108894] = sym_process_substitution;
	v->arr[108896] = 26;
	v->arr[108896] = 71;
	v->arr[108897] = 1;
	v->arr[108898] = sym_comment;
	init_small_table7260(v);
}

// file funcs1451.c
