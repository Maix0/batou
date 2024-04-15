/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs0.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_ext_scanner_states0(t_external_scanner_states *v)
{
	v->arr[1][ts_external_token_heredoc_start] = true;
	v->arr[1][ts_external_token_simple_heredoc_body] = true;
	v->arr[1][ts_external_token__heredoc_body_beginning] = true;
	v->arr[1][ts_external_token_heredoc_content] = true;
	v->arr[1][ts_external_token_heredoc_end] = true;
	v->arr[1][ts_external_token_file_descriptor] = true;
	v->arr[1][ts_external_token__empty_value] = true;
	v->arr[1][ts_external_token__concat] = true;
	v->arr[1][ts_external_token_variable_name] = true;
	v->arr[1][ts_external_token_test_operator] = true;
	v->arr[1][ts_external_token_regex] = true;
	v->arr[1][ts_external_token__regex_no_slash] = true;
	v->arr[1][ts_external_token__regex_no_space] = true;
	v->arr[1][ts_external_token__expansion_word] = true;
	v->arr[1][ts_external_token_extglob_pattern] = true;
	init_ext_scanner_states1(v);
}

void	init_ext_scanner_states1(t_external_scanner_states *v)
{
	v->arr[1][ts_external_token__bare_dollar] = true;
	v->arr[1][ts_external_token__brace_start] = true;
	v->arr[1][ts_external_token__immediate_double_hash] = true;
	v->arr[1][ts_external_token__external_expansion_sym_hash] = true;
	v->arr[1][ts_external_token__external_expansion_sym_bang] = true;
	v->arr[1][ts_external_token__external_expansion_sym_equal] = true;
	v->arr[1][ts_external_token_RBRACE] = true;
	v->arr[1][ts_external_token_RBRACK] = true;
	v->arr[1][ts_external_token_LT_LT] = true;
	v->arr[1][ts_external_token_LT_LT_DASH] = true;
	v->arr[1][ts_external_token_LPAREN] = true;
	v->arr[1][ts_external_token_esac] = true;
	v->arr[1][ts_external_token___error_recovery] = true;
	v->arr[2][ts_external_token_file_descriptor] = true;
	v->arr[2][ts_external_token_variable_name] = true;
	init_ext_scanner_states2(v);
}

void	init_ext_scanner_states2(t_external_scanner_states *v)
{
	v->arr[2][ts_external_token_test_operator] = true;
	v->arr[2][ts_external_token__brace_start] = true;
	v->arr[2][ts_external_token_LPAREN] = true;
	v->arr[3][ts_external_token_file_descriptor] = true;
	v->arr[3][ts_external_token_variable_name] = true;
	v->arr[3][ts_external_token_test_operator] = true;
	v->arr[3][ts_external_token__brace_start] = true;
	v->arr[3][ts_external_token_RBRACK] = true;
	v->arr[3][ts_external_token_LPAREN] = true;
	v->arr[4][ts_external_token_file_descriptor] = true;
	v->arr[4][ts_external_token__concat] = true;
	v->arr[4][ts_external_token_test_operator] = true;
	v->arr[4][ts_external_token__bare_dollar] = true;
	v->arr[4][ts_external_token__brace_start] = true;
	v->arr[4][ts_external_token_LT_LT] = true;
	init_ext_scanner_states3(v);
}

void	init_ext_scanner_states3(t_external_scanner_states *v)
{
	v->arr[4][ts_external_token_LT_LT_DASH] = true;
	v->arr[4][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[4][ts_external_token_LPAREN] = true;
	v->arr[5][ts_external_token_file_descriptor] = true;
	v->arr[5][ts_external_token__concat] = true;
	v->arr[5][ts_external_token_test_operator] = true;
	v->arr[5][ts_external_token__bare_dollar] = true;
	v->arr[5][ts_external_token__brace_start] = true;
	v->arr[5][ts_external_token_RBRACK] = true;
	v->arr[5][ts_external_token_LT_LT] = true;
	v->arr[5][ts_external_token_LT_LT_DASH] = true;
	v->arr[5][ts_external_token_LPAREN] = true;
	v->arr[6][ts_external_token_file_descriptor] = true;
	v->arr[6][ts_external_token_variable_name] = true;
	v->arr[6][ts_external_token_test_operator] = true;
	init_ext_scanner_states4(v);
}

void	init_ext_scanner_states4(t_external_scanner_states *v)
{
	v->arr[6][ts_external_token__brace_start] = true;
	v->arr[6][ts_external_token_LPAREN] = true;
	v->arr[6][ts_external_token_esac] = true;
	v->arr[7][ts_external_token__concat] = true;
	v->arr[7][ts_external_token_test_operator] = true;
	v->arr[7][ts_external_token__brace_start] = true;
	v->arr[7][ts_external_token_LT_LT] = true;
	v->arr[7][ts_external_token_LPAREN] = true;
	v->arr[8][ts_external_token__concat] = true;
	v->arr[8][ts_external_token_test_operator] = true;
	v->arr[8][ts_external_token__brace_start] = true;
	v->arr[8][ts_external_token_RBRACK] = true;
	v->arr[8][ts_external_token_LT_LT] = true;
	v->arr[8][ts_external_token_LPAREN] = true;
	v->arr[9][ts_external_token_file_descriptor] = true;
	init_ext_scanner_states5(v);
}

// file funcs0.c
