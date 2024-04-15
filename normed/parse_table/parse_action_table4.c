/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table20(t_parse_table *v)
{
	v->arr[2][anon_sym_if] = 23;
	v->arr[2][anon_sym_case] = 25;
	v->arr[2][anon_sym_function] = 91;
	v->arr[2][anon_sym_LBRACE] = 29;
	v->arr[2][anon_sym_BANG] = 93;
	v->arr[2][anon_sym_LBRACK] = 33;
	v->arr[2][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[2][anon_sym_declare] = 95;
	v->arr[2][anon_sym_typeset] = 95;
	v->arr[2][anon_sym_export] = 95;
	v->arr[2][anon_sym_readonly] = 95;
	v->arr[2][anon_sym_local] = 95;
	v->arr[2][anon_sym_unset] = 97;
	v->arr[2][anon_sym_unsetenv] = 97;
	v->arr[2][anon_sym_AMP_GT] = 85;
	init_parse_table21(v);
}

void	init_parse_table21(t_parse_table *v)
{
	v->arr[2][anon_sym_AMP_GT_GT] = 87;
	v->arr[2][anon_sym_LT_AMP] = 85;
	v->arr[2][anon_sym_GT_AMP] = 85;
	v->arr[2][anon_sym_GT_PIPE] = 87;
	v->arr[2][anon_sym_LT_AMP_DASH] = 99;
	v->arr[2][anon_sym_GT_AMP_DASH] = 99;
	v->arr[2][anon_sym_LT_LT_LT] = 101;
	v->arr[2][anon_sym_PLUS_PLUS2] = 103;
	v->arr[2][anon_sym_DASH_DASH2] = 103;
	v->arr[2][anon_sym_DASH2] = 105;
	v->arr[2][anon_sym_PLUS2] = 105;
	v->arr[2][anon_sym_TILDE] = 107;
	v->arr[2][anon_sym_DOLLAR_LPAREN_LPAREN] = 109;
	v->arr[2][anon_sym_DOLLAR_LBRACK] = 111;
	v->arr[2][anon_sym_DOLLAR] = 113;
	init_parse_table22(v);
}

void	init_parse_table22(t_parse_table *v)
{
	v->arr[2][sym__special_character] = 115;
	v->arr[2][anon_sym_DQUOTE] = 117;
	v->arr[2][sym_raw_string] = 119;
	v->arr[2][sym_ansi_c_string] = 119;
	v->arr[2][aux_sym_number_token1] = 121;
	v->arr[2][aux_sym_number_token2] = 123;
	v->arr[2][anon_sym_DOLLAR_LBRACE] = 125;
	v->arr[2][anon_sym_DOLLAR_LPAREN] = 127;
	v->arr[2][anon_sym_BQUOTE] = 129;
	v->arr[2][anon_sym_DOLLAR_BQUOTE] = 131;
	v->arr[2][anon_sym_LT_LPAREN] = 133;
	v->arr[2][anon_sym_GT_LPAREN] = 133;
	v->arr[2][sym_comment] = 71;
	v->arr[2][sym_file_descriptor] = 135;
	v->arr[2][sym_variable_name] = 137;
	init_parse_table23(v);
}

void	init_parse_table23(t_parse_table *v)
{
	v->arr[2][sym_test_operator] = 139;
	v->arr[2][sym__brace_start] = 141;
	v->arr[3][sym__statements] = 6914;
	v->arr[3][sym__statement_not_pipeline] = 6614;
	v->arr[3][sym_redirected_statement] = 4797;
	v->arr[3][sym_for_statement] = 4797;
	v->arr[3][sym_c_style_for_statement] = 4797;
	v->arr[3][sym_while_statement] = 4400;
	v->arr[3][sym_if_statement] = 4400;
	v->arr[3][sym_case_statement] = 4797;
	v->arr[3][sym_function_definition] = 4797;
	v->arr[3][sym_compound_statement] = 4797;
	v->arr[3][sym_subshell] = 4797;
	v->arr[3][sym_pipeline] = 5054;
	v->arr[3][sym_list] = 4797;
	init_parse_table24(v);
}

void	init_parse_table24(t_parse_table *v)
{
	v->arr[3][sym_negated_command] = 4797;
	v->arr[3][sym_test_command] = 4797;
	v->arr[3][sym_declaration_command] = 4797;
	v->arr[3][sym_unset_command] = 4797;
	v->arr[3][sym_command] = 4797;
	v->arr[3][sym_command_name] = 533;
	v->arr[3][sym_variable_assignment] = 945;
	v->arr[3][sym_variable_assignments] = 4797;
	v->arr[3][sym_subscript] = 6754;
	v->arr[3][sym_file_redirect] = 2019;
	v->arr[3][sym_herestring_redirect] = 2017;
	v->arr[3][sym__expression] = 3042;
	v->arr[3][sym_binary_expression] = 3053;
	v->arr[3][sym_ternary_expression] = 3053;
	v->arr[3][sym_unary_expression] = 3053;
	init_parse_table25(v);
}

// file funcs4.c
