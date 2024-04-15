/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs73.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table365(t_parse_table *v)
{
	v->arr[57][sym_arithmetic_expansion] = 938;
	v->arr[57][sym_brace_expression] = 938;
	v->arr[57][sym_concatenation] = 1376;
	v->arr[57][sym_string] = 938;
	v->arr[57][sym_translated_string] = 938;
	v->arr[57][sym_number] = 938;
	v->arr[57][sym_simple_expansion] = 938;
	v->arr[57][sym_expansion] = 938;
	v->arr[57][sym_command_substitution] = 938;
	v->arr[57][sym_process_substitution] = 938;
	v->arr[57][aux_sym__statements_repeat1] = 423;
	v->arr[57][aux_sym_redirected_statement_repeat2] = 4480;
	v->arr[57][aux_sym_command_repeat1] = 951;
	v->arr[57][aux_sym__literal_repeat1] = 1267;
	v->arr[57][sym_word] = 765;
	init_parse_table366(v);
}

void	init_parse_table366(t_parse_table *v)
{
	v->arr[57][anon_sym_for] = 9;
	v->arr[57][anon_sym_select] = 11;
	v->arr[57][anon_sym_LPAREN_LPAREN] = 288;
	v->arr[57][anon_sym_LT] = 85;
	v->arr[57][anon_sym_GT] = 85;
	v->arr[57][anon_sym_GT_GT] = 87;
	v->arr[57][anon_sym_LPAREN] = 19;
	v->arr[57][anon_sym_RPAREN] = 791;
	v->arr[57][anon_sym_while] = 21;
	v->arr[57][anon_sym_until] = 21;
	v->arr[57][anon_sym_if] = 23;
	v->arr[57][anon_sym_case] = 25;
	v->arr[57][anon_sym_function] = 91;
	v->arr[57][anon_sym_LBRACE] = 29;
	v->arr[57][anon_sym_BANG] = 769;
	init_parse_table367(v);
}

void	init_parse_table367(t_parse_table *v)
{
	v->arr[57][anon_sym_LBRACK] = 33;
	v->arr[57][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[57][anon_sym_declare] = 95;
	v->arr[57][anon_sym_typeset] = 95;
	v->arr[57][anon_sym_export] = 95;
	v->arr[57][anon_sym_readonly] = 95;
	v->arr[57][anon_sym_local] = 95;
	v->arr[57][anon_sym_unset] = 97;
	v->arr[57][anon_sym_unsetenv] = 97;
	v->arr[57][anon_sym_AMP_GT] = 85;
	v->arr[57][anon_sym_AMP_GT_GT] = 87;
	v->arr[57][anon_sym_LT_AMP] = 85;
	v->arr[57][anon_sym_GT_AMP] = 85;
	v->arr[57][anon_sym_GT_PIPE] = 87;
	v->arr[57][anon_sym_LT_AMP_DASH] = 99;
	init_parse_table368(v);
}

void	init_parse_table368(t_parse_table *v)
{
	v->arr[57][anon_sym_GT_AMP_DASH] = 99;
	v->arr[57][anon_sym_LT_LT_LT] = 101;
	v->arr[57][anon_sym_DOLLAR_LPAREN_LPAREN] = 312;
	v->arr[57][anon_sym_DOLLAR_LBRACK] = 314;
	v->arr[57][anon_sym_DOLLAR] = 316;
	v->arr[57][sym__special_character] = 771;
	v->arr[57][anon_sym_DQUOTE] = 320;
	v->arr[57][sym_raw_string] = 773;
	v->arr[57][sym_ansi_c_string] = 773;
	v->arr[57][aux_sym_number_token1] = 324;
	v->arr[57][aux_sym_number_token2] = 326;
	v->arr[57][anon_sym_DOLLAR_LBRACE] = 328;
	v->arr[57][anon_sym_DOLLAR_LPAREN] = 330;
	v->arr[57][anon_sym_BQUOTE] = 332;
	v->arr[57][anon_sym_DOLLAR_BQUOTE] = 334;
	init_parse_table369(v);
}

void	init_parse_table369(t_parse_table *v)
{
	v->arr[57][anon_sym_LT_LPAREN] = 336;
	v->arr[57][anon_sym_GT_LPAREN] = 336;
	v->arr[57][sym_comment] = 71;
	v->arr[57][sym_file_descriptor] = 135;
	v->arr[57][sym_variable_name] = 137;
	v->arr[57][sym_test_operator] = 775;
	v->arr[57][sym__brace_start] = 344;
	v->arr[58][sym__statements] = 7350;
	v->arr[58][sym__statement_not_pipeline] = 6614;
	v->arr[58][sym_redirected_statement] = 4797;
	v->arr[58][sym_for_statement] = 4797;
	v->arr[58][sym_c_style_for_statement] = 4797;
	v->arr[58][sym_while_statement] = 4400;
	v->arr[58][sym_if_statement] = 4400;
	v->arr[58][sym_case_statement] = 4797;
	init_parse_table370(v);
}

// file funcs73.c
