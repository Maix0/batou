/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs232.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table1160(t_small_table *v)
{
	v->arr[17399] = sym_process_substitution;
	v->arr[17400] = 2840;
	v->arr[17401] = 4;
	v->arr[17402] = sym_subscript;
	v->arr[17403] = sym__arithmetic_expression;
	v->arr[17404] = sym__arithmetic_literal;
	v->arr[17405] = sym__arithmetic_parenthesized_expression;
	v->arr[17406] = 2594;
	v->arr[17407] = 6;
	v->arr[17408] = sym_binary_expression;
	v->arr[17409] = sym_ternary_expression;
	v->arr[17410] = sym_unary_expression;
	v->arr[17411] = sym_postfix_expression;
	v->arr[17412] = sym_parenthesized_expression;
	v->arr[17413] = sym_concatenation;
	init_small_table1161(v);
}

void	init_small_table1161(t_small_table *v)
{
	v->arr[17415] = 35;
	v->arr[17415] = 71;
	v->arr[17416] = 1;
	v->arr[17417] = sym_comment;
	v->arr[17418] = 237;
	v->arr[17419] = 1;
	v->arr[17420] = sym_word;
	v->arr[17421] = 258;
	v->arr[17422] = 1;
	v->arr[17423] = anon_sym_DOLLAR;
	v->arr[17424] = 264;
	v->arr[17425] = 1;
	v->arr[17426] = aux_sym_number_token1;
	v->arr[17427] = 266;
	v->arr[17428] = 1;
	init_small_table1162(v);
}

void	init_small_table1162(t_small_table *v)
{
	v->arr[17429] = aux_sym_number_token2;
	v->arr[17430] = 270;
	v->arr[17431] = 1;
	v->arr[17432] = anon_sym_DOLLAR_LPAREN;
	v->arr[17433] = 282;
	v->arr[17434] = 1;
	v->arr[17435] = sym_test_operator;
	v->arr[17436] = 284;
	v->arr[17437] = 1;
	v->arr[17438] = sym__brace_start;
	v->arr[17439] = 1075;
	v->arr[17440] = 1;
	v->arr[17441] = anon_sym_DOLLAR_LBRACK;
	v->arr[17442] = 1079;
	v->arr[17443] = 1;
	init_small_table1163(v);
}

void	init_small_table1163(t_small_table *v)
{
	v->arr[17444] = sym__special_character;
	v->arr[17445] = 1081;
	v->arr[17446] = 1;
	v->arr[17447] = anon_sym_DQUOTE;
	v->arr[17448] = 1085;
	v->arr[17449] = 1;
	v->arr[17450] = anon_sym_DOLLAR_LBRACE;
	v->arr[17451] = 1087;
	v->arr[17452] = 1;
	v->arr[17453] = anon_sym_DOLLAR_BQUOTE;
	v->arr[17454] = 3588;
	v->arr[17455] = 1;
	v->arr[17456] = anon_sym_LPAREN;
	v->arr[17457] = 3590;
	v->arr[17458] = 1;
	init_small_table1164(v);
}

void	init_small_table1164(t_small_table *v)
{
	v->arr[17459] = anon_sym_BANG;
	v->arr[17460] = 3596;
	v->arr[17461] = 1;
	v->arr[17462] = anon_sym_TILDE;
	v->arr[17463] = 3598;
	v->arr[17464] = 1;
	v->arr[17465] = anon_sym_BQUOTE;
	v->arr[17466] = 3600;
	v->arr[17467] = 1;
	v->arr[17468] = aux_sym__simple_variable_name_token1;
	v->arr[17469] = 3602;
	v->arr[17470] = 1;
	v->arr[17471] = sym_variable_name;
	v->arr[17472] = 2509;
	v->arr[17473] = 1;
	init_small_table1165(v);
}

// file funcs232.c
