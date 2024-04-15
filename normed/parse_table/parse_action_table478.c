/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs478.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2390(t_parse_table *v)
{
	v->arr[394][anon_sym_GT_AMP] = 290;
	v->arr[394][anon_sym_GT_PIPE] = 292;
	v->arr[394][anon_sym_LT_AMP_DASH] = 308;
	v->arr[394][anon_sym_GT_AMP_DASH] = 308;
	v->arr[394][anon_sym_LT_LT_LT] = 310;
	v->arr[394][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[394][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[394][anon_sym_DOLLAR] = 316;
	v->arr[394][sym__special_character] = 318;
	v->arr[394][anon_sym_DQUOTE] = 320;
	v->arr[394][sym_raw_string] = 322;
	v->arr[394][sym_ansi_c_string] = 322;
	v->arr[394][aux_sym_number_token1] = 324;
	v->arr[394][aux_sym_number_token2] = 326;
	v->arr[394][anon_sym_DOLLAR_LBRACE] = 328;
	init_parse_table2391(v);
}

void	init_parse_table2391(t_parse_table *v)
{
	v->arr[394][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[394][anon_sym_BQUOTE] = 332;
	v->arr[394][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[394][anon_sym_LT_LPAREN] = 336;
	v->arr[394][anon_sym_GT_LPAREN] = 336;
	v->arr[394][sym_comment] = 71;
	v->arr[394][sym_file_descriptor] = 338;
	v->arr[394][sym_variable_name] = 340;
	v->arr[394][sym_test_operator] = 342;
	v->arr[394][sym__brace_start] = 344;
	v->arr[395][sym__statements] = 7391;
	v->arr[395][sym__statement_not_pipeline] = 6558;
	v->arr[395][sym_redirected_statement] = 4662;
	v->arr[395][sym_for_statement] = 4662;
	v->arr[395][sym_c_style_for_statement] = 4662;
	init_parse_table2392(v);
}

void	init_parse_table2392(t_parse_table *v)
{
	v->arr[395][sym_while_statement] = 4314;
	v->arr[395][sym_if_statement] = 4314;
	v->arr[395][sym_case_statement] = 4662;
	v->arr[395][sym_function_definition] = 4662;
	v->arr[395][sym_compound_statement] = 4662;
	v->arr[395][sym_subshell] = 4662;
	v->arr[395][sym_pipeline] = 5070;
	v->arr[395][sym_list] = 4662;
	v->arr[395][sym_negated_command] = 4662;
	v->arr[395][sym_test_command] = 4662;
	v->arr[395][sym_declaration_command] = 4662;
	v->arr[395][sym_unset_command] = 4662;
	v->arr[395][sym_command] = 4662;
	v->arr[395][sym_command_name] = 554;
	v->arr[395][sym_variable_assignment] = 1150;
	init_parse_table2393(v);
}

void	init_parse_table2393(t_parse_table *v)
{
	v->arr[395][sym_variable_assignments] = 4662;
	v->arr[395][sym_subscript] = 6790;
	v->arr[395][sym_file_redirect] = 2273;
	v->arr[395][sym_herestring_redirect] = 2272;
	v->arr[395][sym_arithmetic_expansion] = 1078;
	v->arr[395][sym_brace_expression] = 1078;
	v->arr[395][sym_concatenation] = 1376;
	v->arr[395][sym_string] = 1078;
	v->arr[395][sym_translated_string] = 1078;
	v->arr[395][sym_number] = 1078;
	v->arr[395][sym_simple_expansion] = 1078;
	v->arr[395][sym_expansion] = 1078;
	v->arr[395][sym_command_substitution] = 1078;
	v->arr[395][sym_process_substitution] = 1078;
	v->arr[395][aux_sym__statements_repeat1] = 429;
	init_parse_table2394(v);
}

void	init_parse_table2394(t_parse_table *v)
{
	v->arr[395][aux_sym_redirected_statement_repeat2] = 4573;
	v->arr[395][aux_sym_command_repeat1] = 958;
	v->arr[395][aux_sym__literal_repeat1] = 1267;
	v->arr[395][sym_word] = 799;
	v->arr[395][anon_sym_for] = 9;
	v->arr[395][anon_sym_select] = 11;
	v->arr[395][anon_sym_LPAREN_LPAREN] = 288;
	v->arr[395][anon_sym_LT] = 290;
	v->arr[395][anon_sym_GT] = 290;
	v->arr[395][anon_sym_GT_GT] = 292;
	v->arr[395][anon_sym_LPAREN] = 19;
	v->arr[395][anon_sym_while] = 21;
	v->arr[395][anon_sym_until] = 21;
	v->arr[395][anon_sym_if] = 23;
	v->arr[395][anon_sym_case] = 25;
	init_parse_table2395(v);
}

// file funcs478.c
