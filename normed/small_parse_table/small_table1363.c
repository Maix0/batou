/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1363.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table6815(t_small_table *v)
{
	v->arr[102224] = 6;
	v->arr[102225] = sym_binary_expression;
	v->arr[102226] = sym_ternary_expression;
	v->arr[102227] = sym_unary_expression;
	v->arr[102228] = sym_postfix_expression;
	v->arr[102229] = sym_parenthesized_expression;
	v->arr[102230] = sym_concatenation;
	v->arr[102231] = 2573;
	v->arr[102232] = 9;
	v->arr[102233] = sym_arithmetic_expansion;
	v->arr[102234] = sym_brace_expression;
	v->arr[102235] = sym_string;
	v->arr[102236] = sym_translated_string;
	v->arr[102237] = sym_number;
	v->arr[102238] = sym_simple_expansion;
	init_small_table6816(v);
}

void	init_small_table6816(t_small_table *v)
{
	v->arr[102239] = sym_expansion;
	v->arr[102240] = sym_command_substitution;
	v->arr[102241] = sym_process_substitution;
	v->arr[102243] = 26;
	v->arr[102243] = 71;
	v->arr[102244] = 1;
	v->arr[102245] = sym_comment;
	v->arr[102246] = 107;
	v->arr[102247] = 1;
	v->arr[102248] = anon_sym_TILDE;
	v->arr[102249] = 237;
	v->arr[102250] = 1;
	v->arr[102251] = sym_word;
	v->arr[102252] = 248;
	v->arr[102253] = 1;
	init_small_table6817(v);
}

void	init_small_table6817(t_small_table *v)
{
	v->arr[102254] = anon_sym_LPAREN;
	v->arr[102255] = 250;
	v->arr[102256] = 1;
	v->arr[102257] = anon_sym_BANG;
	v->arr[102258] = 258;
	v->arr[102259] = 1;
	v->arr[102260] = anon_sym_DOLLAR;
	v->arr[102261] = 264;
	v->arr[102262] = 1;
	v->arr[102263] = aux_sym_number_token1;
	v->arr[102264] = 266;
	v->arr[102265] = 1;
	v->arr[102266] = aux_sym_number_token2;
	v->arr[102267] = 270;
	v->arr[102268] = 1;
	init_small_table6818(v);
}

void	init_small_table6818(t_small_table *v)
{
	v->arr[102269] = anon_sym_DOLLAR_LPAREN;
	v->arr[102270] = 282;
	v->arr[102271] = 1;
	v->arr[102272] = sym_test_operator;
	v->arr[102273] = 284;
	v->arr[102274] = 1;
	v->arr[102275] = sym__brace_start;
	v->arr[102276] = 1075;
	v->arr[102277] = 1;
	v->arr[102278] = anon_sym_DOLLAR_LBRACK;
	v->arr[102279] = 1079;
	v->arr[102280] = 1;
	v->arr[102281] = sym__special_character;
	v->arr[102282] = 1081;
	v->arr[102283] = 1;
	init_small_table6819(v);
}

void	init_small_table6819(t_small_table *v)
{
	v->arr[102284] = anon_sym_DQUOTE;
	v->arr[102285] = 1085;
	v->arr[102286] = 1;
	v->arr[102287] = anon_sym_DOLLAR_LBRACE;
	v->arr[102288] = 1087;
	v->arr[102289] = 1;
	v->arr[102290] = anon_sym_DOLLAR_BQUOTE;
	v->arr[102291] = 3598;
	v->arr[102292] = 1;
	v->arr[102293] = anon_sym_BQUOTE;
	v->arr[102294] = 2690;
	v->arr[102295] = 1;
	v->arr[102296] = aux_sym__literal_repeat1;
	v->arr[102297] = 3100;
	v->arr[102298] = 1;
	init_small_table6820(v);
}

// file funcs1363.c
