/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1326.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table6630(t_small_table *v)
{
	v->arr[99449] = sym_postfix_expression;
	v->arr[99450] = sym_parenthesized_expression;
	v->arr[99451] = sym_concatenation;
	v->arr[99452] = 2588;
	v->arr[99453] = 9;
	v->arr[99454] = sym_arithmetic_expansion;
	v->arr[99455] = sym_brace_expression;
	v->arr[99456] = sym_string;
	v->arr[99457] = sym_translated_string;
	v->arr[99458] = sym_number;
	v->arr[99459] = sym_simple_expansion;
	v->arr[99460] = sym_expansion;
	v->arr[99461] = sym_command_substitution;
	v->arr[99462] = sym_process_substitution;
	v->arr[99464] = 26;
	init_small_table6631(v);
}

void	init_small_table6631(t_small_table *v)
{
	v->arr[99464] = 71;
	v->arr[99465] = 1;
	v->arr[99466] = sym_comment;
	v->arr[99467] = 187;
	v->arr[99468] = 1;
	v->arr[99469] = anon_sym_TILDE;
	v->arr[99470] = 350;
	v->arr[99471] = 1;
	v->arr[99472] = sym_word;
	v->arr[99473] = 359;
	v->arr[99474] = 1;
	v->arr[99475] = anon_sym_LPAREN;
	v->arr[99476] = 361;
	v->arr[99477] = 1;
	v->arr[99478] = anon_sym_BANG;
	init_small_table6632(v);
}

void	init_small_table6632(t_small_table *v)
{
	v->arr[99479] = 363;
	v->arr[99480] = 1;
	v->arr[99481] = anon_sym_DOLLAR_LBRACK;
	v->arr[99482] = 367;
	v->arr[99483] = 1;
	v->arr[99484] = anon_sym_DOLLAR;
	v->arr[99485] = 371;
	v->arr[99486] = 1;
	v->arr[99487] = anon_sym_DQUOTE;
	v->arr[99488] = 375;
	v->arr[99489] = 1;
	v->arr[99490] = aux_sym_number_token1;
	v->arr[99491] = 377;
	v->arr[99492] = 1;
	v->arr[99493] = aux_sym_number_token2;
	init_small_table6633(v);
}

void	init_small_table6633(t_small_table *v)
{
	v->arr[99494] = 379;
	v->arr[99495] = 1;
	v->arr[99496] = anon_sym_DOLLAR_LBRACE;
	v->arr[99497] = 381;
	v->arr[99498] = 1;
	v->arr[99499] = anon_sym_DOLLAR_LPAREN;
	v->arr[99500] = 385;
	v->arr[99501] = 1;
	v->arr[99502] = anon_sym_DOLLAR_BQUOTE;
	v->arr[99503] = 389;
	v->arr[99504] = 1;
	v->arr[99505] = sym_test_operator;
	v->arr[99506] = 391;
	v->arr[99507] = 1;
	v->arr[99508] = sym__brace_start;
	init_small_table6634(v);
}

void	init_small_table6634(t_small_table *v)
{
	v->arr[99509] = 5807;
	v->arr[99510] = 1;
	v->arr[99511] = sym__special_character;
	v->arr[99512] = 5809;
	v->arr[99513] = 1;
	v->arr[99514] = anon_sym_BQUOTE;
	v->arr[99515] = 2641;
	v->arr[99516] = 1;
	v->arr[99517] = aux_sym__literal_repeat1;
	v->arr[99518] = 3011;
	v->arr[99519] = 1;
	v->arr[99520] = sym__expression;
	v->arr[99521] = 183;
	v->arr[99522] = 2;
	v->arr[99523] = anon_sym_PLUS_PLUS2;
	init_small_table6635(v);
}

// file funcs1326.c
