/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs172.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table860(t_small_table *v)
{
	v->arr[12899] = sym_brace_expression;
	v->arr[12900] = sym_translated_string;
	v->arr[12901] = sym_process_substitution;
	v->arr[12902] = 2799;
	v->arr[12903] = 4;
	v->arr[12904] = sym_subscript;
	v->arr[12905] = sym__arithmetic_expression;
	v->arr[12906] = sym__arithmetic_literal;
	v->arr[12907] = sym__arithmetic_parenthesized_expression;
	v->arr[12908] = 2594;
	v->arr[12909] = 6;
	v->arr[12910] = sym_binary_expression;
	v->arr[12911] = sym_ternary_expression;
	v->arr[12912] = sym_unary_expression;
	v->arr[12913] = sym_postfix_expression;
	init_small_table861(v);
}

void	init_small_table861(t_small_table *v)
{
	v->arr[12914] = sym_parenthesized_expression;
	v->arr[12915] = sym_concatenation;
	v->arr[12917] = 8;
	v->arr[12917] = 3;
	v->arr[12918] = 1;
	v->arr[12919] = sym_comment;
	v->arr[12920] = 3115;
	v->arr[12921] = 1;
	v->arr[12922] = anon_sym_DQUOTE;
	v->arr[12923] = 3119;
	v->arr[12924] = 1;
	v->arr[12925] = sym_variable_name;
	v->arr[12926] = 1864;
	v->arr[12927] = 1;
	v->arr[12928] = sym_string;
	init_small_table862(v);
}

void	init_small_table862(t_small_table *v)
{
	v->arr[12929] = 3117;
	v->arr[12930] = 2;
	v->arr[12931] = aux_sym__simple_variable_name_token1;
	v->arr[12932] = aux_sym__multiline_variable_name_token1;
	v->arr[12933] = 1235;
	v->arr[12934] = 3;
	v->arr[12935] = sym_file_descriptor;
	v->arr[12936] = sym_test_operator;
	v->arr[12937] = sym__brace_start;
	v->arr[12938] = 3113;
	v->arr[12939] = 9;
	v->arr[12940] = anon_sym_DASH;
	v->arr[12941] = anon_sym_STAR;
	v->arr[12942] = anon_sym_BANG;
	v->arr[12943] = anon_sym_QMARK;
	init_small_table863(v);
}

void	init_small_table863(t_small_table *v)
{
	v->arr[12944] = anon_sym_DOLLAR;
	v->arr[12945] = anon_sym_POUND;
	v->arr[12946] = anon_sym_AT2;
	v->arr[12947] = anon_sym_0;
	v->arr[12948] = anon_sym__;
	v->arr[12949] = 1227;
	v->arr[12950] = 37;
	v->arr[12951] = anon_sym_LPAREN_LPAREN;
	v->arr[12952] = anon_sym_SEMI;
	v->arr[12953] = anon_sym_PIPE_PIPE;
	v->arr[12954] = anon_sym_AMP_AMP;
	v->arr[12955] = anon_sym_PIPE;
	v->arr[12956] = anon_sym_AMP;
	v->arr[12957] = anon_sym_LT;
	v->arr[12958] = anon_sym_GT;
	init_small_table864(v);
}

void	init_small_table864(t_small_table *v)
{
	v->arr[12959] = anon_sym_LT_LT;
	v->arr[12960] = anon_sym_GT_GT;
	v->arr[12961] = anon_sym_RPAREN;
	v->arr[12962] = anon_sym_SEMI_SEMI;
	v->arr[12963] = anon_sym_PIPE_AMP;
	v->arr[12964] = anon_sym_AMP_GT;
	v->arr[12965] = anon_sym_AMP_GT_GT;
	v->arr[12966] = anon_sym_LT_AMP;
	v->arr[12967] = anon_sym_GT_AMP;
	v->arr[12968] = anon_sym_GT_PIPE;
	v->arr[12969] = anon_sym_LT_AMP_DASH;
	v->arr[12970] = anon_sym_GT_AMP_DASH;
	v->arr[12971] = anon_sym_LT_LT_DASH;
	v->arr[12972] = aux_sym_heredoc_redirect_token1;
	v->arr[12973] = anon_sym_LT_LT_LT;
	init_small_table865(v);
}

// file funcs172.c
