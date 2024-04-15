/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs285.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table1425(t_parse_table *v)
{
	v->arr[233][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[233][anon_sym_BQUOTE] = 332;
	v->arr[233][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[233][anon_sym_LT_LPAREN] = 336;
	v->arr[233][anon_sym_GT_LPAREN] = 336;
	v->arr[233][sym_comment] = 71;
	v->arr[233][sym_file_descriptor] = 135;
	v->arr[233][sym_variable_name] = 137;
	v->arr[233][sym_test_operator] = 775;
	v->arr[233][sym__brace_start] = 344;
	v->arr[234][aux_sym__terminated_statement] = 34;
	v->arr[234][sym__statement_not_pipeline] = 6718;
	v->arr[234][sym_redirected_statement] = 5007;
	v->arr[234][sym_for_statement] = 5007;
	v->arr[234][sym_c_style_for_statement] = 5007;
	init_parse_table1426(v);
}

void	init_parse_table1426(t_parse_table *v)
{
	v->arr[234][sym_while_statement] = 4551;
	v->arr[234][sym_if_statement] = 4551;
	v->arr[234][sym_case_statement] = 5007;
	v->arr[234][sym_function_definition] = 5007;
	v->arr[234][sym_compound_statement] = 5007;
	v->arr[234][sym_subshell] = 5007;
	v->arr[234][sym_pipeline] = 5189;
	v->arr[234][sym_list] = 5007;
	v->arr[234][sym_negated_command] = 5007;
	v->arr[234][sym_test_command] = 5007;
	v->arr[234][sym_declaration_command] = 5007;
	v->arr[234][sym_unset_command] = 5007;
	v->arr[234][sym_command] = 5007;
	v->arr[234][sym_command_name] = 544;
	v->arr[234][sym_variable_assignment] = 1151;
	init_parse_table1427(v);
}

void	init_parse_table1427(t_parse_table *v)
{
	v->arr[234][sym_variable_assignments] = 5007;
	v->arr[234][sym_subscript] = 6790;
	v->arr[234][sym_file_redirect] = 2019;
	v->arr[234][sym_herestring_redirect] = 2017;
	v->arr[234][sym_arithmetic_expansion] = 1078;
	v->arr[234][sym_brace_expression] = 1078;
	v->arr[234][sym_concatenation] = 1376;
	v->arr[234][sym_string] = 1078;
	v->arr[234][sym_translated_string] = 1078;
	v->arr[234][sym_number] = 1078;
	v->arr[234][sym_simple_expansion] = 1078;
	v->arr[234][sym_expansion] = 1078;
	v->arr[234][sym_command_substitution] = 1078;
	v->arr[234][sym_process_substitution] = 1078;
	v->arr[234][aux_sym_redirected_statement_repeat2] = 4644;
	init_parse_table1428(v);
}

void	init_parse_table1428(t_parse_table *v)
{
	v->arr[234][aux_sym_command_repeat1] = 997;
	v->arr[234][aux_sym__literal_repeat1] = 1267;
	v->arr[234][sym_word] = 286;
	v->arr[234][anon_sym_for] = 9;
	v->arr[234][anon_sym_select] = 11;
	v->arr[234][anon_sym_LPAREN_LPAREN] = 288;
	v->arr[234][anon_sym_LT] = 290;
	v->arr[234][anon_sym_GT] = 290;
	v->arr[234][anon_sym_GT_GT] = 292;
	v->arr[234][anon_sym_LPAREN] = 19;
	v->arr[234][anon_sym_while] = 21;
	v->arr[234][anon_sym_until] = 21;
	v->arr[234][anon_sym_if] = 23;
	v->arr[234][anon_sym_then] = 877;
	v->arr[234][anon_sym_case] = 25;
	init_parse_table1429(v);
}

void	init_parse_table1429(t_parse_table *v)
{
	v->arr[234][anon_sym_function] = 300;
	v->arr[234][anon_sym_LBRACE] = 29;
	v->arr[234][anon_sym_BANG] = 302;
	v->arr[234][anon_sym_LBRACK] = 33;
	v->arr[234][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[234][anon_sym_declare] = 304;
	v->arr[234][anon_sym_typeset] = 304;
	v->arr[234][anon_sym_export] = 304;
	v->arr[234][anon_sym_readonly] = 304;
	v->arr[234][anon_sym_local] = 304;
	v->arr[234][anon_sym_unset] = 306;
	v->arr[234][anon_sym_unsetenv] = 306;
	v->arr[234][anon_sym_AMP_GT] = 290;
	v->arr[234][anon_sym_AMP_GT_GT] = 292;
	v->arr[234][anon_sym_LT_AMP] = 290;
	init_parse_table1430(v);
}

// file funcs285.c
