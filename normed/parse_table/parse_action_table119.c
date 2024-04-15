/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs119.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table595(t_parse_table *v)
{
	v->arr[95][anon_sym_function] = 300;
	v->arr[95][anon_sym_LBRACE] = 29;
	v->arr[95][anon_sym_BANG] = 302;
	v->arr[95][anon_sym_LBRACK] = 33;
	v->arr[95][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[95][anon_sym_declare] = 304;
	v->arr[95][anon_sym_typeset] = 304;
	v->arr[95][anon_sym_export] = 304;
	v->arr[95][anon_sym_readonly] = 304;
	v->arr[95][anon_sym_local] = 304;
	v->arr[95][anon_sym_unset] = 306;
	v->arr[95][anon_sym_unsetenv] = 306;
	v->arr[95][anon_sym_AMP_GT] = 290;
	v->arr[95][anon_sym_AMP_GT_GT] = 292;
	v->arr[95][anon_sym_LT_AMP] = 290;
	init_parse_table596(v);
}

void	init_parse_table596(t_parse_table *v)
{
	v->arr[95][anon_sym_GT_AMP] = 290;
	v->arr[95][anon_sym_GT_PIPE] = 292;
	v->arr[95][anon_sym_LT_AMP_DASH] = 308;
	v->arr[95][anon_sym_GT_AMP_DASH] = 308;
	v->arr[95][anon_sym_LT_LT_LT] = 310;
	v->arr[95][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[95][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[95][anon_sym_DOLLAR] = 316;
	v->arr[95][sym__special_character] = 318;
	v->arr[95][anon_sym_DQUOTE] = 320;
	v->arr[95][sym_raw_string] = 322;
	v->arr[95][sym_ansi_c_string] = 322;
	v->arr[95][aux_sym_number_token1] = 324;
	v->arr[95][aux_sym_number_token2] = 326;
	v->arr[95][anon_sym_DOLLAR_LBRACE] = 328;
	init_parse_table597(v);
}

void	init_parse_table597(t_parse_table *v)
{
	v->arr[95][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[95][anon_sym_BQUOTE] = 332;
	v->arr[95][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[95][anon_sym_LT_LPAREN] = 336;
	v->arr[95][anon_sym_GT_LPAREN] = 336;
	v->arr[95][sym_comment] = 71;
	v->arr[95][sym_file_descriptor] = 338;
	v->arr[95][sym_variable_name] = 340;
	v->arr[95][sym_test_operator] = 342;
	v->arr[95][sym__brace_start] = 344;
	v->arr[96][aux_sym__terminated_statement] = 99;
	v->arr[96][sym__statement_not_pipeline] = 6718;
	v->arr[96][sym_redirected_statement] = 4993;
	v->arr[96][sym_for_statement] = 4993;
	v->arr[96][sym_c_style_for_statement] = 4993;
	init_parse_table598(v);
}

void	init_parse_table598(t_parse_table *v)
{
	v->arr[96][sym_while_statement] = 4489;
	v->arr[96][sym_if_statement] = 4489;
	v->arr[96][sym_case_statement] = 4993;
	v->arr[96][sym_function_definition] = 4993;
	v->arr[96][sym_compound_statement] = 4993;
	v->arr[96][sym_subshell] = 4993;
	v->arr[96][sym_pipeline] = 5122;
	v->arr[96][sym_list] = 4993;
	v->arr[96][sym_negated_command] = 4993;
	v->arr[96][sym_test_command] = 4993;
	v->arr[96][sym_declaration_command] = 4993;
	v->arr[96][sym_unset_command] = 4993;
	v->arr[96][sym_command] = 4993;
	v->arr[96][sym_command_name] = 544;
	v->arr[96][sym_variable_assignment] = 1030;
	init_parse_table599(v);
}

void	init_parse_table599(t_parse_table *v)
{
	v->arr[96][sym_variable_assignments] = 4993;
	v->arr[96][sym_subscript] = 6790;
	v->arr[96][sym_file_redirect] = 2019;
	v->arr[96][sym_herestring_redirect] = 2017;
	v->arr[96][sym_arithmetic_expansion] = 1078;
	v->arr[96][sym_brace_expression] = 1078;
	v->arr[96][sym_concatenation] = 1376;
	v->arr[96][sym_string] = 1078;
	v->arr[96][sym_translated_string] = 1078;
	v->arr[96][sym_number] = 1078;
	v->arr[96][sym_simple_expansion] = 1078;
	v->arr[96][sym_expansion] = 1078;
	v->arr[96][sym_command_substitution] = 1078;
	v->arr[96][sym_process_substitution] = 1078;
	v->arr[96][aux_sym_redirected_statement_repeat2] = 4644;
	init_parse_table600(v);
}

// file funcs119.c
