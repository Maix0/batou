/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs17.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table85(t_parse_table *v)
{
	v->arr[12][anon_sym_SLASH_EQ] = 243;
	v->arr[12][anon_sym_PERCENT_EQ] = 243;
	v->arr[12][anon_sym_STAR_STAR_EQ] = 243;
	v->arr[12][anon_sym_LT_LT_EQ] = 243;
	v->arr[12][anon_sym_GT_GT_EQ] = 243;
	v->arr[12][anon_sym_AMP_EQ] = 243;
	v->arr[12][anon_sym_CARET_EQ] = 243;
	v->arr[12][anon_sym_PIPE_EQ] = 243;
	v->arr[12][anon_sym_PIPE_PIPE] = 245;
	v->arr[12][anon_sym_AMP_AMP] = 245;
	v->arr[12][anon_sym_PIPE] = 245;
	v->arr[12][anon_sym_CARET] = 243;
	v->arr[12][anon_sym_AMP] = 245;
	v->arr[12][anon_sym_EQ_EQ] = 245;
	v->arr[12][anon_sym_BANG_EQ] = 243;
	init_parse_table86(v);
}

void	init_parse_table86(t_parse_table *v)
{
	v->arr[12][anon_sym_LT] = 245;
	v->arr[12][anon_sym_GT] = 245;
	v->arr[12][anon_sym_LT_EQ] = 243;
	v->arr[12][anon_sym_GT_EQ] = 243;
	v->arr[12][anon_sym_LT_LT] = 245;
	v->arr[12][anon_sym_GT_GT] = 245;
	v->arr[12][anon_sym_PLUS] = 243;
	v->arr[12][anon_sym_DASH] = 243;
	v->arr[12][anon_sym_STAR] = 243;
	v->arr[12][anon_sym_SLASH] = 243;
	v->arr[12][anon_sym_PERCENT] = 243;
	v->arr[12][anon_sym_STAR_STAR] = 243;
	v->arr[12][anon_sym_LPAREN] = 248;
	v->arr[12][anon_sym_RPAREN] = 245;
	v->arr[12][anon_sym_SEMI_SEMI] = 241;
	init_parse_table87(v);
}

void	init_parse_table87(t_parse_table *v)
{
	v->arr[12][anon_sym_PIPE_AMP] = 241;
	v->arr[12][anon_sym_BANG] = 250;
	v->arr[12][anon_sym_EQ_TILDE] = 245;
	v->arr[12][anon_sym_AMP_GT] = 241;
	v->arr[12][anon_sym_AMP_GT_GT] = 241;
	v->arr[12][anon_sym_LT_AMP] = 241;
	v->arr[12][anon_sym_GT_AMP] = 241;
	v->arr[12][anon_sym_GT_PIPE] = 241;
	v->arr[12][anon_sym_LT_AMP_DASH] = 241;
	v->arr[12][anon_sym_GT_AMP_DASH] = 241;
	v->arr[12][anon_sym_LT_LT_DASH] = 241;
	v->arr[12][aux_sym_heredoc_redirect_token1] = 241;
	v->arr[12][anon_sym_LT_LT_LT] = 241;
	v->arr[12][anon_sym_QMARK] = 243;
	v->arr[12][anon_sym_PLUS_PLUS2] = 252;
	init_parse_table88(v);
}

void	init_parse_table88(t_parse_table *v)
{
	v->arr[12][anon_sym_DASH_DASH2] = 252;
	v->arr[12][anon_sym_DASH2] = 105;
	v->arr[12][anon_sym_PLUS2] = 105;
	v->arr[12][anon_sym_TILDE] = 105;
	v->arr[12][anon_sym_DOLLAR_LPAREN_LPAREN] = 239;
	v->arr[12][anon_sym_DOLLAR_LBRACK] = 254;
	v->arr[12][aux_sym_concatenation_token1] = 256;
	v->arr[12][anon_sym_DOLLAR] = 258;
	v->arr[12][sym__special_character] = 260;
	v->arr[12][anon_sym_DQUOTE] = 262;
	v->arr[12][sym_raw_string] = 237;
	v->arr[12][sym_ansi_c_string] = 237;
	v->arr[12][aux_sym_number_token1] = 264;
	v->arr[12][aux_sym_number_token2] = 266;
	v->arr[12][anon_sym_DOLLAR_LBRACE] = 268;
	init_parse_table89(v);
}

void	init_parse_table89(t_parse_table *v)
{
	v->arr[12][anon_sym_DOLLAR_LPAREN] = 270;
	v->arr[12][anon_sym_BQUOTE] = 272;
	v->arr[12][anon_sym_DOLLAR_BQUOTE] = 274;
	v->arr[12][anon_sym_LT_LPAREN] = 276;
	v->arr[12][anon_sym_GT_LPAREN] = 276;
	v->arr[12][sym_comment] = 3;
	v->arr[12][sym_file_descriptor] = 278;
	v->arr[12][sym__concat] = 280;
	v->arr[12][sym_test_operator] = 282;
	v->arr[12][sym__bare_dollar] = 278;
	v->arr[12][sym__brace_start] = 284;
	v->arr[13][aux_sym__terminated_statement] = 34;
	v->arr[13][sym__statement_not_pipeline] = 6718;
	v->arr[13][sym_redirected_statement] = 5007;
	v->arr[13][sym_for_statement] = 5007;
	init_parse_table90(v);
}

// file funcs17.c
