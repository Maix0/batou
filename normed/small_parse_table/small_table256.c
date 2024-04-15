/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs256.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table1280(t_small_table *v)
{
	v->arr[19199] = aux_sym__literal_repeat1;
	v->arr[19200] = 3107;
	v->arr[19201] = 1;
	v->arr[19202] = sym__expression;
	v->arr[19203] = 3359;
	v->arr[19204] = 1;
	v->arr[19205] = sym__arithmetic_postfix_expression;
	v->arr[19206] = 3361;
	v->arr[19207] = 1;
	v->arr[19208] = sym__arithmetic_unary_expression;
	v->arr[19209] = 3367;
	v->arr[19210] = 1;
	v->arr[19211] = sym__arithmetic_ternary_expression;
	v->arr[19212] = 3375;
	v->arr[19213] = 1;
	init_small_table1281(v);
}

void	init_small_table1281(t_small_table *v)
{
	v->arr[19214] = sym__arithmetic_binary_expression;
	v->arr[19215] = 1073;
	v->arr[19216] = 2;
	v->arr[19217] = anon_sym_LPAREN_LPAREN;
	v->arr[19218] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[19219] = 1083;
	v->arr[19220] = 2;
	v->arr[19221] = sym_raw_string;
	v->arr[19222] = sym_ansi_c_string;
	v->arr[19223] = 1089;
	v->arr[19224] = 2;
	v->arr[19225] = anon_sym_LT_LPAREN;
	v->arr[19226] = anon_sym_GT_LPAREN;
	v->arr[19227] = 3592;
	v->arr[19228] = 2;
	init_small_table1282(v);
}

void	init_small_table1282(t_small_table *v)
{
	v->arr[19229] = anon_sym_PLUS_PLUS2;
	v->arr[19230] = anon_sym_DASH_DASH2;
	v->arr[19231] = 3594;
	v->arr[19232] = 2;
	v->arr[19233] = anon_sym_DASH2;
	v->arr[19234] = anon_sym_PLUS2;
	v->arr[19235] = 2500;
	v->arr[19236] = 4;
	v->arr[19237] = sym_arithmetic_expansion;
	v->arr[19238] = sym_brace_expression;
	v->arr[19239] = sym_translated_string;
	v->arr[19240] = sym_process_substitution;
	v->arr[19241] = 2506;
	v->arr[19242] = 4;
	v->arr[19243] = sym_string;
	init_small_table1283(v);
}

void	init_small_table1283(t_small_table *v)
{
	v->arr[19244] = sym_number;
	v->arr[19245] = sym_simple_expansion;
	v->arr[19246] = sym_expansion;
	v->arr[19247] = 3278;
	v->arr[19248] = 4;
	v->arr[19249] = sym_subscript;
	v->arr[19250] = sym__arithmetic_expression;
	v->arr[19251] = sym__arithmetic_literal;
	v->arr[19252] = sym__arithmetic_parenthesized_expression;
	v->arr[19253] = 3053;
	v->arr[19254] = 6;
	v->arr[19255] = sym_binary_expression;
	v->arr[19256] = sym_ternary_expression;
	v->arr[19257] = sym_unary_expression;
	v->arr[19258] = sym_postfix_expression;
	init_small_table1284(v);
}

void	init_small_table1284(t_small_table *v)
{
	v->arr[19259] = sym_parenthesized_expression;
	v->arr[19260] = sym_concatenation;
	v->arr[19262] = 22;
	v->arr[19262] = 3;
	v->arr[19263] = 1;
	v->arr[19264] = sym_comment;
	v->arr[19265] = 3536;
	v->arr[19266] = 1;
	v->arr[19267] = anon_sym_DOLLAR_LBRACK;
	v->arr[19268] = 3539;
	v->arr[19269] = 1;
	v->arr[19270] = anon_sym_DOLLAR;
	v->arr[19271] = 3545;
	v->arr[19272] = 1;
	v->arr[19273] = anon_sym_DQUOTE;
	init_small_table1285(v);
}

// file funcs256.c
