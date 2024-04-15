/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs78.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table390(t_parse_table *v)
{
	v->arr[61][aux_sym_redirected_statement_repeat2] = 4573;
	v->arr[61][aux_sym_command_repeat1] = 958;
	v->arr[61][aux_sym__literal_repeat1] = 1267;
	v->arr[61][sym_word] = 799;
	v->arr[61][anon_sym_for] = 9;
	v->arr[61][anon_sym_select] = 11;
	v->arr[61][anon_sym_LPAREN_LPAREN] = 288;
	v->arr[61][anon_sym_LT] = 290;
	v->arr[61][anon_sym_GT] = 290;
	v->arr[61][anon_sym_GT_GT] = 292;
	v->arr[61][anon_sym_LPAREN] = 19;
	v->arr[61][anon_sym_while] = 21;
	v->arr[61][anon_sym_until] = 21;
	v->arr[61][anon_sym_if] = 23;
	v->arr[61][anon_sym_case] = 25;
	init_parse_table391(v);
}

void	init_parse_table391(t_parse_table *v)
{
	v->arr[61][anon_sym_function] = 801;
	v->arr[61][anon_sym_LBRACE] = 29;
	v->arr[61][anon_sym_BANG] = 803;
	v->arr[61][anon_sym_LBRACK] = 33;
	v->arr[61][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[61][anon_sym_declare] = 805;
	v->arr[61][anon_sym_typeset] = 805;
	v->arr[61][anon_sym_export] = 805;
	v->arr[61][anon_sym_readonly] = 805;
	v->arr[61][anon_sym_local] = 805;
	v->arr[61][anon_sym_unset] = 807;
	v->arr[61][anon_sym_unsetenv] = 807;
	v->arr[61][anon_sym_AMP_GT] = 290;
	v->arr[61][anon_sym_AMP_GT_GT] = 292;
	v->arr[61][anon_sym_LT_AMP] = 290;
	init_parse_table392(v);
}

void	init_parse_table392(t_parse_table *v)
{
	v->arr[61][anon_sym_GT_AMP] = 290;
	v->arr[61][anon_sym_GT_PIPE] = 292;
	v->arr[61][anon_sym_LT_AMP_DASH] = 308;
	v->arr[61][anon_sym_GT_AMP_DASH] = 308;
	v->arr[61][anon_sym_LT_LT_LT] = 310;
	v->arr[61][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[61][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[61][anon_sym_DOLLAR] = 316;
	v->arr[61][sym__special_character] = 318;
	v->arr[61][anon_sym_DQUOTE] = 320;
	v->arr[61][sym_raw_string] = 322;
	v->arr[61][sym_ansi_c_string] = 322;
	v->arr[61][aux_sym_number_token1] = 324;
	v->arr[61][aux_sym_number_token2] = 326;
	v->arr[61][anon_sym_DOLLAR_LBRACE] = 328;
	init_parse_table393(v);
}

void	init_parse_table393(t_parse_table *v)
{
	v->arr[61][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[61][anon_sym_BQUOTE] = 332;
	v->arr[61][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[61][anon_sym_LT_LPAREN] = 336;
	v->arr[61][anon_sym_GT_LPAREN] = 336;
	v->arr[61][sym_comment] = 71;
	v->arr[61][sym_file_descriptor] = 338;
	v->arr[61][sym_variable_name] = 340;
	v->arr[61][sym_test_operator] = 342;
	v->arr[61][sym__brace_start] = 344;
	v->arr[62][aux_sym__terminated_statement] = 62;
	v->arr[62][sym__statement_not_pipeline] = 6718;
	v->arr[62][sym_redirected_statement] = 4993;
	v->arr[62][sym_for_statement] = 4993;
	v->arr[62][sym_c_style_for_statement] = 4993;
	init_parse_table394(v);
}

void	init_parse_table394(t_parse_table *v)
{
	v->arr[62][sym_while_statement] = 4489;
	v->arr[62][sym_if_statement] = 4489;
	v->arr[62][sym_case_statement] = 4993;
	v->arr[62][sym_function_definition] = 4993;
	v->arr[62][sym_compound_statement] = 4993;
	v->arr[62][sym_subshell] = 4993;
	v->arr[62][sym_pipeline] = 5122;
	v->arr[62][sym_list] = 4993;
	v->arr[62][sym_negated_command] = 4993;
	v->arr[62][sym_test_command] = 4993;
	v->arr[62][sym_declaration_command] = 4993;
	v->arr[62][sym_unset_command] = 4993;
	v->arr[62][sym_command] = 4993;
	v->arr[62][sym_command_name] = 544;
	v->arr[62][sym_variable_assignment] = 1030;
	init_parse_table395(v);
}

// file funcs78.c
