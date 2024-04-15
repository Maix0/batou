/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1300.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table6500(t_small_table *v)
{
	v->arr[97499] = 1;
	v->arr[97500] = sym__special_character;
	v->arr[97501] = 5809;
	v->arr[97502] = 1;
	v->arr[97503] = anon_sym_BQUOTE;
	v->arr[97504] = 2641;
	v->arr[97505] = 1;
	v->arr[97506] = aux_sym__literal_repeat1;
	v->arr[97507] = 2989;
	v->arr[97508] = 1;
	v->arr[97509] = sym__expression;
	v->arr[97510] = 183;
	v->arr[97511] = 2;
	v->arr[97512] = anon_sym_PLUS_PLUS2;
	v->arr[97513] = anon_sym_DASH_DASH2;
	init_small_table6501(v);
}

void	init_small_table6501(t_small_table *v)
{
	v->arr[97514] = 185;
	v->arr[97515] = 2;
	v->arr[97516] = anon_sym_DASH2;
	v->arr[97517] = anon_sym_PLUS2;
	v->arr[97518] = 352;
	v->arr[97519] = 2;
	v->arr[97520] = anon_sym_LPAREN_LPAREN;
	v->arr[97521] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[97522] = 373;
	v->arr[97523] = 2;
	v->arr[97524] = sym_raw_string;
	v->arr[97525] = sym_ansi_c_string;
	v->arr[97526] = 387;
	v->arr[97527] = 2;
	v->arr[97528] = anon_sym_LT_LPAREN;
	init_small_table6502(v);
}

void	init_small_table6502(t_small_table *v)
{
	v->arr[97529] = anon_sym_GT_LPAREN;
	v->arr[97530] = 3071;
	v->arr[97531] = 6;
	v->arr[97532] = sym_binary_expression;
	v->arr[97533] = sym_ternary_expression;
	v->arr[97534] = sym_unary_expression;
	v->arr[97535] = sym_postfix_expression;
	v->arr[97536] = sym_parenthesized_expression;
	v->arr[97537] = sym_concatenation;
	v->arr[97538] = 2521;
	v->arr[97539] = 9;
	v->arr[97540] = sym_arithmetic_expansion;
	v->arr[97541] = sym_brace_expression;
	v->arr[97542] = sym_string;
	v->arr[97543] = sym_translated_string;
	init_small_table6503(v);
}

void	init_small_table6503(t_small_table *v)
{
	v->arr[97544] = sym_number;
	v->arr[97545] = sym_simple_expansion;
	v->arr[97546] = sym_expansion;
	v->arr[97547] = sym_command_substitution;
	v->arr[97548] = sym_process_substitution;
	v->arr[97550] = 3;
	v->arr[97550] = 71;
	v->arr[97551] = 1;
	v->arr[97552] = sym_comment;
	v->arr[97553] = 1316;
	v->arr[97554] = 16;
	v->arr[97555] = anon_sym_PIPE;
	v->arr[97556] = anon_sym_EQ_EQ;
	v->arr[97557] = anon_sym_LT;
	v->arr[97558] = anon_sym_GT;
	init_small_table6504(v);
}

void	init_small_table6504(t_small_table *v)
{
	v->arr[97559] = anon_sym_LT_LT;
	v->arr[97560] = anon_sym_LPAREN;
	v->arr[97561] = anon_sym_EQ_TILDE;
	v->arr[97562] = anon_sym_AMP_GT;
	v->arr[97563] = anon_sym_LT_AMP;
	v->arr[97564] = anon_sym_GT_AMP;
	v->arr[97565] = anon_sym_DOLLAR;
	v->arr[97566] = aux_sym_number_token1;
	v->arr[97567] = aux_sym_number_token2;
	v->arr[97568] = anon_sym_DOLLAR_LPAREN;
	v->arr[97569] = anon_sym_BQUOTE;
	v->arr[97570] = sym_word;
	v->arr[97571] = 1318;
	v->arr[97572] = 27;
	v->arr[97573] = sym_file_descriptor;
	init_small_table6505(v);
}

// file funcs1300.c
