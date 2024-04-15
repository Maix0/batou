/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs541.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2705(t_parse_table *v)
{
	v->arr[447][anon_sym_GT_AMP] = 1029;
	v->arr[447][anon_sym_GT_PIPE] = 1031;
	v->arr[447][anon_sym_LT_AMP_DASH] = 1037;
	v->arr[447][anon_sym_GT_AMP_DASH] = 1037;
	v->arr[447][anon_sym_LT_LT_LT] = 1039;
	v->arr[447][anon_sym_DOLLAR_LPAREN_LPAREN] = 1041;
	v->arr[447][anon_sym_DOLLAR_LBRACK] = 1043;
	v->arr[447][anon_sym_DOLLAR] = 1045;
	v->arr[447][sym__special_character] = 1047;
	v->arr[447][anon_sym_DQUOTE] = 1049;
	v->arr[447][sym_raw_string] = 1051;
	v->arr[447][sym_ansi_c_string] = 1051;
	v->arr[447][aux_sym_number_token1] = 1053;
	v->arr[447][aux_sym_number_token2] = 1055;
	v->arr[447][anon_sym_DOLLAR_LBRACE] = 1057;
	init_parse_table2706(v);
}

void	init_parse_table2706(t_parse_table *v)
{
	v->arr[447][anon_sym_DOLLAR_LPAREN] = 1059;
	v->arr[447][anon_sym_BQUOTE] = 1061;
	v->arr[447][anon_sym_DOLLAR_BQUOTE] = 1063;
	v->arr[447][anon_sym_LT_LPAREN] = 1065;
	v->arr[447][anon_sym_GT_LPAREN] = 1065;
	v->arr[447][sym_comment] = 71;
	v->arr[447][sym_file_descriptor] = 1067;
	v->arr[447][sym_variable_name] = 217;
	v->arr[447][sym_test_operator] = 1069;
	v->arr[447][sym__brace_start] = 1071;
	v->arr[448][sym__statement_not_pipeline] = 4794;
	v->arr[448][sym_redirected_statement] = 4794;
	v->arr[448][sym_for_statement] = 4794;
	v->arr[448][sym_c_style_for_statement] = 4794;
	v->arr[448][sym_while_statement] = 4381;
	init_parse_table2707(v);
}

void	init_parse_table2707(t_parse_table *v)
{
	v->arr[448][sym_if_statement] = 4381;
	v->arr[448][sym_case_statement] = 4794;
	v->arr[448][sym_function_definition] = 4794;
	v->arr[448][sym_compound_statement] = 4794;
	v->arr[448][sym_subshell] = 4794;
	v->arr[448][sym_pipeline] = 5557;
	v->arr[448][sym_list] = 4794;
	v->arr[448][sym_negated_command] = 4794;
	v->arr[448][sym_test_command] = 4794;
	v->arr[448][sym_declaration_command] = 4794;
	v->arr[448][sym_unset_command] = 4794;
	v->arr[448][sym_command] = 4794;
	v->arr[448][sym_command_name] = 534;
	v->arr[448][sym_variable_assignment] = 986;
	v->arr[448][sym_variable_assignments] = 4794;
	init_parse_table2708(v);
}

void	init_parse_table2708(t_parse_table *v)
{
	v->arr[448][sym_subscript] = 6774;
	v->arr[448][sym_file_redirect] = 2055;
	v->arr[448][sym_herestring_redirect] = 2156;
	v->arr[448][sym_arithmetic_expansion] = 957;
	v->arr[448][sym_brace_expression] = 957;
	v->arr[448][sym_concatenation] = 1386;
	v->arr[448][sym_string] = 957;
	v->arr[448][sym_translated_string] = 957;
	v->arr[448][sym_number] = 957;
	v->arr[448][sym_simple_expansion] = 957;
	v->arr[448][sym_expansion] = 957;
	v->arr[448][sym_command_substitution] = 957;
	v->arr[448][sym_process_substitution] = 957;
	v->arr[448][aux_sym_redirected_statement_repeat2] = 4571;
	v->arr[448][aux_sym_command_repeat1] = 937;
	init_parse_table2709(v);
}

void	init_parse_table2709(t_parse_table *v)
{
	v->arr[448][aux_sym__literal_repeat1] = 1212;
	v->arr[448][sym_word] = 7;
	v->arr[448][anon_sym_for] = 9;
	v->arr[448][anon_sym_select] = 11;
	v->arr[448][anon_sym_LPAREN_LPAREN] = 13;
	v->arr[448][anon_sym_LT] = 15;
	v->arr[448][anon_sym_GT] = 15;
	v->arr[448][anon_sym_GT_GT] = 17;
	v->arr[448][anon_sym_LPAREN] = 19;
	v->arr[448][anon_sym_while] = 21;
	v->arr[448][anon_sym_until] = 21;
	v->arr[448][anon_sym_if] = 23;
	v->arr[448][anon_sym_case] = 25;
	v->arr[448][anon_sym_function] = 27;
	v->arr[448][anon_sym_LBRACE] = 29;
	init_parse_table2710(v);
}

// file funcs541.c
