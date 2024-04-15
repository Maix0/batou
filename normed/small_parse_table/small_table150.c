/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs150.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table750(t_small_table *v)
{
	v->arr[11249] = aux_sym_number_token2;
	v->arr[11250] = 328;
	v->arr[11251] = 1;
	v->arr[11252] = anon_sym_DOLLAR_LBRACE;
	v->arr[11253] = 330;
	v->arr[11254] = 1;
	v->arr[11255] = anon_sym_DOLLAR_LPAREN;
	v->arr[11256] = 332;
	v->arr[11257] = 1;
	v->arr[11258] = anon_sym_BQUOTE;
	v->arr[11259] = 334;
	v->arr[11260] = 1;
	v->arr[11261] = anon_sym_DOLLAR_BQUOTE;
	v->arr[11262] = 344;
	v->arr[11263] = 1;
	init_small_table751(v);
}

void	init_small_table751(t_small_table *v)
{
	v->arr[11264] = sym__brace_start;
	v->arr[11265] = 1015;
	v->arr[11266] = 1;
	v->arr[11267] = sym__special_character;
	v->arr[11268] = 1021;
	v->arr[11269] = 1;
	v->arr[11270] = sym_variable_name;
	v->arr[11271] = 1023;
	v->arr[11272] = 1;
	v->arr[11273] = sym_test_operator;
	v->arr[11274] = 1394;
	v->arr[11275] = 1;
	v->arr[11276] = anon_sym_LT_LT_LT;
	v->arr[11277] = 1396;
	v->arr[11278] = 1;
	init_small_table752(v);
}

void	init_small_table752(t_small_table *v)
{
	v->arr[11279] = sym_file_descriptor;
	v->arr[11280] = 2961;
	v->arr[11281] = 1;
	v->arr[11282] = sym_word;
	v->arr[11283] = 596;
	v->arr[11284] = 1;
	v->arr[11285] = sym_command_name;
	v->arr[11286] = 933;
	v->arr[11287] = 1;
	v->arr[11288] = aux_sym_command_repeat1;
	v->arr[11289] = 1267;
	v->arr[11290] = 1;
	v->arr[11291] = aux_sym__literal_repeat1;
	v->arr[11292] = 1376;
	v->arr[11293] = 1;
	init_small_table753(v);
}

void	init_small_table753(t_small_table *v)
{
	v->arr[11294] = sym_concatenation;
	v->arr[11295] = 1974;
	v->arr[11296] = 1;
	v->arr[11297] = sym_variable_assignment;
	v->arr[11298] = 5026;
	v->arr[11299] = 1;
	v->arr[11300] = sym_command;
	v->arr[11301] = 6759;
	v->arr[11302] = 1;
	v->arr[11303] = sym_subscript;
	v->arr[11304] = 336;
	v->arr[11305] = 2;
	v->arr[11306] = anon_sym_LT_LPAREN;
	v->arr[11307] = anon_sym_GT_LPAREN;
	v->arr[11308] = 1017;
	init_small_table754(v);
}

void	init_small_table754(t_small_table *v)
{
	v->arr[11309] = 2;
	v->arr[11310] = sym_raw_string;
	v->arr[11311] = sym_ansi_c_string;
	v->arr[11312] = 1392;
	v->arr[11313] = 2;
	v->arr[11314] = anon_sym_LT_AMP_DASH;
	v->arr[11315] = anon_sym_GT_AMP_DASH;
	v->arr[11316] = 3581;
	v->arr[11317] = 2;
	v->arr[11318] = sym_file_redirect;
	v->arr[11319] = sym_herestring_redirect;
	v->arr[11320] = 5014;
	v->arr[11321] = 2;
	v->arr[11322] = sym_subshell;
	v->arr[11323] = sym_test_command;
	init_small_table755(v);
}

// file funcs150.c
