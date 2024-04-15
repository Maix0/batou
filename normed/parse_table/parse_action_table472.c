/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs472.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2360(t_parse_table *v)
{
	v->arr[389][anon_sym_GT_AMP] = 85;
	v->arr[389][anon_sym_GT_PIPE] = 87;
	v->arr[389][anon_sym_LT_AMP_DASH] = 99;
	v->arr[389][anon_sym_GT_AMP_DASH] = 99;
	v->arr[389][anon_sym_LT_LT_LT] = 101;
	v->arr[389][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[389][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[389][anon_sym_DOLLAR] = 316;
	v->arr[389][sym__special_character] = 771;
	v->arr[389][anon_sym_DQUOTE] = 320;
	v->arr[389][sym_raw_string] = 773;
	v->arr[389][sym_ansi_c_string] = 773;
	v->arr[389][aux_sym_number_token1] = 324;
	v->arr[389][aux_sym_number_token2] = 326;
	v->arr[389][anon_sym_DOLLAR_LBRACE] = 328;
	init_parse_table2361(v);
}

void	init_parse_table2361(t_parse_table *v)
{
	v->arr[389][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[389][anon_sym_BQUOTE] = 332;
	v->arr[389][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[389][anon_sym_LT_LPAREN] = 336;
	v->arr[389][anon_sym_GT_LPAREN] = 336;
	v->arr[389][sym_comment] = 71;
	v->arr[389][sym_file_descriptor] = 135;
	v->arr[389][sym_variable_name] = 137;
	v->arr[389][sym_test_operator] = 775;
	v->arr[389][sym__brace_start] = 344;
	v->arr[390][sym__statements] = 7383;
	v->arr[390][sym__statement_not_pipeline] = 6558;
	v->arr[390][sym_redirected_statement] = 4662;
	v->arr[390][sym_for_statement] = 4662;
	v->arr[390][sym_c_style_for_statement] = 4662;
	init_parse_table2362(v);
}

void	init_parse_table2362(t_parse_table *v)
{
	v->arr[390][sym_while_statement] = 4314;
	v->arr[390][sym_if_statement] = 4314;
	v->arr[390][sym_case_statement] = 4662;
	v->arr[390][sym_function_definition] = 4662;
	v->arr[390][sym_compound_statement] = 4662;
	v->arr[390][sym_subshell] = 4662;
	v->arr[390][sym_pipeline] = 5070;
	v->arr[390][sym_list] = 4662;
	v->arr[390][sym_negated_command] = 4662;
	v->arr[390][sym_test_command] = 4662;
	v->arr[390][sym_declaration_command] = 4662;
	v->arr[390][sym_unset_command] = 4662;
	v->arr[390][sym_command] = 4662;
	v->arr[390][sym_command_name] = 554;
	v->arr[390][sym_variable_assignment] = 1150;
	init_parse_table2363(v);
}

void	init_parse_table2363(t_parse_table *v)
{
	v->arr[390][sym_variable_assignments] = 4662;
	v->arr[390][sym_subscript] = 6790;
	v->arr[390][sym_file_redirect] = 2273;
	v->arr[390][sym_herestring_redirect] = 2272;
	v->arr[390][sym_arithmetic_expansion] = 1078;
	v->arr[390][sym_brace_expression] = 1078;
	v->arr[390][sym_concatenation] = 1376;
	v->arr[390][sym_string] = 1078;
	v->arr[390][sym_translated_string] = 1078;
	v->arr[390][sym_number] = 1078;
	v->arr[390][sym_simple_expansion] = 1078;
	v->arr[390][sym_expansion] = 1078;
	v->arr[390][sym_command_substitution] = 1078;
	v->arr[390][sym_process_substitution] = 1078;
	v->arr[390][aux_sym__statements_repeat1] = 429;
	init_parse_table2364(v);
}

void	init_parse_table2364(t_parse_table *v)
{
	v->arr[390][aux_sym_redirected_statement_repeat2] = 4573;
	v->arr[390][aux_sym_command_repeat1] = 958;
	v->arr[390][aux_sym__literal_repeat1] = 1267;
	v->arr[390][sym_word] = 799;
	v->arr[390][anon_sym_for] = 9;
	v->arr[390][anon_sym_select] = 11;
	v->arr[390][anon_sym_LPAREN_LPAREN] = 288;
	v->arr[390][anon_sym_LT] = 290;
	v->arr[390][anon_sym_GT] = 290;
	v->arr[390][anon_sym_GT_GT] = 292;
	v->arr[390][anon_sym_LPAREN] = 19;
	v->arr[390][anon_sym_while] = 21;
	v->arr[390][anon_sym_until] = 21;
	v->arr[390][anon_sym_if] = 23;
	v->arr[390][anon_sym_case] = 25;
	init_parse_table2365(v);
}

// file funcs472.c
