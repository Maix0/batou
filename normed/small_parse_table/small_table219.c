/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs219.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table1095(t_small_table *v)
{
	v->arr[16424] = 2397;
	v->arr[16425] = 4;
	v->arr[16426] = sym_string;
	v->arr[16427] = sym_number;
	v->arr[16428] = sym_simple_expansion;
	v->arr[16429] = sym_expansion;
	v->arr[16430] = 2456;
	v->arr[16431] = 4;
	v->arr[16432] = sym_arithmetic_expansion;
	v->arr[16433] = sym_brace_expression;
	v->arr[16434] = sym_translated_string;
	v->arr[16435] = sym_process_substitution;
	v->arr[16436] = 2743;
	v->arr[16437] = 4;
	v->arr[16438] = sym_subscript;
	init_small_table1096(v);
}

void	init_small_table1096(t_small_table *v)
{
	v->arr[16439] = sym__arithmetic_expression;
	v->arr[16440] = sym__arithmetic_literal;
	v->arr[16441] = sym__arithmetic_parenthesized_expression;
	v->arr[16442] = 2594;
	v->arr[16443] = 6;
	v->arr[16444] = sym_binary_expression;
	v->arr[16445] = sym_ternary_expression;
	v->arr[16446] = sym_unary_expression;
	v->arr[16447] = sym_postfix_expression;
	v->arr[16448] = sym_parenthesized_expression;
	v->arr[16449] = sym_concatenation;
	v->arr[16451] = 21;
	v->arr[16451] = 3;
	v->arr[16452] = 1;
	v->arr[16453] = sym_comment;
	init_small_table1097(v);
}

void	init_small_table1097(t_small_table *v)
{
	v->arr[16454] = 3213;
	v->arr[16455] = 1;
	v->arr[16456] = anon_sym_DQUOTE;
	v->arr[16457] = 3475;
	v->arr[16458] = 1;
	v->arr[16459] = anon_sym_DOLLAR_LBRACK;
	v->arr[16460] = 3477;
	v->arr[16461] = 1;
	v->arr[16462] = anon_sym_DOLLAR;
	v->arr[16463] = 3479;
	v->arr[16464] = 1;
	v->arr[16465] = sym__special_character;
	v->arr[16466] = 3481;
	v->arr[16467] = 1;
	v->arr[16468] = aux_sym_number_token1;
	init_small_table1098(v);
}

void	init_small_table1098(t_small_table *v)
{
	v->arr[16469] = 3483;
	v->arr[16470] = 1;
	v->arr[16471] = aux_sym_number_token2;
	v->arr[16472] = 3485;
	v->arr[16473] = 1;
	v->arr[16474] = anon_sym_DOLLAR_LBRACE;
	v->arr[16475] = 3487;
	v->arr[16476] = 1;
	v->arr[16477] = anon_sym_DOLLAR_LPAREN;
	v->arr[16478] = 3489;
	v->arr[16479] = 1;
	v->arr[16480] = anon_sym_BQUOTE;
	v->arr[16481] = 3491;
	v->arr[16482] = 1;
	v->arr[16483] = anon_sym_DOLLAR_BQUOTE;
	init_small_table1099(v);
}

void	init_small_table1099(t_small_table *v)
{
	v->arr[16484] = 3495;
	v->arr[16485] = 1;
	v->arr[16486] = sym_test_operator;
	v->arr[16487] = 3497;
	v->arr[16488] = 1;
	v->arr[16489] = sym__brace_start;
	v->arr[16490] = 2024;
	v->arr[16491] = 1;
	v->arr[16492] = aux_sym__literal_repeat1;
	v->arr[16493] = 3473;
	v->arr[16494] = 2;
	v->arr[16495] = anon_sym_LPAREN_LPAREN;
	v->arr[16496] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[16497] = 3493;
	v->arr[16498] = 2;
	init_small_table1100(v);
}

// file funcs219.c
