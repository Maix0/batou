/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_ext_scanner_states15(t_external_scanner_states *v)
{
	v->arr[29][ts_external_token_test_operator] = true;
	v->arr[29][ts_external_token__brace_start] = true;
	v->arr[29][ts_external_token_LT_LT] = true;
	v->arr[29][ts_external_token_LT_LT_DASH] = true;
	v->arr[30][ts_external_token_file_descriptor] = true;
	v->arr[30][ts_external_token__concat] = true;
	v->arr[30][ts_external_token_test_operator] = true;
	v->arr[30][ts_external_token__bare_dollar] = true;
	v->arr[30][ts_external_token__brace_start] = true;
	v->arr[30][ts_external_token_LT_LT] = true;
	v->arr[30][ts_external_token_LT_LT_DASH] = true;
	v->arr[30][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[30][ts_external_token_LPAREN] = true;
	v->arr[30][ts_external_token_esac] = true;
	v->arr[31][ts_external_token_file_descriptor] = true;
	init_ext_scanner_states16(v);
}

void	init_ext_scanner_states16(t_external_scanner_states *v)
{
	v->arr[31][ts_external_token_variable_name] = true;
	v->arr[31][ts_external_token_test_operator] = true;
	v->arr[31][ts_external_token__brace_start] = true;
	v->arr[31][ts_external_token_RBRACK] = true;
	v->arr[31][ts_external_token_LT_LT] = true;
	v->arr[31][ts_external_token_LT_LT_DASH] = true;
	v->arr[32][ts_external_token_file_descriptor] = true;
	v->arr[32][ts_external_token__concat] = true;
	v->arr[32][ts_external_token_test_operator] = true;
	v->arr[32][ts_external_token__bare_dollar] = true;
	v->arr[32][ts_external_token__brace_start] = true;
	v->arr[32][ts_external_token_LT_LT] = true;
	v->arr[32][ts_external_token_LT_LT_DASH] = true;
	v->arr[32][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[32][ts_external_token_esac] = true;
	init_ext_scanner_states17(v);
}

void	init_ext_scanner_states17(t_external_scanner_states *v)
{
	v->arr[33][ts_external_token_file_descriptor] = true;
	v->arr[33][ts_external_token_test_operator] = true;
	v->arr[33][ts_external_token__brace_start] = true;
	v->arr[33][ts_external_token_RBRACK] = true;
	v->arr[33][ts_external_token_LT_LT] = true;
	v->arr[33][ts_external_token_LT_LT_DASH] = true;
	v->arr[34][ts_external_token_file_descriptor] = true;
	v->arr[34][ts_external_token_test_operator] = true;
	v->arr[34][ts_external_token__brace_start] = true;
	v->arr[34][ts_external_token_LT_LT] = true;
	v->arr[34][ts_external_token_LT_LT_DASH] = true;
	v->arr[35][ts_external_token__concat] = true;
	v->arr[35][ts_external_token_variable_name] = true;
	v->arr[35][ts_external_token_test_operator] = true;
	v->arr[35][ts_external_token_RBRACK] = true;
	init_ext_scanner_states18(v);
}

void	init_ext_scanner_states18(t_external_scanner_states *v)
{
	v->arr[35][ts_external_token_LT_LT] = true;
	v->arr[36][ts_external_token_file_descriptor] = true;
	v->arr[36][ts_external_token_variable_name] = true;
	v->arr[36][ts_external_token_test_operator] = true;
	v->arr[36][ts_external_token__brace_start] = true;
	v->arr[37][ts_external_token_file_descriptor] = true;
	v->arr[37][ts_external_token__concat] = true;
	v->arr[37][ts_external_token_test_operator] = true;
	v->arr[37][ts_external_token__bare_dollar] = true;
	v->arr[37][ts_external_token__brace_start] = true;
	v->arr[37][ts_external_token_LT_LT] = true;
	v->arr[37][ts_external_token_LT_LT_DASH] = true;
	v->arr[37][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[38][ts_external_token_file_descriptor] = true;
	v->arr[38][ts_external_token__concat] = true;
	init_ext_scanner_states19(v);
}

void	init_ext_scanner_states19(t_external_scanner_states *v)
{
	v->arr[38][ts_external_token_variable_name] = true;
	v->arr[38][ts_external_token_test_operator] = true;
	v->arr[38][ts_external_token__brace_start] = true;
	v->arr[38][ts_external_token_LT_LT] = true;
	v->arr[38][ts_external_token_LT_LT_DASH] = true;
	v->arr[38][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[38][ts_external_token_esac] = true;
	v->arr[39][ts_external_token_variable_name] = true;
	v->arr[39][ts_external_token_test_operator] = true;
	v->arr[39][ts_external_token_LT_LT] = true;
	v->arr[40][ts_external_token_variable_name] = true;
	v->arr[40][ts_external_token_test_operator] = true;
	v->arr[40][ts_external_token_RBRACK] = true;
	v->arr[40][ts_external_token_LT_LT] = true;
	v->arr[41][ts_external_token_file_descriptor] = true;
	init_ext_scanner_states20(v);
}

// file funcs3.c
