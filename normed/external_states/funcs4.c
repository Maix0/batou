/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_ext_scanner_states20(t_external_scanner_states *v)
{
	v->arr[41][ts_external_token__concat] = true;
	v->arr[41][ts_external_token_variable_name] = true;
	v->arr[41][ts_external_token_test_operator] = true;
	v->arr[41][ts_external_token__brace_start] = true;
	v->arr[41][ts_external_token_LT_LT] = true;
	v->arr[41][ts_external_token_LT_LT_DASH] = true;
	v->arr[41][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[42][ts_external_token_test_operator] = true;
	v->arr[42][ts_external_token_LT_LT] = true;
	v->arr[43][ts_external_token_file_descriptor] = true;
	v->arr[43][ts_external_token__concat] = true;
	v->arr[43][ts_external_token_test_operator] = true;
	v->arr[43][ts_external_token__brace_start] = true;
	v->arr[43][ts_external_token_LT_LT] = true;
	v->arr[43][ts_external_token_LT_LT_DASH] = true;
	init_ext_scanner_states21(v);
}

void	init_ext_scanner_states21(t_external_scanner_states *v)
{
	v->arr[43][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[43][ts_external_token_esac] = true;
	v->arr[44][ts_external_token_file_descriptor] = true;
	v->arr[44][ts_external_token__concat] = true;
	v->arr[44][ts_external_token_test_operator] = true;
	v->arr[44][ts_external_token__brace_start] = true;
	v->arr[44][ts_external_token_LT_LT] = true;
	v->arr[44][ts_external_token_LT_LT_DASH] = true;
	v->arr[44][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[45][ts_external_token__concat] = true;
	v->arr[45][ts_external_token_test_operator] = true;
	v->arr[45][ts_external_token_RBRACK] = true;
	v->arr[45][ts_external_token_LT_LT] = true;
	v->arr[46][ts_external_token_file_descriptor] = true;
	v->arr[46][ts_external_token_variable_name] = true;
	init_ext_scanner_states22(v);
}

void	init_ext_scanner_states22(t_external_scanner_states *v)
{
	v->arr[46][ts_external_token_test_operator] = true;
	v->arr[46][ts_external_token__brace_start] = true;
	v->arr[46][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[47][ts_external_token_test_operator] = true;
	v->arr[47][ts_external_token_extglob_pattern] = true;
	v->arr[47][ts_external_token__brace_start] = true;
	v->arr[47][ts_external_token_LPAREN] = true;
	v->arr[48][ts_external_token_test_operator] = true;
	v->arr[48][ts_external_token_RBRACK] = true;
	v->arr[48][ts_external_token_LT_LT] = true;
	v->arr[49][ts_external_token_test_operator] = true;
	v->arr[49][ts_external_token__brace_start] = true;
	v->arr[49][ts_external_token_LPAREN] = true;
	v->arr[50][ts_external_token_test_operator] = true;
	v->arr[50][ts_external_token__regex_no_space] = true;
	init_ext_scanner_states23(v);
}

void	init_ext_scanner_states23(t_external_scanner_states *v)
{
	v->arr[50][ts_external_token__brace_start] = true;
	v->arr[50][ts_external_token_LPAREN] = true;
	v->arr[51][ts_external_token_file_descriptor] = true;
	v->arr[51][ts_external_token__concat] = true;
	v->arr[51][ts_external_token_test_operator] = true;
	v->arr[51][ts_external_token__bare_dollar] = true;
	v->arr[51][ts_external_token__brace_start] = true;
	v->arr[51][ts_external_token_LT_LT] = true;
	v->arr[51][ts_external_token_LT_LT_DASH] = true;
	v->arr[51][ts_external_token_LPAREN] = true;
	v->arr[52][ts_external_token_file_descriptor] = true;
	v->arr[52][ts_external_token__concat] = true;
	v->arr[52][ts_external_token_test_operator] = true;
	v->arr[52][ts_external_token__bare_dollar] = true;
	v->arr[52][ts_external_token__brace_start] = true;
	init_ext_scanner_states24(v);
}

void	init_ext_scanner_states24(t_external_scanner_states *v)
{
	v->arr[52][ts_external_token_LT_LT] = true;
	v->arr[52][ts_external_token_LT_LT_DASH] = true;
	v->arr[53][ts_external_token_file_descriptor] = true;
	v->arr[53][ts_external_token__concat] = true;
	v->arr[53][ts_external_token_variable_name] = true;
	v->arr[53][ts_external_token_test_operator] = true;
	v->arr[53][ts_external_token__brace_start] = true;
	v->arr[53][ts_external_token_RBRACK] = true;
	v->arr[53][ts_external_token_LT_LT] = true;
	v->arr[53][ts_external_token_LT_LT_DASH] = true;
	v->arr[54][ts_external_token__concat] = true;
	v->arr[54][ts_external_token_test_operator] = true;
	v->arr[54][ts_external_token_LT_LT] = true;
	v->arr[55][ts_external_token_test_operator] = true;
	v->arr[55][ts_external_token_extglob_pattern] = true;
	init_ext_scanner_states25(v);
}

// file funcs4.c
