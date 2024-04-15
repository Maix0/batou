/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs800.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table4000(t_small_table *v)
{
	v->arr[59999] = 5;
	v->arr[60000] = sym_file_descriptor;
	v->arr[60001] = sym_variable_name;
	v->arr[60002] = sym_test_operator;
	v->arr[60003] = sym__brace_start;
	v->arr[60004] = aux_sym_heredoc_redirect_token1;
	v->arr[60005] = 2072;
	v->arr[60006] = 38;
	v->arr[60007] = anon_sym_LPAREN_LPAREN;
	v->arr[60008] = anon_sym_SEMI;
	v->arr[60009] = anon_sym_PIPE_PIPE;
	v->arr[60010] = anon_sym_AMP_AMP;
	v->arr[60011] = anon_sym_PIPE;
	v->arr[60012] = anon_sym_AMP;
	v->arr[60013] = anon_sym_LT;
	init_small_table4001(v);
}

void	init_small_table4001(t_small_table *v)
{
	v->arr[60014] = anon_sym_GT;
	v->arr[60015] = anon_sym_LT_LT;
	v->arr[60016] = anon_sym_GT_GT;
	v->arr[60017] = anon_sym_RPAREN;
	v->arr[60018] = anon_sym_SEMI_SEMI;
	v->arr[60019] = anon_sym_PIPE_AMP;
	v->arr[60020] = anon_sym_AMP_GT;
	v->arr[60021] = anon_sym_AMP_GT_GT;
	v->arr[60022] = anon_sym_LT_AMP;
	v->arr[60023] = anon_sym_GT_AMP;
	v->arr[60024] = anon_sym_GT_PIPE;
	v->arr[60025] = anon_sym_LT_AMP_DASH;
	v->arr[60026] = anon_sym_GT_AMP_DASH;
	v->arr[60027] = anon_sym_LT_LT_DASH;
	v->arr[60028] = anon_sym_LT_LT_LT;
	init_small_table4002(v);
}

void	init_small_table4002(t_small_table *v)
{
	v->arr[60029] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[60030] = anon_sym_DOLLAR_LBRACK;
	v->arr[60031] = anon_sym_DOLLAR;
	v->arr[60032] = sym__special_character;
	v->arr[60033] = anon_sym_DQUOTE;
	v->arr[60034] = sym_raw_string;
	v->arr[60035] = sym_ansi_c_string;
	v->arr[60036] = aux_sym_number_token1;
	v->arr[60037] = aux_sym_number_token2;
	v->arr[60038] = anon_sym_DOLLAR_LBRACE;
	v->arr[60039] = anon_sym_DOLLAR_LPAREN;
	v->arr[60040] = anon_sym_BQUOTE;
	v->arr[60041] = anon_sym_DOLLAR_BQUOTE;
	v->arr[60042] = anon_sym_LT_LPAREN;
	v->arr[60043] = anon_sym_GT_LPAREN;
	init_small_table4003(v);
}

void	init_small_table4003(t_small_table *v)
{
	v->arr[60044] = sym_word;
	v->arr[60046] = 6;
	v->arr[60046] = 3;
	v->arr[60047] = 1;
	v->arr[60048] = sym_comment;
	v->arr[60049] = 5634;
	v->arr[60050] = 1;
	v->arr[60051] = aux_sym_concatenation_token1;
	v->arr[60052] = 5636;
	v->arr[60053] = 1;
	v->arr[60054] = sym__concat;
	v->arr[60055] = 1443;
	v->arr[60056] = 1;
	v->arr[60057] = aux_sym_concatenation_repeat1;
	v->arr[60058] = 5375;
	init_small_table4004(v);
}

void	init_small_table4004(t_small_table *v)
{
	v->arr[60059] = 6;
	v->arr[60060] = sym_file_descriptor;
	v->arr[60061] = sym_variable_name;
	v->arr[60062] = sym_test_operator;
	v->arr[60063] = sym__brace_start;
	v->arr[60064] = 0;
	v->arr[60065] = aux_sym_heredoc_redirect_token1;
	v->arr[60066] = 5373;
	v->arr[60067] = 37;
	v->arr[60068] = anon_sym_LPAREN_LPAREN;
	v->arr[60069] = anon_sym_SEMI;
	v->arr[60070] = anon_sym_PIPE_PIPE;
	v->arr[60071] = anon_sym_AMP_AMP;
	v->arr[60072] = anon_sym_PIPE;
	v->arr[60073] = anon_sym_AMP;
	init_small_table4005(v);
}

// file funcs800.c
