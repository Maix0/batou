/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs295.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table1475(t_small_table *v)
{
	v->arr[22124] = 4;
	v->arr[22125] = sym_string;
	v->arr[22126] = sym_number;
	v->arr[22127] = sym_simple_expansion;
	v->arr[22128] = sym_expansion;
	v->arr[22129] = 3368;
	v->arr[22130] = 4;
	v->arr[22131] = sym_subscript;
	v->arr[22132] = sym__arithmetic_expression;
	v->arr[22133] = sym__arithmetic_literal;
	v->arr[22134] = sym__arithmetic_parenthesized_expression;
	v->arr[22135] = 3053;
	v->arr[22136] = 6;
	v->arr[22137] = sym_binary_expression;
	v->arr[22138] = sym_ternary_expression;
	init_small_table1476(v);
}

void	init_small_table1476(t_small_table *v)
{
	v->arr[22139] = sym_unary_expression;
	v->arr[22140] = sym_postfix_expression;
	v->arr[22141] = sym_parenthesized_expression;
	v->arr[22142] = sym_concatenation;
	v->arr[22144] = 21;
	v->arr[22144] = 3;
	v->arr[22145] = 1;
	v->arr[22146] = sym_comment;
	v->arr[22147] = 3183;
	v->arr[22148] = 1;
	v->arr[22149] = anon_sym_DOLLAR_LBRACK;
	v->arr[22150] = 3185;
	v->arr[22151] = 1;
	v->arr[22152] = anon_sym_DOLLAR;
	v->arr[22153] = 3189;
	init_small_table1477(v);
}

void	init_small_table1477(t_small_table *v)
{
	v->arr[22154] = 1;
	v->arr[22155] = anon_sym_DQUOTE;
	v->arr[22156] = 3191;
	v->arr[22157] = 1;
	v->arr[22158] = aux_sym_number_token1;
	v->arr[22159] = 3193;
	v->arr[22160] = 1;
	v->arr[22161] = aux_sym_number_token2;
	v->arr[22162] = 3195;
	v->arr[22163] = 1;
	v->arr[22164] = anon_sym_DOLLAR_LBRACE;
	v->arr[22165] = 3197;
	v->arr[22166] = 1;
	v->arr[22167] = anon_sym_DOLLAR_LPAREN;
	v->arr[22168] = 3201;
	init_small_table1478(v);
}

void	init_small_table1478(t_small_table *v)
{
	v->arr[22169] = 1;
	v->arr[22170] = anon_sym_DOLLAR_BQUOTE;
	v->arr[22171] = 3209;
	v->arr[22172] = 1;
	v->arr[22173] = sym__brace_start;
	v->arr[22174] = 3657;
	v->arr[22175] = 1;
	v->arr[22176] = sym__special_character;
	v->arr[22177] = 3661;
	v->arr[22178] = 1;
	v->arr[22179] = sym_test_operator;
	v->arr[22180] = 4044;
	v->arr[22181] = 1;
	v->arr[22182] = aux_sym__simple_variable_name_token1;
	v->arr[22183] = 1966;
	init_small_table1479(v);
}

void	init_small_table1479(t_small_table *v)
{
	v->arr[22184] = 1;
	v->arr[22185] = aux_sym__literal_repeat1;
	v->arr[22186] = 2299;
	v->arr[22187] = 2;
	v->arr[22188] = sym_file_descriptor;
	v->arr[22189] = aux_sym_heredoc_redirect_token1;
	v->arr[22190] = 3181;
	v->arr[22191] = 2;
	v->arr[22192] = anon_sym_LPAREN_LPAREN;
	v->arr[22193] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[22194] = 3203;
	v->arr[22195] = 2;
	v->arr[22196] = anon_sym_LT_LPAREN;
	v->arr[22197] = anon_sym_GT_LPAREN;
	v->arr[22198] = 726;
	init_small_table1480(v);
}

// file funcs295.c
