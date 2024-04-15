/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1341.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table6705(t_small_table *v)
{
	v->arr[100574] = sym_binary_expression;
	v->arr[100575] = sym_ternary_expression;
	v->arr[100576] = sym_unary_expression;
	v->arr[100577] = sym_postfix_expression;
	v->arr[100578] = sym_parenthesized_expression;
	v->arr[100579] = sym_concatenation;
	v->arr[100580] = 2451;
	v->arr[100581] = 9;
	v->arr[100582] = sym_arithmetic_expansion;
	v->arr[100583] = sym_brace_expression;
	v->arr[100584] = sym_string;
	v->arr[100585] = sym_translated_string;
	v->arr[100586] = sym_number;
	v->arr[100587] = sym_simple_expansion;
	v->arr[100588] = sym_expansion;
	init_small_table6706(v);
}

void	init_small_table6706(t_small_table *v)
{
	v->arr[100589] = sym_command_substitution;
	v->arr[100590] = sym_process_substitution;
	v->arr[100592] = 3;
	v->arr[100592] = 3;
	v->arr[100593] = 1;
	v->arr[100594] = sym_comment;
	v->arr[100595] = 5768;
	v->arr[100596] = 6;
	v->arr[100597] = sym_file_descriptor;
	v->arr[100598] = sym_variable_name;
	v->arr[100599] = sym_test_operator;
	v->arr[100600] = sym__brace_start;
	v->arr[100601] = 0;
	v->arr[100602] = aux_sym_heredoc_redirect_token1;
	v->arr[100603] = 5766;
	init_small_table6707(v);
}

void	init_small_table6707(t_small_table *v)
{
	v->arr[100604] = 37;
	v->arr[100605] = anon_sym_LPAREN_LPAREN;
	v->arr[100606] = anon_sym_SEMI;
	v->arr[100607] = anon_sym_PIPE_PIPE;
	v->arr[100608] = anon_sym_AMP_AMP;
	v->arr[100609] = anon_sym_PIPE;
	v->arr[100610] = anon_sym_AMP;
	v->arr[100611] = anon_sym_LT;
	v->arr[100612] = anon_sym_GT;
	v->arr[100613] = anon_sym_LT_LT;
	v->arr[100614] = anon_sym_GT_GT;
	v->arr[100615] = anon_sym_SEMI_SEMI;
	v->arr[100616] = anon_sym_PIPE_AMP;
	v->arr[100617] = anon_sym_AMP_GT;
	v->arr[100618] = anon_sym_AMP_GT_GT;
	init_small_table6708(v);
}

void	init_small_table6708(t_small_table *v)
{
	v->arr[100619] = anon_sym_LT_AMP;
	v->arr[100620] = anon_sym_GT_AMP;
	v->arr[100621] = anon_sym_GT_PIPE;
	v->arr[100622] = anon_sym_LT_AMP_DASH;
	v->arr[100623] = anon_sym_GT_AMP_DASH;
	v->arr[100624] = anon_sym_LT_LT_DASH;
	v->arr[100625] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[100626] = anon_sym_DOLLAR_LBRACK;
	v->arr[100627] = anon_sym_DOLLAR;
	v->arr[100628] = sym__special_character;
	v->arr[100629] = anon_sym_DQUOTE;
	v->arr[100630] = sym_raw_string;
	v->arr[100631] = sym_ansi_c_string;
	v->arr[100632] = aux_sym_number_token1;
	v->arr[100633] = aux_sym_number_token2;
	init_small_table6709(v);
}

void	init_small_table6709(t_small_table *v)
{
	v->arr[100634] = anon_sym_DOLLAR_LBRACE;
	v->arr[100635] = anon_sym_DOLLAR_LPAREN;
	v->arr[100636] = anon_sym_BQUOTE;
	v->arr[100637] = anon_sym_DOLLAR_BQUOTE;
	v->arr[100638] = anon_sym_LT_LPAREN;
	v->arr[100639] = anon_sym_GT_LPAREN;
	v->arr[100640] = aux_sym__simple_variable_name_token1;
	v->arr[100641] = sym_word;
	v->arr[100643] = 26;
	v->arr[100643] = 71;
	v->arr[100644] = 1;
	v->arr[100645] = sym_comment;
	v->arr[100646] = 1131;
	v->arr[100647] = 1;
	v->arr[100648] = anon_sym_LPAREN;
	init_small_table6710(v);
}

// file funcs1341.c
