/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1348.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table6740(t_small_table *v)
{
	v->arr[101099] = sym_expansion;
	v->arr[101100] = sym_command_substitution;
	v->arr[101101] = sym_process_substitution;
	v->arr[101103] = 26;
	v->arr[101103] = 71;
	v->arr[101104] = 1;
	v->arr[101105] = sym_comment;
	v->arr[101106] = 363;
	v->arr[101107] = 1;
	v->arr[101108] = anon_sym_DOLLAR_LBRACK;
	v->arr[101109] = 367;
	v->arr[101110] = 1;
	v->arr[101111] = anon_sym_DOLLAR;
	v->arr[101112] = 371;
	v->arr[101113] = 1;
	init_small_table6741(v);
}

void	init_small_table6741(t_small_table *v)
{
	v->arr[101114] = anon_sym_DQUOTE;
	v->arr[101115] = 375;
	v->arr[101116] = 1;
	v->arr[101117] = aux_sym_number_token1;
	v->arr[101118] = 377;
	v->arr[101119] = 1;
	v->arr[101120] = aux_sym_number_token2;
	v->arr[101121] = 379;
	v->arr[101122] = 1;
	v->arr[101123] = anon_sym_DOLLAR_LBRACE;
	v->arr[101124] = 381;
	v->arr[101125] = 1;
	v->arr[101126] = anon_sym_DOLLAR_LPAREN;
	v->arr[101127] = 385;
	v->arr[101128] = 1;
	init_small_table6742(v);
}

void	init_small_table6742(t_small_table *v)
{
	v->arr[101129] = anon_sym_DOLLAR_BQUOTE;
	v->arr[101130] = 391;
	v->arr[101131] = 1;
	v->arr[101132] = sym__brace_start;
	v->arr[101133] = 1091;
	v->arr[101134] = 1;
	v->arr[101135] = sym_word;
	v->arr[101136] = 1093;
	v->arr[101137] = 1;
	v->arr[101138] = anon_sym_LPAREN;
	v->arr[101139] = 1095;
	v->arr[101140] = 1;
	v->arr[101141] = anon_sym_BANG;
	v->arr[101142] = 1103;
	v->arr[101143] = 1;
	init_small_table6743(v);
}

void	init_small_table6743(t_small_table *v)
{
	v->arr[101144] = anon_sym_TILDE;
	v->arr[101145] = 1113;
	v->arr[101146] = 1;
	v->arr[101147] = sym_test_operator;
	v->arr[101148] = 5809;
	v->arr[101149] = 1;
	v->arr[101150] = anon_sym_BQUOTE;
	v->arr[101151] = 5916;
	v->arr[101152] = 1;
	v->arr[101153] = sym__special_character;
	v->arr[101154] = 2472;
	v->arr[101155] = 1;
	v->arr[101156] = aux_sym__literal_repeat1;
	v->arr[101157] = 2802;
	v->arr[101158] = 1;
	init_small_table6744(v);
}

void	init_small_table6744(t_small_table *v)
{
	v->arr[101159] = sym__expression;
	v->arr[101160] = 352;
	v->arr[101161] = 2;
	v->arr[101162] = anon_sym_LPAREN_LPAREN;
	v->arr[101163] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[101164] = 387;
	v->arr[101165] = 2;
	v->arr[101166] = anon_sym_LT_LPAREN;
	v->arr[101167] = anon_sym_GT_LPAREN;
	v->arr[101168] = 1099;
	v->arr[101169] = 2;
	v->arr[101170] = anon_sym_PLUS_PLUS2;
	v->arr[101171] = anon_sym_DASH_DASH2;
	v->arr[101172] = 1101;
	v->arr[101173] = 2;
	init_small_table6745(v);
}

// file funcs1348.c
