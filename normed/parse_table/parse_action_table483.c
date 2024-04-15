/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs483.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2415(t_parse_table *v)
{
	v->arr[398][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[398][anon_sym_BQUOTE] = 332;
	v->arr[398][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[398][anon_sym_LT_LPAREN] = 336;
	v->arr[398][anon_sym_GT_LPAREN] = 336;
	v->arr[398][sym_comment] = 71;
	v->arr[398][sym_file_descriptor] = 338;
	v->arr[398][sym_variable_name] = 340;
	v->arr[398][sym_test_operator] = 342;
	v->arr[398][sym__brace_start] = 344;
	v->arr[399][sym__statements] = 7410;
	v->arr[399][sym__statement_not_pipeline] = 6558;
	v->arr[399][sym_redirected_statement] = 4662;
	v->arr[399][sym_for_statement] = 4662;
	v->arr[399][sym_c_style_for_statement] = 4662;
	init_parse_table2416(v);
}

void	init_parse_table2416(t_parse_table *v)
{
	v->arr[399][sym_while_statement] = 4314;
	v->arr[399][sym_if_statement] = 4314;
	v->arr[399][sym_case_statement] = 4662;
	v->arr[399][sym_function_definition] = 4662;
	v->arr[399][sym_compound_statement] = 4662;
	v->arr[399][sym_subshell] = 4662;
	v->arr[399][sym_pipeline] = 5070;
	v->arr[399][sym_list] = 4662;
	v->arr[399][sym_negated_command] = 4662;
	v->arr[399][sym_test_command] = 4662;
	v->arr[399][sym_declaration_command] = 4662;
	v->arr[399][sym_unset_command] = 4662;
	v->arr[399][sym_command] = 4662;
	v->arr[399][sym_command_name] = 554;
	v->arr[399][sym_variable_assignment] = 1150;
	init_parse_table2417(v);
}

void	init_parse_table2417(t_parse_table *v)
{
	v->arr[399][sym_variable_assignments] = 4662;
	v->arr[399][sym_subscript] = 6790;
	v->arr[399][sym_file_redirect] = 2273;
	v->arr[399][sym_herestring_redirect] = 2272;
	v->arr[399][sym_arithmetic_expansion] = 1078;
	v->arr[399][sym_brace_expression] = 1078;
	v->arr[399][sym_concatenation] = 1376;
	v->arr[399][sym_string] = 1078;
	v->arr[399][sym_translated_string] = 1078;
	v->arr[399][sym_number] = 1078;
	v->arr[399][sym_simple_expansion] = 1078;
	v->arr[399][sym_expansion] = 1078;
	v->arr[399][sym_command_substitution] = 1078;
	v->arr[399][sym_process_substitution] = 1078;
	v->arr[399][aux_sym__statements_repeat1] = 429;
	init_parse_table2418(v);
}

void	init_parse_table2418(t_parse_table *v)
{
	v->arr[399][aux_sym_redirected_statement_repeat2] = 4573;
	v->arr[399][aux_sym_command_repeat1] = 958;
	v->arr[399][aux_sym__literal_repeat1] = 1267;
	v->arr[399][sym_word] = 799;
	v->arr[399][anon_sym_for] = 9;
	v->arr[399][anon_sym_select] = 11;
	v->arr[399][anon_sym_LPAREN_LPAREN] = 288;
	v->arr[399][anon_sym_LT] = 290;
	v->arr[399][anon_sym_GT] = 290;
	v->arr[399][anon_sym_GT_GT] = 292;
	v->arr[399][anon_sym_LPAREN] = 19;
	v->arr[399][anon_sym_while] = 21;
	v->arr[399][anon_sym_until] = 21;
	v->arr[399][anon_sym_if] = 23;
	v->arr[399][anon_sym_case] = 25;
	init_parse_table2419(v);
}

void	init_parse_table2419(t_parse_table *v)
{
	v->arr[399][anon_sym_function] = 801;
	v->arr[399][anon_sym_LBRACE] = 29;
	v->arr[399][anon_sym_BANG] = 803;
	v->arr[399][anon_sym_LBRACK] = 33;
	v->arr[399][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[399][anon_sym_declare] = 805;
	v->arr[399][anon_sym_typeset] = 805;
	v->arr[399][anon_sym_export] = 805;
	v->arr[399][anon_sym_readonly] = 805;
	v->arr[399][anon_sym_local] = 805;
	v->arr[399][anon_sym_unset] = 807;
	v->arr[399][anon_sym_unsetenv] = 807;
	v->arr[399][anon_sym_AMP_GT] = 290;
	v->arr[399][anon_sym_AMP_GT_GT] = 292;
	v->arr[399][anon_sym_LT_AMP] = 290;
	init_parse_table2420(v);
}

// file funcs483.c
