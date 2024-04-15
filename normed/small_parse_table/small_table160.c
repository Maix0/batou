/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs160.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table800(t_small_table *v)
{
	v->arr[12000] = 21;
	v->arr[12000] = 3;
	v->arr[12001] = 1;
	v->arr[12002] = sym_comment;
	v->arr[12003] = 2572;
	v->arr[12004] = 1;
	v->arr[12005] = anon_sym_DOLLAR_LBRACK;
	v->arr[12006] = 2574;
	v->arr[12007] = 1;
	v->arr[12008] = anon_sym_DOLLAR;
	v->arr[12009] = 2576;
	v->arr[12010] = 1;
	v->arr[12011] = sym__special_character;
	v->arr[12012] = 2578;
	v->arr[12013] = 1;
	init_small_table801(v);
}

void	init_small_table801(t_small_table *v)
{
	v->arr[12014] = anon_sym_DQUOTE;
	v->arr[12015] = 2580;
	v->arr[12016] = 1;
	v->arr[12017] = aux_sym_number_token1;
	v->arr[12018] = 2582;
	v->arr[12019] = 1;
	v->arr[12020] = aux_sym_number_token2;
	v->arr[12021] = 2584;
	v->arr[12022] = 1;
	v->arr[12023] = anon_sym_DOLLAR_LBRACE;
	v->arr[12024] = 2586;
	v->arr[12025] = 1;
	v->arr[12026] = anon_sym_DOLLAR_LPAREN;
	v->arr[12027] = 2588;
	v->arr[12028] = 1;
	init_small_table802(v);
}

void	init_small_table802(t_small_table *v)
{
	v->arr[12029] = anon_sym_BQUOTE;
	v->arr[12030] = 2590;
	v->arr[12031] = 1;
	v->arr[12032] = anon_sym_DOLLAR_BQUOTE;
	v->arr[12033] = 2594;
	v->arr[12034] = 1;
	v->arr[12035] = sym_test_operator;
	v->arr[12036] = 2596;
	v->arr[12037] = 1;
	v->arr[12038] = sym__brace_start;
	v->arr[12039] = 1899;
	v->arr[12040] = 1;
	v->arr[12041] = aux_sym__literal_repeat1;
	v->arr[12042] = 2096;
	v->arr[12043] = 2;
	init_small_table803(v);
}

void	init_small_table803(t_small_table *v)
{
	v->arr[12044] = sym_file_descriptor;
	v->arr[12045] = aux_sym_heredoc_redirect_token1;
	v->arr[12046] = 2570;
	v->arr[12047] = 2;
	v->arr[12048] = anon_sym_LPAREN_LPAREN;
	v->arr[12049] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[12050] = 2592;
	v->arr[12051] = 2;
	v->arr[12052] = anon_sym_LT_LPAREN;
	v->arr[12053] = anon_sym_GT_LPAREN;
	v->arr[12054] = 621;
	v->arr[12055] = 2;
	v->arr[12056] = sym_concatenation;
	v->arr[12057] = aux_sym_for_statement_repeat1;
	v->arr[12058] = 2568;
	init_small_table804(v);
}

void	init_small_table804(t_small_table *v)
{
	v->arr[12059] = 3;
	v->arr[12060] = sym_raw_string;
	v->arr[12061] = sym_ansi_c_string;
	v->arr[12062] = sym_word;
	v->arr[12063] = 1394;
	v->arr[12064] = 9;
	v->arr[12065] = sym_arithmetic_expansion;
	v->arr[12066] = sym_brace_expression;
	v->arr[12067] = sym_string;
	v->arr[12068] = sym_translated_string;
	v->arr[12069] = sym_number;
	v->arr[12070] = sym_simple_expansion;
	v->arr[12071] = sym_expansion;
	v->arr[12072] = sym_command_substitution;
	v->arr[12073] = sym_process_substitution;
	init_small_table805(v);
}

// file funcs160.c
