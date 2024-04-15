/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs510.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2550(t_parse_table *v)
{
	v->arr[421][anon_sym_for] = 9;
	v->arr[421][anon_sym_select] = 11;
	v->arr[421][anon_sym_LPAREN_LPAREN] = 288;
	v->arr[421][anon_sym_LT] = 290;
	v->arr[421][anon_sym_GT] = 290;
	v->arr[421][anon_sym_GT_GT] = 292;
	v->arr[421][anon_sym_LPAREN] = 19;
	v->arr[421][anon_sym_while] = 21;
	v->arr[421][anon_sym_until] = 21;
	v->arr[421][anon_sym_if] = 23;
	v->arr[421][anon_sym_case] = 25;
	v->arr[421][anon_sym_function] = 300;
	v->arr[421][anon_sym_LBRACE] = 29;
	v->arr[421][anon_sym_BANG] = 302;
	v->arr[421][anon_sym_LBRACK] = 33;
	init_parse_table2551(v);
}

void	init_parse_table2551(t_parse_table *v)
{
	v->arr[421][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[421][anon_sym_declare] = 304;
	v->arr[421][anon_sym_typeset] = 304;
	v->arr[421][anon_sym_export] = 304;
	v->arr[421][anon_sym_readonly] = 304;
	v->arr[421][anon_sym_local] = 304;
	v->arr[421][anon_sym_unset] = 306;
	v->arr[421][anon_sym_unsetenv] = 306;
	v->arr[421][anon_sym_AMP_GT] = 290;
	v->arr[421][anon_sym_AMP_GT_GT] = 292;
	v->arr[421][anon_sym_LT_AMP] = 290;
	v->arr[421][anon_sym_GT_AMP] = 290;
	v->arr[421][anon_sym_GT_PIPE] = 292;
	v->arr[421][anon_sym_LT_AMP_DASH] = 308;
	v->arr[421][anon_sym_GT_AMP_DASH] = 308;
	init_parse_table2552(v);
}

void	init_parse_table2552(t_parse_table *v)
{
	v->arr[421][anon_sym_LT_LT_LT] = 310;
	v->arr[421][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[421][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[421][anon_sym_DOLLAR] = 316;
	v->arr[421][sym__special_character] = 318;
	v->arr[421][anon_sym_DQUOTE] = 320;
	v->arr[421][sym_raw_string] = 322;
	v->arr[421][sym_ansi_c_string] = 322;
	v->arr[421][aux_sym_number_token1] = 324;
	v->arr[421][aux_sym_number_token2] = 326;
	v->arr[421][anon_sym_DOLLAR_LBRACE] = 328;
	v->arr[421][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[421][anon_sym_BQUOTE] = 332;
	v->arr[421][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[421][anon_sym_LT_LPAREN] = 336;
	init_parse_table2553(v);
}

void	init_parse_table2553(t_parse_table *v)
{
	v->arr[421][anon_sym_GT_LPAREN] = 336;
	v->arr[421][sym_comment] = 71;
	v->arr[421][sym_file_descriptor] = 338;
	v->arr[421][sym_variable_name] = 340;
	v->arr[421][sym_test_operator] = 342;
	v->arr[421][sym__brace_start] = 344;
	v->arr[422][aux_sym__terminated_statement] = 133;
	v->arr[422][sym__statement_not_pipeline] = 6718;
	v->arr[422][sym_redirected_statement] = 5007;
	v->arr[422][sym_for_statement] = 5007;
	v->arr[422][sym_c_style_for_statement] = 5007;
	v->arr[422][sym_while_statement] = 4551;
	v->arr[422][sym_if_statement] = 4551;
	v->arr[422][sym_case_statement] = 5007;
	v->arr[422][sym_function_definition] = 5007;
	init_parse_table2554(v);
}

void	init_parse_table2554(t_parse_table *v)
{
	v->arr[422][sym_compound_statement] = 5007;
	v->arr[422][sym_subshell] = 5007;
	v->arr[422][sym_pipeline] = 5189;
	v->arr[422][sym_list] = 5007;
	v->arr[422][sym_negated_command] = 5007;
	v->arr[422][sym_test_command] = 5007;
	v->arr[422][sym_declaration_command] = 5007;
	v->arr[422][sym_unset_command] = 5007;
	v->arr[422][sym_command] = 5007;
	v->arr[422][sym_command_name] = 544;
	v->arr[422][sym_variable_assignment] = 1151;
	v->arr[422][sym_variable_assignments] = 5007;
	v->arr[422][sym_subscript] = 6790;
	v->arr[422][sym_file_redirect] = 2019;
	v->arr[422][sym_herestring_redirect] = 2017;
	init_parse_table2555(v);
}

// file funcs510.c
