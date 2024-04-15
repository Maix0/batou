/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs148.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table740(t_parse_table *v)
{
	v->arr[119][anon_sym_GT_AMP] = 290;
	v->arr[119][anon_sym_GT_PIPE] = 292;
	v->arr[119][anon_sym_LT_AMP_DASH] = 308;
	v->arr[119][anon_sym_GT_AMP_DASH] = 308;
	v->arr[119][anon_sym_LT_LT_LT] = 310;
	v->arr[119][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[119][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[119][anon_sym_DOLLAR] = 316;
	v->arr[119][sym__special_character] = 318;
	v->arr[119][anon_sym_DQUOTE] = 320;
	v->arr[119][sym_raw_string] = 322;
	v->arr[119][sym_ansi_c_string] = 322;
	v->arr[119][aux_sym_number_token1] = 324;
	v->arr[119][aux_sym_number_token2] = 326;
	v->arr[119][anon_sym_DOLLAR_LBRACE] = 328;
	init_parse_table741(v);
}

void	init_parse_table741(t_parse_table *v)
{
	v->arr[119][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[119][anon_sym_BQUOTE] = 332;
	v->arr[119][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[119][anon_sym_LT_LPAREN] = 336;
	v->arr[119][anon_sym_GT_LPAREN] = 336;
	v->arr[119][sym_comment] = 71;
	v->arr[119][sym_file_descriptor] = 338;
	v->arr[119][sym_variable_name] = 340;
	v->arr[119][sym_test_operator] = 342;
	v->arr[119][sym__brace_start] = 344;
	v->arr[120][sym__statements] = 6937;
	v->arr[120][sym__statement_not_pipeline] = 6614;
	v->arr[120][sym_redirected_statement] = 4797;
	v->arr[120][sym_for_statement] = 4797;
	v->arr[120][sym_c_style_for_statement] = 4797;
	init_parse_table742(v);
}

void	init_parse_table742(t_parse_table *v)
{
	v->arr[120][sym_while_statement] = 4400;
	v->arr[120][sym_if_statement] = 4400;
	v->arr[120][sym_case_statement] = 4797;
	v->arr[120][sym_function_definition] = 4797;
	v->arr[120][sym_compound_statement] = 4797;
	v->arr[120][sym_subshell] = 4797;
	v->arr[120][sym_pipeline] = 5054;
	v->arr[120][sym_list] = 4797;
	v->arr[120][sym_negated_command] = 4797;
	v->arr[120][sym_test_command] = 4797;
	v->arr[120][sym_declaration_command] = 4797;
	v->arr[120][sym_unset_command] = 4797;
	v->arr[120][sym_command] = 4797;
	v->arr[120][sym_command_name] = 533;
	v->arr[120][sym_variable_assignment] = 945;
	init_parse_table743(v);
}

void	init_parse_table743(t_parse_table *v)
{
	v->arr[120][sym_variable_assignments] = 4797;
	v->arr[120][sym_subscript] = 6754;
	v->arr[120][sym_file_redirect] = 2019;
	v->arr[120][sym_herestring_redirect] = 2017;
	v->arr[120][sym_arithmetic_expansion] = 938;
	v->arr[120][sym_brace_expression] = 938;
	v->arr[120][sym_concatenation] = 1376;
	v->arr[120][sym_string] = 938;
	v->arr[120][sym_translated_string] = 938;
	v->arr[120][sym_number] = 938;
	v->arr[120][sym_simple_expansion] = 938;
	v->arr[120][sym_expansion] = 938;
	v->arr[120][sym_command_substitution] = 938;
	v->arr[120][sym_process_substitution] = 938;
	v->arr[120][aux_sym__statements_repeat1] = 423;
	init_parse_table744(v);
}

void	init_parse_table744(t_parse_table *v)
{
	v->arr[120][aux_sym_redirected_statement_repeat2] = 4480;
	v->arr[120][aux_sym_command_repeat1] = 951;
	v->arr[120][aux_sym__literal_repeat1] = 1267;
	v->arr[120][sym_word] = 765;
	v->arr[120][anon_sym_for] = 9;
	v->arr[120][anon_sym_select] = 11;
	v->arr[120][anon_sym_LPAREN_LPAREN] = 288;
	v->arr[120][anon_sym_LT] = 85;
	v->arr[120][anon_sym_GT] = 85;
	v->arr[120][anon_sym_GT_GT] = 87;
	v->arr[120][anon_sym_LPAREN] = 19;
	v->arr[120][anon_sym_while] = 21;
	v->arr[120][anon_sym_until] = 21;
	v->arr[120][anon_sym_if] = 23;
	v->arr[120][anon_sym_case] = 25;
	init_parse_table745(v);
}

// file funcs148.c
