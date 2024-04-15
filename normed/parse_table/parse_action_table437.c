/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs437.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2185(t_parse_table *v)
{
	v->arr[360][anon_sym_function] = 91;
	v->arr[360][anon_sym_LBRACE] = 29;
	v->arr[360][anon_sym_BANG] = 769;
	v->arr[360][anon_sym_LBRACK] = 33;
	v->arr[360][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[360][anon_sym_declare] = 95;
	v->arr[360][anon_sym_typeset] = 95;
	v->arr[360][anon_sym_export] = 95;
	v->arr[360][anon_sym_readonly] = 95;
	v->arr[360][anon_sym_local] = 95;
	v->arr[360][anon_sym_unset] = 97;
	v->arr[360][anon_sym_unsetenv] = 97;
	v->arr[360][anon_sym_AMP_GT] = 85;
	v->arr[360][anon_sym_AMP_GT_GT] = 87;
	v->arr[360][anon_sym_LT_AMP] = 85;
	init_parse_table2186(v);
}

void	init_parse_table2186(t_parse_table *v)
{
	v->arr[360][anon_sym_GT_AMP] = 85;
	v->arr[360][anon_sym_GT_PIPE] = 87;
	v->arr[360][anon_sym_LT_AMP_DASH] = 99;
	v->arr[360][anon_sym_GT_AMP_DASH] = 99;
	v->arr[360][anon_sym_LT_LT_LT] = 101;
	v->arr[360][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[360][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[360][anon_sym_DOLLAR] = 316;
	v->arr[360][sym__special_character] = 771;
	v->arr[360][anon_sym_DQUOTE] = 320;
	v->arr[360][sym_raw_string] = 773;
	v->arr[360][sym_ansi_c_string] = 773;
	v->arr[360][aux_sym_number_token1] = 324;
	v->arr[360][aux_sym_number_token2] = 326;
	v->arr[360][anon_sym_DOLLAR_LBRACE] = 328;
	init_parse_table2187(v);
}

void	init_parse_table2187(t_parse_table *v)
{
	v->arr[360][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[360][anon_sym_BQUOTE] = 332;
	v->arr[360][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[360][anon_sym_LT_LPAREN] = 336;
	v->arr[360][anon_sym_GT_LPAREN] = 336;
	v->arr[360][sym_comment] = 71;
	v->arr[360][sym_file_descriptor] = 135;
	v->arr[360][sym_variable_name] = 137;
	v->arr[360][sym_test_operator] = 775;
	v->arr[360][sym__brace_start] = 344;
	v->arr[361][sym__statements] = 7288;
	v->arr[361][sym__statement_not_pipeline] = 6614;
	v->arr[361][sym_redirected_statement] = 4797;
	v->arr[361][sym_for_statement] = 4797;
	v->arr[361][sym_c_style_for_statement] = 4797;
	init_parse_table2188(v);
}

void	init_parse_table2188(t_parse_table *v)
{
	v->arr[361][sym_while_statement] = 4400;
	v->arr[361][sym_if_statement] = 4400;
	v->arr[361][sym_case_statement] = 4797;
	v->arr[361][sym_function_definition] = 4797;
	v->arr[361][sym_compound_statement] = 4797;
	v->arr[361][sym_subshell] = 4797;
	v->arr[361][sym_pipeline] = 5054;
	v->arr[361][sym_list] = 4797;
	v->arr[361][sym_negated_command] = 4797;
	v->arr[361][sym_test_command] = 4797;
	v->arr[361][sym_declaration_command] = 4797;
	v->arr[361][sym_unset_command] = 4797;
	v->arr[361][sym_command] = 4797;
	v->arr[361][sym_command_name] = 533;
	v->arr[361][sym_variable_assignment] = 945;
	init_parse_table2189(v);
}

void	init_parse_table2189(t_parse_table *v)
{
	v->arr[361][sym_variable_assignments] = 4797;
	v->arr[361][sym_subscript] = 6754;
	v->arr[361][sym_file_redirect] = 2019;
	v->arr[361][sym_herestring_redirect] = 2017;
	v->arr[361][sym_arithmetic_expansion] = 938;
	v->arr[361][sym_brace_expression] = 938;
	v->arr[361][sym_concatenation] = 1376;
	v->arr[361][sym_string] = 938;
	v->arr[361][sym_translated_string] = 938;
	v->arr[361][sym_number] = 938;
	v->arr[361][sym_simple_expansion] = 938;
	v->arr[361][sym_expansion] = 938;
	v->arr[361][sym_command_substitution] = 938;
	v->arr[361][sym_process_substitution] = 938;
	v->arr[361][aux_sym__statements_repeat1] = 423;
	init_parse_table2190(v);
}

// file funcs437.c
