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

void	init_ext_scanner_states5(t_external_scanner_states *v)
{
	v->arr[9][ts_external_token_variable_name] = true;
	v->arr[9][ts_external_token_test_operator] = true;
	v->arr[9][ts_external_token__bare_dollar] = true;
	v->arr[9][ts_external_token__brace_start] = true;
	v->arr[9][ts_external_token_LT_LT] = true;
	v->arr[9][ts_external_token_LT_LT_DASH] = true;
	v->arr[9][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[9][ts_external_token_LPAREN] = true;
	v->arr[10][ts_external_token_file_descriptor] = true;
	v->arr[10][ts_external_token_variable_name] = true;
	v->arr[10][ts_external_token_test_operator] = true;
	v->arr[10][ts_external_token__bare_dollar] = true;
	v->arr[10][ts_external_token__brace_start] = true;
	v->arr[10][ts_external_token_RBRACK] = true;
	v->arr[10][ts_external_token_LT_LT] = true;
	init_ext_scanner_states6(v);
}

void	init_ext_scanner_states6(t_external_scanner_states *v)
{
	v->arr[10][ts_external_token_LT_LT_DASH] = true;
	v->arr[10][ts_external_token_LPAREN] = true;
	v->arr[11][ts_external_token_file_descriptor] = true;
	v->arr[11][ts_external_token_test_operator] = true;
	v->arr[11][ts_external_token__bare_dollar] = true;
	v->arr[11][ts_external_token__brace_start] = true;
	v->arr[11][ts_external_token_LT_LT] = true;
	v->arr[11][ts_external_token_LT_LT_DASH] = true;
	v->arr[11][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[11][ts_external_token_LPAREN] = true;
	v->arr[12][ts_external_token_file_descriptor] = true;
	v->arr[12][ts_external_token_test_operator] = true;
	v->arr[12][ts_external_token__bare_dollar] = true;
	v->arr[12][ts_external_token__brace_start] = true;
	v->arr[12][ts_external_token_RBRACK] = true;
	init_ext_scanner_states7(v);
}

void	init_ext_scanner_states7(t_external_scanner_states *v)
{
	v->arr[12][ts_external_token_LT_LT] = true;
	v->arr[12][ts_external_token_LT_LT_DASH] = true;
	v->arr[12][ts_external_token_LPAREN] = true;
	v->arr[13][ts_external_token_file_descriptor] = true;
	v->arr[13][ts_external_token_test_operator] = true;
	v->arr[13][ts_external_token__bare_dollar] = true;
	v->arr[13][ts_external_token__brace_start] = true;
	v->arr[13][ts_external_token_LT_LT] = true;
	v->arr[13][ts_external_token_LT_LT_DASH] = true;
	v->arr[13][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[13][ts_external_token_LPAREN] = true;
	v->arr[13][ts_external_token_esac] = true;
	v->arr[14][ts_external_token_file_descriptor] = true;
	v->arr[14][ts_external_token_test_operator] = true;
	v->arr[14][ts_external_token__bare_dollar] = true;
	init_ext_scanner_states8(v);
}

void	init_ext_scanner_states8(t_external_scanner_states *v)
{
	v->arr[14][ts_external_token__brace_start] = true;
	v->arr[14][ts_external_token_LT_LT] = true;
	v->arr[14][ts_external_token_LT_LT_DASH] = true;
	v->arr[14][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[14][ts_external_token_esac] = true;
	v->arr[15][ts_external_token_file_descriptor] = true;
	v->arr[15][ts_external_token_variable_name] = true;
	v->arr[15][ts_external_token_test_operator] = true;
	v->arr[15][ts_external_token__bare_dollar] = true;
	v->arr[15][ts_external_token__brace_start] = true;
	v->arr[15][ts_external_token_LT_LT] = true;
	v->arr[15][ts_external_token_LT_LT_DASH] = true;
	v->arr[15][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[15][ts_external_token_LPAREN] = true;
	v->arr[15][ts_external_token_esac] = true;
	init_ext_scanner_states9(v);
}

void	init_ext_scanner_states9(t_external_scanner_states *v)
{
	v->arr[16][ts_external_token_file_descriptor] = true;
	v->arr[16][ts_external_token_test_operator] = true;
	v->arr[16][ts_external_token__bare_dollar] = true;
	v->arr[16][ts_external_token__brace_start] = true;
	v->arr[16][ts_external_token_LT_LT] = true;
	v->arr[16][ts_external_token_LT_LT_DASH] = true;
	v->arr[16][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[17][ts_external_token_file_descriptor] = true;
	v->arr[17][ts_external_token_variable_name] = true;
	v->arr[17][ts_external_token_test_operator] = true;
	v->arr[17][ts_external_token__brace_start] = true;
	v->arr[17][ts_external_token_LT_LT] = true;
	v->arr[17][ts_external_token_LT_LT_DASH] = true;
	v->arr[17][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[17][ts_external_token_esac] = true;
	init_ext_scanner_states10(v);
}

// file funcs1.c
