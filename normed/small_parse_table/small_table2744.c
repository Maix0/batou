/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2744.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table13720(t_small_table *v)
{
	v->arr[205799] = sym_arithmetic_expansion;
	v->arr[205800] = sym_brace_expression;
	v->arr[205801] = sym_string;
	v->arr[205802] = sym_translated_string;
	v->arr[205803] = sym_number;
	v->arr[205804] = sym_simple_expansion;
	v->arr[205805] = sym_expansion;
	v->arr[205806] = sym_command_substitution;
	v->arr[205807] = sym_process_substitution;
	v->arr[205809] = 21;
	v->arr[205809] = 71;
	v->arr[205810] = 1;
	v->arr[205811] = sym_comment;
	v->arr[205812] = 3064;
	v->arr[205813] = 1;
	init_small_table13721(v);
}

void	init_small_table13721(t_small_table *v)
{
	v->arr[205814] = sym_variable_name;
	v->arr[205815] = 9278;
	v->arr[205816] = 1;
	v->arr[205817] = anon_sym_LPAREN;
	v->arr[205818] = 9280;
	v->arr[205819] = 1;
	v->arr[205820] = anon_sym_BANG;
	v->arr[205821] = 9286;
	v->arr[205822] = 1;
	v->arr[205823] = anon_sym_TILDE;
	v->arr[205824] = 9288;
	v->arr[205825] = 1;
	v->arr[205826] = anon_sym_DOLLAR;
	v->arr[205827] = 9290;
	v->arr[205828] = 1;
	init_small_table13722(v);
}

void	init_small_table13722(t_small_table *v)
{
	v->arr[205829] = anon_sym_DQUOTE;
	v->arr[205830] = 9292;
	v->arr[205831] = 1;
	v->arr[205832] = aux_sym_number_token1;
	v->arr[205833] = 9294;
	v->arr[205834] = 1;
	v->arr[205835] = aux_sym_number_token2;
	v->arr[205836] = 9296;
	v->arr[205837] = 1;
	v->arr[205838] = anon_sym_DOLLAR_LBRACE;
	v->arr[205839] = 9298;
	v->arr[205840] = 1;
	v->arr[205841] = anon_sym_DOLLAR_LPAREN;
	v->arr[205842] = 9300;
	v->arr[205843] = 1;
	init_small_table13723(v);
}

void	init_small_table13723(t_small_table *v)
{
	v->arr[205844] = anon_sym_BQUOTE;
	v->arr[205845] = 9302;
	v->arr[205846] = 1;
	v->arr[205847] = anon_sym_DOLLAR_BQUOTE;
	v->arr[205848] = 9570;
	v->arr[205849] = 1;
	v->arr[205850] = aux_sym__simple_variable_name_token1;
	v->arr[205851] = 2801;
	v->arr[205852] = 1;
	v->arr[205853] = sym__arithmetic_binary_expression;
	v->arr[205854] = 2803;
	v->arr[205855] = 1;
	v->arr[205856] = sym__arithmetic_ternary_expression;
	v->arr[205857] = 2809;
	v->arr[205858] = 1;
	init_small_table13724(v);
}

void	init_small_table13724(t_small_table *v)
{
	v->arr[205859] = sym__arithmetic_unary_expression;
	v->arr[205860] = 2825;
	v->arr[205861] = 1;
	v->arr[205862] = sym__arithmetic_postfix_expression;
	v->arr[205863] = 9282;
	v->arr[205864] = 2;
	v->arr[205865] = anon_sym_PLUS_PLUS2;
	v->arr[205866] = anon_sym_DASH_DASH2;
	v->arr[205867] = 9284;
	v->arr[205868] = 2;
	v->arr[205869] = anon_sym_DASH2;
	v->arr[205870] = anon_sym_PLUS2;
	v->arr[205871] = 2740;
	v->arr[205872] = 9;
	v->arr[205873] = sym_subscript;
	init_small_table13725(v);
}

// file funcs2744.c
