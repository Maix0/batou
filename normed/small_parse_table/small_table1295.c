/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1295.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table6475(t_small_table *v)
{
	v->arr[97124] = sym_binary_expression;
	v->arr[97125] = sym_ternary_expression;
	v->arr[97126] = sym_unary_expression;
	v->arr[97127] = sym_postfix_expression;
	v->arr[97128] = sym_parenthesized_expression;
	v->arr[97129] = sym_concatenation;
	v->arr[97130] = 2503;
	v->arr[97131] = 9;
	v->arr[97132] = sym_arithmetic_expansion;
	v->arr[97133] = sym_brace_expression;
	v->arr[97134] = sym_string;
	v->arr[97135] = sym_translated_string;
	v->arr[97136] = sym_number;
	v->arr[97137] = sym_simple_expansion;
	v->arr[97138] = sym_expansion;
	init_small_table6476(v);
}

void	init_small_table6476(t_small_table *v)
{
	v->arr[97139] = sym_command_substitution;
	v->arr[97140] = sym_process_substitution;
	v->arr[97142] = 3;
	v->arr[97142] = 71;
	v->arr[97143] = 1;
	v->arr[97144] = sym_comment;
	v->arr[97145] = 1328;
	v->arr[97146] = 16;
	v->arr[97147] = anon_sym_PIPE;
	v->arr[97148] = anon_sym_EQ_EQ;
	v->arr[97149] = anon_sym_LT;
	v->arr[97150] = anon_sym_GT;
	v->arr[97151] = anon_sym_LT_LT;
	v->arr[97152] = anon_sym_LPAREN;
	v->arr[97153] = anon_sym_EQ_TILDE;
	init_small_table6477(v);
}

void	init_small_table6477(t_small_table *v)
{
	v->arr[97154] = anon_sym_AMP_GT;
	v->arr[97155] = anon_sym_LT_AMP;
	v->arr[97156] = anon_sym_GT_AMP;
	v->arr[97157] = anon_sym_DOLLAR;
	v->arr[97158] = aux_sym_number_token1;
	v->arr[97159] = aux_sym_number_token2;
	v->arr[97160] = anon_sym_DOLLAR_LPAREN;
	v->arr[97161] = anon_sym_BQUOTE;
	v->arr[97162] = sym_word;
	v->arr[97163] = 1330;
	v->arr[97164] = 27;
	v->arr[97165] = sym_file_descriptor;
	v->arr[97166] = sym__concat;
	v->arr[97167] = sym_test_operator;
	v->arr[97168] = sym__bare_dollar;
	init_small_table6478(v);
}

void	init_small_table6478(t_small_table *v)
{
	v->arr[97169] = sym__brace_start;
	v->arr[97170] = anon_sym_LPAREN_LPAREN;
	v->arr[97171] = anon_sym_PIPE_PIPE;
	v->arr[97172] = anon_sym_AMP_AMP;
	v->arr[97173] = anon_sym_GT_GT;
	v->arr[97174] = anon_sym_PIPE_AMP;
	v->arr[97175] = anon_sym_AMP_GT_GT;
	v->arr[97176] = anon_sym_GT_PIPE;
	v->arr[97177] = anon_sym_LT_AMP_DASH;
	v->arr[97178] = anon_sym_GT_AMP_DASH;
	v->arr[97179] = anon_sym_LT_LT_DASH;
	v->arr[97180] = anon_sym_LT_LT_LT;
	v->arr[97181] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[97182] = anon_sym_DOLLAR_LBRACK;
	v->arr[97183] = aux_sym_concatenation_token1;
	init_small_table6479(v);
}

void	init_small_table6479(t_small_table *v)
{
	v->arr[97184] = sym__special_character;
	v->arr[97185] = anon_sym_DQUOTE;
	v->arr[97186] = sym_raw_string;
	v->arr[97187] = sym_ansi_c_string;
	v->arr[97188] = anon_sym_DOLLAR_LBRACE;
	v->arr[97189] = anon_sym_DOLLAR_BQUOTE;
	v->arr[97190] = anon_sym_LT_LPAREN;
	v->arr[97191] = anon_sym_GT_LPAREN;
	v->arr[97193] = 6;
	v->arr[97193] = 3;
	v->arr[97194] = 1;
	v->arr[97195] = sym_comment;
	v->arr[97196] = 6013;
	v->arr[97197] = 1;
	v->arr[97198] = aux_sym_concatenation_token1;
	init_small_table6480(v);
}

// file funcs1295.c
