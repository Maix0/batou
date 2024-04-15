/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs618.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_parse_table3090(t_parse_table *v)
{
	v->arr[524][anon_sym_LT] = 1275;
	v->arr[524][anon_sym_GT] = 1275;
	v->arr[524][anon_sym_LT_EQ] = 1369;
	v->arr[524][anon_sym_GT_EQ] = 1369;
	v->arr[524][anon_sym_LT_LT] = 1275;
	v->arr[524][anon_sym_GT_GT] = 1275;
	v->arr[524][anon_sym_PLUS] = 1273;
	v->arr[524][anon_sym_DASH] = 1273;
	v->arr[524][anon_sym_STAR] = 1273;
	v->arr[524][anon_sym_SLASH] = 1273;
	v->arr[524][anon_sym_PERCENT] = 1273;
	v->arr[524][anon_sym_STAR_STAR] = 1273;
	v->arr[524][anon_sym_LPAREN] = 1271;
	v->arr[524][anon_sym_PIPE_AMP] = 1281;
	v->arr[524][anon_sym_RBRACK] = 1369;
	init_parse_table3091(v);
}

void	init_parse_table3091(t_parse_table *v)
{
	v->arr[524][anon_sym_EQ_TILDE] = 1275;
	v->arr[524][anon_sym_AMP_GT] = 1271;
	v->arr[524][anon_sym_AMP_GT_GT] = 1281;
	v->arr[524][anon_sym_LT_AMP] = 1271;
	v->arr[524][anon_sym_GT_AMP] = 1271;
	v->arr[524][anon_sym_GT_PIPE] = 1281;
	v->arr[524][anon_sym_LT_AMP_DASH] = 1281;
	v->arr[524][anon_sym_GT_AMP_DASH] = 1281;
	v->arr[524][anon_sym_LT_LT_DASH] = 1281;
	v->arr[524][anon_sym_LT_LT_LT] = 1281;
	v->arr[524][anon_sym_QMARK] = 1273;
	v->arr[524][anon_sym_DOLLAR_LPAREN_LPAREN] = 1281;
	v->arr[524][anon_sym_DOLLAR_LBRACK] = 1281;
	v->arr[524][anon_sym_DOLLAR] = 1271;
	v->arr[524][sym__special_character] = 1271;
	init_parse_table3092(v);
}

void	init_parse_table3092(t_parse_table *v)
{
	v->arr[524][anon_sym_DQUOTE] = 1281;
	v->arr[524][sym_raw_string] = 1281;
	v->arr[524][sym_ansi_c_string] = 1281;
	v->arr[524][aux_sym_number_token1] = 1271;
	v->arr[524][aux_sym_number_token2] = 1271;
	v->arr[524][anon_sym_DOLLAR_LBRACE] = 1281;
	v->arr[524][anon_sym_DOLLAR_LPAREN] = 1271;
	v->arr[524][anon_sym_BQUOTE] = 1281;
	v->arr[524][anon_sym_DOLLAR_BQUOTE] = 1281;
	v->arr[524][anon_sym_LT_LPAREN] = 1281;
	v->arr[524][anon_sym_GT_LPAREN] = 1281;
	v->arr[524][sym_comment] = 71;
	v->arr[524][sym_file_descriptor] = 1281;
	v->arr[524][sym_test_operator] = 1283;
	v->arr[524][sym__bare_dollar] = 1281;
	init_parse_table3093(v);
}

void	init_parse_table3093(t_parse_table *v)
{
	v->arr[524][sym__brace_start] = 1281;
	v->arr[525][sym_word] = 1261;
	v->arr[525][anon_sym_LPAREN_LPAREN] = 1263;
	v->arr[525][anon_sym_EQ] = 1261;
	v->arr[525][anon_sym_PLUS_PLUS] = 1261;
	v->arr[525][anon_sym_DASH_DASH] = 1261;
	v->arr[525][anon_sym_PLUS_EQ] = 1261;
	v->arr[525][anon_sym_DASH_EQ] = 1261;
	v->arr[525][anon_sym_STAR_EQ] = 1261;
	v->arr[525][anon_sym_SLASH_EQ] = 1261;
	v->arr[525][anon_sym_PERCENT_EQ] = 1261;
	v->arr[525][anon_sym_STAR_STAR_EQ] = 1261;
	v->arr[525][anon_sym_LT_LT_EQ] = 1263;
	v->arr[525][anon_sym_GT_GT_EQ] = 1263;
	v->arr[525][anon_sym_AMP_EQ] = 1263;
	init_parse_table3094(v);
}

void	init_parse_table3094(t_parse_table *v)
{
	v->arr[525][anon_sym_CARET_EQ] = 1261;
	v->arr[525][anon_sym_PIPE_EQ] = 1263;
	v->arr[525][anon_sym_PIPE_PIPE] = 1263;
	v->arr[525][anon_sym_AMP_AMP] = 1263;
	v->arr[525][anon_sym_PIPE] = 1261;
	v->arr[525][anon_sym_CARET] = 1261;
	v->arr[525][anon_sym_AMP] = 1261;
	v->arr[525][anon_sym_EQ_EQ] = 1261;
	v->arr[525][anon_sym_BANG_EQ] = 1261;
	v->arr[525][anon_sym_LT] = 1261;
	v->arr[525][anon_sym_GT] = 1261;
	v->arr[525][anon_sym_LT_EQ] = 1263;
	v->arr[525][anon_sym_GT_EQ] = 1263;
	v->arr[525][anon_sym_LT_LT] = 1261;
	v->arr[525][anon_sym_GT_GT] = 1261;
	init_parse_table3095(v);
}

// file funcs618.c
