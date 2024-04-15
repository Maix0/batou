/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs6.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_ext_scanner_states30(t_external_scanner_states *v)
{
	v->arr[72][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[73][ts_external_token_test_operator] = true;
	v->arr[73][ts_external_token__brace_start] = true;
	v->arr[73][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[74][ts_external_token_variable_name] = true;
	v->arr[74][ts_external_token_test_operator] = true;
	v->arr[74][ts_external_token__expansion_word] = true;
	v->arr[74][ts_external_token__brace_start] = true;
	v->arr[74][ts_external_token_RBRACE] = true;
	v->arr[74][ts_external_token_LPAREN] = true;
	v->arr[75][ts_external_token__empty_value] = true;
	v->arr[75][ts_external_token_test_operator] = true;
	v->arr[75][ts_external_token__brace_start] = true;
	v->arr[75][ts_external_token_LPAREN] = true;
	v->arr[76][ts_external_token__immediate_double_hash] = true;
	init_ext_scanner_states31(v);
}

void	init_ext_scanner_states31(t_external_scanner_states *v)
{
	v->arr[76][ts_external_token__external_expansion_sym_hash] = true;
	v->arr[76][ts_external_token__external_expansion_sym_bang] = true;
	v->arr[76][ts_external_token__external_expansion_sym_equal] = true;
	v->arr[76][ts_external_token_RBRACE] = true;
	v->arr[77][ts_external_token_file_descriptor] = true;
	v->arr[77][ts_external_token_variable_name] = true;
	v->arr[77][ts_external_token_RBRACK] = true;
	v->arr[77][ts_external_token_LT_LT] = true;
	v->arr[77][ts_external_token_LT_LT_DASH] = true;
	v->arr[78][ts_external_token_test_operator] = true;
	v->arr[78][ts_external_token__brace_start] = true;
	v->arr[79][ts_external_token_test_operator] = true;
	v->arr[79][ts_external_token_extglob_pattern] = true;
	v->arr[79][ts_external_token__brace_start] = true;
	v->arr[80][ts_external_token_variable_name] = true;
	init_ext_scanner_states32(v);
}

void	init_ext_scanner_states32(t_external_scanner_states *v)
{
	v->arr[80][ts_external_token_test_operator] = true;
	v->arr[80][ts_external_token__brace_start] = true;
	v->arr[81][ts_external_token_file_descriptor] = true;
	v->arr[81][ts_external_token_variable_name] = true;
	v->arr[81][ts_external_token_LT_LT] = true;
	v->arr[81][ts_external_token_LT_LT_DASH] = true;
	v->arr[82][ts_external_token_test_operator] = true;
	v->arr[82][ts_external_token__bare_dollar] = true;
	v->arr[82][ts_external_token__brace_start] = true;
	v->arr[82][ts_external_token_RBRACK] = true;
	v->arr[83][ts_external_token_test_operator] = true;
	v->arr[83][ts_external_token_regex] = true;
	v->arr[83][ts_external_token__brace_start] = true;
	v->arr[84][ts_external_token__immediate_double_hash] = true;
	v->arr[84][ts_external_token_RBRACE] = true;
	init_ext_scanner_states33(v);
}

void	init_ext_scanner_states33(t_external_scanner_states *v)
{
	v->arr[85][ts_external_token_test_operator] = true;
	v->arr[85][ts_external_token__bare_dollar] = true;
	v->arr[85][ts_external_token__brace_start] = true;
	v->arr[86][ts_external_token_variable_name] = true;
	v->arr[86][ts_external_token_LPAREN] = true;
	v->arr[87][ts_external_token_file_descriptor] = true;
	v->arr[87][ts_external_token_variable_name] = true;
	v->arr[87][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[88][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[88][ts_external_token_LPAREN] = true;
	v->arr[89][ts_external_token_file_descriptor] = true;
	v->arr[89][ts_external_token__concat] = true;
	v->arr[89][ts_external_token_LT_LT] = true;
	v->arr[89][ts_external_token_LT_LT_DASH] = true;
	v->arr[89][ts_external_token_heredoc_redirect_token1] = true;
	init_ext_scanner_states34(v);
}

void	init_ext_scanner_states34(t_external_scanner_states *v)
{
	v->arr[89][ts_external_token_esac] = true;
	v->arr[90][ts_external_token__immediate_double_hash] = true;
	v->arr[91][ts_external_token_file_descriptor] = true;
	v->arr[91][ts_external_token__concat] = true;
	v->arr[91][ts_external_token_variable_name] = true;
	v->arr[91][ts_external_token_LT_LT] = true;
	v->arr[91][ts_external_token_LT_LT_DASH] = true;
	v->arr[91][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[91][ts_external_token_esac] = true;
	v->arr[92][ts_external_token_file_descriptor] = true;
	v->arr[92][ts_external_token_LT_LT] = true;
	v->arr[92][ts_external_token_LT_LT_DASH] = true;
	v->arr[92][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[92][ts_external_token_esac] = true;
	v->arr[93][ts_external_token_file_descriptor] = true;
	init_ext_scanner_states35(v);
}

// file funcs6.c
