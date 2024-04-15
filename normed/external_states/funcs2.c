/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_ext_scanner_states10(t_external_scanner_states *v)
{
	v->arr[18][ts_external_token_file_descriptor] = true;
	v->arr[18][ts_external_token_variable_name] = true;
	v->arr[18][ts_external_token_test_operator] = true;
	v->arr[18][ts_external_token__bare_dollar] = true;
	v->arr[18][ts_external_token__brace_start] = true;
	v->arr[18][ts_external_token_LT_LT] = true;
	v->arr[18][ts_external_token_LT_LT_DASH] = true;
	v->arr[18][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[18][ts_external_token_esac] = true;
	v->arr[19][ts_external_token_file_descriptor] = true;
	v->arr[19][ts_external_token_variable_name] = true;
	v->arr[19][ts_external_token_test_operator] = true;
	v->arr[19][ts_external_token__brace_start] = true;
	v->arr[19][ts_external_token_LT_LT] = true;
	v->arr[19][ts_external_token_LT_LT_DASH] = true;
	init_ext_scanner_states11(v);
}

void	init_ext_scanner_states11(t_external_scanner_states *v)
{
	v->arr[19][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[20][ts_external_token_file_descriptor] = true;
	v->arr[20][ts_external_token_variable_name] = true;
	v->arr[20][ts_external_token_test_operator] = true;
	v->arr[20][ts_external_token__bare_dollar] = true;
	v->arr[20][ts_external_token__brace_start] = true;
	v->arr[20][ts_external_token_LT_LT] = true;
	v->arr[20][ts_external_token_LT_LT_DASH] = true;
	v->arr[20][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[21][ts_external_token_file_descriptor] = true;
	v->arr[21][ts_external_token_test_operator] = true;
	v->arr[21][ts_external_token__brace_start] = true;
	v->arr[21][ts_external_token_LT_LT] = true;
	v->arr[21][ts_external_token_LT_LT_DASH] = true;
	v->arr[21][ts_external_token_heredoc_redirect_token1] = true;
	init_ext_scanner_states12(v);
}

void	init_ext_scanner_states12(t_external_scanner_states *v)
{
	v->arr[21][ts_external_token_esac] = true;
	v->arr[22][ts_external_token_file_descriptor] = true;
	v->arr[22][ts_external_token_test_operator] = true;
	v->arr[22][ts_external_token__brace_start] = true;
	v->arr[22][ts_external_token_LT_LT] = true;
	v->arr[22][ts_external_token_LT_LT_DASH] = true;
	v->arr[22][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[23][ts_external_token_file_descriptor] = true;
	v->arr[23][ts_external_token_test_operator] = true;
	v->arr[23][ts_external_token__bare_dollar] = true;
	v->arr[23][ts_external_token__brace_start] = true;
	v->arr[23][ts_external_token_LT_LT] = true;
	v->arr[23][ts_external_token_LT_LT_DASH] = true;
	v->arr[23][ts_external_token_LPAREN] = true;
	v->arr[24][ts_external_token_variable_name] = true;
	init_ext_scanner_states13(v);
}

void	init_ext_scanner_states13(t_external_scanner_states *v)
{
	v->arr[24][ts_external_token_test_operator] = true;
	v->arr[24][ts_external_token__brace_start] = true;
	v->arr[24][ts_external_token_LPAREN] = true;
	v->arr[25][ts_external_token_file_descriptor] = true;
	v->arr[25][ts_external_token_test_operator] = true;
	v->arr[25][ts_external_token__bare_dollar] = true;
	v->arr[25][ts_external_token__brace_start] = true;
	v->arr[25][ts_external_token_LT_LT] = true;
	v->arr[25][ts_external_token_LT_LT_DASH] = true;
	v->arr[26][ts_external_token_file_descriptor] = true;
	v->arr[26][ts_external_token_test_operator] = true;
	v->arr[26][ts_external_token__brace_start] = true;
	v->arr[26][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[27][ts_external_token_file_descriptor] = true;
	v->arr[27][ts_external_token_variable_name] = true;
	init_ext_scanner_states14(v);
}

void	init_ext_scanner_states14(t_external_scanner_states *v)
{
	v->arr[27][ts_external_token_test_operator] = true;
	v->arr[27][ts_external_token__bare_dollar] = true;
	v->arr[27][ts_external_token__brace_start] = true;
	v->arr[27][ts_external_token_LT_LT] = true;
	v->arr[27][ts_external_token_LT_LT_DASH] = true;
	v->arr[27][ts_external_token_LPAREN] = true;
	v->arr[28][ts_external_token_file_descriptor] = true;
	v->arr[28][ts_external_token_variable_name] = true;
	v->arr[28][ts_external_token_test_operator] = true;
	v->arr[28][ts_external_token__bare_dollar] = true;
	v->arr[28][ts_external_token__brace_start] = true;
	v->arr[28][ts_external_token_LT_LT] = true;
	v->arr[28][ts_external_token_LT_LT_DASH] = true;
	v->arr[29][ts_external_token_file_descriptor] = true;
	v->arr[29][ts_external_token_variable_name] = true;
	init_ext_scanner_states15(v);
}

// file funcs2.c
