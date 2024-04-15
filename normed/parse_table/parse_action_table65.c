/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs65.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table325(t_parse_table *v)
{
	v->arr[50][anon_sym_unset] = 306;
	v->arr[50][anon_sym_unsetenv] = 306;
	v->arr[50][anon_sym_AMP_GT] = 290;
	v->arr[50][anon_sym_AMP_GT_GT] = 292;
	v->arr[50][anon_sym_LT_AMP] = 290;
	v->arr[50][anon_sym_GT_AMP] = 290;
	v->arr[50][anon_sym_GT_PIPE] = 292;
	v->arr[50][anon_sym_LT_AMP_DASH] = 308;
	v->arr[50][anon_sym_GT_AMP_DASH] = 308;
	v->arr[50][anon_sym_LT_LT_LT] = 310;
	v->arr[50][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[50][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[50][anon_sym_DOLLAR] = 316;
	v->arr[50][sym__special_character] = 318;
	v->arr[50][anon_sym_DQUOTE] = 320;
	init_parse_table326(v);
}

void	init_parse_table326(t_parse_table *v)
{
	v->arr[50][sym_raw_string] = 322;
	v->arr[50][sym_ansi_c_string] = 322;
	v->arr[50][aux_sym_number_token1] = 324;
	v->arr[50][aux_sym_number_token2] = 326;
	v->arr[50][anon_sym_DOLLAR_LBRACE] = 328;
	v->arr[50][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[50][anon_sym_BQUOTE] = 332;
	v->arr[50][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[50][anon_sym_LT_LPAREN] = 336;
	v->arr[50][anon_sym_GT_LPAREN] = 336;
	v->arr[50][sym_comment] = 71;
	v->arr[50][sym_file_descriptor] = 338;
	v->arr[50][sym_variable_name] = 340;
	v->arr[50][sym_test_operator] = 342;
	v->arr[50][sym__brace_start] = 344;
	init_parse_table327(v);
}

void	init_parse_table327(t_parse_table *v)
{
	v->arr[51][aux_sym__terminated_statement] = 34;
	v->arr[51][sym__statement_not_pipeline] = 6718;
	v->arr[51][sym_redirected_statement] = 5007;
	v->arr[51][sym_for_statement] = 5007;
	v->arr[51][sym_c_style_for_statement] = 5007;
	v->arr[51][sym_while_statement] = 4551;
	v->arr[51][sym_do_group] = 4632;
	v->arr[51][sym_if_statement] = 4551;
	v->arr[51][sym_case_statement] = 5007;
	v->arr[51][sym_function_definition] = 5007;
	v->arr[51][sym_compound_statement] = 5007;
	v->arr[51][sym_subshell] = 5007;
	v->arr[51][sym_pipeline] = 5189;
	v->arr[51][sym_list] = 5007;
	v->arr[51][sym_negated_command] = 5007;
	init_parse_table328(v);
}

void	init_parse_table328(t_parse_table *v)
{
	v->arr[51][sym_test_command] = 5007;
	v->arr[51][sym_declaration_command] = 5007;
	v->arr[51][sym_unset_command] = 5007;
	v->arr[51][sym_command] = 5007;
	v->arr[51][sym_command_name] = 544;
	v->arr[51][sym_variable_assignment] = 1151;
	v->arr[51][sym_variable_assignments] = 5007;
	v->arr[51][sym_subscript] = 6790;
	v->arr[51][sym_file_redirect] = 2019;
	v->arr[51][sym_herestring_redirect] = 2017;
	v->arr[51][sym_arithmetic_expansion] = 1078;
	v->arr[51][sym_brace_expression] = 1078;
	v->arr[51][sym_concatenation] = 1376;
	v->arr[51][sym_string] = 1078;
	v->arr[51][sym_translated_string] = 1078;
	init_parse_table329(v);
}

void	init_parse_table329(t_parse_table *v)
{
	v->arr[51][sym_number] = 1078;
	v->arr[51][sym_simple_expansion] = 1078;
	v->arr[51][sym_expansion] = 1078;
	v->arr[51][sym_command_substitution] = 1078;
	v->arr[51][sym_process_substitution] = 1078;
	v->arr[51][aux_sym_redirected_statement_repeat2] = 4644;
	v->arr[51][aux_sym_command_repeat1] = 997;
	v->arr[51][aux_sym__literal_repeat1] = 1267;
	v->arr[51][sym_word] = 286;
	v->arr[51][anon_sym_for] = 9;
	v->arr[51][anon_sym_select] = 11;
	v->arr[51][anon_sym_LPAREN_LPAREN] = 288;
	v->arr[51][anon_sym_LT] = 290;
	v->arr[51][anon_sym_GT] = 290;
	v->arr[51][anon_sym_GT_GT] = 292;
	init_parse_table330(v);
}

// file funcs65.c
