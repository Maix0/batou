/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs86.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table430(t_small_table *v)
{
	v->arr[6449] = 1;
	v->arr[6450] = aux_sym_number_token1;
	v->arr[6451] = 2271;
	v->arr[6452] = 1;
	v->arr[6453] = aux_sym_number_token2;
	v->arr[6454] = 2273;
	v->arr[6455] = 1;
	v->arr[6456] = anon_sym_DOLLAR_LBRACE;
	v->arr[6457] = 2275;
	v->arr[6458] = 1;
	v->arr[6459] = anon_sym_DOLLAR_LPAREN;
	v->arr[6460] = 2279;
	v->arr[6461] = 1;
	v->arr[6462] = anon_sym_DOLLAR_BQUOTE;
	v->arr[6463] = 2289;
	init_small_table431(v);
}

void	init_small_table431(t_small_table *v)
{
	v->arr[6464] = 1;
	v->arr[6465] = sym__brace_start;
	v->arr[6466] = 2361;
	v->arr[6467] = 1;
	v->arr[6468] = sym__special_character;
	v->arr[6469] = 2363;
	v->arr[6470] = 1;
	v->arr[6471] = aux_sym__simple_variable_name_token1;
	v->arr[6472] = 2365;
	v->arr[6473] = 1;
	v->arr[6474] = sym_variable_name;
	v->arr[6475] = 2367;
	v->arr[6476] = 1;
	v->arr[6477] = sym_test_operator;
	v->arr[6478] = 1743;
	init_small_table432(v);
}

void	init_small_table432(t_small_table *v)
{
	v->arr[6479] = 1;
	v->arr[6480] = aux_sym__literal_repeat1;
	v->arr[6481] = 6773;
	v->arr[6482] = 1;
	v->arr[6483] = sym_subscript;
	v->arr[6484] = 1757;
	v->arr[6485] = 2;
	v->arr[6486] = sym_file_descriptor;
	v->arr[6487] = aux_sym_heredoc_redirect_token1;
	v->arr[6488] = 2259;
	v->arr[6489] = 2;
	v->arr[6490] = anon_sym_LPAREN_LPAREN;
	v->arr[6491] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[6492] = 2281;
	v->arr[6493] = 2;
	init_small_table433(v);
}

void	init_small_table433(t_small_table *v)
{
	v->arr[6494] = anon_sym_LT_LPAREN;
	v->arr[6495] = anon_sym_GT_LPAREN;
	v->arr[6496] = 2359;
	v->arr[6497] = 3;
	v->arr[6498] = sym_raw_string;
	v->arr[6499] = sym_ansi_c_string;
	v->arr[6500] = sym_word;
	v->arr[6501] = 594;
	v->arr[6502] = 3;
	v->arr[6503] = sym_variable_assignment;
	v->arr[6504] = sym_concatenation;
	v->arr[6505] = aux_sym_declaration_command_repeat1;
	v->arr[6506] = 1602;
	v->arr[6507] = 9;
	v->arr[6508] = sym_arithmetic_expansion;
	init_small_table434(v);
}

void	init_small_table434(t_small_table *v)
{
	v->arr[6509] = sym_brace_expression;
	v->arr[6510] = sym_string;
	v->arr[6511] = sym_translated_string;
	v->arr[6512] = sym_number;
	v->arr[6513] = sym_simple_expansion;
	v->arr[6514] = sym_expansion;
	v->arr[6515] = sym_command_substitution;
	v->arr[6516] = sym_process_substitution;
	v->arr[6517] = 1755;
	v->arr[6518] = 20;
	v->arr[6519] = anon_sym_SEMI;
	v->arr[6520] = anon_sym_PIPE_PIPE;
	v->arr[6521] = anon_sym_AMP_AMP;
	v->arr[6522] = anon_sym_PIPE;
	v->arr[6523] = anon_sym_AMP;
	init_small_table435(v);
}

// file funcs86.c
