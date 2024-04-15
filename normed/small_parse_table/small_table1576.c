/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1576.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table7880(t_small_table *v)
{
	v->arr[118199] = sym_unary_expression;
	v->arr[118200] = sym_postfix_expression;
	v->arr[118201] = sym_parenthesized_expression;
	v->arr[118202] = sym_concatenation;
	v->arr[118203] = 2500;
	v->arr[118204] = 9;
	v->arr[118205] = sym_arithmetic_expansion;
	v->arr[118206] = sym_brace_expression;
	v->arr[118207] = sym_string;
	v->arr[118208] = sym_translated_string;
	v->arr[118209] = sym_number;
	v->arr[118210] = sym_simple_expansion;
	v->arr[118211] = sym_expansion;
	v->arr[118212] = sym_command_substitution;
	v->arr[118213] = sym_process_substitution;
	init_small_table7881(v);
}

void	init_small_table7881(t_small_table *v)
{
	v->arr[118215] = 8;
	v->arr[118215] = 3;
	v->arr[118216] = 1;
	v->arr[118217] = sym_comment;
	v->arr[118218] = 5826;
	v->arr[118219] = 1;
	v->arr[118220] = aux_sym_heredoc_redirect_token1;
	v->arr[118221] = 5828;
	v->arr[118222] = 1;
	v->arr[118223] = sym_file_descriptor;
	v->arr[118224] = 6430;
	v->arr[118225] = 1;
	v->arr[118226] = anon_sym_RPAREN;
	v->arr[118227] = 5831;
	v->arr[118228] = 3;
	init_small_table7882(v);
}

void	init_small_table7882(t_small_table *v)
{
	v->arr[118229] = sym_variable_name;
	v->arr[118230] = sym_test_operator;
	v->arr[118231] = sym__brace_start;
	v->arr[118232] = 5821;
	v->arr[118233] = 9;
	v->arr[118234] = anon_sym_SEMI;
	v->arr[118235] = anon_sym_PIPE_PIPE;
	v->arr[118236] = anon_sym_AMP_AMP;
	v->arr[118237] = anon_sym_PIPE;
	v->arr[118238] = anon_sym_AMP;
	v->arr[118239] = anon_sym_LT_LT;
	v->arr[118240] = anon_sym_SEMI_SEMI;
	v->arr[118241] = anon_sym_PIPE_AMP;
	v->arr[118242] = anon_sym_LT_LT_DASH;
	v->arr[118243] = 5823;
	init_small_table7883(v);
}

void	init_small_table7883(t_small_table *v)
{
	v->arr[118244] = 11;
	v->arr[118245] = anon_sym_LT;
	v->arr[118246] = anon_sym_GT;
	v->arr[118247] = anon_sym_GT_GT;
	v->arr[118248] = anon_sym_AMP_GT;
	v->arr[118249] = anon_sym_AMP_GT_GT;
	v->arr[118250] = anon_sym_LT_AMP;
	v->arr[118251] = anon_sym_GT_AMP;
	v->arr[118252] = anon_sym_GT_PIPE;
	v->arr[118253] = anon_sym_LT_AMP_DASH;
	v->arr[118254] = anon_sym_GT_AMP_DASH;
	v->arr[118255] = anon_sym_LT_LT_LT;
	v->arr[118256] = 5819;
	v->arr[118257] = 17;
	v->arr[118258] = anon_sym_LPAREN_LPAREN;
	init_small_table7884(v);
}

void	init_small_table7884(t_small_table *v)
{
	v->arr[118259] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[118260] = anon_sym_DOLLAR_LBRACK;
	v->arr[118261] = anon_sym_DOLLAR;
	v->arr[118262] = sym__special_character;
	v->arr[118263] = anon_sym_DQUOTE;
	v->arr[118264] = sym_raw_string;
	v->arr[118265] = sym_ansi_c_string;
	v->arr[118266] = aux_sym_number_token1;
	v->arr[118267] = aux_sym_number_token2;
	v->arr[118268] = anon_sym_DOLLAR_LBRACE;
	v->arr[118269] = anon_sym_DOLLAR_LPAREN;
	v->arr[118270] = anon_sym_BQUOTE;
	v->arr[118271] = anon_sym_DOLLAR_BQUOTE;
	v->arr[118272] = anon_sym_LT_LPAREN;
	v->arr[118273] = anon_sym_GT_LPAREN;
	init_small_table7885(v);
}

// file funcs1576.c
