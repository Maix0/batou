/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2601.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table13005(t_small_table *v)
{
	v->arr[195074] = sym_translated_string;
	v->arr[195075] = sym_number;
	v->arr[195076] = sym_simple_expansion;
	v->arr[195077] = sym_expansion;
	v->arr[195078] = sym_command_substitution;
	v->arr[195079] = sym_process_substitution;
	v->arr[195081] = 21;
	v->arr[195081] = 71;
	v->arr[195082] = 1;
	v->arr[195083] = sym_comment;
	v->arr[195084] = 8565;
	v->arr[195085] = 1;
	v->arr[195086] = sym_word;
	v->arr[195087] = 8571;
	v->arr[195088] = 1;
	init_small_table13006(v);
}

void	init_small_table13006(t_small_table *v)
{
	v->arr[195089] = anon_sym_DOLLAR_LBRACK;
	v->arr[195090] = 8573;
	v->arr[195091] = 1;
	v->arr[195092] = anon_sym_DOLLAR;
	v->arr[195093] = 8575;
	v->arr[195094] = 1;
	v->arr[195095] = sym__special_character;
	v->arr[195096] = 8577;
	v->arr[195097] = 1;
	v->arr[195098] = anon_sym_DQUOTE;
	v->arr[195099] = 8581;
	v->arr[195100] = 1;
	v->arr[195101] = aux_sym_number_token1;
	v->arr[195102] = 8583;
	v->arr[195103] = 1;
	init_small_table13007(v);
}

void	init_small_table13007(t_small_table *v)
{
	v->arr[195104] = aux_sym_number_token2;
	v->arr[195105] = 8585;
	v->arr[195106] = 1;
	v->arr[195107] = anon_sym_DOLLAR_LBRACE;
	v->arr[195108] = 8587;
	v->arr[195109] = 1;
	v->arr[195110] = anon_sym_DOLLAR_LPAREN;
	v->arr[195111] = 8589;
	v->arr[195112] = 1;
	v->arr[195113] = anon_sym_BQUOTE;
	v->arr[195114] = 8591;
	v->arr[195115] = 1;
	v->arr[195116] = anon_sym_DOLLAR_BQUOTE;
	v->arr[195117] = 8595;
	v->arr[195118] = 1;
	init_small_table13008(v);
}

void	init_small_table13008(t_small_table *v)
{
	v->arr[195119] = sym_test_operator;
	v->arr[195120] = 8597;
	v->arr[195121] = 1;
	v->arr[195122] = sym__brace_start;
	v->arr[195123] = 8732;
	v->arr[195124] = 1;
	v->arr[195125] = anon_sym_RPAREN;
	v->arr[195126] = 5365;
	v->arr[195127] = 1;
	v->arr[195128] = aux_sym__literal_repeat1;
	v->arr[195129] = 8567;
	v->arr[195130] = 2;
	v->arr[195131] = anon_sym_LPAREN_LPAREN;
	v->arr[195132] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[195133] = 8579;
	init_small_table13009(v);
}

void	init_small_table13009(t_small_table *v)
{
	v->arr[195134] = 2;
	v->arr[195135] = sym_raw_string;
	v->arr[195136] = sym_ansi_c_string;
	v->arr[195137] = 8593;
	v->arr[195138] = 2;
	v->arr[195139] = anon_sym_LT_LPAREN;
	v->arr[195140] = anon_sym_GT_LPAREN;
	v->arr[195141] = 3604;
	v->arr[195142] = 2;
	v->arr[195143] = sym_concatenation;
	v->arr[195144] = aux_sym_for_statement_repeat1;
	v->arr[195145] = 5045;
	v->arr[195146] = 9;
	v->arr[195147] = sym_arithmetic_expansion;
	v->arr[195148] = sym_brace_expression;
	init_small_table13010(v);
}

// file funcs2601.c
