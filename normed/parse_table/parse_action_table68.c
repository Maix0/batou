/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs68.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table340(t_parse_table *v)
{
	v->arr[53][sym_negated_command] = 4797;
	v->arr[53][sym_test_command] = 4797;
	v->arr[53][sym_declaration_command] = 4797;
	v->arr[53][sym_unset_command] = 4797;
	v->arr[53][sym_command] = 4797;
	v->arr[53][sym_command_name] = 533;
	v->arr[53][sym_variable_assignment] = 945;
	v->arr[53][sym_variable_assignments] = 4797;
	v->arr[53][sym_subscript] = 6754;
	v->arr[53][sym_file_redirect] = 2019;
	v->arr[53][sym_herestring_redirect] = 2017;
	v->arr[53][sym_arithmetic_expansion] = 938;
	v->arr[53][sym_brace_expression] = 938;
	v->arr[53][sym_concatenation] = 1376;
	v->arr[53][sym_string] = 938;
	init_parse_table341(v);
}

void	init_parse_table341(t_parse_table *v)
{
	v->arr[53][sym_translated_string] = 938;
	v->arr[53][sym_number] = 938;
	v->arr[53][sym_simple_expansion] = 938;
	v->arr[53][sym_expansion] = 938;
	v->arr[53][sym_command_substitution] = 938;
	v->arr[53][sym_process_substitution] = 938;
	v->arr[53][aux_sym__statements_repeat1] = 423;
	v->arr[53][aux_sym_redirected_statement_repeat2] = 4480;
	v->arr[53][aux_sym_command_repeat1] = 951;
	v->arr[53][aux_sym__literal_repeat1] = 1267;
	v->arr[53][sym_word] = 765;
	v->arr[53][anon_sym_for] = 9;
	v->arr[53][anon_sym_select] = 11;
	v->arr[53][anon_sym_LPAREN_LPAREN] = 288;
	v->arr[53][anon_sym_LT] = 85;
	init_parse_table342(v);
}

void	init_parse_table342(t_parse_table *v)
{
	v->arr[53][anon_sym_GT] = 85;
	v->arr[53][anon_sym_GT_GT] = 87;
	v->arr[53][anon_sym_LPAREN] = 19;
	v->arr[53][anon_sym_RPAREN] = 783;
	v->arr[53][anon_sym_while] = 21;
	v->arr[53][anon_sym_until] = 21;
	v->arr[53][anon_sym_if] = 23;
	v->arr[53][anon_sym_case] = 25;
	v->arr[53][anon_sym_function] = 91;
	v->arr[53][anon_sym_LBRACE] = 29;
	v->arr[53][anon_sym_BANG] = 769;
	v->arr[53][anon_sym_LBRACK] = 33;
	v->arr[53][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[53][anon_sym_declare] = 95;
	v->arr[53][anon_sym_typeset] = 95;
	init_parse_table343(v);
}

void	init_parse_table343(t_parse_table *v)
{
	v->arr[53][anon_sym_export] = 95;
	v->arr[53][anon_sym_readonly] = 95;
	v->arr[53][anon_sym_local] = 95;
	v->arr[53][anon_sym_unset] = 97;
	v->arr[53][anon_sym_unsetenv] = 97;
	v->arr[53][anon_sym_AMP_GT] = 85;
	v->arr[53][anon_sym_AMP_GT_GT] = 87;
	v->arr[53][anon_sym_LT_AMP] = 85;
	v->arr[53][anon_sym_GT_AMP] = 85;
	v->arr[53][anon_sym_GT_PIPE] = 87;
	v->arr[53][anon_sym_LT_AMP_DASH] = 99;
	v->arr[53][anon_sym_GT_AMP_DASH] = 99;
	v->arr[53][anon_sym_LT_LT_LT] = 101;
	v->arr[53][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[53][anon_sym_DOLLAR_LBRACK] = 314;
	init_parse_table344(v);
}

void	init_parse_table344(t_parse_table *v)
{
	v->arr[53][anon_sym_DOLLAR] = 316;
	v->arr[53][sym__special_character] = 771;
	v->arr[53][anon_sym_DQUOTE] = 320;
	v->arr[53][sym_raw_string] = 773;
	v->arr[53][sym_ansi_c_string] = 773;
	v->arr[53][aux_sym_number_token1] = 324;
	v->arr[53][aux_sym_number_token2] = 326;
	v->arr[53][anon_sym_DOLLAR_LBRACE] = 328;
	v->arr[53][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[53][anon_sym_BQUOTE] = 332;
	v->arr[53][anon_sym_DOLLAR_BQUOTE] = 334;
	v->arr[53][anon_sym_LT_LPAREN] = 336;
	v->arr[53][anon_sym_GT_LPAREN] = 336;
	v->arr[53][sym_comment] = 71;
	v->arr[53][sym_file_descriptor] = 135;
	init_parse_table345(v);
}

// file funcs68.c
