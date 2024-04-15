/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1080.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table5400(t_small_table *v)
{
	v->arr[80999] = anon_sym_AMP_GT;
	v->arr[81000] = anon_sym_AMP_GT_GT;
	v->arr[81001] = anon_sym_LT_AMP;
	v->arr[81002] = anon_sym_GT_AMP;
	v->arr[81003] = anon_sym_GT_PIPE;
	v->arr[81004] = anon_sym_LT_AMP_DASH;
	v->arr[81005] = anon_sym_GT_AMP_DASH;
	v->arr[81006] = anon_sym_LT_LT_LT;
	v->arr[81007] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[81008] = anon_sym_DOLLAR_LBRACK;
	v->arr[81009] = anon_sym_DOLLAR;
	v->arr[81010] = sym__special_character;
	v->arr[81011] = anon_sym_DQUOTE;
	v->arr[81012] = sym_raw_string;
	v->arr[81013] = sym_ansi_c_string;
	init_small_table5401(v);
}

void	init_small_table5401(t_small_table *v)
{
	v->arr[81014] = aux_sym_number_token1;
	v->arr[81015] = aux_sym_number_token2;
	v->arr[81016] = anon_sym_DOLLAR_LBRACE;
	v->arr[81017] = anon_sym_DOLLAR_LPAREN;
	v->arr[81018] = anon_sym_BQUOTE;
	v->arr[81019] = anon_sym_DOLLAR_BQUOTE;
	v->arr[81020] = anon_sym_LT_LPAREN;
	v->arr[81021] = anon_sym_GT_LPAREN;
	v->arr[81022] = sym_word;
	v->arr[81024] = 11;
	v->arr[81024] = 3;
	v->arr[81025] = 1;
	v->arr[81026] = sym_comment;
	v->arr[81027] = 5776;
	v->arr[81028] = 1;
	init_small_table5402(v);
}

void	init_small_table5402(t_small_table *v)
{
	v->arr[81029] = sym_variable_name;
	v->arr[81030] = 5944;
	v->arr[81031] = 1;
	v->arr[81032] = aux_sym_heredoc_redirect_token1;
	v->arr[81033] = 6746;
	v->arr[81034] = 1;
	v->arr[81035] = sym_subscript;
	v->arr[81036] = 4253;
	v->arr[81037] = 2;
	v->arr[81038] = anon_sym_PIPE;
	v->arr[81039] = anon_sym_PIPE_AMP;
	v->arr[81040] = 4692;
	v->arr[81041] = 2;
	v->arr[81042] = anon_sym_LT_LT;
	v->arr[81043] = anon_sym_LT_LT_DASH;
	init_small_table5403(v);
}

void	init_small_table5403(t_small_table *v)
{
	v->arr[81044] = 5940;
	v->arr[81045] = 2;
	v->arr[81046] = anon_sym_PIPE_PIPE;
	v->arr[81047] = anon_sym_AMP_AMP;
	v->arr[81048] = 5148;
	v->arr[81049] = 2;
	v->arr[81050] = sym_variable_assignment;
	v->arr[81051] = aux_sym_variable_assignments_repeat1;
	v->arr[81052] = 4261;
	v->arr[81053] = 3;
	v->arr[81054] = sym_file_descriptor;
	v->arr[81055] = sym_test_operator;
	v->arr[81056] = sym__brace_start;
	v->arr[81057] = 5366;
	v->arr[81058] = 3;
	init_small_table5404(v);
}

void	init_small_table5404(t_small_table *v)
{
	v->arr[81059] = sym_file_redirect;
	v->arr[81060] = sym_heredoc_redirect;
	v->arr[81061] = aux_sym_redirected_statement_repeat1;
	v->arr[81062] = 4247;
	v->arr[81063] = 28;
	v->arr[81064] = anon_sym_LPAREN_LPAREN;
	v->arr[81065] = anon_sym_LT;
	v->arr[81066] = anon_sym_GT;
	v->arr[81067] = anon_sym_GT_GT;
	v->arr[81068] = anon_sym_AMP_GT;
	v->arr[81069] = anon_sym_AMP_GT_GT;
	v->arr[81070] = anon_sym_LT_AMP;
	v->arr[81071] = anon_sym_GT_AMP;
	v->arr[81072] = anon_sym_GT_PIPE;
	v->arr[81073] = anon_sym_LT_AMP_DASH;
	init_small_table5405(v);
}

// file funcs1080.c
