/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_ext_scanner_states25(t_external_scanner_states *v)
{
	v->arr[55][ts_external_token__brace_start] = true;
	v->arr[55][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[55][ts_external_token_LPAREN] = true;
	v->arr[55][ts_external_token_esac] = true;
	v->arr[56][ts_external_token_file_descriptor] = true;
	v->arr[56][ts_external_token__concat] = true;
	v->arr[56][ts_external_token_variable_name] = true;
	v->arr[56][ts_external_token_test_operator] = true;
	v->arr[56][ts_external_token__brace_start] = true;
	v->arr[56][ts_external_token_LT_LT] = true;
	v->arr[56][ts_external_token_LT_LT_DASH] = true;
	v->arr[57][ts_external_token_file_descriptor] = true;
	v->arr[57][ts_external_token__concat] = true;
	v->arr[57][ts_external_token_test_operator] = true;
	v->arr[57][ts_external_token__brace_start] = true;
	init_ext_scanner_states26(v);
}

void	init_ext_scanner_states26(t_external_scanner_states *v)
{
	v->arr[57][ts_external_token_RBRACK] = true;
	v->arr[57][ts_external_token_LT_LT] = true;
	v->arr[57][ts_external_token_LT_LT_DASH] = true;
	v->arr[58][ts_external_token_test_operator] = true;
	v->arr[58][ts_external_token_extglob_pattern] = true;
	v->arr[58][ts_external_token_LT_LT] = true;
	v->arr[59][ts_external_token_file_descriptor] = true;
	v->arr[59][ts_external_token__concat] = true;
	v->arr[59][ts_external_token_test_operator] = true;
	v->arr[59][ts_external_token__brace_start] = true;
	v->arr[59][ts_external_token_LT_LT] = true;
	v->arr[59][ts_external_token_LT_LT_DASH] = true;
	v->arr[60][ts_external_token_LT_LT] = true;
	v->arr[61][ts_external_token__concat] = true;
	v->arr[61][ts_external_token_test_operator] = true;
	init_ext_scanner_states27(v);
}

void	init_ext_scanner_states27(t_external_scanner_states *v)
{
	v->arr[61][ts_external_token_extglob_pattern] = true;
	v->arr[61][ts_external_token_RBRACK] = true;
	v->arr[61][ts_external_token_LT_LT] = true;
	v->arr[62][ts_external_token__concat] = true;
	v->arr[62][ts_external_token_LT_LT] = true;
	v->arr[63][ts_external_token_file_descriptor] = true;
	v->arr[63][ts_external_token_variable_name] = true;
	v->arr[63][ts_external_token_LT_LT] = true;
	v->arr[63][ts_external_token_LT_LT_DASH] = true;
	v->arr[63][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[63][ts_external_token_esac] = true;
	v->arr[64][ts_external_token_LT_LT] = true;
	v->arr[64][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[65][ts_external_token_test_operator] = true;
	v->arr[65][ts_external_token_extglob_pattern] = true;
	init_ext_scanner_states28(v);
}

void	init_ext_scanner_states28(t_external_scanner_states *v)
{
	v->arr[65][ts_external_token_RBRACK] = true;
	v->arr[65][ts_external_token_LT_LT] = true;
	v->arr[66][ts_external_token_file_descriptor] = true;
	v->arr[66][ts_external_token_variable_name] = true;
	v->arr[66][ts_external_token_LT_LT] = true;
	v->arr[66][ts_external_token_LT_LT_DASH] = true;
	v->arr[66][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[67][ts_external_token_test_operator] = true;
	v->arr[67][ts_external_token_extglob_pattern] = true;
	v->arr[67][ts_external_token__brace_start] = true;
	v->arr[67][ts_external_token_LPAREN] = true;
	v->arr[67][ts_external_token_esac] = true;
	v->arr[68][ts_external_token__concat] = true;
	v->arr[68][ts_external_token_RBRACK] = true;
	v->arr[68][ts_external_token_LT_LT] = true;
	init_ext_scanner_states29(v);
}

void	init_ext_scanner_states29(t_external_scanner_states *v)
{
	v->arr[69][ts_external_token_RBRACK] = true;
	v->arr[69][ts_external_token_LT_LT] = true;
	v->arr[70][ts_external_token_file_descriptor] = true;
	v->arr[70][ts_external_token__concat] = true;
	v->arr[70][ts_external_token_test_operator] = true;
	v->arr[70][ts_external_token__brace_start] = true;
	v->arr[70][ts_external_token_heredoc_redirect_token1] = true;
	v->arr[71][ts_external_token_file_descriptor] = true;
	v->arr[71][ts_external_token__concat] = true;
	v->arr[71][ts_external_token_variable_name] = true;
	v->arr[71][ts_external_token_test_operator] = true;
	v->arr[71][ts_external_token__brace_start] = true;
	v->arr[72][ts_external_token_variable_name] = true;
	v->arr[72][ts_external_token_test_operator] = true;
	v->arr[72][ts_external_token__brace_start] = true;
	init_ext_scanner_states30(v);
}

// file funcs5.c
