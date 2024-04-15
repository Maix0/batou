/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1343.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table6715(t_small_table *v)
{
	v->arr[100724] = sym_unary_expression;
	v->arr[100725] = sym_postfix_expression;
	v->arr[100726] = sym_parenthesized_expression;
	v->arr[100727] = sym_concatenation;
	v->arr[100728] = 2588;
	v->arr[100729] = 9;
	v->arr[100730] = sym_arithmetic_expansion;
	v->arr[100731] = sym_brace_expression;
	v->arr[100732] = sym_string;
	v->arr[100733] = sym_translated_string;
	v->arr[100734] = sym_number;
	v->arr[100735] = sym_simple_expansion;
	v->arr[100736] = sym_expansion;
	v->arr[100737] = sym_command_substitution;
	v->arr[100738] = sym_process_substitution;
	init_small_table6716(v);
}

void	init_small_table6716(t_small_table *v)
{
	v->arr[100740] = 7;
	v->arr[100740] = 3;
	v->arr[100741] = 1;
	v->arr[100742] = sym_comment;
	v->arr[100743] = 5826;
	v->arr[100744] = 1;
	v->arr[100745] = aux_sym_heredoc_redirect_token1;
	v->arr[100746] = 5828;
	v->arr[100747] = 1;
	v->arr[100748] = sym_file_descriptor;
	v->arr[100749] = 5831;
	v->arr[100750] = 3;
	v->arr[100751] = sym_variable_name;
	v->arr[100752] = sym_test_operator;
	v->arr[100753] = sym__brace_start;
	init_small_table6717(v);
}

void	init_small_table6717(t_small_table *v)
{
	v->arr[100754] = 5821;
	v->arr[100755] = 10;
	v->arr[100756] = anon_sym_SEMI;
	v->arr[100757] = anon_sym_PIPE_PIPE;
	v->arr[100758] = anon_sym_AMP_AMP;
	v->arr[100759] = anon_sym_PIPE;
	v->arr[100760] = anon_sym_AMP;
	v->arr[100761] = anon_sym_LT_LT;
	v->arr[100762] = anon_sym_RPAREN;
	v->arr[100763] = anon_sym_SEMI_SEMI;
	v->arr[100764] = anon_sym_PIPE_AMP;
	v->arr[100765] = anon_sym_LT_LT_DASH;
	v->arr[100766] = 5823;
	v->arr[100767] = 11;
	v->arr[100768] = anon_sym_LT;
	init_small_table6718(v);
}

void	init_small_table6718(t_small_table *v)
{
	v->arr[100769] = anon_sym_GT;
	v->arr[100770] = anon_sym_GT_GT;
	v->arr[100771] = anon_sym_AMP_GT;
	v->arr[100772] = anon_sym_AMP_GT_GT;
	v->arr[100773] = anon_sym_LT_AMP;
	v->arr[100774] = anon_sym_GT_AMP;
	v->arr[100775] = anon_sym_GT_PIPE;
	v->arr[100776] = anon_sym_LT_AMP_DASH;
	v->arr[100777] = anon_sym_GT_AMP_DASH;
	v->arr[100778] = anon_sym_LT_LT_LT;
	v->arr[100779] = 5819;
	v->arr[100780] = 17;
	v->arr[100781] = anon_sym_LPAREN_LPAREN;
	v->arr[100782] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[100783] = anon_sym_DOLLAR_LBRACK;
	init_small_table6719(v);
}

void	init_small_table6719(t_small_table *v)
{
	v->arr[100784] = anon_sym_DOLLAR;
	v->arr[100785] = sym__special_character;
	v->arr[100786] = anon_sym_DQUOTE;
	v->arr[100787] = sym_raw_string;
	v->arr[100788] = sym_ansi_c_string;
	v->arr[100789] = aux_sym_number_token1;
	v->arr[100790] = aux_sym_number_token2;
	v->arr[100791] = anon_sym_DOLLAR_LBRACE;
	v->arr[100792] = anon_sym_DOLLAR_LPAREN;
	v->arr[100793] = anon_sym_BQUOTE;
	v->arr[100794] = anon_sym_DOLLAR_BQUOTE;
	v->arr[100795] = anon_sym_LT_LPAREN;
	v->arr[100796] = anon_sym_GT_LPAREN;
	v->arr[100797] = sym_word;
	v->arr[100799] = 26;
	init_small_table6720(v);
}

// file funcs1343.c
