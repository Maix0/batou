/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs533.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2665(t_parse_table *v)
{
	v->arr[440][anon_sym_BQUOTE] = 332;
	v->arr[440][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[440][anon_sym_LT_LPAREN] = 336;
	v->arr[440][anon_sym_GT_LPAREN] = 336;
	v->arr[440][sym_comment] = 71;
	v->arr[440][sym_file_descriptor] = 1019;
	v->arr[440][sym_variable_name] = 1021;
	v->arr[440][sym_test_operator] = 1023;
	v->arr[440][sym__brace_start] = 344;
	v->arr[441][sym__statement_not_pipeline] = 6614;
	v->arr[441][sym_redirected_statement] = 4717;
	v->arr[441][sym_for_statement] = 4717;
	v->arr[441][sym_c_style_for_statement] = 4717;
	v->arr[441][sym_while_statement] = 4376;
	v->arr[441][sym_if_statement] = 4376;
	init_parse_table2666(v);
}

void	init_parse_table2666(t_parse_table *v)
{
	v->arr[441][sym_case_statement] = 4717;
	v->arr[441][sym_function_definition] = 4717;
	v->arr[441][sym_compound_statement] = 4717;
	v->arr[441][sym_subshell] = 4717;
	v->arr[441][sym_pipeline] = 4716;
	v->arr[441][sym_list] = 4717;
	v->arr[441][sym_negated_command] = 4717;
	v->arr[441][sym_test_command] = 4717;
	v->arr[441][sym_declaration_command] = 4717;
	v->arr[441][sym_unset_command] = 4717;
	v->arr[441][sym_command] = 4717;
	v->arr[441][sym_command_name] = 533;
	v->arr[441][sym_variable_assignment] = 948;
	v->arr[441][sym_variable_assignments] = 4717;
	v->arr[441][sym_subscript] = 6754;
	init_parse_table2667(v);
}

void	init_parse_table2667(t_parse_table *v)
{
	v->arr[441][sym_file_redirect] = 2019;
	v->arr[441][sym_herestring_redirect] = 2017;
	v->arr[441][sym_arithmetic_expansion] = 938;
	v->arr[441][sym_brace_expression] = 938;
	v->arr[441][sym_concatenation] = 1376;
	v->arr[441][sym_string] = 938;
	v->arr[441][sym_translated_string] = 938;
	v->arr[441][sym_number] = 938;
	v->arr[441][sym_simple_expansion] = 938;
	v->arr[441][sym_expansion] = 938;
	v->arr[441][sym_command_substitution] = 938;
	v->arr[441][sym_process_substitution] = 938;
	v->arr[441][aux_sym_redirected_statement_repeat2] = 4480;
	v->arr[441][aux_sym_command_repeat1] = 951;
	v->arr[441][aux_sym__literal_repeat1] = 1267;
	init_parse_table2668(v);
}

void	init_parse_table2668(t_parse_table *v)
{
	v->arr[441][sym_word] = 765;
	v->arr[441][anon_sym_for] = 9;
	v->arr[441][anon_sym_select] = 11;
	v->arr[441][anon_sym_LPAREN_LPAREN] = 288;
	v->arr[441][anon_sym_LT] = 85;
	v->arr[441][anon_sym_GT] = 85;
	v->arr[441][anon_sym_GT_GT] = 87;
	v->arr[441][anon_sym_LPAREN] = 19;
	v->arr[441][anon_sym_while] = 21;
	v->arr[441][anon_sym_until] = 21;
	v->arr[441][anon_sym_if] = 23;
	v->arr[441][anon_sym_case] = 25;
	v->arr[441][anon_sym_function] = 91;
	v->arr[441][anon_sym_LBRACE] = 29;
	v->arr[441][anon_sym_BANG] = 769;
	init_parse_table2669(v);
}

void	init_parse_table2669(t_parse_table *v)
{
	v->arr[441][anon_sym_LBRACK] = 33;
	v->arr[441][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[441][anon_sym_declare] = 95;
	v->arr[441][anon_sym_typeset] = 95;
	v->arr[441][anon_sym_export] = 95;
	v->arr[441][anon_sym_readonly] = 95;
	v->arr[441][anon_sym_local] = 95;
	v->arr[441][anon_sym_unset] = 97;
	v->arr[441][anon_sym_unsetenv] = 97;
	v->arr[441][anon_sym_AMP_GT] = 85;
	v->arr[441][anon_sym_AMP_GT_GT] = 87;
	v->arr[441][anon_sym_LT_AMP] = 85;
	v->arr[441][anon_sym_GT_AMP] = 85;
	v->arr[441][anon_sym_GT_PIPE] = 87;
	v->arr[441][anon_sym_LT_AMP_DASH] = 99;
	init_parse_table2670(v);
}

// file funcs533.c
