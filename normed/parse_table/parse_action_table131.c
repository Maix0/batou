/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs131.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table655(t_parse_table *v)
{
	v->arr[105][anon_sym_function] = 587;
	v->arr[105][anon_sym_LBRACE] = 590;
	v->arr[105][anon_sym_BANG] = 593;
	v->arr[105][anon_sym_LBRACK] = 596;
	v->arr[105][anon_sym_LBRACK_LBRACK] = 599;
	v->arr[105][anon_sym_declare] = 602;
	v->arr[105][anon_sym_typeset] = 602;
	v->arr[105][anon_sym_export] = 602;
	v->arr[105][anon_sym_readonly] = 602;
	v->arr[105][anon_sym_local] = 602;
	v->arr[105][anon_sym_unset] = 605;
	v->arr[105][anon_sym_unsetenv] = 605;
	v->arr[105][anon_sym_AMP_GT] = 567;
	v->arr[105][anon_sym_AMP_GT_GT] = 570;
	v->arr[105][anon_sym_LT_AMP] = 567;
	init_parse_table656(v);
}

void	init_parse_table656(t_parse_table *v)
{
	v->arr[105][anon_sym_GT_AMP] = 567;
	v->arr[105][anon_sym_GT_PIPE] = 570;
	v->arr[105][anon_sym_LT_AMP_DASH] = 608;
	v->arr[105][anon_sym_GT_AMP_DASH] = 608;
	v->arr[105][anon_sym_LT_LT_LT] = 611;
	v->arr[105][anon_sym_DOLLAR_LPAREN_LPAREN] = 614;
	v->arr[105][anon_sym_DOLLAR_LBRACK] = 617;
	v->arr[105][anon_sym_DOLLAR] = 620;
	v->arr[105][sym__special_character] = 623;
	v->arr[105][anon_sym_DQUOTE] = 626;
	v->arr[105][sym_raw_string] = 629;
	v->arr[105][sym_ansi_c_string] = 629;
	v->arr[105][aux_sym_number_token1] = 632;
	v->arr[105][aux_sym_number_token2] = 635;
	v->arr[105][anon_sym_DOLLAR_LBRACE] = 638;
	init_parse_table657(v);
}

void	init_parse_table657(t_parse_table *v)
{
	v->arr[105][anon_sym_DOLLAR_LPAREN] = 641;
	v->arr[105][anon_sym_BQUOTE] = 644;
	v->arr[105][anon_sym_DOLLAR_BQUOTE] = 647;
	v->arr[105][anon_sym_LT_LPAREN] = 650;
	v->arr[105][anon_sym_GT_LPAREN] = 650;
	v->arr[105][sym_comment] = 71;
	v->arr[105][sym_file_descriptor] = 653;
	v->arr[105][sym_variable_name] = 656;
	v->arr[105][sym_test_operator] = 659;
	v->arr[105][sym__brace_start] = 662;
	v->arr[106][sym__statements] = 7083;
	v->arr[106][sym__statement_not_pipeline] = 6558;
	v->arr[106][sym_redirected_statement] = 4662;
	v->arr[106][sym_for_statement] = 4662;
	v->arr[106][sym_c_style_for_statement] = 4662;
	init_parse_table658(v);
}

void	init_parse_table658(t_parse_table *v)
{
	v->arr[106][sym_while_statement] = 4314;
	v->arr[106][sym_if_statement] = 4314;
	v->arr[106][sym_case_statement] = 4662;
	v->arr[106][sym_function_definition] = 4662;
	v->arr[106][sym_compound_statement] = 4662;
	v->arr[106][sym_subshell] = 4662;
	v->arr[106][sym_pipeline] = 5070;
	v->arr[106][sym_list] = 4662;
	v->arr[106][sym_negated_command] = 4662;
	v->arr[106][sym_test_command] = 4662;
	v->arr[106][sym_declaration_command] = 4662;
	v->arr[106][sym_unset_command] = 4662;
	v->arr[106][sym_command] = 4662;
	v->arr[106][sym_command_name] = 554;
	v->arr[106][sym_variable_assignment] = 1150;
	init_parse_table659(v);
}

void	init_parse_table659(t_parse_table *v)
{
	v->arr[106][sym_variable_assignments] = 4662;
	v->arr[106][sym_subscript] = 6790;
	v->arr[106][sym_file_redirect] = 2273;
	v->arr[106][sym_herestring_redirect] = 2272;
	v->arr[106][sym_arithmetic_expansion] = 1078;
	v->arr[106][sym_brace_expression] = 1078;
	v->arr[106][sym_concatenation] = 1376;
	v->arr[106][sym_string] = 1078;
	v->arr[106][sym_translated_string] = 1078;
	v->arr[106][sym_number] = 1078;
	v->arr[106][sym_simple_expansion] = 1078;
	v->arr[106][sym_expansion] = 1078;
	v->arr[106][sym_command_substitution] = 1078;
	v->arr[106][sym_process_substitution] = 1078;
	v->arr[106][aux_sym__statements_repeat1] = 429;
	init_parse_table660(v);
}

// file funcs131.c
