/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs148.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table740(t_small_table *v)
{
	v->arr[11099] = sym_number;
	v->arr[11100] = sym_simple_expansion;
	v->arr[11101] = sym_expansion;
	v->arr[11102] = sym_command_substitution;
	v->arr[11103] = sym_process_substitution;
	v->arr[11104] = 2094;
	v->arr[11105] = 37;
	v->arr[11106] = anon_sym_LPAREN_LPAREN;
	v->arr[11107] = anon_sym_SEMI;
	v->arr[11108] = anon_sym_PIPE_PIPE;
	v->arr[11109] = anon_sym_AMP_AMP;
	v->arr[11110] = anon_sym_PIPE;
	v->arr[11111] = anon_sym_AMP;
	v->arr[11112] = anon_sym_LT;
	v->arr[11113] = anon_sym_GT;
	init_small_table741(v);
}

void	init_small_table741(t_small_table *v)
{
	v->arr[11114] = anon_sym_LT_LT;
	v->arr[11115] = anon_sym_GT_GT;
	v->arr[11116] = anon_sym_SEMI_SEMI;
	v->arr[11117] = anon_sym_PIPE_AMP;
	v->arr[11118] = anon_sym_AMP_GT;
	v->arr[11119] = anon_sym_AMP_GT_GT;
	v->arr[11120] = anon_sym_LT_AMP;
	v->arr[11121] = anon_sym_GT_AMP;
	v->arr[11122] = anon_sym_GT_PIPE;
	v->arr[11123] = anon_sym_LT_AMP_DASH;
	v->arr[11124] = anon_sym_GT_AMP_DASH;
	v->arr[11125] = anon_sym_LT_LT_DASH;
	v->arr[11126] = anon_sym_LT_LT_LT;
	v->arr[11127] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[11128] = anon_sym_DOLLAR_LBRACK;
	init_small_table742(v);
}

void	init_small_table742(t_small_table *v)
{
	v->arr[11129] = anon_sym_DOLLAR;
	v->arr[11130] = sym__special_character;
	v->arr[11131] = anon_sym_DQUOTE;
	v->arr[11132] = sym_raw_string;
	v->arr[11133] = sym_ansi_c_string;
	v->arr[11134] = aux_sym_number_token1;
	v->arr[11135] = aux_sym_number_token2;
	v->arr[11136] = anon_sym_DOLLAR_LBRACE;
	v->arr[11137] = anon_sym_DOLLAR_LPAREN;
	v->arr[11138] = anon_sym_BQUOTE;
	v->arr[11139] = anon_sym_DOLLAR_BQUOTE;
	v->arr[11140] = anon_sym_LT_LPAREN;
	v->arr[11141] = anon_sym_GT_LPAREN;
	v->arr[11142] = sym_word;
	v->arr[11144] = 8;
	init_small_table743(v);
}

void	init_small_table743(t_small_table *v)
{
	v->arr[11144] = 3;
	v->arr[11145] = 1;
	v->arr[11146] = sym_comment;
	v->arr[11147] = 1765;
	v->arr[11148] = 1;
	v->arr[11149] = anon_sym_DQUOTE;
	v->arr[11150] = 2959;
	v->arr[11151] = 1;
	v->arr[11152] = sym_variable_name;
	v->arr[11153] = 1213;
	v->arr[11154] = 1;
	v->arr[11155] = sym_string;
	v->arr[11156] = 2957;
	v->arr[11157] = 2;
	v->arr[11158] = aux_sym__simple_variable_name_token1;
	init_small_table744(v);
}

void	init_small_table744(t_small_table *v)
{
	v->arr[11159] = aux_sym__multiline_variable_name_token1;
	v->arr[11160] = 1241;
	v->arr[11161] = 3;
	v->arr[11162] = sym_file_descriptor;
	v->arr[11163] = sym_test_operator;
	v->arr[11164] = sym__brace_start;
	v->arr[11165] = 2955;
	v->arr[11166] = 9;
	v->arr[11167] = anon_sym_DASH;
	v->arr[11168] = anon_sym_STAR;
	v->arr[11169] = anon_sym_BANG;
	v->arr[11170] = anon_sym_QMARK;
	v->arr[11171] = anon_sym_DOLLAR;
	v->arr[11172] = anon_sym_POUND;
	v->arr[11173] = anon_sym_AT2;
	init_small_table745(v);
}

// file funcs148.c
