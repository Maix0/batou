/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs283.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table1415(t_parse_table *v)
{
	v->arr[232][sym_variable_assignments] = 5007;
	v->arr[232][sym_subscript] = 6790;
	v->arr[232][sym_file_redirect] = 2019;
	v->arr[232][sym_herestring_redirect] = 2017;
	v->arr[232][sym_arithmetic_expansion] = 1078;
	v->arr[232][sym_brace_expression] = 1078;
	v->arr[232][sym_concatenation] = 1376;
	v->arr[232][sym_string] = 1078;
	v->arr[232][sym_translated_string] = 1078;
	v->arr[232][sym_number] = 1078;
	v->arr[232][sym_simple_expansion] = 1078;
	v->arr[232][sym_expansion] = 1078;
	v->arr[232][sym_command_substitution] = 1078;
	v->arr[232][sym_process_substitution] = 1078;
	v->arr[232][aux_sym_redirected_statement_repeat2] = 4644;
	init_parse_table1416(v);
}

void	init_parse_table1416(t_parse_table *v)
{
	v->arr[232][aux_sym_command_repeat1] = 997;
	v->arr[232][aux_sym__literal_repeat1] = 1267;
	v->arr[232][sym_word] = 286;
	v->arr[232][anon_sym_for] = 9;
	v->arr[232][anon_sym_select] = 11;
	v->arr[232][anon_sym_LPAREN_LPAREN] = 288;
	v->arr[232][anon_sym_LT] = 290;
	v->arr[232][anon_sym_GT] = 290;
	v->arr[232][anon_sym_GT_GT] = 292;
	v->arr[232][anon_sym_LPAREN] = 19;
	v->arr[232][anon_sym_while] = 21;
	v->arr[232][anon_sym_until] = 21;
	v->arr[232][anon_sym_if] = 23;
	v->arr[232][anon_sym_fi] = 875;
	v->arr[232][anon_sym_case] = 25;
	init_parse_table1417(v);
}

void	init_parse_table1417(t_parse_table *v)
{
	v->arr[232][anon_sym_function] = 300;
	v->arr[232][anon_sym_LBRACE] = 29;
	v->arr[232][anon_sym_BANG] = 302;
	v->arr[232][anon_sym_LBRACK] = 33;
	v->arr[232][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[232][anon_sym_declare] = 304;
	v->arr[232][anon_sym_typeset] = 304;
	v->arr[232][anon_sym_export] = 304;
	v->arr[232][anon_sym_readonly] = 304;
	v->arr[232][anon_sym_local] = 304;
	v->arr[232][anon_sym_unset] = 306;
	v->arr[232][anon_sym_unsetenv] = 306;
	v->arr[232][anon_sym_AMP_GT] = 290;
	v->arr[232][anon_sym_AMP_GT_GT] = 292;
	v->arr[232][anon_sym_LT_AMP] = 290;
	init_parse_table1418(v);
}

void	init_parse_table1418(t_parse_table *v)
{
	v->arr[232][anon_sym_GT_AMP] = 290;
	v->arr[232][anon_sym_GT_PIPE] = 292;
	v->arr[232][anon_sym_LT_AMP_DASH] = 308;
	v->arr[232][anon_sym_GT_AMP_DASH] = 308;
	v->arr[232][anon_sym_LT_LT_LT] = 310;
	v->arr[232][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[232][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[232][anon_sym_DOLLAR] = 316;
	v->arr[232][sym__special_character] = 318;
	v->arr[232][anon_sym_DQUOTE] = 320;
	v->arr[232][sym_raw_string] = 322;
	v->arr[232][sym_ansi_c_string] = 322;
	v->arr[232][aux_sym_number_token1] = 324;
	v->arr[232][aux_sym_number_token2] = 326;
	v->arr[232][anon_sym_DOLLAR_LBRACE] = 328;
	init_parse_table1419(v);
}

void	init_parse_table1419(t_parse_table *v)
{
	v->arr[232][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[232][anon_sym_BQUOTE] = 332;
	v->arr[232][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[232][anon_sym_LT_LPAREN] = 336;
	v->arr[232][anon_sym_GT_LPAREN] = 336;
	v->arr[232][sym_comment] = 71;
	v->arr[232][sym_file_descriptor] = 338;
	v->arr[232][sym_variable_name] = 340;
	v->arr[232][sym_test_operator] = 342;
	v->arr[232][sym__brace_start] = 344;
	v->arr[233][sym__statements] = 7531;
	v->arr[233][sym__statement_not_pipeline] = 6614;
	v->arr[233][sym_redirected_statement] = 4797;
	v->arr[233][sym_for_statement] = 4797;
	v->arr[233][sym_c_style_for_statement] = 4797;
	init_parse_table1420(v);
}

// file funcs283.c
