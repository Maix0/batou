/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1402.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table7010(t_small_table *v)
{
	v->arr[105149] = sym_arithmetic_expansion;
	v->arr[105150] = sym_brace_expression;
	v->arr[105151] = sym_string;
	v->arr[105152] = sym_translated_string;
	v->arr[105153] = sym_number;
	v->arr[105154] = sym_simple_expansion;
	v->arr[105155] = sym_expansion;
	v->arr[105156] = sym_command_substitution;
	v->arr[105157] = sym_process_substitution;
	v->arr[105159] = 8;
	v->arr[105159] = 3;
	v->arr[105160] = 1;
	v->arr[105161] = sym_comment;
	v->arr[105162] = 5826;
	v->arr[105163] = 1;
	init_small_table7011(v);
}

void	init_small_table7011(t_small_table *v)
{
	v->arr[105164] = aux_sym_heredoc_redirect_token1;
	v->arr[105165] = 5828;
	v->arr[105166] = 1;
	v->arr[105167] = sym_file_descriptor;
	v->arr[105168] = 6148;
	v->arr[105169] = 1;
	v->arr[105170] = anon_sym_RPAREN;
	v->arr[105171] = 5831;
	v->arr[105172] = 3;
	v->arr[105173] = sym_variable_name;
	v->arr[105174] = sym_test_operator;
	v->arr[105175] = sym__brace_start;
	v->arr[105176] = 5821;
	v->arr[105177] = 9;
	v->arr[105178] = anon_sym_SEMI;
	init_small_table7012(v);
}

void	init_small_table7012(t_small_table *v)
{
	v->arr[105179] = anon_sym_PIPE_PIPE;
	v->arr[105180] = anon_sym_AMP_AMP;
	v->arr[105181] = anon_sym_PIPE;
	v->arr[105182] = anon_sym_AMP;
	v->arr[105183] = anon_sym_LT_LT;
	v->arr[105184] = anon_sym_SEMI_SEMI;
	v->arr[105185] = anon_sym_PIPE_AMP;
	v->arr[105186] = anon_sym_LT_LT_DASH;
	v->arr[105187] = 5823;
	v->arr[105188] = 11;
	v->arr[105189] = anon_sym_LT;
	v->arr[105190] = anon_sym_GT;
	v->arr[105191] = anon_sym_GT_GT;
	v->arr[105192] = anon_sym_AMP_GT;
	v->arr[105193] = anon_sym_AMP_GT_GT;
	init_small_table7013(v);
}

void	init_small_table7013(t_small_table *v)
{
	v->arr[105194] = anon_sym_LT_AMP;
	v->arr[105195] = anon_sym_GT_AMP;
	v->arr[105196] = anon_sym_GT_PIPE;
	v->arr[105197] = anon_sym_LT_AMP_DASH;
	v->arr[105198] = anon_sym_GT_AMP_DASH;
	v->arr[105199] = anon_sym_LT_LT_LT;
	v->arr[105200] = 5819;
	v->arr[105201] = 17;
	v->arr[105202] = anon_sym_LPAREN_LPAREN;
	v->arr[105203] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[105204] = anon_sym_DOLLAR_LBRACK;
	v->arr[105205] = anon_sym_DOLLAR;
	v->arr[105206] = sym__special_character;
	v->arr[105207] = anon_sym_DQUOTE;
	v->arr[105208] = sym_raw_string;
	init_small_table7014(v);
}

void	init_small_table7014(t_small_table *v)
{
	v->arr[105209] = sym_ansi_c_string;
	v->arr[105210] = aux_sym_number_token1;
	v->arr[105211] = aux_sym_number_token2;
	v->arr[105212] = anon_sym_DOLLAR_LBRACE;
	v->arr[105213] = anon_sym_DOLLAR_LPAREN;
	v->arr[105214] = anon_sym_BQUOTE;
	v->arr[105215] = anon_sym_DOLLAR_BQUOTE;
	v->arr[105216] = anon_sym_LT_LPAREN;
	v->arr[105217] = anon_sym_GT_LPAREN;
	v->arr[105218] = sym_word;
	v->arr[105220] = 3;
	v->arr[105220] = 3;
	v->arr[105221] = 1;
	v->arr[105222] = sym_comment;
	v->arr[105223] = 5768;
	init_small_table7015(v);
}

// file funcs1402.c
