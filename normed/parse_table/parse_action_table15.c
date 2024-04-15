/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs15.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table75(t_parse_table *v)
{
	v->arr[10][anon_sym_DASH2] = 185;
	v->arr[10][anon_sym_PLUS2] = 185;
	v->arr[10][anon_sym_TILDE] = 187;
	v->arr[10][anon_sym_DOLLAR_LPAREN_LPAREN] = 189;
	v->arr[10][anon_sym_DOLLAR_LBRACK] = 191;
	v->arr[10][anon_sym_DOLLAR] = 193;
	v->arr[10][sym__special_character] = 195;
	v->arr[10][anon_sym_DQUOTE] = 197;
	v->arr[10][sym_raw_string] = 199;
	v->arr[10][sym_ansi_c_string] = 199;
	v->arr[10][aux_sym_number_token1] = 201;
	v->arr[10][aux_sym_number_token2] = 203;
	v->arr[10][anon_sym_DOLLAR_LBRACE] = 205;
	v->arr[10][anon_sym_DOLLAR_LPAREN] = 207;
	v->arr[10][anon_sym_BQUOTE] = 209;
	init_parse_table76(v);
}

void	init_parse_table76(t_parse_table *v)
{
	v->arr[10][anon_sym_DOLLAR_BQUOTE] = 211;
	v->arr[10][anon_sym_LT_LPAREN] = 213;
	v->arr[10][anon_sym_GT_LPAREN] = 213;
	v->arr[10][sym_comment] = 71;
	v->arr[10][sym_file_descriptor] = 215;
	v->arr[10][sym_variable_name] = 217;
	v->arr[10][sym_test_operator] = 219;
	v->arr[10][sym__brace_start] = 221;
	v->arr[11][sym__statement_not_pipeline] = 6568;
	v->arr[11][sym_redirected_statement] = 5289;
	v->arr[11][sym_for_statement] = 5406;
	v->arr[11][sym_c_style_for_statement] = 5406;
	v->arr[11][sym_while_statement] = 5195;
	v->arr[11][sym_if_statement] = 5195;
	v->arr[11][sym_case_statement] = 5406;
	init_parse_table77(v);
}

void	init_parse_table77(t_parse_table *v)
{
	v->arr[11][sym_function_definition] = 5406;
	v->arr[11][sym_compound_statement] = 5406;
	v->arr[11][sym_subshell] = 5406;
	v->arr[11][sym_pipeline] = 5569;
	v->arr[11][sym_list] = 5406;
	v->arr[11][sym_negated_command] = 5406;
	v->arr[11][sym_test_command] = 5406;
	v->arr[11][sym_declaration_command] = 5406;
	v->arr[11][sym_unset_command] = 5406;
	v->arr[11][sym_command] = 5406;
	v->arr[11][sym_command_name] = 620;
	v->arr[11][sym_variable_assignment] = 1811;
	v->arr[11][sym_variable_assignments] = 5406;
	v->arr[11][sym_subscript] = 6756;
	v->arr[11][sym_file_redirect] = 2693;
	init_parse_table78(v);
}

void	init_parse_table78(t_parse_table *v)
{
	v->arr[11][sym_herestring_redirect] = 2691;
	v->arr[11][sym__expression] = 3152;
	v->arr[11][sym_binary_expression] = 3071;
	v->arr[11][sym_ternary_expression] = 3071;
	v->arr[11][sym_unary_expression] = 3071;
	v->arr[11][sym_postfix_expression] = 3071;
	v->arr[11][sym_parenthesized_expression] = 3071;
	v->arr[11][sym_arithmetic_expansion] = 496;
	v->arr[11][sym_brace_expression] = 496;
	v->arr[11][sym_concatenation] = 524;
	v->arr[11][sym_string] = 496;
	v->arr[11][sym_translated_string] = 496;
	v->arr[11][sym_number] = 496;
	v->arr[11][sym_simple_expansion] = 496;
	v->arr[11][sym_expansion] = 496;
	init_parse_table79(v);
}

void	init_parse_table79(t_parse_table *v)
{
	v->arr[11][sym_command_substitution] = 496;
	v->arr[11][sym_process_substitution] = 496;
	v->arr[11][aux_sym_redirected_statement_repeat2] = 5167;
	v->arr[11][aux_sym_command_repeat1] = 955;
	v->arr[11][aux_sym__literal_repeat1] = 522;
	v->arr[11][sym_word] = 143;
	v->arr[11][anon_sym_for] = 145;
	v->arr[11][anon_sym_select] = 147;
	v->arr[11][anon_sym_LPAREN_LPAREN] = 149;
	v->arr[11][anon_sym_LT] = 151;
	v->arr[11][anon_sym_GT] = 151;
	v->arr[11][anon_sym_GT_GT] = 153;
	v->arr[11][anon_sym_LPAREN] = 155;
	v->arr[11][anon_sym_while] = 157;
	v->arr[11][anon_sym_until] = 157;
	init_parse_table80(v);
}

// file funcs15.c
