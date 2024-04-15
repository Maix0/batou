/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2811.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table14055(t_small_table *v)
{
	v->arr[210824] = sym_translated_string;
	v->arr[210825] = sym_number;
	v->arr[210826] = sym_simple_expansion;
	v->arr[210827] = sym_expansion;
	v->arr[210828] = sym_command_substitution;
	v->arr[210829] = sym_process_substitution;
	v->arr[210831] = 21;
	v->arr[210831] = 71;
	v->arr[210832] = 1;
	v->arr[210833] = sym_comment;
	v->arr[210834] = 9364;
	v->arr[210835] = 1;
	v->arr[210836] = anon_sym_LPAREN;
	v->arr[210837] = 9366;
	v->arr[210838] = 1;
	init_small_table14056(v);
}

void	init_small_table14056(t_small_table *v)
{
	v->arr[210839] = anon_sym_BANG;
	v->arr[210840] = 9372;
	v->arr[210841] = 1;
	v->arr[210842] = anon_sym_TILDE;
	v->arr[210843] = 9374;
	v->arr[210844] = 1;
	v->arr[210845] = anon_sym_DOLLAR;
	v->arr[210846] = 9376;
	v->arr[210847] = 1;
	v->arr[210848] = anon_sym_DQUOTE;
	v->arr[210849] = 9378;
	v->arr[210850] = 1;
	v->arr[210851] = aux_sym_number_token1;
	v->arr[210852] = 9380;
	v->arr[210853] = 1;
	init_small_table14057(v);
}

void	init_small_table14057(t_small_table *v)
{
	v->arr[210854] = aux_sym_number_token2;
	v->arr[210855] = 9382;
	v->arr[210856] = 1;
	v->arr[210857] = anon_sym_DOLLAR_LBRACE;
	v->arr[210858] = 9384;
	v->arr[210859] = 1;
	v->arr[210860] = anon_sym_DOLLAR_LPAREN;
	v->arr[210861] = 9386;
	v->arr[210862] = 1;
	v->arr[210863] = anon_sym_BQUOTE;
	v->arr[210864] = 9388;
	v->arr[210865] = 1;
	v->arr[210866] = anon_sym_DOLLAR_BQUOTE;
	v->arr[210867] = 9392;
	v->arr[210868] = 1;
	init_small_table14058(v);
}

void	init_small_table14058(t_small_table *v)
{
	v->arr[210869] = sym_variable_name;
	v->arr[210870] = 10008;
	v->arr[210871] = 1;
	v->arr[210872] = aux_sym__simple_variable_name_token1;
	v->arr[210873] = 3391;
	v->arr[210874] = 1;
	v->arr[210875] = sym__arithmetic_binary_expression;
	v->arr[210876] = 3396;
	v->arr[210877] = 1;
	v->arr[210878] = sym__arithmetic_ternary_expression;
	v->arr[210879] = 3398;
	v->arr[210880] = 1;
	v->arr[210881] = sym__arithmetic_unary_expression;
	v->arr[210882] = 3400;
	v->arr[210883] = 1;
	init_small_table14059(v);
}

void	init_small_table14059(t_small_table *v)
{
	v->arr[210884] = sym__arithmetic_postfix_expression;
	v->arr[210885] = 9368;
	v->arr[210886] = 2;
	v->arr[210887] = anon_sym_PLUS_PLUS2;
	v->arr[210888] = anon_sym_DASH_DASH2;
	v->arr[210889] = 9370;
	v->arr[210890] = 2;
	v->arr[210891] = anon_sym_DASH2;
	v->arr[210892] = anon_sym_PLUS2;
	v->arr[210893] = 3366;
	v->arr[210894] = 9;
	v->arr[210895] = sym_subscript;
	v->arr[210896] = sym__arithmetic_expression;
	v->arr[210897] = sym__arithmetic_literal;
	v->arr[210898] = sym__arithmetic_parenthesized_expression;
	init_small_table14060(v);
}

// file funcs2811.c
