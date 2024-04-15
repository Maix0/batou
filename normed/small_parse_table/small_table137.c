/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs137.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table685(t_small_table *v)
{
	v->arr[10274] = sym_brace_expression;
	v->arr[10275] = sym_string;
	v->arr[10276] = sym_translated_string;
	v->arr[10277] = sym_number;
	v->arr[10278] = sym_simple_expansion;
	v->arr[10279] = sym_expansion;
	v->arr[10280] = sym_command_substitution;
	v->arr[10281] = sym_process_substitution;
	v->arr[10282] = 2297;
	v->arr[10283] = 21;
	v->arr[10284] = anon_sym_SEMI;
	v->arr[10285] = anon_sym_PIPE_PIPE;
	v->arr[10286] = anon_sym_AMP_AMP;
	v->arr[10287] = anon_sym_PIPE;
	v->arr[10288] = anon_sym_AMP;
	init_small_table686(v);
}

void	init_small_table686(t_small_table *v)
{
	v->arr[10289] = anon_sym_LT;
	v->arr[10290] = anon_sym_GT;
	v->arr[10291] = anon_sym_LT_LT;
	v->arr[10292] = anon_sym_GT_GT;
	v->arr[10293] = anon_sym_SEMI_SEMI;
	v->arr[10294] = anon_sym_SEMI_AMP;
	v->arr[10295] = anon_sym_SEMI_SEMI_AMP;
	v->arr[10296] = anon_sym_PIPE_AMP;
	v->arr[10297] = anon_sym_AMP_GT;
	v->arr[10298] = anon_sym_AMP_GT_GT;
	v->arr[10299] = anon_sym_LT_AMP;
	v->arr[10300] = anon_sym_GT_AMP;
	v->arr[10301] = anon_sym_GT_PIPE;
	v->arr[10302] = anon_sym_LT_AMP_DASH;
	v->arr[10303] = anon_sym_GT_AMP_DASH;
	init_small_table687(v);
}

void	init_small_table687(t_small_table *v)
{
	v->arr[10304] = anon_sym_LT_LT_DASH;
	v->arr[10306] = 22;
	v->arr[10306] = 3;
	v->arr[10307] = 1;
	v->arr[10308] = sym_comment;
	v->arr[10309] = 2895;
	v->arr[10310] = 1;
	v->arr[10311] = anon_sym_DOLLAR_LBRACK;
	v->arr[10312] = 2898;
	v->arr[10313] = 1;
	v->arr[10314] = anon_sym_DOLLAR;
	v->arr[10315] = 2901;
	v->arr[10316] = 1;
	v->arr[10317] = sym__special_character;
	v->arr[10318] = 2904;
	init_small_table688(v);
}

void	init_small_table688(t_small_table *v)
{
	v->arr[10319] = 1;
	v->arr[10320] = anon_sym_DQUOTE;
	v->arr[10321] = 2907;
	v->arr[10322] = 1;
	v->arr[10323] = aux_sym_number_token1;
	v->arr[10324] = 2910;
	v->arr[10325] = 1;
	v->arr[10326] = aux_sym_number_token2;
	v->arr[10327] = 2913;
	v->arr[10328] = 1;
	v->arr[10329] = anon_sym_DOLLAR_LBRACE;
	v->arr[10330] = 2916;
	v->arr[10331] = 1;
	v->arr[10332] = anon_sym_DOLLAR_LPAREN;
	v->arr[10333] = 2919;
	init_small_table689(v);
}

void	init_small_table689(t_small_table *v)
{
	v->arr[10334] = 1;
	v->arr[10335] = anon_sym_BQUOTE;
	v->arr[10336] = 2922;
	v->arr[10337] = 1;
	v->arr[10338] = anon_sym_DOLLAR_BQUOTE;
	v->arr[10339] = 2928;
	v->arr[10340] = 1;
	v->arr[10341] = aux_sym__simple_variable_name_token1;
	v->arr[10342] = 2931;
	v->arr[10343] = 1;
	v->arr[10344] = sym_test_operator;
	v->arr[10345] = 2934;
	v->arr[10346] = 1;
	v->arr[10347] = sym__brace_start;
	v->arr[10348] = 1860;
	init_small_table690(v);
}

// file funcs137.c
