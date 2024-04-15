/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1334.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table6670(t_small_table *v)
{
	v->arr[100049] = sym_translated_string;
	v->arr[100050] = sym_number;
	v->arr[100051] = sym_simple_expansion;
	v->arr[100052] = sym_expansion;
	v->arr[100053] = sym_command_substitution;
	v->arr[100054] = sym_process_substitution;
	v->arr[100056] = 26;
	v->arr[100056] = 71;
	v->arr[100057] = 1;
	v->arr[100058] = sym_comment;
	v->arr[100059] = 1131;
	v->arr[100060] = 1;
	v->arr[100061] = anon_sym_LPAREN;
	v->arr[100062] = 1141;
	v->arr[100063] = 1;
	init_small_table6671(v);
}

void	init_small_table6671(t_small_table *v)
{
	v->arr[100064] = anon_sym_DOLLAR_LBRACK;
	v->arr[100065] = 1145;
	v->arr[100066] = 1;
	v->arr[100067] = anon_sym_DOLLAR;
	v->arr[100068] = 1149;
	v->arr[100069] = 1;
	v->arr[100070] = anon_sym_DQUOTE;
	v->arr[100071] = 1153;
	v->arr[100072] = 1;
	v->arr[100073] = aux_sym_number_token1;
	v->arr[100074] = 1155;
	v->arr[100075] = 1;
	v->arr[100076] = aux_sym_number_token2;
	v->arr[100077] = 1157;
	v->arr[100078] = 1;
	init_small_table6672(v);
}

void	init_small_table6672(t_small_table *v)
{
	v->arr[100079] = anon_sym_DOLLAR_LBRACE;
	v->arr[100080] = 1159;
	v->arr[100081] = 1;
	v->arr[100082] = anon_sym_DOLLAR_LPAREN;
	v->arr[100083] = 1163;
	v->arr[100084] = 1;
	v->arr[100085] = anon_sym_DOLLAR_BQUOTE;
	v->arr[100086] = 1169;
	v->arr[100087] = 1;
	v->arr[100088] = sym__brace_start;
	v->arr[100089] = 1211;
	v->arr[100090] = 1;
	v->arr[100091] = sym_word;
	v->arr[100092] = 1213;
	v->arr[100093] = 1;
	init_small_table6673(v);
}

void	init_small_table6673(t_small_table *v)
{
	v->arr[100094] = anon_sym_BANG;
	v->arr[100095] = 1219;
	v->arr[100096] = 1;
	v->arr[100097] = anon_sym_TILDE;
	v->arr[100098] = 1221;
	v->arr[100099] = 1;
	v->arr[100100] = sym__special_character;
	v->arr[100101] = 1225;
	v->arr[100102] = 1;
	v->arr[100103] = sym_test_operator;
	v->arr[100104] = 3060;
	v->arr[100105] = 1;
	v->arr[100106] = anon_sym_BQUOTE;
	v->arr[100107] = 2484;
	v->arr[100108] = 1;
	init_small_table6674(v);
}

void	init_small_table6674(t_small_table *v)
{
	v->arr[100109] = aux_sym__literal_repeat1;
	v->arr[100110] = 3327;
	v->arr[100111] = 1;
	v->arr[100112] = sym__expression;
	v->arr[100113] = 1129;
	v->arr[100114] = 2;
	v->arr[100115] = anon_sym_LPAREN_LPAREN;
	v->arr[100116] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[100117] = 1165;
	v->arr[100118] = 2;
	v->arr[100119] = anon_sym_LT_LPAREN;
	v->arr[100120] = anon_sym_GT_LPAREN;
	v->arr[100121] = 1215;
	v->arr[100122] = 2;
	v->arr[100123] = anon_sym_PLUS_PLUS2;
	init_small_table6675(v);
}

// file funcs1334.c
