/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs522.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2610(t_parse_table *v)
{
	v->arr[431][anon_sym_case] = 421;
	v->arr[431][anon_sym_function] = 431;
	v->arr[431][anon_sym_LBRACE] = 433;
	v->arr[431][anon_sym_BANG] = 435;
	v->arr[431][anon_sym_LBRACK] = 437;
	v->arr[431][anon_sym_LBRACK_LBRACK] = 439;
	v->arr[431][anon_sym_declare] = 441;
	v->arr[431][anon_sym_typeset] = 441;
	v->arr[431][anon_sym_export] = 441;
	v->arr[431][anon_sym_readonly] = 441;
	v->arr[431][anon_sym_local] = 441;
	v->arr[431][anon_sym_unset] = 443;
	v->arr[431][anon_sym_unsetenv] = 443;
	v->arr[431][anon_sym_AMP_GT] = 411;
	v->arr[431][anon_sym_AMP_GT_GT] = 413;
	init_parse_table2611(v);
}

void	init_parse_table2611(t_parse_table *v)
{
	v->arr[431][anon_sym_LT_AMP] = 411;
	v->arr[431][anon_sym_GT_AMP] = 411;
	v->arr[431][anon_sym_GT_PIPE] = 413;
	v->arr[431][anon_sym_LT_AMP_DASH] = 445;
	v->arr[431][anon_sym_GT_AMP_DASH] = 445;
	v->arr[431][anon_sym_LT_LT_LT] = 447;
	v->arr[431][anon_sym_DOLLAR_LPAREN_LPAREN] = 449;
	v->arr[431][anon_sym_DOLLAR_LBRACK] = 451;
	v->arr[431][anon_sym_DOLLAR] = 453;
	v->arr[431][sym__special_character] = 455;
	v->arr[431][anon_sym_DQUOTE] = 457;
	v->arr[431][sym_raw_string] = 459;
	v->arr[431][sym_ansi_c_string] = 459;
	v->arr[431][aux_sym_number_token1] = 461;
	v->arr[431][aux_sym_number_token2] = 463;
	init_parse_table2612(v);
}

void	init_parse_table2612(t_parse_table *v)
{
	v->arr[431][anon_sym_DOLLAR_LBRACE] = 465;
	v->arr[431][anon_sym_DOLLAR_LPAREN] = 467;
	v->arr[431][anon_sym_BQUOTE] = 469;
	v->arr[431][anon_sym_DOLLAR_BQUOTE] = 471;
	v->arr[431][anon_sym_LT_LPAREN] = 473;
	v->arr[431][anon_sym_GT_LPAREN] = 473;
	v->arr[431][sym_comment] = 71;
	v->arr[431][sym_file_descriptor] = 475;
	v->arr[431][sym_variable_name] = 477;
	v->arr[431][sym_test_operator] = 479;
	v->arr[431][sym__brace_start] = 481;
	v->arr[432][aux_sym__terminated_statement] = 54;
	v->arr[432][sym__statement_not_pipeline] = 6718;
	v->arr[432][sym_redirected_statement] = 5007;
	v->arr[432][sym_for_statement] = 5007;
	init_parse_table2613(v);
}

void	init_parse_table2613(t_parse_table *v)
{
	v->arr[432][sym_c_style_for_statement] = 5007;
	v->arr[432][sym_while_statement] = 4551;
	v->arr[432][sym_if_statement] = 4551;
	v->arr[432][sym_case_statement] = 5007;
	v->arr[432][sym_function_definition] = 5007;
	v->arr[432][sym_compound_statement] = 5007;
	v->arr[432][sym_subshell] = 5007;
	v->arr[432][sym_pipeline] = 5189;
	v->arr[432][sym_list] = 5007;
	v->arr[432][sym_negated_command] = 5007;
	v->arr[432][sym_test_command] = 5007;
	v->arr[432][sym_declaration_command] = 5007;
	v->arr[432][sym_unset_command] = 5007;
	v->arr[432][sym_command] = 5007;
	v->arr[432][sym_command_name] = 544;
	init_parse_table2614(v);
}

void	init_parse_table2614(t_parse_table *v)
{
	v->arr[432][sym_variable_assignment] = 1151;
	v->arr[432][sym_variable_assignments] = 5007;
	v->arr[432][sym_subscript] = 6790;
	v->arr[432][sym_file_redirect] = 2019;
	v->arr[432][sym_herestring_redirect] = 2017;
	v->arr[432][sym_arithmetic_expansion] = 1078;
	v->arr[432][sym_brace_expression] = 1078;
	v->arr[432][sym_concatenation] = 1376;
	v->arr[432][sym_string] = 1078;
	v->arr[432][sym_translated_string] = 1078;
	v->arr[432][sym_number] = 1078;
	v->arr[432][sym_simple_expansion] = 1078;
	v->arr[432][sym_expansion] = 1078;
	v->arr[432][sym_command_substitution] = 1078;
	v->arr[432][sym_process_substitution] = 1078;
	init_parse_table2615(v);
}

// file funcs522.c
