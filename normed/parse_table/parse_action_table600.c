/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs600.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table3000(t_parse_table *v)
{
	v->arr[505][anon_sym_AMP] = 1328;
	v->arr[505][anon_sym_EQ_EQ] = 1328;
	v->arr[505][anon_sym_BANG_EQ] = 1328;
	v->arr[505][anon_sym_LT] = 1328;
	v->arr[505][anon_sym_GT] = 1328;
	v->arr[505][anon_sym_LT_EQ] = 1330;
	v->arr[505][anon_sym_GT_EQ] = 1330;
	v->arr[505][anon_sym_LT_LT] = 1328;
	v->arr[505][anon_sym_GT_GT] = 1328;
	v->arr[505][anon_sym_PLUS] = 1328;
	v->arr[505][anon_sym_DASH] = 1328;
	v->arr[505][anon_sym_STAR] = 1328;
	v->arr[505][anon_sym_SLASH] = 1328;
	v->arr[505][anon_sym_PERCENT] = 1328;
	v->arr[505][anon_sym_STAR_STAR] = 1328;
	init_parse_table3001(v);
}

void	init_parse_table3001(t_parse_table *v)
{
	v->arr[505][anon_sym_LPAREN] = 1328;
	v->arr[505][anon_sym_PIPE_AMP] = 1330;
	v->arr[505][anon_sym_RBRACK] = 1330;
	v->arr[505][anon_sym_EQ_TILDE] = 1328;
	v->arr[505][anon_sym_AMP_GT] = 1328;
	v->arr[505][anon_sym_AMP_GT_GT] = 1330;
	v->arr[505][anon_sym_LT_AMP] = 1328;
	v->arr[505][anon_sym_GT_AMP] = 1328;
	v->arr[505][anon_sym_GT_PIPE] = 1330;
	v->arr[505][anon_sym_LT_AMP_DASH] = 1330;
	v->arr[505][anon_sym_GT_AMP_DASH] = 1330;
	v->arr[505][anon_sym_LT_LT_DASH] = 1330;
	v->arr[505][anon_sym_LT_LT_LT] = 1330;
	v->arr[505][anon_sym_QMARK] = 1328;
	v->arr[505][anon_sym_DOLLAR_LPAREN_LPAREN] = 1330;
	init_parse_table3002(v);
}

void	init_parse_table3002(t_parse_table *v)
{
	v->arr[505][anon_sym_DOLLAR_LBRACK] = 1330;
	v->arr[505][aux_sym_concatenation_token1] = 1330;
	v->arr[505][anon_sym_DOLLAR] = 1328;
	v->arr[505][sym__special_character] = 1328;
	v->arr[505][anon_sym_DQUOTE] = 1330;
	v->arr[505][sym_raw_string] = 1330;
	v->arr[505][sym_ansi_c_string] = 1330;
	v->arr[505][aux_sym_number_token1] = 1328;
	v->arr[505][aux_sym_number_token2] = 1328;
	v->arr[505][anon_sym_DOLLAR_LBRACE] = 1330;
	v->arr[505][anon_sym_DOLLAR_LPAREN] = 1328;
	v->arr[505][anon_sym_BQUOTE] = 1328;
	v->arr[505][anon_sym_DOLLAR_BQUOTE] = 1330;
	v->arr[505][anon_sym_LT_LPAREN] = 1330;
	v->arr[505][anon_sym_GT_LPAREN] = 1330;
	init_parse_table3003(v);
}

void	init_parse_table3003(t_parse_table *v)
{
	v->arr[505][sym_comment] = 71;
	v->arr[505][sym_file_descriptor] = 1330;
	v->arr[505][sym__concat] = 1330;
	v->arr[505][sym_test_operator] = 1330;
	v->arr[505][sym__bare_dollar] = 1330;
	v->arr[505][sym__brace_start] = 1330;
	v->arr[506][sym_word] = 1344;
	v->arr[506][anon_sym_LPAREN_LPAREN] = 1346;
	v->arr[506][anon_sym_EQ] = 1344;
	v->arr[506][anon_sym_PLUS_PLUS] = 1344;
	v->arr[506][anon_sym_DASH_DASH] = 1344;
	v->arr[506][anon_sym_PLUS_EQ] = 1344;
	v->arr[506][anon_sym_DASH_EQ] = 1344;
	v->arr[506][anon_sym_STAR_EQ] = 1344;
	v->arr[506][anon_sym_SLASH_EQ] = 1344;
	init_parse_table3004(v);
}

void	init_parse_table3004(t_parse_table *v)
{
	v->arr[506][anon_sym_PERCENT_EQ] = 1344;
	v->arr[506][anon_sym_STAR_STAR_EQ] = 1344;
	v->arr[506][anon_sym_LT_LT_EQ] = 1346;
	v->arr[506][anon_sym_GT_GT_EQ] = 1346;
	v->arr[506][anon_sym_AMP_EQ] = 1346;
	v->arr[506][anon_sym_CARET_EQ] = 1344;
	v->arr[506][anon_sym_PIPE_EQ] = 1346;
	v->arr[506][anon_sym_PIPE_PIPE] = 1346;
	v->arr[506][anon_sym_AMP_AMP] = 1346;
	v->arr[506][anon_sym_PIPE] = 1344;
	v->arr[506][anon_sym_CARET] = 1344;
	v->arr[506][anon_sym_AMP] = 1344;
	v->arr[506][anon_sym_EQ_EQ] = 1344;
	v->arr[506][anon_sym_BANG_EQ] = 1344;
	v->arr[506][anon_sym_LT] = 1344;
	init_parse_table3005(v);
}

// file funcs600.c
