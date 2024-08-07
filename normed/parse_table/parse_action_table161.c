/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs161.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table805(t_parse_table *v)
{
	v->arr[130][anon_sym_function] = 801;
	v->arr[130][anon_sym_LBRACE] = 29;
	v->arr[130][anon_sym_BANG] = 803;
	v->arr[130][anon_sym_LBRACK] = 33;
	v->arr[130][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[130][anon_sym_declare] = 805;
	v->arr[130][anon_sym_typeset] = 805;
	v->arr[130][anon_sym_export] = 805;
	v->arr[130][anon_sym_readonly] = 805;
	v->arr[130][anon_sym_local] = 805;
	v->arr[130][anon_sym_unset] = 807;
	v->arr[130][anon_sym_unsetenv] = 807;
	v->arr[130][anon_sym_AMP_GT] = 290;
	v->arr[130][anon_sym_AMP_GT_GT] = 292;
	v->arr[130][anon_sym_LT_AMP] = 290;
	init_parse_table806(v);
}

void	init_parse_table806(t_parse_table *v)
{
	v->arr[130][anon_sym_GT_AMP] = 290;
	v->arr[130][anon_sym_GT_PIPE] = 292;
	v->arr[130][anon_sym_LT_AMP_DASH] = 308;
	v->arr[130][anon_sym_GT_AMP_DASH] = 308;
	v->arr[130][anon_sym_LT_LT_LT] = 310;
	v->arr[130][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[130][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[130][anon_sym_DOLLAR] = 316;
	v->arr[130][sym__special_character] = 318;
	v->arr[130][anon_sym_DQUOTE] = 320;
	v->arr[130][sym_raw_string] = 322;
	v->arr[130][sym_ansi_c_string] = 322;
	v->arr[130][aux_sym_number_token1] = 324;
	v->arr[130][aux_sym_number_token2] = 326;
	v->arr[130][anon_sym_DOLLAR_LBRACE] = 328;
	init_parse_table807(v);
}

void	init_parse_table807(t_parse_table *v)
{
	v->arr[130][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[130][anon_sym_BQUOTE] = 332;
	v->arr[130][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[130][anon_sym_LT_LPAREN] = 336;
	v->arr[130][anon_sym_GT_LPAREN] = 336;
	v->arr[130][sym_comment] = 71;
	v->arr[130][sym_file_descriptor] = 338;
	v->arr[130][sym_variable_name] = 340;
	v->arr[130][sym_test_operator] = 342;
	v->arr[130][sym__brace_start] = 344;
	v->arr[131][sym__statements] = 6857;
	v->arr[131][sym__statement_not_pipeline] = 6614;
	v->arr[131][sym_redirected_statement] = 4797;
	v->arr[131][sym_for_statement] = 4797;
	v->arr[131][sym_c_style_for_statement] = 4797;
	init_parse_table808(v);
}

void	init_parse_table808(t_parse_table *v)
{
	v->arr[131][sym_while_statement] = 4400;
	v->arr[131][sym_if_statement] = 4400;
	v->arr[131][sym_case_statement] = 4797;
	v->arr[131][sym_function_definition] = 4797;
	v->arr[131][sym_compound_statement] = 4797;
	v->arr[131][sym_subshell] = 4797;
	v->arr[131][sym_pipeline] = 5054;
	v->arr[131][sym_list] = 4797;
	v->arr[131][sym_negated_command] = 4797;
	v->arr[131][sym_test_command] = 4797;
	v->arr[131][sym_declaration_command] = 4797;
	v->arr[131][sym_unset_command] = 4797;
	v->arr[131][sym_command] = 4797;
	v->arr[131][sym_command_name] = 533;
	v->arr[131][sym_variable_assignment] = 945;
	init_parse_table809(v);
}

void	init_parse_table809(t_parse_table *v)
{
	v->arr[131][sym_variable_assignments] = 4797;
	v->arr[131][sym_subscript] = 6754;
	v->arr[131][sym_file_redirect] = 2019;
	v->arr[131][sym_herestring_redirect] = 2017;
	v->arr[131][sym_arithmetic_expansion] = 938;
	v->arr[131][sym_brace_expression] = 938;
	v->arr[131][sym_concatenation] = 1376;
	v->arr[131][sym_string] = 938;
	v->arr[131][sym_translated_string] = 938;
	v->arr[131][sym_number] = 938;
	v->arr[131][sym_simple_expansion] = 938;
	v->arr[131][sym_expansion] = 938;
	v->arr[131][sym_command_substitution] = 938;
	v->arr[131][sym_process_substitution] = 938;
	v->arr[131][aux_sym__statements_repeat1] = 423;
	init_parse_table810(v);
}

// file funcs161.c
