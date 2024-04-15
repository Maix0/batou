/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_symbols_map5(t_symbols_map *v)
{
	v->arr[anon_sym_unset] = anon_sym_unset;
	v->arr[anon_sym_unsetenv] = anon_sym_unsetenv;
	v->arr[anon_sym_EQ_TILDE] = anon_sym_EQ_TILDE;
	v->arr[anon_sym_AMP_GT] = anon_sym_AMP_GT;
	v->arr[anon_sym_AMP_GT_GT] = anon_sym_AMP_GT_GT;
	v->arr[anon_sym_LT_AMP] = anon_sym_LT_AMP;
	v->arr[anon_sym_GT_AMP] = anon_sym_GT_AMP;
	v->arr[anon_sym_GT_PIPE] = anon_sym_GT_PIPE;
	v->arr[anon_sym_LT_AMP_DASH] = anon_sym_LT_AMP_DASH;
	v->arr[anon_sym_GT_AMP_DASH] = anon_sym_GT_AMP_DASH;
	v->arr[anon_sym_LT_LT_DASH] = anon_sym_LT_LT_DASH;
	v->arr[aux_sym_heredoc_redirect_token1] = aux_sym_heredoc_redirect_token1;
	v->arr[anon_sym_LT_LT_LT] = anon_sym_LT_LT_LT;
	v->arr[anon_sym_QMARK] = anon_sym_QMARK;
	v->arr[anon_sym_COLON] = anon_sym_COLON;
	init_symbols_map6(v);
}

void	init_symbols_map6(t_symbols_map *v)
{
	v->arr[anon_sym_PLUS_PLUS2] = anon_sym_PLUS_PLUS;
	v->arr[anon_sym_DASH_DASH2] = anon_sym_DASH_DASH;
	v->arr[anon_sym_DASH2] = anon_sym_DASH;
	v->arr[anon_sym_PLUS2] = anon_sym_PLUS;
	v->arr[anon_sym_TILDE] = anon_sym_TILDE;
	v->arr[anon_sym_DOLLAR_LPAREN_LPAREN] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[anon_sym_DOLLAR_LBRACK] = anon_sym_DOLLAR_LBRACK;
	v->arr[aux_sym_brace_expression_token1] = sym_number;
	v->arr[anon_sym_DOT_DOT] = anon_sym_DOT_DOT;
	v->arr[anon_sym_RBRACE2] = anon_sym_RBRACE;
	v->arr[aux_sym_concatenation_token1] = aux_sym_concatenation_token1;
	v->arr[anon_sym_DOLLAR] = anon_sym_DOLLAR;
	v->arr[sym__special_character] = sym__special_character;
	v->arr[anon_sym_DQUOTE] = anon_sym_DQUOTE;
	v->arr[sym_string_content] = sym_string_content;
	init_symbols_map7(v);
}

void	init_symbols_map7(t_symbols_map *v)
{
	v->arr[sym_raw_string] = sym_raw_string;
	v->arr[sym_ansi_c_string] = sym_ansi_c_string;
	v->arr[aux_sym_number_token1] = aux_sym_number_token1;
	v->arr[aux_sym_number_token2] = aux_sym_number_token2;
	v->arr[anon_sym_POUND] = anon_sym_POUND;
	v->arr[anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE;
	v->arr[anon_sym_RBRACE3] = anon_sym_RBRACE;
	v->arr[anon_sym_BANG2] = anon_sym_BANG;
	v->arr[anon_sym_AT] = anon_sym_AT;
	v->arr[anon_sym_STAR2] = anon_sym_STAR;
	v->arr[anon_sym_POUND2] = anon_sym_POUND;
	v->arr[anon_sym_EQ2] = anon_sym_EQ;
	v->arr[anon_sym_COLON_EQ] = anon_sym_COLON_EQ;
	v->arr[anon_sym_DASH3] = anon_sym_DASH;
	v->arr[anon_sym_COLON_DASH] = anon_sym_COLON_DASH;
	init_symbols_map8(v);
}

void	init_symbols_map8(t_symbols_map *v)
{
	v->arr[anon_sym_PLUS3] = anon_sym_PLUS;
	v->arr[anon_sym_COLON_PLUS] = anon_sym_COLON_PLUS;
	v->arr[anon_sym_QMARK2] = anon_sym_QMARK;
	v->arr[anon_sym_COLON_QMARK] = anon_sym_COLON_QMARK;
	v->arr[anon_sym_PERCENT_PERCENT] = anon_sym_PERCENT_PERCENT;
	v->arr[aux_sym__expansion_regex_token1] = sym_regex;
	v->arr[anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH;
	v->arr[anon_sym_SLASH_POUND] = anon_sym_SLASH_POUND;
	v->arr[anon_sym_SLASH_PERCENT] = anon_sym_SLASH_PERCENT;
	v->arr[anon_sym_COMMA_COMMA] = anon_sym_COMMA_COMMA;
	v->arr[anon_sym_CARET_CARET] = anon_sym_CARET_CARET;
	v->arr[anon_sym_U] = anon_sym_U;
	v->arr[anon_sym_u] = anon_sym_u;
	v->arr[anon_sym_L] = anon_sym_L;
	v->arr[anon_sym_Q] = anon_sym_Q;
	init_symbols_map9(v);
}

void	init_symbols_map9(t_symbols_map *v)
{
	v->arr[anon_sym_E] = anon_sym_E;
	v->arr[anon_sym_P] = anon_sym_P;
	v->arr[anon_sym_A] = anon_sym_A;
	v->arr[anon_sym_K] = anon_sym_K;
	v->arr[anon_sym_a] = anon_sym_a;
	v->arr[anon_sym_k] = anon_sym_k;
	v->arr[anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN;
	v->arr[anon_sym_BQUOTE] = anon_sym_BQUOTE;
	v->arr[anon_sym_DOLLAR_BQUOTE] = anon_sym_DOLLAR_BQUOTE;
	v->arr[anon_sym_LT_LPAREN] = anon_sym_LT_LPAREN;
	v->arr[anon_sym_GT_LPAREN] = anon_sym_GT_LPAREN;
	v->arr[sym_comment] = sym_comment;
	v->arr[sym__comment_word] = sym_word;
	v->arr[aux_sym__simple_variable_name_token1] = sym_variable_name;
	v->arr[aux_sym__multiline_variable_name_token1] = sym_variable_name;
	init_symbols_map10(v);
}

// file funcs1.c
