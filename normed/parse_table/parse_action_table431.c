/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs431.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2155(t_parse_table *v)
{
	v->arr[355][anon_sym_function] = 91;
	v->arr[355][anon_sym_LBRACE] = 29;
	v->arr[355][anon_sym_BANG] = 769;
	v->arr[355][anon_sym_LBRACK] = 33;
	v->arr[355][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[355][anon_sym_declare] = 95;
	v->arr[355][anon_sym_typeset] = 95;
	v->arr[355][anon_sym_export] = 95;
	v->arr[355][anon_sym_readonly] = 95;
	v->arr[355][anon_sym_local] = 95;
	v->arr[355][anon_sym_unset] = 97;
	v->arr[355][anon_sym_unsetenv] = 97;
	v->arr[355][anon_sym_AMP_GT] = 85;
	v->arr[355][anon_sym_AMP_GT_GT] = 87;
	v->arr[355][anon_sym_LT_AMP] = 85;
	init_parse_table2156(v);
}

void	init_parse_table2156(t_parse_table *v)
{
	v->arr[355][anon_sym_GT_AMP] = 85;
	v->arr[355][anon_sym_GT_PIPE] = 87;
	v->arr[355][anon_sym_LT_AMP_DASH] = 99;
	v->arr[355][anon_sym_GT_AMP_DASH] = 99;
	v->arr[355][anon_sym_LT_LT_LT] = 101;
	v->arr[355][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[355][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[355][anon_sym_DOLLAR] = 316;
	v->arr[355][sym__special_character] = 771;
	v->arr[355][anon_sym_DQUOTE] = 320;
	v->arr[355][sym_raw_string] = 773;
	v->arr[355][sym_ansi_c_string] = 773;
	v->arr[355][aux_sym_number_token1] = 324;
	v->arr[355][aux_sym_number_token2] = 326;
	v->arr[355][anon_sym_DOLLAR_LBRACE] = 328;
	init_parse_table2157(v);
}

void	init_parse_table2157(t_parse_table *v)
{
	v->arr[355][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[355][anon_sym_BQUOTE] = 332;
	v->arr[355][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[355][anon_sym_LT_LPAREN] = 336;
	v->arr[355][anon_sym_GT_LPAREN] = 336;
	v->arr[355][sym_comment] = 71;
	v->arr[355][sym_file_descriptor] = 135;
	v->arr[355][sym_variable_name] = 137;
	v->arr[355][sym_test_operator] = 775;
	v->arr[355][sym__brace_start] = 344;
	v->arr[356][sym__statements] = 7472;
	v->arr[356][sym__statement_not_pipeline] = 6558;
	v->arr[356][sym_redirected_statement] = 4662;
	v->arr[356][sym_for_statement] = 4662;
	v->arr[356][sym_c_style_for_statement] = 4662;
	init_parse_table2158(v);
}

void	init_parse_table2158(t_parse_table *v)
{
	v->arr[356][sym_while_statement] = 4314;
	v->arr[356][sym_if_statement] = 4314;
	v->arr[356][sym_case_statement] = 4662;
	v->arr[356][sym_function_definition] = 4662;
	v->arr[356][sym_compound_statement] = 4662;
	v->arr[356][sym_subshell] = 4662;
	v->arr[356][sym_pipeline] = 5070;
	v->arr[356][sym_list] = 4662;
	v->arr[356][sym_negated_command] = 4662;
	v->arr[356][sym_test_command] = 4662;
	v->arr[356][sym_declaration_command] = 4662;
	v->arr[356][sym_unset_command] = 4662;
	v->arr[356][sym_command] = 4662;
	v->arr[356][sym_command_name] = 554;
	v->arr[356][sym_variable_assignment] = 1150;
	init_parse_table2159(v);
}

void	init_parse_table2159(t_parse_table *v)
{
	v->arr[356][sym_variable_assignments] = 4662;
	v->arr[356][sym_subscript] = 6790;
	v->arr[356][sym_file_redirect] = 2273;
	v->arr[356][sym_herestring_redirect] = 2272;
	v->arr[356][sym_arithmetic_expansion] = 1078;
	v->arr[356][sym_brace_expression] = 1078;
	v->arr[356][sym_concatenation] = 1376;
	v->arr[356][sym_string] = 1078;
	v->arr[356][sym_translated_string] = 1078;
	v->arr[356][sym_number] = 1078;
	v->arr[356][sym_simple_expansion] = 1078;
	v->arr[356][sym_expansion] = 1078;
	v->arr[356][sym_command_substitution] = 1078;
	v->arr[356][sym_process_substitution] = 1078;
	v->arr[356][aux_sym__statements_repeat1] = 429;
	init_parse_table2160(v);
}

// file funcs431.c