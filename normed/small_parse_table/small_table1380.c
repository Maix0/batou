/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1380.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table6900(t_small_table *v)
{
	v->arr[103499] = sym_arithmetic_expansion;
	v->arr[103500] = sym_brace_expression;
	v->arr[103501] = sym_string;
	v->arr[103502] = sym_translated_string;
	v->arr[103503] = sym_number;
	v->arr[103504] = sym_simple_expansion;
	v->arr[103505] = sym_expansion;
	v->arr[103506] = sym_command_substitution;
	v->arr[103507] = sym_process_substitution;
	v->arr[103509] = 26;
	v->arr[103509] = 71;
	v->arr[103510] = 1;
	v->arr[103511] = sym_comment;
	v->arr[103512] = 1131;
	v->arr[103513] = 1;
	init_small_table6901(v);
}

void	init_small_table6901(t_small_table *v)
{
	v->arr[103514] = anon_sym_LPAREN;
	v->arr[103515] = 1141;
	v->arr[103516] = 1;
	v->arr[103517] = anon_sym_DOLLAR_LBRACK;
	v->arr[103518] = 1145;
	v->arr[103519] = 1;
	v->arr[103520] = anon_sym_DOLLAR;
	v->arr[103521] = 1149;
	v->arr[103522] = 1;
	v->arr[103523] = anon_sym_DQUOTE;
	v->arr[103524] = 1153;
	v->arr[103525] = 1;
	v->arr[103526] = aux_sym_number_token1;
	v->arr[103527] = 1155;
	v->arr[103528] = 1;
	init_small_table6902(v);
}

void	init_small_table6902(t_small_table *v)
{
	v->arr[103529] = aux_sym_number_token2;
	v->arr[103530] = 1157;
	v->arr[103531] = 1;
	v->arr[103532] = anon_sym_DOLLAR_LBRACE;
	v->arr[103533] = 1159;
	v->arr[103534] = 1;
	v->arr[103535] = anon_sym_DOLLAR_LPAREN;
	v->arr[103536] = 1163;
	v->arr[103537] = 1;
	v->arr[103538] = anon_sym_DOLLAR_BQUOTE;
	v->arr[103539] = 1169;
	v->arr[103540] = 1;
	v->arr[103541] = sym__brace_start;
	v->arr[103542] = 1211;
	v->arr[103543] = 1;
	init_small_table6903(v);
}

void	init_small_table6903(t_small_table *v)
{
	v->arr[103544] = sym_word;
	v->arr[103545] = 1213;
	v->arr[103546] = 1;
	v->arr[103547] = anon_sym_BANG;
	v->arr[103548] = 1219;
	v->arr[103549] = 1;
	v->arr[103550] = anon_sym_TILDE;
	v->arr[103551] = 1221;
	v->arr[103552] = 1;
	v->arr[103553] = sym__special_character;
	v->arr[103554] = 1225;
	v->arr[103555] = 1;
	v->arr[103556] = sym_test_operator;
	v->arr[103557] = 3060;
	v->arr[103558] = 1;
	init_small_table6904(v);
}

void	init_small_table6904(t_small_table *v)
{
	v->arr[103559] = anon_sym_BQUOTE;
	v->arr[103560] = 2484;
	v->arr[103561] = 1;
	v->arr[103562] = aux_sym__literal_repeat1;
	v->arr[103563] = 3351;
	v->arr[103564] = 1;
	v->arr[103565] = sym__expression;
	v->arr[103566] = 1129;
	v->arr[103567] = 2;
	v->arr[103568] = anon_sym_LPAREN_LPAREN;
	v->arr[103569] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[103570] = 1165;
	v->arr[103571] = 2;
	v->arr[103572] = anon_sym_LT_LPAREN;
	v->arr[103573] = anon_sym_GT_LPAREN;
	init_small_table6905(v);
}

// file funcs1380.c
