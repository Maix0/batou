/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs612.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table3060(t_parse_table *v)
{
	v->arr[517][sym_test_operator] = 1310;
	v->arr[517][sym__bare_dollar] = 1310;
	v->arr[517][sym__brace_start] = 1310;
	v->arr[518][sym_word] = 1304;
	v->arr[518][anon_sym_LPAREN_LPAREN] = 1306;
	v->arr[518][anon_sym_EQ] = 1304;
	v->arr[518][anon_sym_PLUS_PLUS] = 1304;
	v->arr[518][anon_sym_DASH_DASH] = 1304;
	v->arr[518][anon_sym_PLUS_EQ] = 1304;
	v->arr[518][anon_sym_DASH_EQ] = 1304;
	v->arr[518][anon_sym_STAR_EQ] = 1304;
	v->arr[518][anon_sym_SLASH_EQ] = 1304;
	v->arr[518][anon_sym_PERCENT_EQ] = 1304;
	v->arr[518][anon_sym_STAR_STAR_EQ] = 1304;
	v->arr[518][anon_sym_LT_LT_EQ] = 1306;
	init_parse_table3061(v);
}

void	init_parse_table3061(t_parse_table *v)
{
	v->arr[518][anon_sym_GT_GT_EQ] = 1306;
	v->arr[518][anon_sym_AMP_EQ] = 1306;
	v->arr[518][anon_sym_CARET_EQ] = 1304;
	v->arr[518][anon_sym_PIPE_EQ] = 1306;
	v->arr[518][anon_sym_PIPE_PIPE] = 1306;
	v->arr[518][anon_sym_AMP_AMP] = 1306;
	v->arr[518][anon_sym_PIPE] = 1304;
	v->arr[518][anon_sym_CARET] = 1304;
	v->arr[518][anon_sym_AMP] = 1304;
	v->arr[518][anon_sym_EQ_EQ] = 1304;
	v->arr[518][anon_sym_BANG_EQ] = 1304;
	v->arr[518][anon_sym_LT] = 1304;
	v->arr[518][anon_sym_GT] = 1304;
	v->arr[518][anon_sym_LT_EQ] = 1306;
	v->arr[518][anon_sym_GT_EQ] = 1306;
	init_parse_table3062(v);
}

void	init_parse_table3062(t_parse_table *v)
{
	v->arr[518][anon_sym_LT_LT] = 1304;
	v->arr[518][anon_sym_GT_GT] = 1304;
	v->arr[518][anon_sym_PLUS] = 1304;
	v->arr[518][anon_sym_DASH] = 1304;
	v->arr[518][anon_sym_STAR] = 1304;
	v->arr[518][anon_sym_SLASH] = 1304;
	v->arr[518][anon_sym_PERCENT] = 1304;
	v->arr[518][anon_sym_STAR_STAR] = 1304;
	v->arr[518][anon_sym_LPAREN] = 1304;
	v->arr[518][anon_sym_PIPE_AMP] = 1306;
	v->arr[518][anon_sym_RBRACK] = 1306;
	v->arr[518][anon_sym_EQ_TILDE] = 1304;
	v->arr[518][anon_sym_AMP_GT] = 1304;
	v->arr[518][anon_sym_AMP_GT_GT] = 1306;
	v->arr[518][anon_sym_LT_AMP] = 1304;
	init_parse_table3063(v);
}

void	init_parse_table3063(t_parse_table *v)
{
	v->arr[518][anon_sym_GT_AMP] = 1304;
	v->arr[518][anon_sym_GT_PIPE] = 1306;
	v->arr[518][anon_sym_LT_AMP_DASH] = 1306;
	v->arr[518][anon_sym_GT_AMP_DASH] = 1306;
	v->arr[518][anon_sym_LT_LT_DASH] = 1306;
	v->arr[518][anon_sym_LT_LT_LT] = 1306;
	v->arr[518][anon_sym_QMARK] = 1304;
	v->arr[518][anon_sym_DOLLAR_LPAREN_LPAREN] = 1306;
	v->arr[518][anon_sym_DOLLAR_LBRACK] = 1306;
	v->arr[518][aux_sym_concatenation_token1] = 1306;
	v->arr[518][anon_sym_DOLLAR] = 1304;
	v->arr[518][sym__special_character] = 1304;
	v->arr[518][anon_sym_DQUOTE] = 1306;
	v->arr[518][sym_raw_string] = 1306;
	v->arr[518][sym_ansi_c_string] = 1306;
	init_parse_table3064(v);
}

void	init_parse_table3064(t_parse_table *v)
{
	v->arr[518][aux_sym_number_token1] = 1304;
	v->arr[518][aux_sym_number_token2] = 1304;
	v->arr[518][anon_sym_DOLLAR_LBRACE] = 1306;
	v->arr[518][anon_sym_DOLLAR_LPAREN] = 1304;
	v->arr[518][anon_sym_BQUOTE] = 1304;
	v->arr[518][anon_sym_DOLLAR_BQUOTE] = 1306;
	v->arr[518][anon_sym_LT_LPAREN] = 1306;
	v->arr[518][anon_sym_GT_LPAREN] = 1306;
	v->arr[518][sym_comment] = 71;
	v->arr[518][sym_file_descriptor] = 1306;
	v->arr[518][sym__concat] = 1306;
	v->arr[518][sym_test_operator] = 1306;
	v->arr[518][sym__bare_dollar] = 1306;
	v->arr[518][sym__brace_start] = 1306;
	v->arr[519][sym_word] = 1308;
	init_parse_table3065(v);
}

// file funcs612.c
