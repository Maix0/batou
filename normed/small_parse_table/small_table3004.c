/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs3004.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table15020(t_small_table *v)
{
	v->arr[225299] = sym_string;
	v->arr[225300] = sym_translated_string;
	v->arr[225301] = sym_number;
	v->arr[225302] = sym_simple_expansion;
	v->arr[225303] = sym_expansion;
	v->arr[225304] = sym_command_substitution;
	v->arr[225305] = sym_process_substitution;
	v->arr[225307] = 18;
	v->arr[225307] = 3;
	v->arr[225308] = 1;
	v->arr[225309] = sym_comment;
	v->arr[225310] = 314;
	v->arr[225311] = 1;
	v->arr[225312] = anon_sym_DOLLAR_LBRACK;
	v->arr[225313] = 320;
	init_small_table15021(v);
}

void	init_small_table15021(t_small_table *v)
{
	v->arr[225314] = 1;
	v->arr[225315] = anon_sym_DQUOTE;
	v->arr[225316] = 324;
	v->arr[225317] = 1;
	v->arr[225318] = aux_sym_number_token1;
	v->arr[225319] = 326;
	v->arr[225320] = 1;
	v->arr[225321] = aux_sym_number_token2;
	v->arr[225322] = 328;
	v->arr[225323] = 1;
	v->arr[225324] = anon_sym_DOLLAR_LBRACE;
	v->arr[225325] = 330;
	v->arr[225326] = 1;
	v->arr[225327] = anon_sym_DOLLAR_LPAREN;
	v->arr[225328] = 332;
	init_small_table15022(v);
}

void	init_small_table15022(t_small_table *v)
{
	v->arr[225329] = 1;
	v->arr[225330] = anon_sym_BQUOTE;
	v->arr[225331] = 334;
	v->arr[225332] = 1;
	v->arr[225333] = anon_sym_DOLLAR_BQUOTE;
	v->arr[225334] = 344;
	v->arr[225335] = 1;
	v->arr[225336] = sym__brace_start;
	v->arr[225337] = 9400;
	v->arr[225338] = 1;
	v->arr[225339] = sym_word;
	v->arr[225340] = 9406;
	v->arr[225341] = 1;
	v->arr[225342] = sym__comment_word;
	v->arr[225343] = 10712;
	init_small_table15023(v);
}

void	init_small_table15023(t_small_table *v)
{
	v->arr[225344] = 1;
	v->arr[225345] = anon_sym_DOLLAR;
	v->arr[225346] = 312;
	v->arr[225347] = 2;
	v->arr[225348] = anon_sym_LPAREN_LPAREN;
	v->arr[225349] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[225350] = 336;
	v->arr[225351] = 2;
	v->arr[225352] = anon_sym_LT_LPAREN;
	v->arr[225353] = anon_sym_GT_LPAREN;
	v->arr[225354] = 9402;
	v->arr[225355] = 2;
	v->arr[225356] = sym_test_operator;
	v->arr[225357] = sym__special_character;
	v->arr[225358] = 9404;
	init_small_table15024(v);
}

void	init_small_table15024(t_small_table *v)
{
	v->arr[225359] = 3;
	v->arr[225360] = sym__bare_dollar;
	v->arr[225361] = sym_raw_string;
	v->arr[225362] = sym_ansi_c_string;
	v->arr[225363] = 1037;
	v->arr[225364] = 9;
	v->arr[225365] = sym_arithmetic_expansion;
	v->arr[225366] = sym_brace_expression;
	v->arr[225367] = sym_string;
	v->arr[225368] = sym_translated_string;
	v->arr[225369] = sym_number;
	v->arr[225370] = sym_simple_expansion;
	v->arr[225371] = sym_expansion;
	v->arr[225372] = sym_command_substitution;
	v->arr[225373] = sym_process_substitution;
	init_small_table15025(v);
}

// file funcs3004.c
