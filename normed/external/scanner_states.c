/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scanner_states.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:56:53 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/15 16:14:59 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_scanner_states0(t_scanner_states *v);
void	init_scanner_states1(t_scanner_states *v);

void	init_scanner_states0(t_scanner_states *v)
{
	v->arr[ts_external_token_heredoc_start] = sym_heredoc_start;
	v->arr[ts_external_token_simple_heredoc_body] = sym_simple_heredoc_body;
	v->arr[ts_external_token__heredoc_body_beginning] \
	= sym__heredoc_body_beginning;
	v->arr[ts_external_token_heredoc_content] = sym_heredoc_content;
	v->arr[ts_external_token_heredoc_end] = sym_heredoc_end;
	v->arr[ts_external_token_file_descriptor] = sym_file_descriptor;
	v->arr[ts_external_token__empty_value] = sym__empty_value;
	v->arr[ts_external_token__concat] = sym__concat;
	v->arr[ts_external_token_variable_name] = sym_variable_name;
	v->arr[ts_external_token_test_operator] = sym_test_operator;
	v->arr[ts_external_token_regex] = sym_regex;
	v->arr[ts_external_token__regex_no_slash] = sym__regex_no_slash;
	v->arr[ts_external_token__regex_no_space] = sym__regex_no_space;
	v->arr[ts_external_token__expansion_word] = sym__expansion_word;
	v->arr[ts_external_token_extglob_pattern] = sym_extglob_pattern;
	v->arr[ts_external_token__bare_dollar] = sym__bare_dollar;
}

void	init_scanner_states1(t_scanner_states *v)
{
	v->arr[ts_external_token__brace_start] = sym__brace_start;
	v->arr[ts_external_token__immediate_double_hash] \
	= sym__immediate_double_hash;
	v->arr[ts_external_token__external_expansion_sym_hash] \
	= sym__external_expansion_sym_hash;
	v->arr[ts_external_token__external_expansion_sym_bang] \
	= sym__external_expansion_sym_bang;
	v->arr[ts_external_token__external_expansion_sym_equal] \
	= sym__external_expansion_sym_equal;
	v->arr[ts_external_token_RBRACE] = anon_sym_RBRACE3;
	v->arr[ts_external_token_RBRACK] = anon_sym_RBRACK;
	v->arr[ts_external_token_LT_LT] = anon_sym_LT_LT;
	v->arr[ts_external_token_LT_LT_DASH] = anon_sym_LT_LT_DASH;
	v->arr[ts_external_token_heredoc_redirect_token1] \
	= aux_sym_heredoc_redirect_token1;
	v->arr[ts_external_token_LPAREN] = anon_sym_LPAREN;
	v->arr[ts_external_token_esac] = anon_sym_esac;
	v->arr[ts_external_token___error_recovery] = sym___error_recovery;
}
