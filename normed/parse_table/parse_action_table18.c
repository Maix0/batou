/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs18.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table90(t_parse_table *v)
{
	v->arr[13][sym_c_style_for_statement] = 5007;
	v->arr[13][sym_while_statement] = 4551;
	v->arr[13][sym_if_statement] = 4551;
	v->arr[13][sym_elif_clause] = 6289;
	v->arr[13][sym_else_clause] = 7417;
	v->arr[13][sym_case_statement] = 5007;
	v->arr[13][sym_function_definition] = 5007;
	v->arr[13][sym_compound_statement] = 5007;
	v->arr[13][sym_subshell] = 5007;
	v->arr[13][sym_pipeline] = 5189;
	v->arr[13][sym_list] = 5007;
	v->arr[13][sym_negated_command] = 5007;
	v->arr[13][sym_test_command] = 5007;
	v->arr[13][sym_declaration_command] = 5007;
	v->arr[13][sym_unset_command] = 5007;
	init_parse_table91(v);
}

void	init_parse_table91(t_parse_table *v)
{
	v->arr[13][sym_command] = 5007;
	v->arr[13][sym_command_name] = 544;
	v->arr[13][sym_variable_assignment] = 1151;
	v->arr[13][sym_variable_assignments] = 5007;
	v->arr[13][sym_subscript] = 6790;
	v->arr[13][sym_file_redirect] = 2019;
	v->arr[13][sym_herestring_redirect] = 2017;
	v->arr[13][sym_arithmetic_expansion] = 1078;
	v->arr[13][sym_brace_expression] = 1078;
	v->arr[13][sym_concatenation] = 1376;
	v->arr[13][sym_string] = 1078;
	v->arr[13][sym_translated_string] = 1078;
	v->arr[13][sym_number] = 1078;
	v->arr[13][sym_simple_expansion] = 1078;
	v->arr[13][sym_expansion] = 1078;
	init_parse_table92(v);
}

void	init_parse_table92(t_parse_table *v)
{
	v->arr[13][sym_command_substitution] = 1078;
	v->arr[13][sym_process_substitution] = 1078;
	v->arr[13][aux_sym_redirected_statement_repeat2] = 4644;
	v->arr[13][aux_sym_if_statement_repeat1] = 6289;
	v->arr[13][aux_sym_command_repeat1] = 997;
	v->arr[13][aux_sym__literal_repeat1] = 1267;
	v->arr[13][sym_word] = 286;
	v->arr[13][anon_sym_for] = 9;
	v->arr[13][anon_sym_select] = 11;
	v->arr[13][anon_sym_LPAREN_LPAREN] = 288;
	v->arr[13][anon_sym_LT] = 290;
	v->arr[13][anon_sym_GT] = 290;
	v->arr[13][anon_sym_GT_GT] = 292;
	v->arr[13][anon_sym_LPAREN] = 19;
	v->arr[13][anon_sym_while] = 21;
	init_parse_table93(v);
}

void	init_parse_table93(t_parse_table *v)
{
	v->arr[13][anon_sym_until] = 21;
	v->arr[13][anon_sym_if] = 23;
	v->arr[13][anon_sym_fi] = 294;
	v->arr[13][anon_sym_elif] = 296;
	v->arr[13][anon_sym_else] = 298;
	v->arr[13][anon_sym_case] = 25;
	v->arr[13][anon_sym_function] = 300;
	v->arr[13][anon_sym_LBRACE] = 29;
	v->arr[13][anon_sym_BANG] = 302;
	v->arr[13][anon_sym_LBRACK] = 33;
	v->arr[13][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[13][anon_sym_declare] = 304;
	v->arr[13][anon_sym_typeset] = 304;
	v->arr[13][anon_sym_export] = 304;
	v->arr[13][anon_sym_readonly] = 304;
	init_parse_table94(v);
}

void	init_parse_table94(t_parse_table *v)
{
	v->arr[13][anon_sym_local] = 304;
	v->arr[13][anon_sym_unset] = 306;
	v->arr[13][anon_sym_unsetenv] = 306;
	v->arr[13][anon_sym_AMP_GT] = 290;
	v->arr[13][anon_sym_AMP_GT_GT] = 292;
	v->arr[13][anon_sym_LT_AMP] = 290;
	v->arr[13][anon_sym_GT_AMP] = 290;
	v->arr[13][anon_sym_GT_PIPE] = 292;
	v->arr[13][anon_sym_LT_AMP_DASH] = 308;
	v->arr[13][anon_sym_GT_AMP_DASH] = 308;
	v->arr[13][anon_sym_LT_LT_LT] = 310;
	v->arr[13][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[13][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[13][anon_sym_DOLLAR] = 316;
	v->arr[13][sym__special_character] = 318;
	init_parse_table95(v);
}

// file funcs18.c
