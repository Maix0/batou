/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs88.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table440(t_small_table *v)
{
	v->arr[6599] = 3;
	v->arr[6600] = sym_raw_string;
	v->arr[6601] = sym_ansi_c_string;
	v->arr[6602] = sym_word;
	v->arr[6603] = 1290;
	v->arr[6604] = 9;
	v->arr[6605] = sym_arithmetic_expansion;
	v->arr[6606] = sym_brace_expression;
	v->arr[6607] = sym_string;
	v->arr[6608] = sym_translated_string;
	v->arr[6609] = sym_number;
	v->arr[6610] = sym_simple_expansion;
	v->arr[6611] = sym_expansion;
	v->arr[6612] = sym_command_substitution;
	v->arr[6613] = sym_process_substitution;
	init_small_table441(v);
}

void	init_small_table441(t_small_table *v)
{
	v->arr[6614] = 2214;
	v->arr[6615] = 23;
	v->arr[6616] = anon_sym_SEMI;
	v->arr[6617] = anon_sym_PIPE_PIPE;
	v->arr[6618] = anon_sym_AMP_AMP;
	v->arr[6619] = anon_sym_PIPE;
	v->arr[6620] = anon_sym_AMP;
	v->arr[6621] = anon_sym_LT;
	v->arr[6622] = anon_sym_GT;
	v->arr[6623] = anon_sym_LT_LT;
	v->arr[6624] = anon_sym_GT_GT;
	v->arr[6625] = anon_sym_esac;
	v->arr[6626] = anon_sym_SEMI_SEMI;
	v->arr[6627] = anon_sym_SEMI_AMP;
	v->arr[6628] = anon_sym_SEMI_SEMI_AMP;
	init_small_table442(v);
}

void	init_small_table442(t_small_table *v)
{
	v->arr[6629] = anon_sym_PIPE_AMP;
	v->arr[6630] = anon_sym_AMP_GT;
	v->arr[6631] = anon_sym_AMP_GT_GT;
	v->arr[6632] = anon_sym_LT_AMP;
	v->arr[6633] = anon_sym_GT_AMP;
	v->arr[6634] = anon_sym_GT_PIPE;
	v->arr[6635] = anon_sym_LT_AMP_DASH;
	v->arr[6636] = anon_sym_GT_AMP_DASH;
	v->arr[6637] = anon_sym_LT_LT_DASH;
	v->arr[6638] = anon_sym_LT_LT_LT;
	v->arr[6640] = 23;
	v->arr[6640] = 3;
	v->arr[6641] = 1;
	v->arr[6642] = sym_comment;
	v->arr[6643] = 2261;
	init_small_table443(v);
}

void	init_small_table443(t_small_table *v)
{
	v->arr[6644] = 1;
	v->arr[6645] = anon_sym_DOLLAR_LBRACK;
	v->arr[6646] = 2263;
	v->arr[6647] = 1;
	v->arr[6648] = anon_sym_DOLLAR;
	v->arr[6649] = 2267;
	v->arr[6650] = 1;
	v->arr[6651] = anon_sym_DQUOTE;
	v->arr[6652] = 2269;
	v->arr[6653] = 1;
	v->arr[6654] = aux_sym_number_token1;
	v->arr[6655] = 2271;
	v->arr[6656] = 1;
	v->arr[6657] = aux_sym_number_token2;
	v->arr[6658] = 2273;
	init_small_table444(v);
}

void	init_small_table444(t_small_table *v)
{
	v->arr[6659] = 1;
	v->arr[6660] = anon_sym_DOLLAR_LBRACE;
	v->arr[6661] = 2275;
	v->arr[6662] = 1;
	v->arr[6663] = anon_sym_DOLLAR_LPAREN;
	v->arr[6664] = 2279;
	v->arr[6665] = 1;
	v->arr[6666] = anon_sym_DOLLAR_BQUOTE;
	v->arr[6667] = 2289;
	v->arr[6668] = 1;
	v->arr[6669] = sym__brace_start;
	v->arr[6670] = 2361;
	v->arr[6671] = 1;
	v->arr[6672] = sym__special_character;
	v->arr[6673] = 2365;
	init_small_table445(v);
}

// file funcs88.c
