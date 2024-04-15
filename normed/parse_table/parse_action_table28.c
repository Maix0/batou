/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs28.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table140(t_parse_table *v)
{
	v->arr[20][anon_sym_GT_LPAREN] = 336;
	v->arr[20][sym_comment] = 71;
	v->arr[20][sym_file_descriptor] = 338;
	v->arr[20][sym_variable_name] = 340;
	v->arr[20][sym_test_operator] = 342;
	v->arr[20][sym__brace_start] = 344;
	v->arr[21][aux_sym__terminated_statement] = 14;
	v->arr[21][sym__statement_not_pipeline] = 6718;
	v->arr[21][sym_redirected_statement] = 5007;
	v->arr[21][sym_for_statement] = 5007;
	v->arr[21][sym_c_style_for_statement] = 5007;
	v->arr[21][sym_while_statement] = 4551;
	v->arr[21][sym_if_statement] = 4551;
	v->arr[21][sym_elif_clause] = 6337;
	v->arr[21][sym_else_clause] = 6981;
	init_parse_table141(v);
}

void	init_parse_table141(t_parse_table *v)
{
	v->arr[21][sym_case_statement] = 5007;
	v->arr[21][sym_function_definition] = 5007;
	v->arr[21][sym_compound_statement] = 5007;
	v->arr[21][sym_subshell] = 5007;
	v->arr[21][sym_pipeline] = 5189;
	v->arr[21][sym_list] = 5007;
	v->arr[21][sym_negated_command] = 5007;
	v->arr[21][sym_test_command] = 5007;
	v->arr[21][sym_declaration_command] = 5007;
	v->arr[21][sym_unset_command] = 5007;
	v->arr[21][sym_command] = 5007;
	v->arr[21][sym_command_name] = 544;
	v->arr[21][sym_variable_assignment] = 1151;
	v->arr[21][sym_variable_assignments] = 5007;
	v->arr[21][sym_subscript] = 6790;
	init_parse_table142(v);
}

void	init_parse_table142(t_parse_table *v)
{
	v->arr[21][sym_file_redirect] = 2019;
	v->arr[21][sym_herestring_redirect] = 2017;
	v->arr[21][sym_arithmetic_expansion] = 1078;
	v->arr[21][sym_brace_expression] = 1078;
	v->arr[21][sym_concatenation] = 1376;
	v->arr[21][sym_string] = 1078;
	v->arr[21][sym_translated_string] = 1078;
	v->arr[21][sym_number] = 1078;
	v->arr[21][sym_simple_expansion] = 1078;
	v->arr[21][sym_expansion] = 1078;
	v->arr[21][sym_command_substitution] = 1078;
	v->arr[21][sym_process_substitution] = 1078;
	v->arr[21][aux_sym_redirected_statement_repeat2] = 4644;
	v->arr[21][aux_sym_if_statement_repeat1] = 6337;
	v->arr[21][aux_sym_command_repeat1] = 997;
	init_parse_table143(v);
}

void	init_parse_table143(t_parse_table *v)
{
	v->arr[21][aux_sym__literal_repeat1] = 1267;
	v->arr[21][sym_word] = 286;
	v->arr[21][anon_sym_for] = 9;
	v->arr[21][anon_sym_select] = 11;
	v->arr[21][anon_sym_LPAREN_LPAREN] = 288;
	v->arr[21][anon_sym_LT] = 290;
	v->arr[21][anon_sym_GT] = 290;
	v->arr[21][anon_sym_GT_GT] = 292;
	v->arr[21][anon_sym_LPAREN] = 19;
	v->arr[21][anon_sym_while] = 21;
	v->arr[21][anon_sym_until] = 21;
	v->arr[21][anon_sym_if] = 23;
	v->arr[21][anon_sym_fi] = 401;
	v->arr[21][anon_sym_elif] = 296;
	v->arr[21][anon_sym_else] = 298;
	init_parse_table144(v);
}

void	init_parse_table144(t_parse_table *v)
{
	v->arr[21][anon_sym_case] = 25;
	v->arr[21][anon_sym_function] = 300;
	v->arr[21][anon_sym_LBRACE] = 29;
	v->arr[21][anon_sym_BANG] = 302;
	v->arr[21][anon_sym_LBRACK] = 33;
	v->arr[21][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[21][anon_sym_declare] = 304;
	v->arr[21][anon_sym_typeset] = 304;
	v->arr[21][anon_sym_export] = 304;
	v->arr[21][anon_sym_readonly] = 304;
	v->arr[21][anon_sym_local] = 304;
	v->arr[21][anon_sym_unset] = 306;
	v->arr[21][anon_sym_unsetenv] = 306;
	v->arr[21][anon_sym_AMP_GT] = 290;
	v->arr[21][anon_sym_AMP_GT_GT] = 292;
	init_parse_table145(v);
}

// file funcs28.c
