/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs16.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table80(t_parse_table *v)
{
	v->arr[11][anon_sym_if] = 159;
	v->arr[11][anon_sym_case] = 161;
	v->arr[11][anon_sym_function] = 163;
	v->arr[11][anon_sym_LBRACE] = 165;
	v->arr[11][anon_sym_BANG] = 167;
	v->arr[11][anon_sym_LBRACK] = 169;
	v->arr[11][anon_sym_RBRACK] = 235;
	v->arr[11][anon_sym_LBRACK_LBRACK] = 173;
	v->arr[11][anon_sym_declare] = 175;
	v->arr[11][anon_sym_typeset] = 175;
	v->arr[11][anon_sym_export] = 175;
	v->arr[11][anon_sym_readonly] = 175;
	v->arr[11][anon_sym_local] = 175;
	v->arr[11][anon_sym_unset] = 177;
	v->arr[11][anon_sym_unsetenv] = 177;
	init_parse_table81(v);
}

void	init_parse_table81(t_parse_table *v)
{
	v->arr[11][anon_sym_AMP_GT] = 151;
	v->arr[11][anon_sym_AMP_GT_GT] = 153;
	v->arr[11][anon_sym_LT_AMP] = 151;
	v->arr[11][anon_sym_GT_AMP] = 151;
	v->arr[11][anon_sym_GT_PIPE] = 153;
	v->arr[11][anon_sym_LT_AMP_DASH] = 179;
	v->arr[11][anon_sym_GT_AMP_DASH] = 179;
	v->arr[11][anon_sym_LT_LT_LT] = 181;
	v->arr[11][anon_sym_PLUS_PLUS2] = 183;
	v->arr[11][anon_sym_DASH_DASH2] = 183;
	v->arr[11][anon_sym_DASH2] = 185;
	v->arr[11][anon_sym_PLUS2] = 185;
	v->arr[11][anon_sym_TILDE] = 187;
	v->arr[11][anon_sym_DOLLAR_LPAREN_LPAREN] = 189;
	v->arr[11][anon_sym_DOLLAR_LBRACK] = 191;
	init_parse_table82(v);
}

void	init_parse_table82(t_parse_table *v)
{
	v->arr[11][anon_sym_DOLLAR] = 193;
	v->arr[11][sym__special_character] = 195;
	v->arr[11][anon_sym_DQUOTE] = 197;
	v->arr[11][sym_raw_string] = 199;
	v->arr[11][sym_ansi_c_string] = 199;
	v->arr[11][aux_sym_number_token1] = 201;
	v->arr[11][aux_sym_number_token2] = 203;
	v->arr[11][anon_sym_DOLLAR_LBRACE] = 205;
	v->arr[11][anon_sym_DOLLAR_LPAREN] = 207;
	v->arr[11][anon_sym_BQUOTE] = 209;
	v->arr[11][anon_sym_DOLLAR_BQUOTE] = 211;
	v->arr[11][anon_sym_LT_LPAREN] = 213;
	v->arr[11][anon_sym_GT_LPAREN] = 213;
	v->arr[11][sym_comment] = 71;
	v->arr[11][sym_file_descriptor] = 215;
	init_parse_table83(v);
}

void	init_parse_table83(t_parse_table *v)
{
	v->arr[11][sym_variable_name] = 217;
	v->arr[11][sym_test_operator] = 219;
	v->arr[11][sym__brace_start] = 221;
	v->arr[12][sym__expression] = 3098;
	v->arr[12][sym_binary_expression] = 3053;
	v->arr[12][sym_ternary_expression] = 3053;
	v->arr[12][sym_unary_expression] = 3053;
	v->arr[12][sym_postfix_expression] = 3053;
	v->arr[12][sym_parenthesized_expression] = 3053;
	v->arr[12][sym_arithmetic_expansion] = 2500;
	v->arr[12][sym_brace_expression] = 2500;
	v->arr[12][sym_concatenation] = 3053;
	v->arr[12][sym_string] = 2500;
	v->arr[12][sym_translated_string] = 2500;
	v->arr[12][sym_number] = 2500;
	init_parse_table84(v);
}

void	init_parse_table84(t_parse_table *v)
{
	v->arr[12][sym_simple_expansion] = 2500;
	v->arr[12][sym_expansion] = 2500;
	v->arr[12][sym_command_substitution] = 2500;
	v->arr[12][sym_process_substitution] = 2500;
	v->arr[12][aux_sym__literal_repeat1] = 2690;
	v->arr[12][aux_sym_concatenation_repeat1] = 470;
	v->arr[12][sym_word] = 237;
	v->arr[12][anon_sym_LPAREN_LPAREN] = 239;
	v->arr[12][anon_sym_SEMI] = 241;
	v->arr[12][anon_sym_EQ] = 243;
	v->arr[12][anon_sym_PLUS_PLUS] = 243;
	v->arr[12][anon_sym_DASH_DASH] = 243;
	v->arr[12][anon_sym_PLUS_EQ] = 243;
	v->arr[12][anon_sym_DASH_EQ] = 243;
	v->arr[12][anon_sym_STAR_EQ] = 243;
	init_parse_table85(v);
}

// file funcs16.c
