/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs300.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table1500(t_small_table *v)
{
	v->arr[22499] = anon_sym_DOLLAR;
	v->arr[22500] = 3789;
	v->arr[22501] = 1;
	v->arr[22502] = sym__special_character;
	v->arr[22503] = 3791;
	v->arr[22504] = 1;
	v->arr[22505] = anon_sym_DQUOTE;
	v->arr[22506] = 3793;
	v->arr[22507] = 1;
	v->arr[22508] = aux_sym_number_token1;
	v->arr[22509] = 3795;
	v->arr[22510] = 1;
	v->arr[22511] = aux_sym_number_token2;
	v->arr[22512] = 3797;
	v->arr[22513] = 1;
	init_small_table1501(v);
}

void	init_small_table1501(t_small_table *v)
{
	v->arr[22514] = anon_sym_DOLLAR_LBRACE;
	v->arr[22515] = 3799;
	v->arr[22516] = 1;
	v->arr[22517] = anon_sym_DOLLAR_LPAREN;
	v->arr[22518] = 3801;
	v->arr[22519] = 1;
	v->arr[22520] = anon_sym_BQUOTE;
	v->arr[22521] = 3803;
	v->arr[22522] = 1;
	v->arr[22523] = anon_sym_DOLLAR_BQUOTE;
	v->arr[22524] = 3809;
	v->arr[22525] = 1;
	v->arr[22526] = sym__brace_start;
	v->arr[22527] = 4052;
	v->arr[22528] = 1;
	init_small_table1502(v);
}

void	init_small_table1502(t_small_table *v)
{
	v->arr[22529] = sym_test_operator;
	v->arr[22530] = 4305;
	v->arr[22531] = 1;
	v->arr[22532] = aux_sym__literal_repeat1;
	v->arr[22533] = 4736;
	v->arr[22534] = 1;
	v->arr[22535] = sym_concatenation;
	v->arr[22536] = 2500;
	v->arr[22537] = 2;
	v->arr[22538] = sym_file_descriptor;
	v->arr[22539] = aux_sym_heredoc_redirect_token1;
	v->arr[22540] = 3783;
	v->arr[22541] = 2;
	v->arr[22542] = anon_sym_LPAREN_LPAREN;
	v->arr[22543] = anon_sym_DOLLAR_LPAREN_LPAREN;
	init_small_table1503(v);
}

void	init_small_table1503(t_small_table *v)
{
	v->arr[22544] = 3805;
	v->arr[22545] = 2;
	v->arr[22546] = anon_sym_LT_LPAREN;
	v->arr[22547] = anon_sym_GT_LPAREN;
	v->arr[22548] = 4050;
	v->arr[22549] = 3;
	v->arr[22550] = sym_raw_string;
	v->arr[22551] = sym_ansi_c_string;
	v->arr[22552] = sym_word;
	v->arr[22553] = 4582;
	v->arr[22554] = 9;
	v->arr[22555] = sym_arithmetic_expansion;
	v->arr[22556] = sym_brace_expression;
	v->arr[22557] = sym_string;
	v->arr[22558] = sym_translated_string;
	init_small_table1504(v);
}

void	init_small_table1504(t_small_table *v)
{
	v->arr[22559] = sym_number;
	v->arr[22560] = sym_simple_expansion;
	v->arr[22561] = sym_expansion;
	v->arr[22562] = sym_command_substitution;
	v->arr[22563] = sym_process_substitution;
	v->arr[22564] = 2498;
	v->arr[22565] = 21;
	v->arr[22566] = anon_sym_SEMI;
	v->arr[22567] = anon_sym_PIPE_PIPE;
	v->arr[22568] = anon_sym_AMP_AMP;
	v->arr[22569] = anon_sym_PIPE;
	v->arr[22570] = anon_sym_AMP;
	v->arr[22571] = anon_sym_LT;
	v->arr[22572] = anon_sym_GT;
	v->arr[22573] = anon_sym_LT_LT;
	init_small_table1505(v);
}

// file funcs300.c
