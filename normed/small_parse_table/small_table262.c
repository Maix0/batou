/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs262.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table1310(t_small_table *v)
{
	v->arr[19649] = sym_unary_expression;
	v->arr[19650] = sym_postfix_expression;
	v->arr[19651] = sym_parenthesized_expression;
	v->arr[19652] = sym_concatenation;
	v->arr[19654] = 8;
	v->arr[19654] = 3;
	v->arr[19655] = 1;
	v->arr[19656] = sym_comment;
	v->arr[19657] = 2042;
	v->arr[19658] = 1;
	v->arr[19659] = anon_sym_DQUOTE;
	v->arr[19660] = 3647;
	v->arr[19661] = 1;
	v->arr[19662] = sym_variable_name;
	v->arr[19663] = 1547;
	init_small_table1311(v);
}

void	init_small_table1311(t_small_table *v)
{
	v->arr[19664] = 1;
	v->arr[19665] = sym_string;
	v->arr[19666] = 3645;
	v->arr[19667] = 2;
	v->arr[19668] = aux_sym__simple_variable_name_token1;
	v->arr[19669] = aux_sym__multiline_variable_name_token1;
	v->arr[19670] = 1241;
	v->arr[19671] = 4;
	v->arr[19672] = sym_file_descriptor;
	v->arr[19673] = sym_test_operator;
	v->arr[19674] = sym__brace_start;
	v->arr[19675] = 0;
	v->arr[19676] = 3643;
	v->arr[19677] = 9;
	v->arr[19678] = anon_sym_DASH;
	init_small_table1312(v);
}

void	init_small_table1312(t_small_table *v)
{
	v->arr[19679] = anon_sym_STAR;
	v->arr[19680] = anon_sym_BANG;
	v->arr[19681] = anon_sym_QMARK;
	v->arr[19682] = anon_sym_DOLLAR;
	v->arr[19683] = anon_sym_POUND;
	v->arr[19684] = anon_sym_AT2;
	v->arr[19685] = anon_sym_0;
	v->arr[19686] = anon_sym__;
	v->arr[19687] = 1239;
	v->arr[19688] = 35;
	v->arr[19689] = anon_sym_LPAREN_LPAREN;
	v->arr[19690] = anon_sym_SEMI;
	v->arr[19691] = anon_sym_PIPE_PIPE;
	v->arr[19692] = anon_sym_AMP_AMP;
	v->arr[19693] = anon_sym_PIPE;
	init_small_table1313(v);
}

void	init_small_table1313(t_small_table *v)
{
	v->arr[19694] = anon_sym_AMP;
	v->arr[19695] = anon_sym_LT;
	v->arr[19696] = anon_sym_GT;
	v->arr[19697] = anon_sym_LT_LT;
	v->arr[19698] = anon_sym_GT_GT;
	v->arr[19699] = anon_sym_SEMI_SEMI;
	v->arr[19700] = anon_sym_PIPE_AMP;
	v->arr[19701] = anon_sym_AMP_GT;
	v->arr[19702] = anon_sym_AMP_GT_GT;
	v->arr[19703] = anon_sym_LT_AMP;
	v->arr[19704] = anon_sym_GT_AMP;
	v->arr[19705] = anon_sym_GT_PIPE;
	v->arr[19706] = anon_sym_LT_AMP_DASH;
	v->arr[19707] = anon_sym_GT_AMP_DASH;
	v->arr[19708] = anon_sym_LT_LT_DASH;
	init_small_table1314(v);
}

void	init_small_table1314(t_small_table *v)
{
	v->arr[19709] = aux_sym_heredoc_redirect_token1;
	v->arr[19710] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[19711] = anon_sym_DOLLAR_LBRACK;
	v->arr[19712] = sym__special_character;
	v->arr[19713] = sym_raw_string;
	v->arr[19714] = sym_ansi_c_string;
	v->arr[19715] = aux_sym_number_token1;
	v->arr[19716] = aux_sym_number_token2;
	v->arr[19717] = anon_sym_DOLLAR_LBRACE;
	v->arr[19718] = anon_sym_DOLLAR_LPAREN;
	v->arr[19719] = anon_sym_BQUOTE;
	v->arr[19720] = anon_sym_DOLLAR_BQUOTE;
	v->arr[19721] = anon_sym_LT_LPAREN;
	v->arr[19722] = anon_sym_GT_LPAREN;
	v->arr[19723] = sym_word;
	init_small_table1315(v);
}

// file funcs262.c
