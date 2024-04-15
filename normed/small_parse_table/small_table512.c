/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs512.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table2560(t_small_table *v)
{
	v->arr[38399] = aux_sym_number_token2;
	v->arr[38400] = 4961;
	v->arr[38401] = 1;
	v->arr[38402] = anon_sym_DOLLAR_LBRACE;
	v->arr[38403] = 4963;
	v->arr[38404] = 1;
	v->arr[38405] = anon_sym_DOLLAR_LPAREN;
	v->arr[38406] = 4965;
	v->arr[38407] = 1;
	v->arr[38408] = anon_sym_BQUOTE;
	v->arr[38409] = 4967;
	v->arr[38410] = 1;
	v->arr[38411] = anon_sym_DOLLAR_BQUOTE;
	v->arr[38412] = 4971;
	v->arr[38413] = 1;
	init_small_table2561(v);
}

void	init_small_table2561(t_small_table *v)
{
	v->arr[38414] = sym_test_operator;
	v->arr[38415] = 4973;
	v->arr[38416] = 1;
	v->arr[38417] = sym__brace_start;
	v->arr[38418] = 2776;
	v->arr[38419] = 1;
	v->arr[38420] = aux_sym__literal_repeat1;
	v->arr[38421] = 4945;
	v->arr[38422] = 2;
	v->arr[38423] = anon_sym_LPAREN_LPAREN;
	v->arr[38424] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[38425] = 4955;
	v->arr[38426] = 2;
	v->arr[38427] = sym_raw_string;
	v->arr[38428] = sym_ansi_c_string;
	init_small_table2562(v);
}

void	init_small_table2562(t_small_table *v)
{
	v->arr[38429] = 4969;
	v->arr[38430] = 2;
	v->arr[38431] = anon_sym_LT_LPAREN;
	v->arr[38432] = anon_sym_GT_LPAREN;
	v->arr[38433] = 967;
	v->arr[38434] = 2;
	v->arr[38435] = sym_concatenation;
	v->arr[38436] = aux_sym_for_statement_repeat1;
	v->arr[38437] = 2094;
	v->arr[38438] = 7;
	v->arr[38439] = anon_sym_PIPE;
	v->arr[38440] = anon_sym_LT;
	v->arr[38441] = anon_sym_GT;
	v->arr[38442] = anon_sym_LT_LT;
	v->arr[38443] = anon_sym_AMP_GT;
	init_small_table2563(v);
}

void	init_small_table2563(t_small_table *v)
{
	v->arr[38444] = anon_sym_LT_AMP;
	v->arr[38445] = anon_sym_GT_AMP;
	v->arr[38446] = 2489;
	v->arr[38447] = 9;
	v->arr[38448] = sym_arithmetic_expansion;
	v->arr[38449] = sym_brace_expression;
	v->arr[38450] = sym_string;
	v->arr[38451] = sym_translated_string;
	v->arr[38452] = sym_number;
	v->arr[38453] = sym_simple_expansion;
	v->arr[38454] = sym_expansion;
	v->arr[38455] = sym_command_substitution;
	v->arr[38456] = sym_process_substitution;
	v->arr[38457] = 2096;
	v->arr[38458] = 11;
	init_small_table2564(v);
}

void	init_small_table2564(t_small_table *v)
{
	v->arr[38459] = sym_file_descriptor;
	v->arr[38460] = anon_sym_PIPE_PIPE;
	v->arr[38461] = anon_sym_AMP_AMP;
	v->arr[38462] = anon_sym_GT_GT;
	v->arr[38463] = anon_sym_PIPE_AMP;
	v->arr[38464] = anon_sym_RBRACK;
	v->arr[38465] = anon_sym_AMP_GT_GT;
	v->arr[38466] = anon_sym_GT_PIPE;
	v->arr[38467] = anon_sym_LT_AMP_DASH;
	v->arr[38468] = anon_sym_GT_AMP_DASH;
	v->arr[38469] = anon_sym_LT_LT_DASH;
	v->arr[38471] = 3;
	v->arr[38471] = 3;
	v->arr[38472] = 1;
	v->arr[38473] = sym_comment;
	init_small_table2565(v);
}

// file funcs512.c
