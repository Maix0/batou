/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1318.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table6590(t_small_table *v)
{
	v->arr[98849] = sym_binary_expression;
	v->arr[98850] = sym_ternary_expression;
	v->arr[98851] = sym_unary_expression;
	v->arr[98852] = sym_postfix_expression;
	v->arr[98853] = sym_parenthesized_expression;
	v->arr[98854] = sym_concatenation;
	v->arr[98855] = 2521;
	v->arr[98856] = 9;
	v->arr[98857] = sym_arithmetic_expansion;
	v->arr[98858] = sym_brace_expression;
	v->arr[98859] = sym_string;
	v->arr[98860] = sym_translated_string;
	v->arr[98861] = sym_number;
	v->arr[98862] = sym_simple_expansion;
	v->arr[98863] = sym_expansion;
	init_small_table6591(v);
}

void	init_small_table6591(t_small_table *v)
{
	v->arr[98864] = sym_command_substitution;
	v->arr[98865] = sym_process_substitution;
	v->arr[98867] = 3;
	v->arr[98867] = 71;
	v->arr[98868] = 1;
	v->arr[98869] = sym_comment;
	v->arr[98870] = 1308;
	v->arr[98871] = 16;
	v->arr[98872] = anon_sym_PIPE;
	v->arr[98873] = anon_sym_EQ_EQ;
	v->arr[98874] = anon_sym_LT;
	v->arr[98875] = anon_sym_GT;
	v->arr[98876] = anon_sym_LT_LT;
	v->arr[98877] = anon_sym_LPAREN;
	v->arr[98878] = anon_sym_EQ_TILDE;
	init_small_table6592(v);
}

void	init_small_table6592(t_small_table *v)
{
	v->arr[98879] = anon_sym_AMP_GT;
	v->arr[98880] = anon_sym_LT_AMP;
	v->arr[98881] = anon_sym_GT_AMP;
	v->arr[98882] = anon_sym_DOLLAR;
	v->arr[98883] = aux_sym_number_token1;
	v->arr[98884] = aux_sym_number_token2;
	v->arr[98885] = anon_sym_DOLLAR_LPAREN;
	v->arr[98886] = anon_sym_BQUOTE;
	v->arr[98887] = sym_word;
	v->arr[98888] = 1310;
	v->arr[98889] = 27;
	v->arr[98890] = sym_file_descriptor;
	v->arr[98891] = sym__concat;
	v->arr[98892] = sym_test_operator;
	v->arr[98893] = sym__bare_dollar;
	init_small_table6593(v);
}

void	init_small_table6593(t_small_table *v)
{
	v->arr[98894] = sym__brace_start;
	v->arr[98895] = anon_sym_LPAREN_LPAREN;
	v->arr[98896] = anon_sym_PIPE_PIPE;
	v->arr[98897] = anon_sym_AMP_AMP;
	v->arr[98898] = anon_sym_GT_GT;
	v->arr[98899] = anon_sym_PIPE_AMP;
	v->arr[98900] = anon_sym_AMP_GT_GT;
	v->arr[98901] = anon_sym_GT_PIPE;
	v->arr[98902] = anon_sym_LT_AMP_DASH;
	v->arr[98903] = anon_sym_GT_AMP_DASH;
	v->arr[98904] = anon_sym_LT_LT_DASH;
	v->arr[98905] = anon_sym_LT_LT_LT;
	v->arr[98906] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[98907] = anon_sym_DOLLAR_LBRACK;
	v->arr[98908] = aux_sym_concatenation_token1;
	init_small_table6594(v);
}

void	init_small_table6594(t_small_table *v)
{
	v->arr[98909] = sym__special_character;
	v->arr[98910] = anon_sym_DQUOTE;
	v->arr[98911] = sym_raw_string;
	v->arr[98912] = sym_ansi_c_string;
	v->arr[98913] = anon_sym_DOLLAR_LBRACE;
	v->arr[98914] = anon_sym_DOLLAR_BQUOTE;
	v->arr[98915] = anon_sym_LT_LPAREN;
	v->arr[98916] = anon_sym_GT_LPAREN;
	v->arr[98918] = 3;
	v->arr[98918] = 3;
	v->arr[98919] = 1;
	v->arr[98920] = sym_comment;
	v->arr[98921] = 1302;
	v->arr[98922] = 6;
	v->arr[98923] = sym_file_descriptor;
	init_small_table6595(v);
}

// file funcs1318.c
