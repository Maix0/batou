/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table25(t_parse_table *v)
{
	v->arr[3][sym_postfix_expression] = 3053;
	v->arr[3][sym_parenthesized_expression] = 3053;
	v->arr[3][sym_arithmetic_expansion] = 472;
	v->arr[3][sym_brace_expression] = 472;
	v->arr[3][sym_concatenation] = 502;
	v->arr[3][sym_string] = 472;
	v->arr[3][sym_translated_string] = 472;
	v->arr[3][sym_number] = 472;
	v->arr[3][sym_simple_expansion] = 472;
	v->arr[3][sym_expansion] = 472;
	v->arr[3][sym_command_substitution] = 472;
	v->arr[3][sym_process_substitution] = 472;
	v->arr[3][aux_sym__statements_repeat1] = 423;
	v->arr[3][aux_sym_redirected_statement_repeat2] = 4480;
	v->arr[3][aux_sym_command_repeat1] = 951;
	init_parse_table26(v);
}

void	init_parse_table26(t_parse_table *v)
{
	v->arr[3][aux_sym__literal_repeat1] = 493;
	v->arr[3][sym_word] = 81;
	v->arr[3][anon_sym_for] = 9;
	v->arr[3][anon_sym_select] = 11;
	v->arr[3][anon_sym_LPAREN_LPAREN] = 83;
	v->arr[3][anon_sym_LT] = 85;
	v->arr[3][anon_sym_GT] = 85;
	v->arr[3][anon_sym_GT_GT] = 87;
	v->arr[3][anon_sym_LPAREN] = 89;
	v->arr[3][anon_sym_while] = 21;
	v->arr[3][anon_sym_until] = 21;
	v->arr[3][anon_sym_if] = 23;
	v->arr[3][anon_sym_case] = 25;
	v->arr[3][anon_sym_function] = 91;
	v->arr[3][anon_sym_LBRACE] = 29;
	init_parse_table27(v);
}

void	init_parse_table27(t_parse_table *v)
{
	v->arr[3][anon_sym_BANG] = 93;
	v->arr[3][anon_sym_LBRACK] = 33;
	v->arr[3][anon_sym_LBRACK_LBRACK] = 35;
	v->arr[3][anon_sym_declare] = 95;
	v->arr[3][anon_sym_typeset] = 95;
	v->arr[3][anon_sym_export] = 95;
	v->arr[3][anon_sym_readonly] = 95;
	v->arr[3][anon_sym_local] = 95;
	v->arr[3][anon_sym_unset] = 97;
	v->arr[3][anon_sym_unsetenv] = 97;
	v->arr[3][anon_sym_AMP_GT] = 85;
	v->arr[3][anon_sym_AMP_GT_GT] = 87;
	v->arr[3][anon_sym_LT_AMP] = 85;
	v->arr[3][anon_sym_GT_AMP] = 85;
	v->arr[3][anon_sym_GT_PIPE] = 87;
	init_parse_table28(v);
}

void	init_parse_table28(t_parse_table *v)
{
	v->arr[3][anon_sym_LT_AMP_DASH] = 99;
	v->arr[3][anon_sym_GT_AMP_DASH] = 99;
	v->arr[3][anon_sym_LT_LT_LT] = 101;
	v->arr[3][anon_sym_PLUS_PLUS2] = 103;
	v->arr[3][anon_sym_DASH_DASH2] = 103;
	v->arr[3][anon_sym_DASH2] = 105;
	v->arr[3][anon_sym_PLUS2] = 105;
	v->arr[3][anon_sym_TILDE] = 107;
	v->arr[3][anon_sym_DOLLAR_LPAREN_LPAREN] = 109;
	v->arr[3][anon_sym_DOLLAR_LBRACK] = 111;
	v->arr[3][anon_sym_DOLLAR] = 113;
	v->arr[3][sym__special_character] = 115;
	v->arr[3][anon_sym_DQUOTE] = 117;
	v->arr[3][sym_raw_string] = 119;
	v->arr[3][sym_ansi_c_string] = 119;
	init_parse_table29(v);
}

void	init_parse_table29(t_parse_table *v)
{
	v->arr[3][aux_sym_number_token1] = 121;
	v->arr[3][aux_sym_number_token2] = 123;
	v->arr[3][anon_sym_DOLLAR_LBRACE] = 125;
	v->arr[3][anon_sym_DOLLAR_LPAREN] = 127;
	v->arr[3][anon_sym_BQUOTE] = 129;
	v->arr[3][anon_sym_DOLLAR_BQUOTE] = 131;
	v->arr[3][anon_sym_LT_LPAREN] = 133;
	v->arr[3][anon_sym_GT_LPAREN] = 133;
	v->arr[3][sym_comment] = 71;
	v->arr[3][sym_file_descriptor] = 135;
	v->arr[3][sym_variable_name] = 137;
	v->arr[3][sym_test_operator] = 139;
	v->arr[3][sym__brace_start] = 141;
	v->arr[4][sym__statement_not_pipeline] = 6568;
	v->arr[4][sym_redirected_statement] = 5394;
	init_parse_table30(v);
}

// file funcs5.c
