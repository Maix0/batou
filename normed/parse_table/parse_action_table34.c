/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs34.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table170(t_parse_table *v)
{
	v->arr[25][anon_sym_AMP_GT_GT] = 413;
	v->arr[25][anon_sym_LT_AMP] = 411;
	v->arr[25][anon_sym_GT_AMP] = 411;
	v->arr[25][anon_sym_GT_PIPE] = 413;
	v->arr[25][anon_sym_LT_AMP_DASH] = 445;
	v->arr[25][anon_sym_GT_AMP_DASH] = 445;
	v->arr[25][anon_sym_LT_LT_LT] = 447;
	v->arr[25][anon_sym_DOLLAR_LPAREN_LPAREN] = 449;
	v->arr[25][anon_sym_DOLLAR_LBRACK] = 451;
	v->arr[25][anon_sym_DOLLAR] = 453;
	v->arr[25][sym__special_character] = 455;
	v->arr[25][anon_sym_DQUOTE] = 457;
	v->arr[25][sym_raw_string] = 459;
	v->arr[25][sym_ansi_c_string] = 459;
	v->arr[25][aux_sym_number_token1] = 461;
	init_parse_table171(v);
}

void	init_parse_table171(t_parse_table *v)
{
	v->arr[25][aux_sym_number_token2] = 463;
	v->arr[25][anon_sym_DOLLAR_LBRACE] = 465;
	v->arr[25][anon_sym_DOLLAR_LPAREN] = 467;
	v->arr[25][anon_sym_BQUOTE] = 469;
	v->arr[25][anon_sym_DOLLAR_BQUOTE] = 471;
	v->arr[25][anon_sym_LT_LPAREN] = 473;
	v->arr[25][anon_sym_GT_LPAREN] = 473;
	v->arr[25][sym_comment] = 71;
	v->arr[25][sym_file_descriptor] = 475;
	v->arr[25][sym_variable_name] = 477;
	v->arr[25][sym_test_operator] = 479;
	v->arr[25][sym__brace_start] = 481;
	v->arr[26][sym__statements] = 6524;
	v->arr[26][sym__statement_not_pipeline] = 6584;
	v->arr[26][sym_redirected_statement] = 4349;
	init_parse_table172(v);
}

void	init_parse_table172(t_parse_table *v)
{
	v->arr[26][sym_for_statement] = 4349;
	v->arr[26][sym_c_style_for_statement] = 4349;
	v->arr[26][sym_while_statement] = 4225;
	v->arr[26][sym_if_statement] = 4225;
	v->arr[26][sym_case_statement] = 4349;
	v->arr[26][sym_function_definition] = 4349;
	v->arr[26][sym_compound_statement] = 4349;
	v->arr[26][sym_subshell] = 4349;
	v->arr[26][sym_pipeline] = 4620;
	v->arr[26][sym_list] = 4349;
	v->arr[26][sym_negated_command] = 4349;
	v->arr[26][sym_test_command] = 4349;
	v->arr[26][sym_declaration_command] = 4349;
	v->arr[26][sym_unset_command] = 4349;
	v->arr[26][sym_command] = 4349;
	init_parse_table173(v);
}

void	init_parse_table173(t_parse_table *v)
{
	v->arr[26][sym_command_name] = 528;
	v->arr[26][sym_variable_assignment] = 807;
	v->arr[26][sym_variable_assignments] = 4349;
	v->arr[26][sym_subscript] = 6736;
	v->arr[26][sym_file_redirect] = 1635;
	v->arr[26][sym_herestring_redirect] = 1634;
	v->arr[26][sym_arithmetic_expansion] = 815;
	v->arr[26][sym_brace_expression] = 815;
	v->arr[26][sym_concatenation] = 1082;
	v->arr[26][sym_string] = 815;
	v->arr[26][sym_translated_string] = 815;
	v->arr[26][sym_number] = 815;
	v->arr[26][sym_simple_expansion] = 815;
	v->arr[26][sym_expansion] = 815;
	v->arr[26][sym_command_substitution] = 815;
	init_parse_table174(v);
}

void	init_parse_table174(t_parse_table *v)
{
	v->arr[26][sym_process_substitution] = 815;
	v->arr[26][aux_sym__statements_repeat1] = 431;
	v->arr[26][aux_sym_redirected_statement_repeat2] = 4250;
	v->arr[26][aux_sym_command_repeat1] = 925;
	v->arr[26][aux_sym__literal_repeat1] = 926;
	v->arr[26][sym_word] = 403;
	v->arr[26][anon_sym_for] = 405;
	v->arr[26][anon_sym_select] = 407;
	v->arr[26][anon_sym_LPAREN_LPAREN] = 409;
	v->arr[26][anon_sym_LT] = 411;
	v->arr[26][anon_sym_GT] = 411;
	v->arr[26][anon_sym_GT_GT] = 413;
	v->arr[26][anon_sym_LPAREN] = 415;
	v->arr[26][anon_sym_while] = 417;
	v->arr[26][anon_sym_until] = 417;
	init_parse_table175(v);
}

// file funcs34.c
