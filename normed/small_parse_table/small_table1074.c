/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1074.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table5370(t_small_table *v)
{
	v->arr[80549] = sym_postfix_expression;
	v->arr[80550] = sym_parenthesized_expression;
	v->arr[80551] = sym_concatenation;
	v->arr[80552] = 2500;
	v->arr[80553] = 9;
	v->arr[80554] = sym_arithmetic_expansion;
	v->arr[80555] = sym_brace_expression;
	v->arr[80556] = sym_string;
	v->arr[80557] = sym_translated_string;
	v->arr[80558] = sym_number;
	v->arr[80559] = sym_simple_expansion;
	v->arr[80560] = sym_expansion;
	v->arr[80561] = sym_command_substitution;
	v->arr[80562] = sym_process_substitution;
	v->arr[80564] = 5;
	init_small_table5371(v);
}

void	init_small_table5371(t_small_table *v)
{
	v->arr[80564] = 3;
	v->arr[80565] = 1;
	v->arr[80566] = sym_comment;
	v->arr[80567] = 5928;
	v->arr[80568] = 1;
	v->arr[80569] = sym__special_character;
	v->arr[80570] = 1646;
	v->arr[80571] = 1;
	v->arr[80572] = aux_sym__literal_repeat1;
	v->arr[80573] = 5180;
	v->arr[80574] = 5;
	v->arr[80575] = sym_file_descriptor;
	v->arr[80576] = sym_variable_name;
	v->arr[80577] = sym_test_operator;
	v->arr[80578] = sym__brace_start;
	init_small_table5372(v);
}

void	init_small_table5372(t_small_table *v)
{
	v->arr[80579] = aux_sym_heredoc_redirect_token1;
	v->arr[80580] = 5178;
	v->arr[80581] = 38;
	v->arr[80582] = anon_sym_LPAREN_LPAREN;
	v->arr[80583] = anon_sym_SEMI;
	v->arr[80584] = anon_sym_PIPE_PIPE;
	v->arr[80585] = anon_sym_AMP_AMP;
	v->arr[80586] = anon_sym_PIPE;
	v->arr[80587] = anon_sym_AMP;
	v->arr[80588] = anon_sym_LT;
	v->arr[80589] = anon_sym_GT;
	v->arr[80590] = anon_sym_LT_LT;
	v->arr[80591] = anon_sym_GT_GT;
	v->arr[80592] = anon_sym_SEMI_SEMI;
	v->arr[80593] = anon_sym_SEMI_AMP;
	init_small_table5373(v);
}

void	init_small_table5373(t_small_table *v)
{
	v->arr[80594] = anon_sym_SEMI_SEMI_AMP;
	v->arr[80595] = anon_sym_PIPE_AMP;
	v->arr[80596] = anon_sym_AMP_GT;
	v->arr[80597] = anon_sym_AMP_GT_GT;
	v->arr[80598] = anon_sym_LT_AMP;
	v->arr[80599] = anon_sym_GT_AMP;
	v->arr[80600] = anon_sym_GT_PIPE;
	v->arr[80601] = anon_sym_LT_AMP_DASH;
	v->arr[80602] = anon_sym_GT_AMP_DASH;
	v->arr[80603] = anon_sym_LT_LT_DASH;
	v->arr[80604] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[80605] = anon_sym_DOLLAR_LBRACK;
	v->arr[80606] = anon_sym_DOLLAR;
	v->arr[80607] = anon_sym_DQUOTE;
	v->arr[80608] = sym_raw_string;
	init_small_table5374(v);
}

void	init_small_table5374(t_small_table *v)
{
	v->arr[80609] = sym_ansi_c_string;
	v->arr[80610] = aux_sym_number_token1;
	v->arr[80611] = aux_sym_number_token2;
	v->arr[80612] = anon_sym_DOLLAR_LBRACE;
	v->arr[80613] = anon_sym_DOLLAR_LPAREN;
	v->arr[80614] = anon_sym_BQUOTE;
	v->arr[80615] = anon_sym_DOLLAR_BQUOTE;
	v->arr[80616] = anon_sym_LT_LPAREN;
	v->arr[80617] = anon_sym_GT_LPAREN;
	v->arr[80618] = aux_sym__simple_variable_name_token1;
	v->arr[80619] = sym_word;
	v->arr[80621] = 3;
	v->arr[80621] = 3;
	v->arr[80622] = 1;
	v->arr[80623] = sym_comment;
	init_small_table5375(v);
}

// file funcs1074.c
