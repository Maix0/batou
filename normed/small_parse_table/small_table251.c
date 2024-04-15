/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs251.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table1255(t_small_table *v)
{
	v->arr[18824] = aux_sym_number_token2;
	v->arr[18825] = 2650;
	v->arr[18826] = 1;
	v->arr[18827] = anon_sym_DOLLAR_LBRACE;
	v->arr[18828] = 2652;
	v->arr[18829] = 1;
	v->arr[18830] = anon_sym_DOLLAR_LPAREN;
	v->arr[18831] = 2654;
	v->arr[18832] = 1;
	v->arr[18833] = anon_sym_BQUOTE;
	v->arr[18834] = 2656;
	v->arr[18835] = 1;
	v->arr[18836] = anon_sym_DOLLAR_BQUOTE;
	v->arr[18837] = 2660;
	v->arr[18838] = 1;
	init_small_table1256(v);
}

void	init_small_table1256(t_small_table *v)
{
	v->arr[18839] = sym_test_operator;
	v->arr[18840] = 2662;
	v->arr[18841] = 1;
	v->arr[18842] = sym__bare_dollar;
	v->arr[18843] = 2664;
	v->arr[18844] = 1;
	v->arr[18845] = sym__brace_start;
	v->arr[18846] = 751;
	v->arr[18847] = 1;
	v->arr[18848] = aux_sym_command_repeat2;
	v->arr[18849] = 2417;
	v->arr[18850] = 1;
	v->arr[18851] = aux_sym__literal_repeat1;
	v->arr[18852] = 2558;
	v->arr[18853] = 1;
	init_small_table1257(v);
}

void	init_small_table1257(t_small_table *v)
{
	v->arr[18854] = sym_concatenation;
	v->arr[18855] = 2562;
	v->arr[18856] = 1;
	v->arr[18857] = sym_herestring_redirect;
	v->arr[18858] = 2630;
	v->arr[18859] = 2;
	v->arr[18860] = anon_sym_LPAREN_LPAREN;
	v->arr[18861] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[18862] = 2632;
	v->arr[18863] = 2;
	v->arr[18864] = anon_sym_EQ_EQ;
	v->arr[18865] = anon_sym_EQ_TILDE;
	v->arr[18866] = 2644;
	v->arr[18867] = 2;
	v->arr[18868] = sym_raw_string;
	init_small_table1258(v);
}

void	init_small_table1258(t_small_table *v)
{
	v->arr[18869] = sym_ansi_c_string;
	v->arr[18870] = 2658;
	v->arr[18871] = 2;
	v->arr[18872] = anon_sym_LT_LPAREN;
	v->arr[18873] = anon_sym_GT_LPAREN;
	v->arr[18874] = 1625;
	v->arr[18875] = 7;
	v->arr[18876] = anon_sym_PIPE;
	v->arr[18877] = anon_sym_LT;
	v->arr[18878] = anon_sym_GT;
	v->arr[18879] = anon_sym_LT_LT;
	v->arr[18880] = anon_sym_AMP_GT;
	v->arr[18881] = anon_sym_LT_AMP;
	v->arr[18882] = anon_sym_GT_AMP;
	v->arr[18883] = 2211;
	init_small_table1259(v);
}

void	init_small_table1259(t_small_table *v)
{
	v->arr[18884] = 9;
	v->arr[18885] = sym_arithmetic_expansion;
	v->arr[18886] = sym_brace_expression;
	v->arr[18887] = sym_string;
	v->arr[18888] = sym_translated_string;
	v->arr[18889] = sym_number;
	v->arr[18890] = sym_simple_expansion;
	v->arr[18891] = sym_expansion;
	v->arr[18892] = sym_command_substitution;
	v->arr[18893] = sym_process_substitution;
	v->arr[18894] = 1627;
	v->arr[18895] = 10;
	v->arr[18896] = sym_file_descriptor;
	v->arr[18897] = anon_sym_PIPE_PIPE;
	v->arr[18898] = anon_sym_AMP_AMP;
	init_small_table1260(v);
}

// file funcs251.c
