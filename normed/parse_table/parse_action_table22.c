/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs22.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table110(t_parse_table *v)
{
	v->arr[16][anon_sym_LPAREN_LPAREN] = 352;
	v->arr[16][anon_sym_EQ] = 243;
	v->arr[16][anon_sym_PLUS_PLUS] = 243;
	v->arr[16][anon_sym_DASH_DASH] = 243;
	v->arr[16][anon_sym_PLUS_EQ] = 243;
	v->arr[16][anon_sym_DASH_EQ] = 243;
	v->arr[16][anon_sym_STAR_EQ] = 243;
	v->arr[16][anon_sym_SLASH_EQ] = 243;
	v->arr[16][anon_sym_PERCENT_EQ] = 243;
	v->arr[16][anon_sym_STAR_STAR_EQ] = 243;
	v->arr[16][anon_sym_LT_LT_EQ] = 354;
	v->arr[16][anon_sym_GT_GT_EQ] = 354;
	v->arr[16][anon_sym_AMP_EQ] = 354;
	v->arr[16][anon_sym_CARET_EQ] = 243;
	v->arr[16][anon_sym_PIPE_EQ] = 354;
	init_parse_table111(v);
}

void	init_parse_table111(t_parse_table *v)
{
	v->arr[16][anon_sym_PIPE_PIPE] = 356;
	v->arr[16][anon_sym_AMP_AMP] = 356;
	v->arr[16][anon_sym_PIPE] = 245;
	v->arr[16][anon_sym_CARET] = 243;
	v->arr[16][anon_sym_AMP] = 243;
	v->arr[16][anon_sym_EQ_EQ] = 245;
	v->arr[16][anon_sym_BANG_EQ] = 243;
	v->arr[16][anon_sym_LT] = 245;
	v->arr[16][anon_sym_GT] = 245;
	v->arr[16][anon_sym_LT_EQ] = 354;
	v->arr[16][anon_sym_GT_EQ] = 354;
	v->arr[16][anon_sym_LT_LT] = 245;
	v->arr[16][anon_sym_GT_GT] = 245;
	v->arr[16][anon_sym_PLUS] = 243;
	v->arr[16][anon_sym_DASH] = 243;
	init_parse_table112(v);
}

void	init_parse_table112(t_parse_table *v)
{
	v->arr[16][anon_sym_STAR] = 243;
	v->arr[16][anon_sym_SLASH] = 243;
	v->arr[16][anon_sym_PERCENT] = 243;
	v->arr[16][anon_sym_STAR_STAR] = 243;
	v->arr[16][anon_sym_LPAREN] = 359;
	v->arr[16][anon_sym_PIPE_AMP] = 278;
	v->arr[16][anon_sym_BANG] = 361;
	v->arr[16][anon_sym_RBRACK] = 354;
	v->arr[16][anon_sym_EQ_TILDE] = 245;
	v->arr[16][anon_sym_AMP_GT] = 241;
	v->arr[16][anon_sym_AMP_GT_GT] = 278;
	v->arr[16][anon_sym_LT_AMP] = 241;
	v->arr[16][anon_sym_GT_AMP] = 241;
	v->arr[16][anon_sym_GT_PIPE] = 278;
	v->arr[16][anon_sym_LT_AMP_DASH] = 278;
	init_parse_table113(v);
}

void	init_parse_table113(t_parse_table *v)
{
	v->arr[16][anon_sym_GT_AMP_DASH] = 278;
	v->arr[16][anon_sym_LT_LT_DASH] = 278;
	v->arr[16][anon_sym_LT_LT_LT] = 278;
	v->arr[16][anon_sym_QMARK] = 243;
	v->arr[16][anon_sym_PLUS_PLUS2] = 183;
	v->arr[16][anon_sym_DASH_DASH2] = 183;
	v->arr[16][anon_sym_DASH2] = 185;
	v->arr[16][anon_sym_PLUS2] = 185;
	v->arr[16][anon_sym_TILDE] = 187;
	v->arr[16][anon_sym_DOLLAR_LPAREN_LPAREN] = 352;
	v->arr[16][anon_sym_DOLLAR_LBRACK] = 363;
	v->arr[16][aux_sym_concatenation_token1] = 365;
	v->arr[16][anon_sym_DOLLAR] = 367;
	v->arr[16][sym__special_character] = 369;
	v->arr[16][anon_sym_DQUOTE] = 371;
	init_parse_table114(v);
}

void	init_parse_table114(t_parse_table *v)
{
	v->arr[16][sym_raw_string] = 373;
	v->arr[16][sym_ansi_c_string] = 373;
	v->arr[16][aux_sym_number_token1] = 375;
	v->arr[16][aux_sym_number_token2] = 377;
	v->arr[16][anon_sym_DOLLAR_LBRACE] = 379;
	v->arr[16][anon_sym_DOLLAR_LPAREN] = 381;
	v->arr[16][anon_sym_BQUOTE] = 383;
	v->arr[16][anon_sym_DOLLAR_BQUOTE] = 385;
	v->arr[16][anon_sym_LT_LPAREN] = 387;
	v->arr[16][anon_sym_GT_LPAREN] = 387;
	v->arr[16][sym_comment] = 71;
	v->arr[16][sym_file_descriptor] = 278;
	v->arr[16][sym__concat] = 365;
	v->arr[16][sym_test_operator] = 389;
	v->arr[16][sym__bare_dollar] = 278;
	init_parse_table115(v);
}

// file funcs22.c
