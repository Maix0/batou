/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs9.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table45(t_parse_table *v)
{
	v->arr[6][sym_postfix_expression] = 3071;
	v->arr[6][sym_parenthesized_expression] = 3071;
	v->arr[6][sym_arithmetic_expansion] = 496;
	v->arr[6][sym_brace_expression] = 496;
	v->arr[6][sym_concatenation] = 524;
	v->arr[6][sym_string] = 496;
	v->arr[6][sym_translated_string] = 496;
	v->arr[6][sym_number] = 496;
	v->arr[6][sym_simple_expansion] = 496;
	v->arr[6][sym_expansion] = 496;
	v->arr[6][sym_command_substitution] = 496;
	v->arr[6][sym_process_substitution] = 496;
	v->arr[6][aux_sym_redirected_statement_repeat2] = 5167;
	v->arr[6][aux_sym_command_repeat1] = 955;
	v->arr[6][aux_sym__literal_repeat1] = 522;
	init_parse_table46(v);
}

void	init_parse_table46(t_parse_table *v)
{
	v->arr[6][sym_word] = 143;
	v->arr[6][anon_sym_for] = 145;
	v->arr[6][anon_sym_select] = 147;
	v->arr[6][anon_sym_LPAREN_LPAREN] = 149;
	v->arr[6][anon_sym_LT] = 151;
	v->arr[6][anon_sym_GT] = 151;
	v->arr[6][anon_sym_GT_GT] = 153;
	v->arr[6][anon_sym_LPAREN] = 155;
	v->arr[6][anon_sym_while] = 157;
	v->arr[6][anon_sym_until] = 157;
	v->arr[6][anon_sym_if] = 159;
	v->arr[6][anon_sym_case] = 161;
	v->arr[6][anon_sym_function] = 163;
	v->arr[6][anon_sym_LBRACE] = 165;
	v->arr[6][anon_sym_BANG] = 167;
	init_parse_table47(v);
}

void	init_parse_table47(t_parse_table *v)
{
	v->arr[6][anon_sym_LBRACK] = 169;
	v->arr[6][anon_sym_RBRACK] = 225;
	v->arr[6][anon_sym_LBRACK_LBRACK] = 173;
	v->arr[6][anon_sym_declare] = 175;
	v->arr[6][anon_sym_typeset] = 175;
	v->arr[6][anon_sym_export] = 175;
	v->arr[6][anon_sym_readonly] = 175;
	v->arr[6][anon_sym_local] = 175;
	v->arr[6][anon_sym_unset] = 177;
	v->arr[6][anon_sym_unsetenv] = 177;
	v->arr[6][anon_sym_AMP_GT] = 151;
	v->arr[6][anon_sym_AMP_GT_GT] = 153;
	v->arr[6][anon_sym_LT_AMP] = 151;
	v->arr[6][anon_sym_GT_AMP] = 151;
	v->arr[6][anon_sym_GT_PIPE] = 153;
	init_parse_table48(v);
}

void	init_parse_table48(t_parse_table *v)
{
	v->arr[6][anon_sym_LT_AMP_DASH] = 179;
	v->arr[6][anon_sym_GT_AMP_DASH] = 179;
	v->arr[6][anon_sym_LT_LT_LT] = 181;
	v->arr[6][anon_sym_PLUS_PLUS2] = 183;
	v->arr[6][anon_sym_DASH_DASH2] = 183;
	v->arr[6][anon_sym_DASH2] = 185;
	v->arr[6][anon_sym_PLUS2] = 185;
	v->arr[6][anon_sym_TILDE] = 187;
	v->arr[6][anon_sym_DOLLAR_LPAREN_LPAREN] = 189;
	v->arr[6][anon_sym_DOLLAR_LBRACK] = 191;
	v->arr[6][anon_sym_DOLLAR] = 193;
	v->arr[6][sym__special_character] = 195;
	v->arr[6][anon_sym_DQUOTE] = 197;
	v->arr[6][sym_raw_string] = 199;
	v->arr[6][sym_ansi_c_string] = 199;
	init_parse_table49(v);
}

void	init_parse_table49(t_parse_table *v)
{
	v->arr[6][aux_sym_number_token1] = 201;
	v->arr[6][aux_sym_number_token2] = 203;
	v->arr[6][anon_sym_DOLLAR_LBRACE] = 205;
	v->arr[6][anon_sym_DOLLAR_LPAREN] = 207;
	v->arr[6][anon_sym_BQUOTE] = 209;
	v->arr[6][anon_sym_DOLLAR_BQUOTE] = 211;
	v->arr[6][anon_sym_LT_LPAREN] = 213;
	v->arr[6][anon_sym_GT_LPAREN] = 213;
	v->arr[6][sym_comment] = 71;
	v->arr[6][sym_file_descriptor] = 215;
	v->arr[6][sym_variable_name] = 217;
	v->arr[6][sym_test_operator] = 219;
	v->arr[6][sym__brace_start] = 221;
	v->arr[7][sym__statement_not_pipeline] = 6568;
	v->arr[7][sym_redirected_statement] = 5361;
	init_parse_table50(v);
}

// file funcs9.c
