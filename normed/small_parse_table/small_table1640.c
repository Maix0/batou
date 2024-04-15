/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1640.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table8200(t_small_table *v)
{
	v->arr[122999] = sym_arithmetic_expansion;
	v->arr[123000] = sym_brace_expression;
	v->arr[123001] = sym_string;
	v->arr[123002] = sym_translated_string;
	v->arr[123003] = sym_number;
	v->arr[123004] = sym_simple_expansion;
	v->arr[123005] = sym_expansion;
	v->arr[123006] = sym_command_substitution;
	v->arr[123007] = sym_process_substitution;
	v->arr[123009] = 6;
	v->arr[123009] = 71;
	v->arr[123010] = 1;
	v->arr[123011] = sym_comment;
	v->arr[123012] = 6514;
	v->arr[123013] = 1;
	init_small_table8201(v);
}

void	init_small_table8201(t_small_table *v)
{
	v->arr[123014] = aux_sym_concatenation_token1;
	v->arr[123015] = 6516;
	v->arr[123016] = 1;
	v->arr[123017] = sym__concat;
	v->arr[123018] = 2359;
	v->arr[123019] = 1;
	v->arr[123020] = aux_sym_concatenation_repeat1;
	v->arr[123021] = 1286;
	v->arr[123022] = 13;
	v->arr[123023] = anon_sym_PIPE;
	v->arr[123024] = anon_sym_LT;
	v->arr[123025] = anon_sym_GT;
	v->arr[123026] = anon_sym_LT_LT;
	v->arr[123027] = anon_sym_AMP_GT;
	v->arr[123028] = anon_sym_LT_AMP;
	init_small_table8202(v);
}

void	init_small_table8202(t_small_table *v)
{
	v->arr[123029] = anon_sym_GT_AMP;
	v->arr[123030] = anon_sym_DOLLAR;
	v->arr[123031] = aux_sym_number_token1;
	v->arr[123032] = aux_sym_number_token2;
	v->arr[123033] = anon_sym_DOLLAR_LPAREN;
	v->arr[123034] = anon_sym_BQUOTE;
	v->arr[123035] = sym_word;
	v->arr[123036] = 1288;
	v->arr[123037] = 25;
	v->arr[123038] = sym_file_descriptor;
	v->arr[123039] = sym_variable_name;
	v->arr[123040] = sym_test_operator;
	v->arr[123041] = sym__brace_start;
	v->arr[123042] = anon_sym_LPAREN_LPAREN;
	v->arr[123043] = anon_sym_PIPE_PIPE;
	init_small_table8203(v);
}

void	init_small_table8203(t_small_table *v)
{
	v->arr[123044] = anon_sym_AMP_AMP;
	v->arr[123045] = anon_sym_GT_GT;
	v->arr[123046] = anon_sym_PIPE_AMP;
	v->arr[123047] = anon_sym_AMP_GT_GT;
	v->arr[123048] = anon_sym_GT_PIPE;
	v->arr[123049] = anon_sym_LT_AMP_DASH;
	v->arr[123050] = anon_sym_GT_AMP_DASH;
	v->arr[123051] = anon_sym_LT_LT_DASH;
	v->arr[123052] = anon_sym_LT_LT_LT;
	v->arr[123053] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[123054] = anon_sym_DOLLAR_LBRACK;
	v->arr[123055] = sym__special_character;
	v->arr[123056] = anon_sym_DQUOTE;
	v->arr[123057] = sym_raw_string;
	v->arr[123058] = sym_ansi_c_string;
	init_small_table8204(v);
}

void	init_small_table8204(t_small_table *v)
{
	v->arr[123059] = anon_sym_DOLLAR_LBRACE;
	v->arr[123060] = anon_sym_DOLLAR_BQUOTE;
	v->arr[123061] = anon_sym_LT_LPAREN;
	v->arr[123062] = anon_sym_GT_LPAREN;
	v->arr[123064] = 3;
	v->arr[123064] = 71;
	v->arr[123065] = 1;
	v->arr[123066] = sym_comment;
	v->arr[123067] = 1261;
	v->arr[123068] = 15;
	v->arr[123069] = anon_sym_PIPE;
	v->arr[123070] = anon_sym_EQ_EQ;
	v->arr[123071] = anon_sym_LT;
	v->arr[123072] = anon_sym_GT;
	v->arr[123073] = anon_sym_LT_LT;
	init_small_table8205(v);
}

// file funcs1640.c
