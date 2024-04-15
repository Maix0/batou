/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table15(t_parse_table *v)
{
	v->arr[1][anon_sym_LT_LT_LT] = 43;
	v->arr[1][anon_sym_DOLLAR_LPAREN_LPAREN] = 45;
	v->arr[1][anon_sym_DOLLAR_LBRACK] = 47;
	v->arr[1][anon_sym_DOLLAR] = 49;
	v->arr[1][sym__special_character] = 51;
	v->arr[1][anon_sym_DQUOTE] = 53;
	v->arr[1][sym_raw_string] = 55;
	v->arr[1][sym_ansi_c_string] = 55;
	v->arr[1][aux_sym_number_token1] = 57;
	v->arr[1][aux_sym_number_token2] = 59;
	v->arr[1][anon_sym_DOLLAR_LBRACE] = 61;
	v->arr[1][anon_sym_DOLLAR_LPAREN] = 63;
	v->arr[1][anon_sym_BQUOTE] = 65;
	v->arr[1][anon_sym_DOLLAR_BQUOTE] = 67;
	v->arr[1][anon_sym_LT_LPAREN] = 69;
	init_parse_table16(v);
}

void	init_parse_table16(t_parse_table *v)
{
	v->arr[1][anon_sym_GT_LPAREN] = 69;
	v->arr[1][sym_comment] = 71;
	v->arr[1][sym_file_descriptor] = 73;
	v->arr[1][sym_variable_name] = 75;
	v->arr[1][sym_test_operator] = 77;
	v->arr[1][sym__brace_start] = 79;
	v->arr[2][sym__statements] = 7427;
	v->arr[2][sym__statement_not_pipeline] = 6614;
	v->arr[2][sym_redirected_statement] = 4797;
	v->arr[2][sym_for_statement] = 4797;
	v->arr[2][sym_c_style_for_statement] = 4797;
	v->arr[2][sym_while_statement] = 4400;
	v->arr[2][sym_if_statement] = 4400;
	v->arr[2][sym_case_statement] = 4797;
	v->arr[2][sym_function_definition] = 4797;
	init_parse_table17(v);
}

void	init_parse_table17(t_parse_table *v)
{
	v->arr[2][sym_compound_statement] = 4797;
	v->arr[2][sym_subshell] = 4797;
	v->arr[2][sym_pipeline] = 5054;
	v->arr[2][sym_list] = 4797;
	v->arr[2][sym_negated_command] = 4797;
	v->arr[2][sym_test_command] = 4797;
	v->arr[2][sym_declaration_command] = 4797;
	v->arr[2][sym_unset_command] = 4797;
	v->arr[2][sym_command] = 4797;
	v->arr[2][sym_command_name] = 533;
	v->arr[2][sym_variable_assignment] = 945;
	v->arr[2][sym_variable_assignments] = 4797;
	v->arr[2][sym_subscript] = 6754;
	v->arr[2][sym_file_redirect] = 2019;
	v->arr[2][sym_herestring_redirect] = 2017;
	init_parse_table18(v);
}

void	init_parse_table18(t_parse_table *v)
{
	v->arr[2][sym__expression] = 3126;
	v->arr[2][sym_binary_expression] = 3053;
	v->arr[2][sym_ternary_expression] = 3053;
	v->arr[2][sym_unary_expression] = 3053;
	v->arr[2][sym_postfix_expression] = 3053;
	v->arr[2][sym_parenthesized_expression] = 3053;
	v->arr[2][sym_arithmetic_expansion] = 472;
	v->arr[2][sym_brace_expression] = 472;
	v->arr[2][sym_concatenation] = 502;
	v->arr[2][sym_string] = 472;
	v->arr[2][sym_translated_string] = 472;
	v->arr[2][sym_number] = 472;
	v->arr[2][sym_simple_expansion] = 472;
	v->arr[2][sym_expansion] = 472;
	v->arr[2][sym_command_substitution] = 472;
	init_parse_table19(v);
}

void	init_parse_table19(t_parse_table *v)
{
	v->arr[2][sym_process_substitution] = 472;
	v->arr[2][aux_sym__statements_repeat1] = 423;
	v->arr[2][aux_sym_redirected_statement_repeat2] = 4480;
	v->arr[2][aux_sym_command_repeat1] = 951;
	v->arr[2][aux_sym__literal_repeat1] = 493;
	v->arr[2][sym_word] = 81;
	v->arr[2][anon_sym_for] = 9;
	v->arr[2][anon_sym_select] = 11;
	v->arr[2][anon_sym_LPAREN_LPAREN] = 83;
	v->arr[2][anon_sym_LT] = 85;
	v->arr[2][anon_sym_GT] = 85;
	v->arr[2][anon_sym_GT_GT] = 87;
	v->arr[2][anon_sym_LPAREN] = 89;
	v->arr[2][anon_sym_while] = 21;
	v->arr[2][anon_sym_until] = 21;
	init_parse_table20(v);
}

// file funcs3.c
