/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs71.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table355(t_parse_table *v)
{
	v->arr[55][anon_sym_declare] = 95;
	v->arr[55][anon_sym_typeset] = 95;
	v->arr[55][anon_sym_export] = 95;
	v->arr[55][anon_sym_readonly] = 95;
	v->arr[55][anon_sym_local] = 95;
	v->arr[55][anon_sym_unset] = 97;
	v->arr[55][anon_sym_unsetenv] = 97;
	v->arr[55][anon_sym_AMP_GT] = 85;
	v->arr[55][anon_sym_AMP_GT_GT] = 87;
	v->arr[55][anon_sym_LT_AMP] = 85;
	v->arr[55][anon_sym_GT_AMP] = 85;
	v->arr[55][anon_sym_GT_PIPE] = 87;
	v->arr[55][anon_sym_LT_AMP_DASH] = 99;
	v->arr[55][anon_sym_GT_AMP_DASH] = 99;
	v->arr[55][anon_sym_LT_LT_LT] = 101;
	init_parse_table356(v);
}

void	init_parse_table356(t_parse_table *v)
{
	v->arr[55][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[55][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[55][anon_sym_DOLLAR] = 316;
	v->arr[55][sym__special_character] = 771;
	v->arr[55][anon_sym_DQUOTE] = 320;
	v->arr[55][sym_raw_string] = 773;
	v->arr[55][sym_ansi_c_string] = 773;
	v->arr[55][aux_sym_number_token1] = 324;
	v->arr[55][aux_sym_number_token2] = 326;
	v->arr[55][anon_sym_DOLLAR_LBRACE] = 328;
	v->arr[55][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[55][anon_sym_BQUOTE] = 332;
	v->arr[55][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[55][anon_sym_LT_LPAREN] = 336;
	v->arr[55][anon_sym_GT_LPAREN] = 336;
	init_parse_table357(v);
}

void	init_parse_table357(t_parse_table *v)
{
	v->arr[55][sym_comment] = 71;
	v->arr[55][sym_file_descriptor] = 135;
	v->arr[55][sym_variable_name] = 137;
	v->arr[55][sym_test_operator] = 775;
	v->arr[55][sym__brace_start] = 344;
	v->arr[56][sym__statements] = 7117;
	v->arr[56][sym__statement_not_pipeline] = 6614;
	v->arr[56][sym_redirected_statement] = 4797;
	v->arr[56][sym_for_statement] = 4797;
	v->arr[56][sym_c_style_for_statement] = 4797;
	v->arr[56][sym_while_statement] = 4400;
	v->arr[56][sym_if_statement] = 4400;
	v->arr[56][sym_case_statement] = 4797;
	v->arr[56][sym_function_definition] = 4797;
	v->arr[56][sym_compound_statement] = 4797;
	init_parse_table358(v);
}

void	init_parse_table358(t_parse_table *v)
{
	v->arr[56][sym_subshell] = 4797;
	v->arr[56][sym_pipeline] = 5054;
	v->arr[56][sym_list] = 4797;
	v->arr[56][sym_negated_command] = 4797;
	v->arr[56][sym_test_command] = 4797;
	v->arr[56][sym_declaration_command] = 4797;
	v->arr[56][sym_unset_command] = 4797;
	v->arr[56][sym_command] = 4797;
	v->arr[56][sym_command_name] = 533;
	v->arr[56][sym_variable_assignment] = 945;
	v->arr[56][sym_variable_assignments] = 4797;
	v->arr[56][sym_subscript] = 6754;
	v->arr[56][sym_file_redirect] = 2019;
	v->arr[56][sym_herestring_redirect] = 2017;
	v->arr[56][sym_arithmetic_expansion] = 938;
	init_parse_table359(v);
}

void	init_parse_table359(t_parse_table *v)
{
	v->arr[56][sym_brace_expression] = 938;
	v->arr[56][sym_concatenation] = 1376;
	v->arr[56][sym_string] = 938;
	v->arr[56][sym_translated_string] = 938;
	v->arr[56][sym_number] = 938;
	v->arr[56][sym_simple_expansion] = 938;
	v->arr[56][sym_expansion] = 938;
	v->arr[56][sym_command_substitution] = 938;
	v->arr[56][sym_process_substitution] = 938;
	v->arr[56][aux_sym__statements_repeat1] = 423;
	v->arr[56][aux_sym_redirected_statement_repeat2] = 4480;
	v->arr[56][aux_sym_command_repeat1] = 951;
	v->arr[56][aux_sym__literal_repeat1] = 1267;
	v->arr[56][sym_word] = 765;
	v->arr[56][anon_sym_for] = 9;
	init_parse_table360(v);
}

// file funcs71.c
