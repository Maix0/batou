/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1565.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table7825(t_small_table *v)
{
	v->arr[117374] = 1199;
	v->arr[117375] = 2;
	v->arr[117376] = sym_raw_string;
	v->arr[117377] = sym_ansi_c_string;
	v->arr[117378] = 2594;
	v->arr[117379] = 6;
	v->arr[117380] = sym_binary_expression;
	v->arr[117381] = sym_ternary_expression;
	v->arr[117382] = sym_unary_expression;
	v->arr[117383] = sym_postfix_expression;
	v->arr[117384] = sym_parenthesized_expression;
	v->arr[117385] = sym_concatenation;
	v->arr[117386] = 2503;
	v->arr[117387] = 9;
	v->arr[117388] = sym_arithmetic_expansion;
	init_small_table7826(v);
}

void	init_small_table7826(t_small_table *v)
{
	v->arr[117389] = sym_brace_expression;
	v->arr[117390] = sym_string;
	v->arr[117391] = sym_translated_string;
	v->arr[117392] = sym_number;
	v->arr[117393] = sym_simple_expansion;
	v->arr[117394] = sym_expansion;
	v->arr[117395] = sym_command_substitution;
	v->arr[117396] = sym_process_substitution;
	v->arr[117398] = 27;
	v->arr[117398] = 71;
	v->arr[117399] = 1;
	v->arr[117400] = sym_comment;
	v->arr[117401] = 363;
	v->arr[117402] = 1;
	v->arr[117403] = anon_sym_DOLLAR_LBRACK;
	init_small_table7827(v);
}

void	init_small_table7827(t_small_table *v)
{
	v->arr[117404] = 367;
	v->arr[117405] = 1;
	v->arr[117406] = anon_sym_DOLLAR;
	v->arr[117407] = 371;
	v->arr[117408] = 1;
	v->arr[117409] = anon_sym_DQUOTE;
	v->arr[117410] = 375;
	v->arr[117411] = 1;
	v->arr[117412] = aux_sym_number_token1;
	v->arr[117413] = 377;
	v->arr[117414] = 1;
	v->arr[117415] = aux_sym_number_token2;
	v->arr[117416] = 379;
	v->arr[117417] = 1;
	v->arr[117418] = anon_sym_DOLLAR_LBRACE;
	init_small_table7828(v);
}

void	init_small_table7828(t_small_table *v)
{
	v->arr[117419] = 381;
	v->arr[117420] = 1;
	v->arr[117421] = anon_sym_DOLLAR_LPAREN;
	v->arr[117422] = 385;
	v->arr[117423] = 1;
	v->arr[117424] = anon_sym_DOLLAR_BQUOTE;
	v->arr[117425] = 391;
	v->arr[117426] = 1;
	v->arr[117427] = sym__brace_start;
	v->arr[117428] = 1093;
	v->arr[117429] = 1;
	v->arr[117430] = anon_sym_LPAREN;
	v->arr[117431] = 1095;
	v->arr[117432] = 1;
	v->arr[117433] = anon_sym_BANG;
	init_small_table7829(v);
}

void	init_small_table7829(t_small_table *v)
{
	v->arr[117434] = 1103;
	v->arr[117435] = 1;
	v->arr[117436] = anon_sym_TILDE;
	v->arr[117437] = 5809;
	v->arr[117438] = 1;
	v->arr[117439] = anon_sym_BQUOTE;
	v->arr[117440] = 5916;
	v->arr[117441] = 1;
	v->arr[117442] = sym__special_character;
	v->arr[117443] = 6415;
	v->arr[117444] = 1;
	v->arr[117445] = sym_word;
	v->arr[117446] = 6419;
	v->arr[117447] = 1;
	v->arr[117448] = sym_test_operator;
	init_small_table7830(v);
}

// file funcs1565.c
