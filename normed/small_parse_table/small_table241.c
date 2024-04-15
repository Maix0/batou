/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs241.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table1205(t_small_table *v)
{
	v->arr[18074] = sym_simple_expansion;
	v->arr[18075] = sym_expansion;
	v->arr[18076] = sym_command_substitution;
	v->arr[18077] = sym_process_substitution;
	v->arr[18078] = 2297;
	v->arr[18079] = 19;
	v->arr[18080] = anon_sym_SEMI;
	v->arr[18081] = anon_sym_PIPE_PIPE;
	v->arr[18082] = anon_sym_AMP_AMP;
	v->arr[18083] = anon_sym_PIPE;
	v->arr[18084] = anon_sym_AMP;
	v->arr[18085] = anon_sym_LT;
	v->arr[18086] = anon_sym_GT;
	v->arr[18087] = anon_sym_LT_LT;
	v->arr[18088] = anon_sym_GT_GT;
	init_small_table1206(v);
}

void	init_small_table1206(t_small_table *v)
{
	v->arr[18089] = anon_sym_SEMI_SEMI;
	v->arr[18090] = anon_sym_PIPE_AMP;
	v->arr[18091] = anon_sym_AMP_GT;
	v->arr[18092] = anon_sym_AMP_GT_GT;
	v->arr[18093] = anon_sym_LT_AMP;
	v->arr[18094] = anon_sym_GT_AMP;
	v->arr[18095] = anon_sym_GT_PIPE;
	v->arr[18096] = anon_sym_LT_AMP_DASH;
	v->arr[18097] = anon_sym_GT_AMP_DASH;
	v->arr[18098] = anon_sym_LT_LT_DASH;
	v->arr[18100] = 21;
	v->arr[18100] = 3;
	v->arr[18101] = 1;
	v->arr[18102] = sym_comment;
	v->arr[18103] = 3115;
	init_small_table1207(v);
}

void	init_small_table1207(t_small_table *v)
{
	v->arr[18104] = 1;
	v->arr[18105] = anon_sym_DQUOTE;
	v->arr[18106] = 3395;
	v->arr[18107] = 1;
	v->arr[18108] = anon_sym_DOLLAR_LBRACK;
	v->arr[18109] = 3397;
	v->arr[18110] = 1;
	v->arr[18111] = anon_sym_DOLLAR;
	v->arr[18112] = 3401;
	v->arr[18113] = 1;
	v->arr[18114] = aux_sym_number_token1;
	v->arr[18115] = 3403;
	v->arr[18116] = 1;
	v->arr[18117] = aux_sym_number_token2;
	v->arr[18118] = 3405;
	init_small_table1208(v);
}

void	init_small_table1208(t_small_table *v)
{
	v->arr[18119] = 1;
	v->arr[18120] = anon_sym_DOLLAR_LBRACE;
	v->arr[18121] = 3407;
	v->arr[18122] = 1;
	v->arr[18123] = anon_sym_DOLLAR_LPAREN;
	v->arr[18124] = 3409;
	v->arr[18125] = 1;
	v->arr[18126] = anon_sym_BQUOTE;
	v->arr[18127] = 3411;
	v->arr[18128] = 1;
	v->arr[18129] = anon_sym_DOLLAR_BQUOTE;
	v->arr[18130] = 3417;
	v->arr[18131] = 1;
	v->arr[18132] = sym__brace_start;
	v->arr[18133] = 3665;
	init_small_table1209(v);
}

void	init_small_table1209(t_small_table *v)
{
	v->arr[18134] = 1;
	v->arr[18135] = sym__special_character;
	v->arr[18136] = 3667;
	v->arr[18137] = 1;
	v->arr[18138] = sym_test_operator;
	v->arr[18139] = 2161;
	v->arr[18140] = 1;
	v->arr[18141] = aux_sym__literal_repeat1;
	v->arr[18142] = 2074;
	v->arr[18143] = 2;
	v->arr[18144] = sym_file_descriptor;
	v->arr[18145] = aux_sym_heredoc_redirect_token1;
	v->arr[18146] = 3393;
	v->arr[18147] = 2;
	v->arr[18148] = anon_sym_LPAREN_LPAREN;
	init_small_table1210(v);
}

// file funcs241.c
