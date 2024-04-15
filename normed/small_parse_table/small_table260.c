/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs260.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table1300(t_small_table *v)
{
	v->arr[19499] = sym_translated_string;
	v->arr[19500] = sym_number;
	v->arr[19501] = sym_simple_expansion;
	v->arr[19502] = sym_expansion;
	v->arr[19503] = sym_command_substitution;
	v->arr[19504] = sym_process_substitution;
	v->arr[19505] = 2494;
	v->arr[19506] = 21;
	v->arr[19507] = anon_sym_SEMI;
	v->arr[19508] = anon_sym_PIPE_PIPE;
	v->arr[19509] = anon_sym_AMP_AMP;
	v->arr[19510] = anon_sym_PIPE;
	v->arr[19511] = anon_sym_AMP;
	v->arr[19512] = anon_sym_LT;
	v->arr[19513] = anon_sym_GT;
	init_small_table1301(v);
}

void	init_small_table1301(t_small_table *v)
{
	v->arr[19514] = anon_sym_LT_LT;
	v->arr[19515] = anon_sym_GT_GT;
	v->arr[19516] = anon_sym_RPAREN;
	v->arr[19517] = anon_sym_SEMI_SEMI;
	v->arr[19518] = anon_sym_PIPE_AMP;
	v->arr[19519] = anon_sym_AMP_GT;
	v->arr[19520] = anon_sym_AMP_GT_GT;
	v->arr[19521] = anon_sym_LT_AMP;
	v->arr[19522] = anon_sym_GT_AMP;
	v->arr[19523] = anon_sym_GT_PIPE;
	v->arr[19524] = anon_sym_LT_AMP_DASH;
	v->arr[19525] = anon_sym_GT_AMP_DASH;
	v->arr[19526] = anon_sym_LT_LT_DASH;
	v->arr[19527] = anon_sym_LT_LT_LT;
	v->arr[19529] = 35;
	init_small_table1302(v);
}

void	init_small_table1302(t_small_table *v)
{
	v->arr[19529] = 71;
	v->arr[19530] = 1;
	v->arr[19531] = sym_comment;
	v->arr[19532] = 237;
	v->arr[19533] = 1;
	v->arr[19534] = sym_word;
	v->arr[19535] = 258;
	v->arr[19536] = 1;
	v->arr[19537] = anon_sym_DOLLAR;
	v->arr[19538] = 264;
	v->arr[19539] = 1;
	v->arr[19540] = aux_sym_number_token1;
	v->arr[19541] = 266;
	v->arr[19542] = 1;
	v->arr[19543] = aux_sym_number_token2;
	init_small_table1303(v);
}

void	init_small_table1303(t_small_table *v)
{
	v->arr[19544] = 270;
	v->arr[19545] = 1;
	v->arr[19546] = anon_sym_DOLLAR_LPAREN;
	v->arr[19547] = 282;
	v->arr[19548] = 1;
	v->arr[19549] = sym_test_operator;
	v->arr[19550] = 284;
	v->arr[19551] = 1;
	v->arr[19552] = sym__brace_start;
	v->arr[19553] = 1075;
	v->arr[19554] = 1;
	v->arr[19555] = anon_sym_DOLLAR_LBRACK;
	v->arr[19556] = 1079;
	v->arr[19557] = 1;
	v->arr[19558] = sym__special_character;
	init_small_table1304(v);
}

void	init_small_table1304(t_small_table *v)
{
	v->arr[19559] = 1081;
	v->arr[19560] = 1;
	v->arr[19561] = anon_sym_DQUOTE;
	v->arr[19562] = 1085;
	v->arr[19563] = 1;
	v->arr[19564] = anon_sym_DOLLAR_LBRACE;
	v->arr[19565] = 1087;
	v->arr[19566] = 1;
	v->arr[19567] = anon_sym_DOLLAR_BQUOTE;
	v->arr[19568] = 3588;
	v->arr[19569] = 1;
	v->arr[19570] = anon_sym_LPAREN;
	v->arr[19571] = 3590;
	v->arr[19572] = 1;
	v->arr[19573] = anon_sym_BANG;
	init_small_table1305(v);
}

// file funcs260.c
