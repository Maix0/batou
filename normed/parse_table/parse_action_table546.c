/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs546.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2730(t_parse_table *v)
{
	v->arr[452][sym_unary_expression] = 2863;
	v->arr[452][sym_postfix_expression] = 2863;
	v->arr[452][sym_parenthesized_expression] = 2863;
	v->arr[452][sym_arithmetic_expansion] = 2451;
	v->arr[452][sym_brace_expression] = 2451;
	v->arr[452][sym_concatenation] = 2863;
	v->arr[452][sym_string] = 2451;
	v->arr[452][sym_translated_string] = 2451;
	v->arr[452][sym_number] = 2451;
	v->arr[452][sym_simple_expansion] = 2451;
	v->arr[452][sym_expansion] = 2451;
	v->arr[452][sym_command_substitution] = 2451;
	v->arr[452][sym_process_substitution] = 2451;
	v->arr[452][aux_sym__literal_repeat1] = 2472;
	v->arr[452][aux_sym_concatenation_repeat1] = 2540;
	init_parse_table2731(v);
}

void	init_parse_table2731(t_parse_table *v)
{
	v->arr[452][sym_word] = 1091;
	v->arr[452][anon_sym_LPAREN_LPAREN] = 352;
	v->arr[452][anon_sym_EQ] = 243;
	v->arr[452][anon_sym_PLUS_PLUS] = 243;
	v->arr[452][anon_sym_DASH_DASH] = 243;
	v->arr[452][anon_sym_PLUS_EQ] = 243;
	v->arr[452][anon_sym_DASH_EQ] = 243;
	v->arr[452][anon_sym_STAR_EQ] = 243;
	v->arr[452][anon_sym_SLASH_EQ] = 243;
	v->arr[452][anon_sym_PERCENT_EQ] = 243;
	v->arr[452][anon_sym_STAR_STAR_EQ] = 243;
	v->arr[452][anon_sym_LT_LT_EQ] = 354;
	v->arr[452][anon_sym_GT_GT_EQ] = 354;
	v->arr[452][anon_sym_AMP_EQ] = 354;
	v->arr[452][anon_sym_CARET_EQ] = 243;
	init_parse_table2732(v);
}

void	init_parse_table2732(t_parse_table *v)
{
	v->arr[452][anon_sym_PIPE_EQ] = 354;
	v->arr[452][anon_sym_PIPE_PIPE] = 354;
	v->arr[452][anon_sym_AMP_AMP] = 354;
	v->arr[452][anon_sym_PIPE] = 243;
	v->arr[452][anon_sym_CARET] = 243;
	v->arr[452][anon_sym_AMP] = 243;
	v->arr[452][anon_sym_EQ_EQ] = 243;
	v->arr[452][anon_sym_BANG_EQ] = 243;
	v->arr[452][anon_sym_LT] = 243;
	v->arr[452][anon_sym_GT] = 243;
	v->arr[452][anon_sym_LT_EQ] = 354;
	v->arr[452][anon_sym_GT_EQ] = 354;
	v->arr[452][anon_sym_LT_LT] = 243;
	v->arr[452][anon_sym_GT_GT] = 243;
	v->arr[452][anon_sym_PLUS] = 243;
	init_parse_table2733(v);
}

void	init_parse_table2733(t_parse_table *v)
{
	v->arr[452][anon_sym_DASH] = 243;
	v->arr[452][anon_sym_STAR] = 243;
	v->arr[452][anon_sym_SLASH] = 243;
	v->arr[452][anon_sym_PERCENT] = 243;
	v->arr[452][anon_sym_STAR_STAR] = 243;
	v->arr[452][anon_sym_LPAREN] = 1093;
	v->arr[452][anon_sym_BANG] = 1095;
	v->arr[452][anon_sym_RBRACK] = 1097;
	v->arr[452][anon_sym_EQ_TILDE] = 243;
	v->arr[452][anon_sym_QMARK] = 243;
	v->arr[452][anon_sym_PLUS_PLUS2] = 1099;
	v->arr[452][anon_sym_DASH_DASH2] = 1099;
	v->arr[452][anon_sym_DASH2] = 1101;
	v->arr[452][anon_sym_PLUS2] = 1101;
	v->arr[452][anon_sym_TILDE] = 1103;
	init_parse_table2734(v);
}

void	init_parse_table2734(t_parse_table *v)
{
	v->arr[452][anon_sym_DOLLAR_LPAREN_LPAREN] = 352;
	v->arr[452][anon_sym_DOLLAR_LBRACK] = 363;
	v->arr[452][aux_sym_concatenation_token1] = 1105;
	v->arr[452][anon_sym_DOLLAR] = 367;
	v->arr[452][sym__special_character] = 1107;
	v->arr[452][anon_sym_DQUOTE] = 371;
	v->arr[452][sym_raw_string] = 1109;
	v->arr[452][sym_ansi_c_string] = 1109;
	v->arr[452][aux_sym_number_token1] = 375;
	v->arr[452][aux_sym_number_token2] = 377;
	v->arr[452][anon_sym_DOLLAR_LBRACE] = 379;
	v->arr[452][anon_sym_DOLLAR_LPAREN] = 381;
	v->arr[452][anon_sym_BQUOTE] = 383;
	v->arr[452][anon_sym_DOLLAR_BQUOTE] = 385;
	v->arr[452][anon_sym_LT_LPAREN] = 387;
	init_parse_table2735(v);
}

// file funcs546.c
