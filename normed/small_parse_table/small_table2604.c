/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2604.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table13020(t_small_table *v)
{
	v->arr[195299] = sym_arithmetic_expansion;
	v->arr[195300] = sym_brace_expression;
	v->arr[195301] = sym_string;
	v->arr[195302] = sym_translated_string;
	v->arr[195303] = sym_number;
	v->arr[195304] = sym_simple_expansion;
	v->arr[195305] = sym_expansion;
	v->arr[195306] = sym_command_substitution;
	v->arr[195307] = sym_process_substitution;
	v->arr[195309] = 21;
	v->arr[195309] = 71;
	v->arr[195310] = 1;
	v->arr[195311] = sym_comment;
	v->arr[195312] = 8565;
	v->arr[195313] = 1;
	init_small_table13021(v);
}

void	init_small_table13021(t_small_table *v)
{
	v->arr[195314] = sym_word;
	v->arr[195315] = 8571;
	v->arr[195316] = 1;
	v->arr[195317] = anon_sym_DOLLAR_LBRACK;
	v->arr[195318] = 8573;
	v->arr[195319] = 1;
	v->arr[195320] = anon_sym_DOLLAR;
	v->arr[195321] = 8575;
	v->arr[195322] = 1;
	v->arr[195323] = sym__special_character;
	v->arr[195324] = 8577;
	v->arr[195325] = 1;
	v->arr[195326] = anon_sym_DQUOTE;
	v->arr[195327] = 8581;
	v->arr[195328] = 1;
	init_small_table13022(v);
}

void	init_small_table13022(t_small_table *v)
{
	v->arr[195329] = aux_sym_number_token1;
	v->arr[195330] = 8583;
	v->arr[195331] = 1;
	v->arr[195332] = aux_sym_number_token2;
	v->arr[195333] = 8585;
	v->arr[195334] = 1;
	v->arr[195335] = anon_sym_DOLLAR_LBRACE;
	v->arr[195336] = 8587;
	v->arr[195337] = 1;
	v->arr[195338] = anon_sym_DOLLAR_LPAREN;
	v->arr[195339] = 8589;
	v->arr[195340] = 1;
	v->arr[195341] = anon_sym_BQUOTE;
	v->arr[195342] = 8591;
	v->arr[195343] = 1;
	init_small_table13023(v);
}

void	init_small_table13023(t_small_table *v)
{
	v->arr[195344] = anon_sym_DOLLAR_BQUOTE;
	v->arr[195345] = 8595;
	v->arr[195346] = 1;
	v->arr[195347] = sym_test_operator;
	v->arr[195348] = 8597;
	v->arr[195349] = 1;
	v->arr[195350] = sym__brace_start;
	v->arr[195351] = 8738;
	v->arr[195352] = 1;
	v->arr[195353] = anon_sym_RPAREN;
	v->arr[195354] = 5365;
	v->arr[195355] = 1;
	v->arr[195356] = aux_sym__literal_repeat1;
	v->arr[195357] = 8567;
	v->arr[195358] = 2;
	init_small_table13024(v);
}

void	init_small_table13024(t_small_table *v)
{
	v->arr[195359] = anon_sym_LPAREN_LPAREN;
	v->arr[195360] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[195361] = 8579;
	v->arr[195362] = 2;
	v->arr[195363] = sym_raw_string;
	v->arr[195364] = sym_ansi_c_string;
	v->arr[195365] = 8593;
	v->arr[195366] = 2;
	v->arr[195367] = anon_sym_LT_LPAREN;
	v->arr[195368] = anon_sym_GT_LPAREN;
	v->arr[195369] = 3587;
	v->arr[195370] = 2;
	v->arr[195371] = sym_concatenation;
	v->arr[195372] = aux_sym_for_statement_repeat1;
	v->arr[195373] = 5045;
	init_small_table13025(v);
}

// file funcs2604.c
