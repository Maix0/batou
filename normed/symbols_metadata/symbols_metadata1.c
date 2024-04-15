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

void	init_sym_metadata5(t_symbols_metadata *v)
{
	v->arr[anon_sym_unset] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_unsetenv] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_EQ_TILDE] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_AMP_GT] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_AMP_GT_GT] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_LT_AMP] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_GT_AMP] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_GT_PIPE] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_LT_AMP_DASH] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_GT_AMP_DASH] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_LT_LT_DASH] = (t_sm){.visible = 1, .named = 0};
	v->arr[aux_sym_heredoc_redirect_token1] = (t_sm){.visible = 0, .named = 0};
	v->arr[anon_sym_LT_LT_LT] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_QMARK] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_COLON] = (t_sm){.visible = 1, .named = 0};
	init_sym_metadata6(v);
}

void	init_sym_metadata6(t_symbols_metadata *v)
{
	v->arr[anon_sym_PLUS_PLUS2] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_DASH_DASH2] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_DASH2] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_PLUS2] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_TILDE] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_DOLLAR_LPAREN_LPAREN] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_DOLLAR_LBRACK] = (t_sm){.visible = 1, .named = 0};
	v->arr[aux_sym_brace_expression_token1] = (t_sm){.visible = 1, .named = 1};
	v->arr[anon_sym_DOT_DOT] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_RBRACE2] = (t_sm){.visible = 1, .named = 0};
	v->arr[aux_sym_concatenation_token1] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_DOLLAR] = (t_sm){.visible = 1, .named = 0};
	v->arr[sym__special_character] = (t_sm){.visible = 0, .named = 1};
	v->arr[anon_sym_DQUOTE] = (t_sm){.visible = 1, .named = 0};
	v->arr[sym_string_content] = (t_sm){.visible = 1, .named = 1};
	init_sym_metadata7(v);
}

void	init_sym_metadata7(t_symbols_metadata *v)
{
	v->arr[sym_raw_string] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym_ansi_c_string] = (t_sm){.visible = 1, .named = 1};
	v->arr[aux_sym_number_token1] = (t_sm){.visible = 0, .named = 0};
	v->arr[aux_sym_number_token2] = (t_sm){.visible = 0, .named = 0};
	v->arr[anon_sym_POUND] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_DOLLAR_LBRACE] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_RBRACE3] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_BANG2] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_AT] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_STAR2] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_POUND2] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_EQ2] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_COLON_EQ] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_DASH3] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_COLON_DASH] = (t_sm){.visible = 1, .named = 0};
	init_sym_metadata8(v);
}

void	init_sym_metadata8(t_symbols_metadata *v)
{
	v->arr[anon_sym_PLUS3] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_COLON_PLUS] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_QMARK2] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_COLON_QMARK] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_PERCENT_PERCENT] = (t_sm){.visible = 1, .named = 0};
	v->arr[aux_sym__expansion_regex_token1] = (t_sm){.visible = 1, .named = 1};
	v->arr[anon_sym_SLASH_SLASH] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_SLASH_POUND] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_SLASH_PERCENT] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_COMMA_COMMA] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_CARET_CARET] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_U] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_u] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_L] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_Q] = (t_sm){.visible = 1, .named = 0};
	init_sym_metadata9(v);
}

void	init_sym_metadata9(t_symbols_metadata *v)
{
	v->arr[anon_sym_E] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_P] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_A] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_K] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_a] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_k] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_DOLLAR_LPAREN] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_BQUOTE] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_DOLLAR_BQUOTE] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_LT_LPAREN] = (t_sm){.visible = 1, .named = 0};
	v->arr[anon_sym_GT_LPAREN] = (t_sm){.visible = 1, .named = 0};
	v->arr[sym_comment] = (t_sm){.visible = 1, .named = 1};
	v->arr[sym__comment_word] = (t_sm){.visible = 1, .named = 1};
	v->arr[aux_sym__simple_variable_name_token1] = (t_sm){.visible = 1, .named \
	= 1};
	v->arr[aux_sym__multiline_variable_name_token1] = (t_sm){.visible = 1, \
	.named = 1};
	init_sym_metadata10(v);
}

// file funcs1.c
