/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs140.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table700(t_small_table *v)
{
	v->arr[10499] = 1;
	v->arr[10500] = aux_sym_number_token2;
	v->arr[10501] = 2873;
	v->arr[10502] = 1;
	v->arr[10503] = anon_sym_DOLLAR_LBRACE;
	v->arr[10504] = 2875;
	v->arr[10505] = 1;
	v->arr[10506] = anon_sym_DOLLAR_LPAREN;
	v->arr[10507] = 2877;
	v->arr[10508] = 1;
	v->arr[10509] = anon_sym_BQUOTE;
	v->arr[10510] = 2879;
	v->arr[10511] = 1;
	v->arr[10512] = anon_sym_DOLLAR_BQUOTE;
	v->arr[10513] = 2885;
	init_small_table701(v);
}

void	init_small_table701(t_small_table *v)
{
	v->arr[10514] = 1;
	v->arr[10515] = sym__brace_start;
	v->arr[10516] = 2939;
	v->arr[10517] = 1;
	v->arr[10518] = sym_test_operator;
	v->arr[10519] = 4351;
	v->arr[10520] = 1;
	v->arr[10521] = aux_sym__literal_repeat1;
	v->arr[10522] = 4789;
	v->arr[10523] = 1;
	v->arr[10524] = sym_concatenation;
	v->arr[10525] = 2500;
	v->arr[10526] = 2;
	v->arr[10527] = sym_file_descriptor;
	v->arr[10528] = aux_sym_heredoc_redirect_token1;
	init_small_table702(v);
}

void	init_small_table702(t_small_table *v)
{
	v->arr[10529] = 2859;
	v->arr[10530] = 2;
	v->arr[10531] = anon_sym_LPAREN_LPAREN;
	v->arr[10532] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[10533] = 2881;
	v->arr[10534] = 2;
	v->arr[10535] = anon_sym_LT_LPAREN;
	v->arr[10536] = anon_sym_GT_LPAREN;
	v->arr[10537] = 2937;
	v->arr[10538] = 3;
	v->arr[10539] = sym_raw_string;
	v->arr[10540] = sym_ansi_c_string;
	v->arr[10541] = sym_word;
	v->arr[10542] = 4247;
	v->arr[10543] = 9;
	init_small_table703(v);
}

void	init_small_table703(t_small_table *v)
{
	v->arr[10544] = sym_arithmetic_expansion;
	v->arr[10545] = sym_brace_expression;
	v->arr[10546] = sym_string;
	v->arr[10547] = sym_translated_string;
	v->arr[10548] = sym_number;
	v->arr[10549] = sym_simple_expansion;
	v->arr[10550] = sym_expansion;
	v->arr[10551] = sym_command_substitution;
	v->arr[10552] = sym_process_substitution;
	v->arr[10553] = 2498;
	v->arr[10554] = 23;
	v->arr[10555] = anon_sym_SEMI;
	v->arr[10556] = anon_sym_PIPE_PIPE;
	v->arr[10557] = anon_sym_AMP_AMP;
	v->arr[10558] = anon_sym_PIPE;
	init_small_table704(v);
}

void	init_small_table704(t_small_table *v)
{
	v->arr[10559] = anon_sym_AMP;
	v->arr[10560] = anon_sym_LT;
	v->arr[10561] = anon_sym_GT;
	v->arr[10562] = anon_sym_LT_LT;
	v->arr[10563] = anon_sym_GT_GT;
	v->arr[10564] = anon_sym_esac;
	v->arr[10565] = anon_sym_SEMI_SEMI;
	v->arr[10566] = anon_sym_SEMI_AMP;
	v->arr[10567] = anon_sym_SEMI_SEMI_AMP;
	v->arr[10568] = anon_sym_PIPE_AMP;
	v->arr[10569] = anon_sym_AMP_GT;
	v->arr[10570] = anon_sym_AMP_GT_GT;
	v->arr[10571] = anon_sym_LT_AMP;
	v->arr[10572] = anon_sym_GT_AMP;
	v->arr[10573] = anon_sym_GT_PIPE;
	init_small_table705(v);
}

// file funcs140.c
