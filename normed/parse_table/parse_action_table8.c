/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs8.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table40(t_parse_table *v)
{
	v->arr[5][anon_sym_if] = 159;
	v->arr[5][anon_sym_case] = 161;
	v->arr[5][anon_sym_function] = 163;
	v->arr[5][anon_sym_LBRACE] = 165;
	v->arr[5][anon_sym_BANG] = 167;
	v->arr[5][anon_sym_LBRACK] = 169;
	v->arr[5][anon_sym_RBRACK] = 223;
	v->arr[5][anon_sym_LBRACK_LBRACK] = 173;
	v->arr[5][anon_sym_declare] = 175;
	v->arr[5][anon_sym_typeset] = 175;
	v->arr[5][anon_sym_export] = 175;
	v->arr[5][anon_sym_readonly] = 175;
	v->arr[5][anon_sym_local] = 175;
	v->arr[5][anon_sym_unset] = 177;
	v->arr[5][anon_sym_unsetenv] = 177;
	init_parse_table41(v);
}

void	init_parse_table41(t_parse_table *v)
{
	v->arr[5][anon_sym_AMP_GT] = 151;
	v->arr[5][anon_sym_AMP_GT_GT] = 153;
	v->arr[5][anon_sym_LT_AMP] = 151;
	v->arr[5][anon_sym_GT_AMP] = 151;
	v->arr[5][anon_sym_GT_PIPE] = 153;
	v->arr[5][anon_sym_LT_AMP_DASH] = 179;
	v->arr[5][anon_sym_GT_AMP_DASH] = 179;
	v->arr[5][anon_sym_LT_LT_LT] = 181;
	v->arr[5][anon_sym_PLUS_PLUS2] = 183;
	v->arr[5][anon_sym_DASH_DASH2] = 183;
	v->arr[5][anon_sym_DASH2] = 185;
	v->arr[5][anon_sym_PLUS2] = 185;
	v->arr[5][anon_sym_TILDE] = 187;
	v->arr[5][anon_sym_DOLLAR_LPAREN_LPAREN] = 189;
	v->arr[5][anon_sym_DOLLAR_LBRACK] = 191;
	init_parse_table42(v);
}

void	init_parse_table42(t_parse_table *v)
{
	v->arr[5][anon_sym_DOLLAR] = 193;
	v->arr[5][sym__special_character] = 195;
	v->arr[5][anon_sym_DQUOTE] = 197;
	v->arr[5][sym_raw_string] = 199;
	v->arr[5][sym_ansi_c_string] = 199;
	v->arr[5][aux_sym_number_token1] = 201;
	v->arr[5][aux_sym_number_token2] = 203;
	v->arr[5][anon_sym_DOLLAR_LBRACE] = 205;
	v->arr[5][anon_sym_DOLLAR_LPAREN] = 207;
	v->arr[5][anon_sym_BQUOTE] = 209;
	v->arr[5][anon_sym_DOLLAR_BQUOTE] = 211;
	v->arr[5][anon_sym_LT_LPAREN] = 213;
	v->arr[5][anon_sym_GT_LPAREN] = 213;
	v->arr[5][sym_comment] = 71;
	v->arr[5][sym_file_descriptor] = 215;
	init_parse_table43(v);
}

void	init_parse_table43(t_parse_table *v)
{
	v->arr[5][sym_variable_name] = 217;
	v->arr[5][sym_test_operator] = 219;
	v->arr[5][sym__brace_start] = 221;
	v->arr[6][sym__statement_not_pipeline] = 6568;
	v->arr[6][sym_redirected_statement] = 5317;
	v->arr[6][sym_for_statement] = 5406;
	v->arr[6][sym_c_style_for_statement] = 5406;
	v->arr[6][sym_while_statement] = 5195;
	v->arr[6][sym_if_statement] = 5195;
	v->arr[6][sym_case_statement] = 5406;
	v->arr[6][sym_function_definition] = 5406;
	v->arr[6][sym_compound_statement] = 5406;
	v->arr[6][sym_subshell] = 5406;
	v->arr[6][sym_pipeline] = 5569;
	v->arr[6][sym_list] = 5406;
	init_parse_table44(v);
}

void	init_parse_table44(t_parse_table *v)
{
	v->arr[6][sym_negated_command] = 5406;
	v->arr[6][sym_test_command] = 5406;
	v->arr[6][sym_declaration_command] = 5406;
	v->arr[6][sym_unset_command] = 5406;
	v->arr[6][sym_command] = 5406;
	v->arr[6][sym_command_name] = 620;
	v->arr[6][sym_variable_assignment] = 1811;
	v->arr[6][sym_variable_assignments] = 5406;
	v->arr[6][sym_subscript] = 6756;
	v->arr[6][sym_file_redirect] = 2693;
	v->arr[6][sym_herestring_redirect] = 2691;
	v->arr[6][sym__expression] = 3145;
	v->arr[6][sym_binary_expression] = 3071;
	v->arr[6][sym_ternary_expression] = 3071;
	v->arr[6][sym_unary_expression] = 3071;
	init_parse_table45(v);
}

// file funcs8.c
