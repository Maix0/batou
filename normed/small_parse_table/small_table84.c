/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs84.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table420(t_small_table *v)
{
	v->arr[6299] = sym_word;
	v->arr[6300] = 1190;
	v->arr[6301] = 9;
	v->arr[6302] = sym_arithmetic_expansion;
	v->arr[6303] = sym_brace_expression;
	v->arr[6304] = sym_string;
	v->arr[6305] = sym_translated_string;
	v->arr[6306] = sym_number;
	v->arr[6307] = sym_simple_expansion;
	v->arr[6308] = sym_expansion;
	v->arr[6309] = sym_command_substitution;
	v->arr[6310] = sym_process_substitution;
	v->arr[6311] = 2297;
	v->arr[6312] = 22;
	v->arr[6313] = anon_sym_SEMI;
	init_small_table421(v);
}

void	init_small_table421(t_small_table *v)
{
	v->arr[6314] = anon_sym_PIPE_PIPE;
	v->arr[6315] = anon_sym_AMP_AMP;
	v->arr[6316] = anon_sym_PIPE;
	v->arr[6317] = anon_sym_AMP;
	v->arr[6318] = anon_sym_LT;
	v->arr[6319] = anon_sym_GT;
	v->arr[6320] = anon_sym_LT_LT;
	v->arr[6321] = anon_sym_GT_GT;
	v->arr[6322] = anon_sym_esac;
	v->arr[6323] = anon_sym_SEMI_SEMI;
	v->arr[6324] = anon_sym_SEMI_AMP;
	v->arr[6325] = anon_sym_SEMI_SEMI_AMP;
	v->arr[6326] = anon_sym_PIPE_AMP;
	v->arr[6327] = anon_sym_AMP_GT;
	v->arr[6328] = anon_sym_AMP_GT_GT;
	init_small_table422(v);
}

void	init_small_table422(t_small_table *v)
{
	v->arr[6329] = anon_sym_LT_AMP;
	v->arr[6330] = anon_sym_GT_AMP;
	v->arr[6331] = anon_sym_GT_PIPE;
	v->arr[6332] = anon_sym_LT_AMP_DASH;
	v->arr[6333] = anon_sym_GT_AMP_DASH;
	v->arr[6334] = anon_sym_LT_LT_DASH;
	v->arr[6336] = 21;
	v->arr[6336] = 3;
	v->arr[6337] = 1;
	v->arr[6338] = sym_comment;
	v->arr[6339] = 2333;
	v->arr[6340] = 1;
	v->arr[6341] = anon_sym_DOLLAR_LBRACK;
	v->arr[6342] = 2335;
	v->arr[6343] = 1;
	init_small_table423(v);
}

void	init_small_table423(t_small_table *v)
{
	v->arr[6344] = anon_sym_DOLLAR;
	v->arr[6345] = 2337;
	v->arr[6346] = 1;
	v->arr[6347] = sym__special_character;
	v->arr[6348] = 2339;
	v->arr[6349] = 1;
	v->arr[6350] = anon_sym_DQUOTE;
	v->arr[6351] = 2341;
	v->arr[6352] = 1;
	v->arr[6353] = aux_sym_number_token1;
	v->arr[6354] = 2343;
	v->arr[6355] = 1;
	v->arr[6356] = aux_sym_number_token2;
	v->arr[6357] = 2345;
	v->arr[6358] = 1;
	init_small_table424(v);
}

void	init_small_table424(t_small_table *v)
{
	v->arr[6359] = anon_sym_DOLLAR_LBRACE;
	v->arr[6360] = 2347;
	v->arr[6361] = 1;
	v->arr[6362] = anon_sym_DOLLAR_LPAREN;
	v->arr[6363] = 2349;
	v->arr[6364] = 1;
	v->arr[6365] = anon_sym_BQUOTE;
	v->arr[6366] = 2351;
	v->arr[6367] = 1;
	v->arr[6368] = anon_sym_DOLLAR_BQUOTE;
	v->arr[6369] = 2355;
	v->arr[6370] = 1;
	v->arr[6371] = sym_test_operator;
	v->arr[6372] = 2357;
	v->arr[6373] = 1;
	init_small_table425(v);
}

// file funcs84.c
