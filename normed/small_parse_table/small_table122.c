/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs122.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table610(t_small_table *v)
{
	v->arr[9149] = 9;
	v->arr[9150] = sym_arithmetic_expansion;
	v->arr[9151] = sym_brace_expression;
	v->arr[9152] = sym_string;
	v->arr[9153] = sym_translated_string;
	v->arr[9154] = sym_number;
	v->arr[9155] = sym_simple_expansion;
	v->arr[9156] = sym_expansion;
	v->arr[9157] = sym_command_substitution;
	v->arr[9158] = sym_process_substitution;
	v->arr[9159] = 1408;
	v->arr[9160] = 10;
	v->arr[9161] = sym_file_descriptor;
	v->arr[9162] = anon_sym_PIPE_PIPE;
	v->arr[9163] = anon_sym_AMP_AMP;
	init_small_table611(v);
}

void	init_small_table611(t_small_table *v)
{
	v->arr[9164] = anon_sym_GT_GT;
	v->arr[9165] = anon_sym_PIPE_AMP;
	v->arr[9166] = anon_sym_AMP_GT_GT;
	v->arr[9167] = anon_sym_GT_PIPE;
	v->arr[9168] = anon_sym_LT_AMP_DASH;
	v->arr[9169] = anon_sym_GT_AMP_DASH;
	v->arr[9170] = anon_sym_LT_LT_DASH;
	v->arr[9172] = 21;
	v->arr[9172] = 3;
	v->arr[9173] = 1;
	v->arr[9174] = sym_comment;
	v->arr[9175] = 2676;
	v->arr[9176] = 1;
	v->arr[9177] = anon_sym_DOLLAR_LBRACK;
	v->arr[9178] = 2679;
	init_small_table612(v);
}

void	init_small_table612(t_small_table *v)
{
	v->arr[9179] = 1;
	v->arr[9180] = anon_sym_DOLLAR;
	v->arr[9181] = 2682;
	v->arr[9182] = 1;
	v->arr[9183] = sym__special_character;
	v->arr[9184] = 2685;
	v->arr[9185] = 1;
	v->arr[9186] = anon_sym_DQUOTE;
	v->arr[9187] = 2688;
	v->arr[9188] = 1;
	v->arr[9189] = aux_sym_number_token1;
	v->arr[9190] = 2691;
	v->arr[9191] = 1;
	v->arr[9192] = aux_sym_number_token2;
	v->arr[9193] = 2694;
	init_small_table613(v);
}

void	init_small_table613(t_small_table *v)
{
	v->arr[9194] = 1;
	v->arr[9195] = anon_sym_DOLLAR_LBRACE;
	v->arr[9196] = 2697;
	v->arr[9197] = 1;
	v->arr[9198] = anon_sym_DOLLAR_LPAREN;
	v->arr[9199] = 2700;
	v->arr[9200] = 1;
	v->arr[9201] = anon_sym_BQUOTE;
	v->arr[9202] = 2703;
	v->arr[9203] = 1;
	v->arr[9204] = anon_sym_DOLLAR_BQUOTE;
	v->arr[9205] = 2709;
	v->arr[9206] = 1;
	v->arr[9207] = sym_test_operator;
	v->arr[9208] = 2712;
	init_small_table614(v);
}

void	init_small_table614(t_small_table *v)
{
	v->arr[9209] = 1;
	v->arr[9210] = sym__brace_start;
	v->arr[9211] = 1899;
	v->arr[9212] = 1;
	v->arr[9213] = aux_sym__literal_repeat1;
	v->arr[9214] = 2216;
	v->arr[9215] = 2;
	v->arr[9216] = sym_file_descriptor;
	v->arr[9217] = aux_sym_heredoc_redirect_token1;
	v->arr[9218] = 2673;
	v->arr[9219] = 2;
	v->arr[9220] = anon_sym_LPAREN_LPAREN;
	v->arr[9221] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[9222] = 2706;
	v->arr[9223] = 2;
	init_small_table615(v);
}

// file funcs122.c
