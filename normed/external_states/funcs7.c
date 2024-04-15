/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs7.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_ext_scanner_states35(t_external_scanner_states *v)
{
	v->arr[93][ts_external_token__concat] = true;
	v->arr[93][ts_external_token_LT_LT] = true;
	v->arr[93][ts_external_token_LT_LT_DASH] = true;
	v->arr[93][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[94][ts_external_token_file_descriptor] = true;
	v->arr[94][ts_external_token_LT_LT] = true;
	v->arr[94][ts_external_token_LT_LT_DASH] = true;
	v->arr[94][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[95][ts_external_token_file_descriptor] = true;
	v->arr[95][ts_external_token__concat] = true;
	v->arr[95][ts_external_token_variable_name] = true;
	v->arr[95][ts_external_token_LT_LT] = true;
	v->arr[95][ts_external_token_LT_LT_DASH] = true;
	v->arr[95][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[96][ts_external_token__concat] = true;
	init_ext_scanner_states36(v);
}

void	init_ext_scanner_states36(t_external_scanner_states *v)
{
	v->arr[96][ts_external_token__immediate_double_hash] = true;
	v->arr[96][ts_external_token__external_expansion_sym_hash] = true;
	v->arr[96][ts_external_token__external_expansion_sym_bang] = true;
	v->arr[96][ts_external_token__external_expansion_sym_equal] = true;
	v->arr[96][ts_external_token_RBRACE] = true;
	v->arr[97][ts_external_token__concat] = true;
	v->arr[97][ts_external_token_test_operator] = true;
	v->arr[97][ts_external_token__brace_start] = true;
	v->arr[97][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[98][ts_external_token_variable_name] = true;
	v->arr[98][ts_external_token__external_expansion_sym_hash] = true;
	v->arr[98][ts_external_token__external_expansion_sym_bang] = true;
	v->arr[98][ts_external_token__external_expansion_sym_equal] = true;
	v->arr[98][ts_external_token_RBRACE] = true;
	v->arr[99][ts_external_token_LPAREN] = true;
	init_ext_scanner_states37(v);
}

void	init_ext_scanner_states37(t_external_scanner_states *v)
{
	v->arr[100][ts_external_token__concat] = true;
	v->arr[100][ts_external_token_test_operator] = true;
	v->arr[100][ts_external_token__brace_start] = true;
	v->arr[101][ts_external_token_file_descriptor] = true;
	v->arr[101][ts_external_token__concat] = true;
	v->arr[101][ts_external_token_RBRACK] = true;
	v->arr[101][ts_external_token_LT_LT] = true;
	v->arr[101][ts_external_token_LT_LT_DASH] = true;
	v->arr[102][ts_external_token_file_descriptor] = true;
	v->arr[102][ts_external_token_RBRACK] = true;
	v->arr[102][ts_external_token_LT_LT] = true;
	v->arr[102][ts_external_token_LT_LT_DASH] = true;
	v->arr[103][ts_external_token_file_descriptor] = true;
	v->arr[103][ts_external_token_LT_LT] = true;
	v->arr[103][ts_external_token_LT_LT_DASH] = true;
	init_ext_scanner_states38(v);
}

void	init_ext_scanner_states38(t_external_scanner_states *v)
{
	v->arr[104][ts_external_token_RBRACE] = true;
	v->arr[104][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[104][ts_external_token_LPAREN] = true;
	v->arr[105][ts_external_token_file_descriptor] = true;
	v->arr[105][ts_external_token__concat] = true;
	v->arr[105][ts_external_token_variable_name] = true;
	v->arr[105][ts_external_token_LT_LT] = true;
	v->arr[105][ts_external_token_LT_LT_DASH] = true;
	v->arr[106][ts_external_token_file_descriptor] = true;
	v->arr[106][ts_external_token__concat] = true;
	v->arr[106][ts_external_token_LT_LT] = true;
	v->arr[106][ts_external_token_LT_LT_DASH] = true;
	v->arr[107][ts_external_token_variable_name] = true;
	v->arr[107][ts_external_token__expansion_word] = true;
	v->arr[107][ts_external_token_RBRACE] = true;
	init_ext_scanner_states39(v);
}

void	init_ext_scanner_states39(t_external_scanner_states *v)
{
	v->arr[107][ts_external_token_LPAREN] = true;
	v->arr[108][ts_external_token_variable_name] = true;
	v->arr[108][ts_external_token__expansion_word] = true;
	v->arr[108][ts_external_token_LPAREN] = true;
	v->arr[109][ts_external_token_variable_name] = true;
	v->arr[109][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[110][ts_external_token_file_descriptor] = true;
	v->arr[110][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[111][ts_external_token_file_descriptor] = true;
	v->arr[111][ts_external_token__concat] = true;
	v->arr[111][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[112][ts_external_token_variable_name] = true;
	v->arr[113][ts_external_token_LT_LT] = true;
	v->arr[113][ts_external_token_LT_LT_DASH] = true;
	v->arr[114][ts_external_token_RBRACE] = true;
	init_ext_scanner_states40(v);
}

// file funcs7.c
