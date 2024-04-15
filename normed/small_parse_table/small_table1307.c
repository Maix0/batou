/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1307.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table6535(t_small_table *v)
{
	v->arr[98024] = sym_unary_expression;
	v->arr[98025] = sym_postfix_expression;
	v->arr[98026] = sym_parenthesized_expression;
	v->arr[98027] = sym_concatenation;
	v->arr[98028] = 2573;
	v->arr[98029] = 9;
	v->arr[98030] = sym_arithmetic_expansion;
	v->arr[98031] = sym_brace_expression;
	v->arr[98032] = sym_string;
	v->arr[98033] = sym_translated_string;
	v->arr[98034] = sym_number;
	v->arr[98035] = sym_simple_expansion;
	v->arr[98036] = sym_expansion;
	v->arr[98037] = sym_command_substitution;
	v->arr[98038] = sym_process_substitution;
	init_small_table6536(v);
}

void	init_small_table6536(t_small_table *v)
{
	v->arr[98040] = 26;
	v->arr[98040] = 71;
	v->arr[98041] = 1;
	v->arr[98042] = sym_comment;
	v->arr[98043] = 187;
	v->arr[98044] = 1;
	v->arr[98045] = anon_sym_TILDE;
	v->arr[98046] = 350;
	v->arr[98047] = 1;
	v->arr[98048] = sym_word;
	v->arr[98049] = 359;
	v->arr[98050] = 1;
	v->arr[98051] = anon_sym_LPAREN;
	v->arr[98052] = 361;
	v->arr[98053] = 1;
	init_small_table6537(v);
}

void	init_small_table6537(t_small_table *v)
{
	v->arr[98054] = anon_sym_BANG;
	v->arr[98055] = 363;
	v->arr[98056] = 1;
	v->arr[98057] = anon_sym_DOLLAR_LBRACK;
	v->arr[98058] = 367;
	v->arr[98059] = 1;
	v->arr[98060] = anon_sym_DOLLAR;
	v->arr[98061] = 371;
	v->arr[98062] = 1;
	v->arr[98063] = anon_sym_DQUOTE;
	v->arr[98064] = 375;
	v->arr[98065] = 1;
	v->arr[98066] = aux_sym_number_token1;
	v->arr[98067] = 377;
	v->arr[98068] = 1;
	init_small_table6538(v);
}

void	init_small_table6538(t_small_table *v)
{
	v->arr[98069] = aux_sym_number_token2;
	v->arr[98070] = 379;
	v->arr[98071] = 1;
	v->arr[98072] = anon_sym_DOLLAR_LBRACE;
	v->arr[98073] = 381;
	v->arr[98074] = 1;
	v->arr[98075] = anon_sym_DOLLAR_LPAREN;
	v->arr[98076] = 385;
	v->arr[98077] = 1;
	v->arr[98078] = anon_sym_DOLLAR_BQUOTE;
	v->arr[98079] = 389;
	v->arr[98080] = 1;
	v->arr[98081] = sym_test_operator;
	v->arr[98082] = 391;
	v->arr[98083] = 1;
	init_small_table6539(v);
}

void	init_small_table6539(t_small_table *v)
{
	v->arr[98084] = sym__brace_start;
	v->arr[98085] = 5807;
	v->arr[98086] = 1;
	v->arr[98087] = sym__special_character;
	v->arr[98088] = 5809;
	v->arr[98089] = 1;
	v->arr[98090] = anon_sym_BQUOTE;
	v->arr[98091] = 2641;
	v->arr[98092] = 1;
	v->arr[98093] = aux_sym__literal_repeat1;
	v->arr[98094] = 2981;
	v->arr[98095] = 1;
	v->arr[98096] = sym__expression;
	v->arr[98097] = 183;
	v->arr[98098] = 2;
	init_small_table6540(v);
}

// file funcs1307.c
