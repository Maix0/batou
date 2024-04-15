/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs601.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table3005(t_parse_table *v)
{
	v->arr[506][anon_sym_GT] = 1344;
	v->arr[506][anon_sym_LT_EQ] = 1346;
	v->arr[506][anon_sym_GT_EQ] = 1346;
	v->arr[506][anon_sym_LT_LT] = 1344;
	v->arr[506][anon_sym_GT_GT] = 1344;
	v->arr[506][anon_sym_PLUS] = 1344;
	v->arr[506][anon_sym_DASH] = 1344;
	v->arr[506][anon_sym_STAR] = 1344;
	v->arr[506][anon_sym_SLASH] = 1344;
	v->arr[506][anon_sym_PERCENT] = 1344;
	v->arr[506][anon_sym_STAR_STAR] = 1344;
	v->arr[506][anon_sym_LPAREN] = 1344;
	v->arr[506][anon_sym_PIPE_AMP] = 1346;
	v->arr[506][anon_sym_RBRACK] = 1346;
	v->arr[506][anon_sym_EQ_TILDE] = 1344;
	init_parse_table3006(v);
}

void	init_parse_table3006(t_parse_table *v)
{
	v->arr[506][anon_sym_AMP_GT] = 1344;
	v->arr[506][anon_sym_AMP_GT_GT] = 1346;
	v->arr[506][anon_sym_LT_AMP] = 1344;
	v->arr[506][anon_sym_GT_AMP] = 1344;
	v->arr[506][anon_sym_GT_PIPE] = 1346;
	v->arr[506][anon_sym_LT_AMP_DASH] = 1346;
	v->arr[506][anon_sym_GT_AMP_DASH] = 1346;
	v->arr[506][anon_sym_LT_LT_DASH] = 1346;
	v->arr[506][anon_sym_LT_LT_LT] = 1346;
	v->arr[506][anon_sym_QMARK] = 1344;
	v->arr[506][anon_sym_DOLLAR_LPAREN_LPAREN] = 1346;
	v->arr[506][anon_sym_DOLLAR_LBRACK] = 1346;
	v->arr[506][aux_sym_concatenation_token1] = 1346;
	v->arr[506][anon_sym_DOLLAR] = 1344;
	v->arr[506][sym__special_character] = 1344;
	init_parse_table3007(v);
}

void	init_parse_table3007(t_parse_table *v)
{
	v->arr[506][anon_sym_DQUOTE] = 1346;
	v->arr[506][sym_raw_string] = 1346;
	v->arr[506][sym_ansi_c_string] = 1346;
	v->arr[506][aux_sym_number_token1] = 1344;
	v->arr[506][aux_sym_number_token2] = 1344;
	v->arr[506][anon_sym_DOLLAR_LBRACE] = 1346;
	v->arr[506][anon_sym_DOLLAR_LPAREN] = 1344;
	v->arr[506][anon_sym_BQUOTE] = 1344;
	v->arr[506][anon_sym_DOLLAR_BQUOTE] = 1346;
	v->arr[506][anon_sym_LT_LPAREN] = 1346;
	v->arr[506][anon_sym_GT_LPAREN] = 1346;
	v->arr[506][sym_comment] = 71;
	v->arr[506][sym_file_descriptor] = 1346;
	v->arr[506][sym__concat] = 1346;
	v->arr[506][sym_test_operator] = 1346;
	init_parse_table3008(v);
}

void	init_parse_table3008(t_parse_table *v)
{
	v->arr[506][sym__bare_dollar] = 1346;
	v->arr[506][sym__brace_start] = 1346;
	v->arr[507][sym_word] = 1356;
	v->arr[507][anon_sym_LPAREN_LPAREN] = 1358;
	v->arr[507][anon_sym_EQ] = 1356;
	v->arr[507][anon_sym_PLUS_PLUS] = 1356;
	v->arr[507][anon_sym_DASH_DASH] = 1356;
	v->arr[507][anon_sym_PLUS_EQ] = 1356;
	v->arr[507][anon_sym_DASH_EQ] = 1356;
	v->arr[507][anon_sym_STAR_EQ] = 1356;
	v->arr[507][anon_sym_SLASH_EQ] = 1356;
	v->arr[507][anon_sym_PERCENT_EQ] = 1356;
	v->arr[507][anon_sym_STAR_STAR_EQ] = 1356;
	v->arr[507][anon_sym_LT_LT_EQ] = 1358;
	v->arr[507][anon_sym_GT_GT_EQ] = 1358;
	init_parse_table3009(v);
}

void	init_parse_table3009(t_parse_table *v)
{
	v->arr[507][anon_sym_AMP_EQ] = 1358;
	v->arr[507][anon_sym_CARET_EQ] = 1356;
	v->arr[507][anon_sym_PIPE_EQ] = 1358;
	v->arr[507][anon_sym_PIPE_PIPE] = 1358;
	v->arr[507][anon_sym_AMP_AMP] = 1358;
	v->arr[507][anon_sym_PIPE] = 1356;
	v->arr[507][anon_sym_CARET] = 1356;
	v->arr[507][anon_sym_AMP] = 1356;
	v->arr[507][anon_sym_EQ_EQ] = 1356;
	v->arr[507][anon_sym_BANG_EQ] = 1356;
	v->arr[507][anon_sym_LT] = 1356;
	v->arr[507][anon_sym_GT] = 1356;
	v->arr[507][anon_sym_LT_EQ] = 1358;
	v->arr[507][anon_sym_GT_EQ] = 1358;
	v->arr[507][anon_sym_LT_LT] = 1356;
	init_parse_table3010(v);
}

// file funcs601.c
