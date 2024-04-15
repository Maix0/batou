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

void	init_parse_table5(t_parse_table *v)
{
	v->arr[0][anon_sym_LT_LT_LT] = 1;
	v->arr[0][anon_sym_QMARK] = 1;
	v->arr[0][anon_sym_COLON] = 1;
	v->arr[0][anon_sym_DASH2] = 1;
	v->arr[0][anon_sym_PLUS2] = 1;
	v->arr[0][anon_sym_TILDE] = 1;
	v->arr[0][anon_sym_DOLLAR_LPAREN_LPAREN] = 1;
	v->arr[0][anon_sym_DOLLAR_LBRACK] = 1;
	v->arr[0][anon_sym_DOT_DOT] = 1;
	v->arr[0][anon_sym_RBRACE2] = 1;
	v->arr[0][aux_sym_concatenation_token1] = 1;
	v->arr[0][anon_sym_DOLLAR] = 1;
	v->arr[0][sym__special_character] = 1;
	v->arr[0][anon_sym_DQUOTE] = 1;
	v->arr[0][sym_raw_string] = 1;
	init_parse_table6(v);
}

void	init_parse_table6(t_parse_table *v)
{
	v->arr[0][sym_ansi_c_string] = 1;
	v->arr[0][anon_sym_POUND] = 1;
	v->arr[0][anon_sym_DOLLAR_LBRACE] = 1;
	v->arr[0][anon_sym_RBRACE3] = 1;
	v->arr[0][anon_sym_BANG2] = 1;
	v->arr[0][anon_sym_AT] = 1;
	v->arr[0][anon_sym_STAR2] = 1;
	v->arr[0][anon_sym_POUND2] = 1;
	v->arr[0][anon_sym_EQ2] = 1;
	v->arr[0][anon_sym_COLON_EQ] = 1;
	v->arr[0][anon_sym_DASH3] = 1;
	v->arr[0][anon_sym_COLON_DASH] = 1;
	v->arr[0][anon_sym_PLUS3] = 1;
	v->arr[0][anon_sym_COLON_PLUS] = 1;
	v->arr[0][anon_sym_QMARK2] = 1;
	init_parse_table7(v);
}

void	init_parse_table7(t_parse_table *v)
{
	v->arr[0][anon_sym_COLON_QMARK] = 1;
	v->arr[0][anon_sym_PERCENT_PERCENT] = 1;
	v->arr[0][anon_sym_SLASH_SLASH] = 1;
	v->arr[0][anon_sym_SLASH_POUND] = 1;
	v->arr[0][anon_sym_SLASH_PERCENT] = 1;
	v->arr[0][anon_sym_COMMA_COMMA] = 1;
	v->arr[0][anon_sym_CARET_CARET] = 1;
	v->arr[0][anon_sym_U] = 1;
	v->arr[0][anon_sym_u] = 1;
	v->arr[0][anon_sym_L] = 1;
	v->arr[0][anon_sym_Q] = 1;
	v->arr[0][anon_sym_E] = 1;
	v->arr[0][anon_sym_P] = 1;
	v->arr[0][anon_sym_A] = 1;
	v->arr[0][anon_sym_K] = 1;
	init_parse_table8(v);
}

void	init_parse_table8(t_parse_table *v)
{
	v->arr[0][anon_sym_a] = 1;
	v->arr[0][anon_sym_k] = 1;
	v->arr[0][anon_sym_DOLLAR_LPAREN] = 1;
	v->arr[0][anon_sym_BQUOTE] = 1;
	v->arr[0][anon_sym_DOLLAR_BQUOTE] = 1;
	v->arr[0][anon_sym_LT_LPAREN] = 1;
	v->arr[0][anon_sym_GT_LPAREN] = 1;
	v->arr[0][sym_comment] = 3;
	v->arr[0][sym__comment_word] = 1;
	v->arr[0][anon_sym_AT2] = 1;
	v->arr[0][anon_sym_0] = 1;
	v->arr[0][anon_sym__] = 1;
	v->arr[0][sym_heredoc_start] = 1;
	v->arr[0][sym_simple_heredoc_body] = 1;
	v->arr[0][sym__heredoc_body_beginning] = 1;
	init_parse_table9(v);
}

void	init_parse_table9(t_parse_table *v)
{
	v->arr[0][sym_heredoc_content] = 1;
	v->arr[0][sym_heredoc_end] = 1;
	v->arr[0][sym_file_descriptor] = 1;
	v->arr[0][sym__empty_value] = 1;
	v->arr[0][sym__concat] = 1;
	v->arr[0][sym_variable_name] = 1;
	v->arr[0][sym_test_operator] = 1;
	v->arr[0][sym_regex] = 1;
	v->arr[0][sym__regex_no_slash] = 1;
	v->arr[0][sym__regex_no_space] = 1;
	v->arr[0][sym__expansion_word] = 1;
	v->arr[0][sym_extglob_pattern] = 1;
	v->arr[0][sym__bare_dollar] = 1;
	v->arr[0][sym__brace_start] = 1;
	v->arr[0][sym__immediate_double_hash] = 1;
	init_parse_table10(v);
}

// file funcs1.c
