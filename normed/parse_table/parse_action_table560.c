/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs560.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table2800(t_parse_table *v)
{
	v->arr[464][anon_sym_DQUOTE] = 1231;
	v->arr[464][sym_raw_string] = 1227;
	v->arr[464][sym_ansi_c_string] = 1227;
	v->arr[464][aux_sym_number_token1] = 1227;
	v->arr[464][aux_sym_number_token2] = 1227;
	v->arr[464][anon_sym_POUND] = 1229;
	v->arr[464][anon_sym_DOLLAR_LBRACE] = 1227;
	v->arr[464][anon_sym_DOLLAR_LPAREN] = 1227;
	v->arr[464][anon_sym_BQUOTE] = 1227;
	v->arr[464][anon_sym_DOLLAR_BQUOTE] = 1227;
	v->arr[464][anon_sym_LT_LPAREN] = 1227;
	v->arr[464][anon_sym_GT_LPAREN] = 1227;
	v->arr[464][sym_comment] = 3;
	v->arr[464][aux_sym__simple_variable_name_token1] = 1233;
	v->arr[464][aux_sym__multiline_variable_name_token1] = 1233;
	init_parse_table2801(v);
}

void	init_parse_table2801(t_parse_table *v)
{
	v->arr[464][anon_sym_AT2] = 1229;
	v->arr[464][anon_sym_0] = 1229;
	v->arr[464][anon_sym__] = 1229;
	v->arr[464][sym_file_descriptor] = 1235;
	v->arr[464][sym_variable_name] = 1237;
	v->arr[464][sym_test_operator] = 1235;
	v->arr[464][sym__bare_dollar] = 1235;
	v->arr[464][sym__brace_start] = 1235;
	v->arr[465][sym_string] = 489;
	v->arr[465][sym_word] = 1239;
	v->arr[465][anon_sym_LPAREN_LPAREN] = 1239;
	v->arr[465][anon_sym_SEMI] = 1239;
	v->arr[465][anon_sym_EQ] = 1239;
	v->arr[465][anon_sym_PLUS_PLUS] = 1239;
	v->arr[465][anon_sym_DASH_DASH] = 1239;
	init_parse_table2802(v);
}

void	init_parse_table2802(t_parse_table *v)
{
	v->arr[465][anon_sym_PLUS_EQ] = 1239;
	v->arr[465][anon_sym_DASH_EQ] = 1239;
	v->arr[465][anon_sym_STAR_EQ] = 1239;
	v->arr[465][anon_sym_SLASH_EQ] = 1239;
	v->arr[465][anon_sym_PERCENT_EQ] = 1239;
	v->arr[465][anon_sym_STAR_STAR_EQ] = 1239;
	v->arr[465][anon_sym_LT_LT_EQ] = 1239;
	v->arr[465][anon_sym_GT_GT_EQ] = 1239;
	v->arr[465][anon_sym_AMP_EQ] = 1239;
	v->arr[465][anon_sym_CARET_EQ] = 1239;
	v->arr[465][anon_sym_PIPE_EQ] = 1239;
	v->arr[465][anon_sym_PIPE_PIPE] = 1239;
	v->arr[465][anon_sym_AMP_AMP] = 1239;
	v->arr[465][anon_sym_PIPE] = 1239;
	v->arr[465][anon_sym_CARET] = 1239;
	init_parse_table2803(v);
}

void	init_parse_table2803(t_parse_table *v)
{
	v->arr[465][anon_sym_AMP] = 1239;
	v->arr[465][anon_sym_EQ_EQ] = 1239;
	v->arr[465][anon_sym_BANG_EQ] = 1239;
	v->arr[465][anon_sym_LT] = 1239;
	v->arr[465][anon_sym_GT] = 1239;
	v->arr[465][anon_sym_LT_EQ] = 1239;
	v->arr[465][anon_sym_GT_EQ] = 1239;
	v->arr[465][anon_sym_LT_LT] = 1239;
	v->arr[465][anon_sym_GT_GT] = 1239;
	v->arr[465][anon_sym_PLUS] = 1239;
	v->arr[465][anon_sym_DASH] = 1229;
	v->arr[465][anon_sym_STAR] = 1229;
	v->arr[465][anon_sym_SLASH] = 1239;
	v->arr[465][anon_sym_PERCENT] = 1239;
	v->arr[465][anon_sym_STAR_STAR] = 1239;
	init_parse_table2804(v);
}

void	init_parse_table2804(t_parse_table *v)
{
	v->arr[465][anon_sym_LPAREN] = 1239;
	v->arr[465][anon_sym_RPAREN] = 1239;
	v->arr[465][anon_sym_SEMI_SEMI] = 1239;
	v->arr[465][anon_sym_PIPE_AMP] = 1239;
	v->arr[465][anon_sym_BANG] = 1229;
	v->arr[465][anon_sym_EQ_TILDE] = 1239;
	v->arr[465][anon_sym_AMP_GT] = 1239;
	v->arr[465][anon_sym_AMP_GT_GT] = 1239;
	v->arr[465][anon_sym_LT_AMP] = 1239;
	v->arr[465][anon_sym_GT_AMP] = 1239;
	v->arr[465][anon_sym_GT_PIPE] = 1239;
	v->arr[465][anon_sym_LT_AMP_DASH] = 1239;
	v->arr[465][anon_sym_GT_AMP_DASH] = 1239;
	v->arr[465][anon_sym_LT_LT_DASH] = 1239;
	v->arr[465][aux_sym_heredoc_redirect_token1] = 1239;
	init_parse_table2805(v);
}

// file funcs560.c
