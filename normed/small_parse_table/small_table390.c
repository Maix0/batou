/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs390.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table1950(t_small_table *v)
{
	v->arr[29249] = 2369;
	v->arr[29250] = 9;
	v->arr[29251] = sym_arithmetic_expansion;
	v->arr[29252] = sym_brace_expression;
	v->arr[29253] = sym_string;
	v->arr[29254] = sym_translated_string;
	v->arr[29255] = sym_number;
	v->arr[29256] = sym_simple_expansion;
	v->arr[29257] = sym_expansion;
	v->arr[29258] = sym_command_substitution;
	v->arr[29259] = sym_process_substitution;
	v->arr[29260] = 2216;
	v->arr[29261] = 12;
	v->arr[29262] = sym_file_descriptor;
	v->arr[29263] = sym_variable_name;
	init_small_table1951(v);
}

void	init_small_table1951(t_small_table *v)
{
	v->arr[29264] = anon_sym_PIPE_PIPE;
	v->arr[29265] = anon_sym_AMP_AMP;
	v->arr[29266] = anon_sym_GT_GT;
	v->arr[29267] = anon_sym_PIPE_AMP;
	v->arr[29268] = anon_sym_AMP_GT_GT;
	v->arr[29269] = anon_sym_GT_PIPE;
	v->arr[29270] = anon_sym_LT_AMP_DASH;
	v->arr[29271] = anon_sym_GT_AMP_DASH;
	v->arr[29272] = anon_sym_LT_LT_DASH;
	v->arr[29273] = anon_sym_LT_LT_LT;
	v->arr[29275] = 6;
	v->arr[29275] = 3;
	v->arr[29276] = 1;
	v->arr[29277] = sym_comment;
	v->arr[29278] = 4389;
	init_small_table1952(v);
}

void	init_small_table1952(t_small_table *v)
{
	v->arr[29279] = 1;
	v->arr[29280] = aux_sym_concatenation_token1;
	v->arr[29281] = 4413;
	v->arr[29282] = 1;
	v->arr[29283] = sym__concat;
	v->arr[29284] = 838;
	v->arr[29285] = 1;
	v->arr[29286] = aux_sym_concatenation_repeat1;
	v->arr[29287] = 1281;
	v->arr[29288] = 5;
	v->arr[29289] = sym_file_descriptor;
	v->arr[29290] = sym_test_operator;
	v->arr[29291] = sym__bare_dollar;
	v->arr[29292] = sym__brace_start;
	v->arr[29293] = aux_sym_heredoc_redirect_token1;
	init_small_table1953(v);
}

void	init_small_table1953(t_small_table *v)
{
	v->arr[29294] = 1271;
	v->arr[29295] = 42;
	v->arr[29296] = anon_sym_LPAREN_LPAREN;
	v->arr[29297] = anon_sym_SEMI;
	v->arr[29298] = anon_sym_PIPE_PIPE;
	v->arr[29299] = anon_sym_AMP_AMP;
	v->arr[29300] = anon_sym_PIPE;
	v->arr[29301] = anon_sym_AMP;
	v->arr[29302] = anon_sym_EQ_EQ;
	v->arr[29303] = anon_sym_LT;
	v->arr[29304] = anon_sym_GT;
	v->arr[29305] = anon_sym_LT_LT;
	v->arr[29306] = anon_sym_GT_GT;
	v->arr[29307] = anon_sym_LPAREN;
	v->arr[29308] = anon_sym_SEMI_SEMI;
	init_small_table1954(v);
}

void	init_small_table1954(t_small_table *v)
{
	v->arr[29309] = anon_sym_SEMI_AMP;
	v->arr[29310] = anon_sym_SEMI_SEMI_AMP;
	v->arr[29311] = anon_sym_PIPE_AMP;
	v->arr[29312] = anon_sym_EQ_TILDE;
	v->arr[29313] = anon_sym_AMP_GT;
	v->arr[29314] = anon_sym_AMP_GT_GT;
	v->arr[29315] = anon_sym_LT_AMP;
	v->arr[29316] = anon_sym_GT_AMP;
	v->arr[29317] = anon_sym_GT_PIPE;
	v->arr[29318] = anon_sym_LT_AMP_DASH;
	v->arr[29319] = anon_sym_GT_AMP_DASH;
	v->arr[29320] = anon_sym_LT_LT_DASH;
	v->arr[29321] = anon_sym_LT_LT_LT;
	v->arr[29322] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[29323] = anon_sym_DOLLAR_LBRACK;
	init_small_table1955(v);
}

// file funcs390.c
