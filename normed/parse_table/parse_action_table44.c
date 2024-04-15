/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs44.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table220(t_parse_table *v)
{
	v->arr[33][anon_sym_unsetenv] = 443;
	v->arr[33][anon_sym_AMP_GT] = 411;
	v->arr[33][anon_sym_AMP_GT_GT] = 413;
	v->arr[33][anon_sym_LT_AMP] = 411;
	v->arr[33][anon_sym_GT_AMP] = 411;
	v->arr[33][anon_sym_GT_PIPE] = 413;
	v->arr[33][anon_sym_LT_AMP_DASH] = 445;
	v->arr[33][anon_sym_GT_AMP_DASH] = 445;
	v->arr[33][anon_sym_LT_LT_LT] = 447;
	v->arr[33][anon_sym_DOLLAR_LPAREN_LPAREN] = 449;
	v->arr[33][anon_sym_DOLLAR_LBRACK] = 451;
	v->arr[33][anon_sym_DOLLAR] = 453;
	v->arr[33][sym__special_character] = 455;
	v->arr[33][anon_sym_DQUOTE] = 457;
	v->arr[33][sym_raw_string] = 459;
	init_parse_table221(v);
}

void	init_parse_table221(t_parse_table *v)
{
	v->arr[33][sym_ansi_c_string] = 459;
	v->arr[33][aux_sym_number_token1] = 461;
	v->arr[33][aux_sym_number_token2] = 463;
	v->arr[33][anon_sym_DOLLAR_LBRACE] = 465;
	v->arr[33][anon_sym_DOLLAR_LPAREN] = 467;
	v->arr[33][anon_sym_BQUOTE] = 469;
	v->arr[33][anon_sym_DOLLAR_BQUOTE] = 471;
	v->arr[33][anon_sym_LT_LPAREN] = 473;
	v->arr[33][anon_sym_GT_LPAREN] = 473;
	v->arr[33][sym_comment] = 71;
	v->arr[33][sym_file_descriptor] = 475;
	v->arr[33][sym_variable_name] = 477;
	v->arr[33][sym_test_operator] = 479;
	v->arr[33][sym__brace_start] = 481;
	v->arr[34][aux_sym__terminated_statement] = 34;
	init_parse_table222(v);
}

void	init_parse_table222(t_parse_table *v)
{
	v->arr[34][sym__statement_not_pipeline] = 6718;
	v->arr[34][sym_redirected_statement] = 5007;
	v->arr[34][sym_for_statement] = 5007;
	v->arr[34][sym_c_style_for_statement] = 5007;
	v->arr[34][sym_while_statement] = 4551;
	v->arr[34][sym_if_statement] = 4551;
	v->arr[34][sym_case_statement] = 5007;
	v->arr[34][sym_function_definition] = 5007;
	v->arr[34][sym_compound_statement] = 5007;
	v->arr[34][sym_subshell] = 5007;
	v->arr[34][sym_pipeline] = 5189;
	v->arr[34][sym_list] = 5007;
	v->arr[34][sym_negated_command] = 5007;
	v->arr[34][sym_test_command] = 5007;
	v->arr[34][sym_declaration_command] = 5007;
	init_parse_table223(v);
}

void	init_parse_table223(t_parse_table *v)
{
	v->arr[34][sym_unset_command] = 5007;
	v->arr[34][sym_command] = 5007;
	v->arr[34][sym_command_name] = 544;
	v->arr[34][sym_variable_assignment] = 1151;
	v->arr[34][sym_variable_assignments] = 5007;
	v->arr[34][sym_subscript] = 6790;
	v->arr[34][sym_file_redirect] = 2019;
	v->arr[34][sym_herestring_redirect] = 2017;
	v->arr[34][sym_arithmetic_expansion] = 1078;
	v->arr[34][sym_brace_expression] = 1078;
	v->arr[34][sym_concatenation] = 1376;
	v->arr[34][sym_string] = 1078;
	v->arr[34][sym_translated_string] = 1078;
	v->arr[34][sym_number] = 1078;
	v->arr[34][sym_simple_expansion] = 1078;
	init_parse_table224(v);
}

void	init_parse_table224(t_parse_table *v)
{
	v->arr[34][sym_expansion] = 1078;
	v->arr[34][sym_command_substitution] = 1078;
	v->arr[34][sym_process_substitution] = 1078;
	v->arr[34][aux_sym_redirected_statement_repeat2] = 4644;
	v->arr[34][aux_sym_command_repeat1] = 997;
	v->arr[34][aux_sym__literal_repeat1] = 1267;
	v->arr[34][sym_word] = 555;
	v->arr[34][anon_sym_for] = 558;
	v->arr[34][anon_sym_select] = 561;
	v->arr[34][anon_sym_LPAREN_LPAREN] = 564;
	v->arr[34][anon_sym_LT] = 567;
	v->arr[34][anon_sym_GT] = 567;
	v->arr[34][anon_sym_GT_GT] = 570;
	v->arr[34][anon_sym_LPAREN] = 573;
	v->arr[34][anon_sym_while] = 576;
	init_parse_table225(v);
}

// file funcs44.c
