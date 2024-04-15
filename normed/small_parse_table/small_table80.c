/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs80.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table400(t_small_table *v)
{
	v->arr[5999] = 1567;
	v->arr[6000] = 1;
	v->arr[6001] = anon_sym_DOLLAR_BQUOTE;
	v->arr[6002] = 1573;
	v->arr[6003] = 1;
	v->arr[6004] = sym__bare_dollar;
	v->arr[6005] = 1575;
	v->arr[6006] = 1;
	v->arr[6007] = sym__brace_start;
	v->arr[6008] = 1690;
	v->arr[6009] = 1;
	v->arr[6010] = anon_sym_LT_LT_LT;
	v->arr[6011] = 1692;
	v->arr[6012] = 1;
	v->arr[6013] = sym__special_character;
	init_small_table401(v);
}

void	init_small_table401(t_small_table *v)
{
	v->arr[6014] = 1694;
	v->arr[6015] = 1;
	v->arr[6016] = sym_test_operator;
	v->arr[6017] = 574;
	v->arr[6018] = 1;
	v->arr[6019] = aux_sym_command_repeat2;
	v->arr[6020] = 1321;
	v->arr[6021] = 1;
	v->arr[6022] = aux_sym__literal_repeat1;
	v->arr[6023] = 1712;
	v->arr[6024] = 1;
	v->arr[6025] = sym_herestring_redirect;
	v->arr[6026] = 1716;
	v->arr[6027] = 1;
	v->arr[6028] = sym_concatenation;
	init_small_table402(v);
}

void	init_small_table402(t_small_table *v)
{
	v->arr[6029] = 1543;
	v->arr[6030] = 2;
	v->arr[6031] = anon_sym_LPAREN_LPAREN;
	v->arr[6032] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[6033] = 1569;
	v->arr[6034] = 2;
	v->arr[6035] = anon_sym_LT_LPAREN;
	v->arr[6036] = anon_sym_GT_LPAREN;
	v->arr[6037] = 1615;
	v->arr[6038] = 2;
	v->arr[6039] = sym_file_descriptor;
	v->arr[6040] = aux_sym_heredoc_redirect_token1;
	v->arr[6041] = 1688;
	v->arr[6042] = 2;
	v->arr[6043] = anon_sym_EQ_EQ;
	init_small_table403(v);
}

void	init_small_table403(t_small_table *v)
{
	v->arr[6044] = anon_sym_EQ_TILDE;
	v->arr[6045] = 1686;
	v->arr[6046] = 3;
	v->arr[6047] = sym_raw_string;
	v->arr[6048] = sym_ansi_c_string;
	v->arr[6049] = sym_word;
	v->arr[6050] = 1219;
	v->arr[6051] = 9;
	v->arr[6052] = sym_arithmetic_expansion;
	v->arr[6053] = sym_brace_expression;
	v->arr[6054] = sym_string;
	v->arr[6055] = sym_translated_string;
	v->arr[6056] = sym_number;
	v->arr[6057] = sym_simple_expansion;
	v->arr[6058] = sym_expansion;
	init_small_table404(v);
}

void	init_small_table404(t_small_table *v)
{
	v->arr[6059] = sym_command_substitution;
	v->arr[6060] = sym_process_substitution;
	v->arr[6061] = 1613;
	v->arr[6062] = 20;
	v->arr[6063] = anon_sym_SEMI;
	v->arr[6064] = anon_sym_PIPE_PIPE;
	v->arr[6065] = anon_sym_AMP_AMP;
	v->arr[6066] = anon_sym_PIPE;
	v->arr[6067] = anon_sym_AMP;
	v->arr[6068] = anon_sym_LT;
	v->arr[6069] = anon_sym_GT;
	v->arr[6070] = anon_sym_LT_LT;
	v->arr[6071] = anon_sym_GT_GT;
	v->arr[6072] = anon_sym_SEMI_SEMI;
	v->arr[6073] = anon_sym_PIPE_AMP;
	init_small_table405(v);
}

// file funcs80.c
