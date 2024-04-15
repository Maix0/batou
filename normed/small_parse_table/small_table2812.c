/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2812.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table14060(t_small_table *v)
{
	v->arr[210899] = sym_string;
	v->arr[210900] = sym_number;
	v->arr[210901] = sym_simple_expansion;
	v->arr[210902] = sym_expansion;
	v->arr[210903] = sym_command_substitution;
	v->arr[210905] = 18;
	v->arr[210905] = 3;
	v->arr[210906] = 1;
	v->arr[210907] = sym_comment;
	v->arr[210908] = 111;
	v->arr[210909] = 1;
	v->arr[210910] = anon_sym_DOLLAR_LBRACK;
	v->arr[210911] = 117;
	v->arr[210912] = 1;
	v->arr[210913] = anon_sym_DQUOTE;
	init_small_table14061(v);
}

void	init_small_table14061(t_small_table *v)
{
	v->arr[210914] = 121;
	v->arr[210915] = 1;
	v->arr[210916] = aux_sym_number_token1;
	v->arr[210917] = 123;
	v->arr[210918] = 1;
	v->arr[210919] = aux_sym_number_token2;
	v->arr[210920] = 125;
	v->arr[210921] = 1;
	v->arr[210922] = anon_sym_DOLLAR_LBRACE;
	v->arr[210923] = 127;
	v->arr[210924] = 1;
	v->arr[210925] = anon_sym_DOLLAR_LPAREN;
	v->arr[210926] = 129;
	v->arr[210927] = 1;
	v->arr[210928] = anon_sym_BQUOTE;
	init_small_table14062(v);
}

void	init_small_table14062(t_small_table *v)
{
	v->arr[210929] = 131;
	v->arr[210930] = 1;
	v->arr[210931] = anon_sym_DOLLAR_BQUOTE;
	v->arr[210932] = 141;
	v->arr[210933] = 1;
	v->arr[210934] = sym__brace_start;
	v->arr[210935] = 9340;
	v->arr[210936] = 1;
	v->arr[210937] = sym_word;
	v->arr[210938] = 9346;
	v->arr[210939] = 1;
	v->arr[210940] = sym__comment_word;
	v->arr[210941] = 10010;
	v->arr[210942] = 1;
	v->arr[210943] = anon_sym_DOLLAR;
	init_small_table14063(v);
}

void	init_small_table14063(t_small_table *v)
{
	v->arr[210944] = 109;
	v->arr[210945] = 2;
	v->arr[210946] = anon_sym_LPAREN_LPAREN;
	v->arr[210947] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[210948] = 133;
	v->arr[210949] = 2;
	v->arr[210950] = anon_sym_LT_LPAREN;
	v->arr[210951] = anon_sym_GT_LPAREN;
	v->arr[210952] = 9342;
	v->arr[210953] = 2;
	v->arr[210954] = sym_test_operator;
	v->arr[210955] = sym__special_character;
	v->arr[210956] = 9344;
	v->arr[210957] = 3;
	v->arr[210958] = sym__bare_dollar;
	init_small_table14064(v);
}

void	init_small_table14064(t_small_table *v)
{
	v->arr[210959] = sym_raw_string;
	v->arr[210960] = sym_ansi_c_string;
	v->arr[210961] = 482;
	v->arr[210962] = 9;
	v->arr[210963] = sym_arithmetic_expansion;
	v->arr[210964] = sym_brace_expression;
	v->arr[210965] = sym_string;
	v->arr[210966] = sym_translated_string;
	v->arr[210967] = sym_number;
	v->arr[210968] = sym_simple_expansion;
	v->arr[210969] = sym_expansion;
	v->arr[210970] = sym_command_substitution;
	v->arr[210971] = sym_process_substitution;
	v->arr[210973] = 18;
	v->arr[210973] = 3;
	init_small_table14065(v);
}

// file funcs2812.c
