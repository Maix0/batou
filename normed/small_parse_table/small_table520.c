/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs520.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table2600(t_small_table *v)
{
	v->arr[38999] = sym_number;
	v->arr[39000] = sym_simple_expansion;
	v->arr[39001] = sym_expansion;
	v->arr[39002] = sym_command_substitution;
	v->arr[39003] = sym_process_substitution;
	v->arr[39005] = 3;
	v->arr[39005] = 3;
	v->arr[39006] = 1;
	v->arr[39007] = sym_comment;
	v->arr[39008] = 1298;
	v->arr[39009] = 6;
	v->arr[39010] = sym_file_descriptor;
	v->arr[39011] = sym__concat;
	v->arr[39012] = sym_test_operator;
	v->arr[39013] = sym__bare_dollar;
	init_small_table2601(v);
}

void	init_small_table2601(t_small_table *v)
{
	v->arr[39014] = sym__brace_start;
	v->arr[39015] = aux_sym_heredoc_redirect_token1;
	v->arr[39016] = 1296;
	v->arr[39017] = 43;
	v->arr[39018] = anon_sym_LPAREN_LPAREN;
	v->arr[39019] = anon_sym_SEMI;
	v->arr[39020] = anon_sym_PIPE_PIPE;
	v->arr[39021] = anon_sym_AMP_AMP;
	v->arr[39022] = anon_sym_PIPE;
	v->arr[39023] = anon_sym_AMP;
	v->arr[39024] = anon_sym_EQ_EQ;
	v->arr[39025] = anon_sym_LT;
	v->arr[39026] = anon_sym_GT;
	v->arr[39027] = anon_sym_LT_LT;
	v->arr[39028] = anon_sym_GT_GT;
	init_small_table2602(v);
}

void	init_small_table2602(t_small_table *v)
{
	v->arr[39029] = anon_sym_LPAREN;
	v->arr[39030] = anon_sym_SEMI_SEMI;
	v->arr[39031] = anon_sym_SEMI_AMP;
	v->arr[39032] = anon_sym_SEMI_SEMI_AMP;
	v->arr[39033] = anon_sym_PIPE_AMP;
	v->arr[39034] = anon_sym_EQ_TILDE;
	v->arr[39035] = anon_sym_AMP_GT;
	v->arr[39036] = anon_sym_AMP_GT_GT;
	v->arr[39037] = anon_sym_LT_AMP;
	v->arr[39038] = anon_sym_GT_AMP;
	v->arr[39039] = anon_sym_GT_PIPE;
	v->arr[39040] = anon_sym_LT_AMP_DASH;
	v->arr[39041] = anon_sym_GT_AMP_DASH;
	v->arr[39042] = anon_sym_LT_LT_DASH;
	v->arr[39043] = anon_sym_LT_LT_LT;
	init_small_table2603(v);
}

void	init_small_table2603(t_small_table *v)
{
	v->arr[39044] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[39045] = anon_sym_DOLLAR_LBRACK;
	v->arr[39046] = aux_sym_concatenation_token1;
	v->arr[39047] = anon_sym_DOLLAR;
	v->arr[39048] = sym__special_character;
	v->arr[39049] = anon_sym_DQUOTE;
	v->arr[39050] = sym_raw_string;
	v->arr[39051] = sym_ansi_c_string;
	v->arr[39052] = aux_sym_number_token1;
	v->arr[39053] = aux_sym_number_token2;
	v->arr[39054] = anon_sym_DOLLAR_LBRACE;
	v->arr[39055] = anon_sym_DOLLAR_LPAREN;
	v->arr[39056] = anon_sym_BQUOTE;
	v->arr[39057] = anon_sym_DOLLAR_BQUOTE;
	v->arr[39058] = anon_sym_LT_LPAREN;
	init_small_table2604(v);
}

void	init_small_table2604(t_small_table *v)
{
	v->arr[39059] = anon_sym_GT_LPAREN;
	v->arr[39060] = sym_word;
	v->arr[39062] = 13;
	v->arr[39062] = 3;
	v->arr[39063] = 1;
	v->arr[39064] = sym_comment;
	v->arr[39065] = 2721;
	v->arr[39066] = 1;
	v->arr[39067] = 0;
	v->arr[39068] = 4696;
	v->arr[39069] = 1;
	v->arr[39070] = sym_variable_name;
	v->arr[39071] = 5051;
	v->arr[39072] = 1;
	v->arr[39073] = aux_sym_heredoc_redirect_token1;
	init_small_table2605(v);
}

// file funcs520.c
