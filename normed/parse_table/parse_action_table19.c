/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs19.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table95(t_parse_table *v)
{
	v->arr[13][anon_sym_DQUOTE] = 320;
	v->arr[13][sym_raw_string] = 322;
	v->arr[13][sym_ansi_c_string] = 322;
	v->arr[13][aux_sym_number_token1] = 324;
	v->arr[13][aux_sym_number_token2] = 326;
	v->arr[13][anon_sym_DOLLAR_LBRACE] = 328;
	v->arr[13][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[13][anon_sym_BQUOTE] = 332;
	v->arr[13][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[13][anon_sym_LT_LPAREN] = 336;
	v->arr[13][anon_sym_GT_LPAREN] = 336;
	v->arr[13][sym_comment] = 71;
	v->arr[13][sym_file_descriptor] = 338;
	v->arr[13][sym_variable_name] = 340;
	v->arr[13][sym_test_operator] = 342;
	init_parse_table96(v);
}

void	init_parse_table96(t_parse_table *v)
{
	v->arr[13][sym__brace_start] = 344;
	v->arr[14][aux_sym__terminated_statement] = 34;
	v->arr[14][sym__statement_not_pipeline] = 6718;
	v->arr[14][sym_redirected_statement] = 5007;
	v->arr[14][sym_for_statement] = 5007;
	v->arr[14][sym_c_style_for_statement] = 5007;
	v->arr[14][sym_while_statement] = 4551;
	v->arr[14][sym_if_statement] = 4551;
	v->arr[14][sym_elif_clause] = 6327;
	v->arr[14][sym_else_clause] = 7004;
	v->arr[14][sym_case_statement] = 5007;
	v->arr[14][sym_function_definition] = 5007;
	v->arr[14][sym_compound_statement] = 5007;
	v->arr[14][sym_subshell] = 5007;
	v->arr[14][sym_pipeline] = 5189;
	init_parse_table97(v);
}

void	init_parse_table97(t_parse_table *v)
{
	v->arr[14][sym_list] = 5007;
	v->arr[14][sym_negated_command] = 5007;
	v->arr[14][sym_test_command] = 5007;
	v->arr[14][sym_declaration_command] = 5007;
	v->arr[14][sym_unset_command] = 5007;
	v->arr[14][sym_command] = 5007;
	v->arr[14][sym_command_name] = 544;
	v->arr[14][sym_variable_assignment] = 1151;
	v->arr[14][sym_variable_assignments] = 5007;
	v->arr[14][sym_subscript] = 6790;
	v->arr[14][sym_file_redirect] = 2019;
	v->arr[14][sym_herestring_redirect] = 2017;
	v->arr[14][sym_arithmetic_expansion] = 1078;
	v->arr[14][sym_brace_expression] = 1078;
	v->arr[14][sym_concatenation] = 1376;
	init_parse_table98(v);
}

void	init_parse_table98(t_parse_table *v)
{
	v->arr[14][sym_string] = 1078;
	v->arr[14][sym_translated_string] = 1078;
	v->arr[14][sym_number] = 1078;
	v->arr[14][sym_simple_expansion] = 1078;
	v->arr[14][sym_expansion] = 1078;
	v->arr[14][sym_command_substitution] = 1078;
	v->arr[14][sym_process_substitution] = 1078;
	v->arr[14][aux_sym_redirected_statement_repeat2] = 4644;
	v->arr[14][aux_sym_if_statement_repeat1] = 6327;
	v->arr[14][aux_sym_command_repeat1] = 997;
	v->arr[14][aux_sym__literal_repeat1] = 1267;
	v->arr[14][sym_word] = 286;
	v->arr[14][anon_sym_for] = 9;
	v->arr[14][anon_sym_select] = 11;
	v->arr[14][anon_sym_LPAREN_LPAREN] = 288;
	init_parse_table99(v);
}

void	init_parse_table99(t_parse_table *v)
{
	v->arr[14][anon_sym_LT] = 290;
	v->arr[14][anon_sym_GT] = 290;
	v->arr[14][anon_sym_GT_GT] = 292;
	v->arr[14][anon_sym_LPAREN] = 19;
	v->arr[14][anon_sym_while] = 21;
	v->arr[14][anon_sym_until] = 21;
	v->arr[14][anon_sym_if] = 23;
	v->arr[14][anon_sym_fi] = 346;
	v->arr[14][anon_sym_elif] = 296;
	v->arr[14][anon_sym_else] = 298;
	v->arr[14][anon_sym_case] = 25;
	v->arr[14][anon_sym_function] = 300;
	v->arr[14][anon_sym_LBRACE] = 29;
	v->arr[14][anon_sym_BANG] = 302;
	v->arr[14][anon_sym_LBRACK] = 33;
	init_parse_table100(v);
}

// file funcs19.c
