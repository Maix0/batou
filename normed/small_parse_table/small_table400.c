/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs400.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table2000(t_small_table *v)
{
	v->arr[29999] = sym_command_substitution;
	v->arr[30000] = sym_process_substitution;
	v->arr[30001] = 2072;
	v->arr[30002] = 17;
	v->arr[30003] = anon_sym_PIPE_PIPE;
	v->arr[30004] = anon_sym_AMP_AMP;
	v->arr[30005] = anon_sym_PIPE;
	v->arr[30006] = anon_sym_LT;
	v->arr[30007] = anon_sym_GT;
	v->arr[30008] = anon_sym_LT_LT;
	v->arr[30009] = anon_sym_GT_GT;
	v->arr[30010] = anon_sym_PIPE_AMP;
	v->arr[30011] = anon_sym_AMP_GT;
	v->arr[30012] = anon_sym_AMP_GT_GT;
	v->arr[30013] = anon_sym_LT_AMP;
	init_small_table2001(v);
}

void	init_small_table2001(t_small_table *v)
{
	v->arr[30014] = anon_sym_GT_AMP;
	v->arr[30015] = anon_sym_GT_PIPE;
	v->arr[30016] = anon_sym_LT_AMP_DASH;
	v->arr[30017] = anon_sym_GT_AMP_DASH;
	v->arr[30018] = anon_sym_LT_LT_DASH;
	v->arr[30019] = anon_sym_LT_LT_LT;
	v->arr[30021] = 21;
	v->arr[30021] = 3;
	v->arr[30022] = 1;
	v->arr[30023] = sym_comment;
	v->arr[30024] = 3115;
	v->arr[30025] = 1;
	v->arr[30026] = anon_sym_DQUOTE;
	v->arr[30027] = 3395;
	v->arr[30028] = 1;
	init_small_table2002(v);
}

void	init_small_table2002(t_small_table *v)
{
	v->arr[30029] = anon_sym_DOLLAR_LBRACK;
	v->arr[30030] = 3397;
	v->arr[30031] = 1;
	v->arr[30032] = anon_sym_DOLLAR;
	v->arr[30033] = 3401;
	v->arr[30034] = 1;
	v->arr[30035] = aux_sym_number_token1;
	v->arr[30036] = 3403;
	v->arr[30037] = 1;
	v->arr[30038] = aux_sym_number_token2;
	v->arr[30039] = 3405;
	v->arr[30040] = 1;
	v->arr[30041] = anon_sym_DOLLAR_LBRACE;
	v->arr[30042] = 3407;
	v->arr[30043] = 1;
	init_small_table2003(v);
}

void	init_small_table2003(t_small_table *v)
{
	v->arr[30044] = anon_sym_DOLLAR_LPAREN;
	v->arr[30045] = 3409;
	v->arr[30046] = 1;
	v->arr[30047] = anon_sym_BQUOTE;
	v->arr[30048] = 3411;
	v->arr[30049] = 1;
	v->arr[30050] = anon_sym_DOLLAR_BQUOTE;
	v->arr[30051] = 3417;
	v->arr[30052] = 1;
	v->arr[30053] = sym__brace_start;
	v->arr[30054] = 4486;
	v->arr[30055] = 1;
	v->arr[30056] = sym__special_character;
	v->arr[30057] = 4488;
	v->arr[30058] = 1;
	init_small_table2004(v);
}

void	init_small_table2004(t_small_table *v)
{
	v->arr[30059] = sym_test_operator;
	v->arr[30060] = 2161;
	v->arr[30061] = 1;
	v->arr[30062] = aux_sym__literal_repeat1;
	v->arr[30063] = 2096;
	v->arr[30064] = 2;
	v->arr[30065] = sym_file_descriptor;
	v->arr[30066] = aux_sym_heredoc_redirect_token1;
	v->arr[30067] = 3393;
	v->arr[30068] = 2;
	v->arr[30069] = anon_sym_LPAREN_LPAREN;
	v->arr[30070] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[30071] = 3413;
	v->arr[30072] = 2;
	v->arr[30073] = anon_sym_LT_LPAREN;
	init_small_table2005(v);
}

// file funcs400.c
