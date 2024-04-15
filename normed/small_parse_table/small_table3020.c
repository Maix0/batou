/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs3020.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table15100(t_small_table *v)
{
	v->arr[226499] = sym_string;
	v->arr[226500] = sym_number;
	v->arr[226501] = sym_simple_expansion;
	v->arr[226502] = sym_expansion;
	v->arr[226503] = sym_command_substitution;
	v->arr[226505] = 20;
	v->arr[226505] = 71;
	v->arr[226506] = 1;
	v->arr[226507] = sym_comment;
	v->arr[226508] = 4080;
	v->arr[226509] = 1;
	v->arr[226510] = anon_sym_DOLLAR;
	v->arr[226511] = 4086;
	v->arr[226512] = 1;
	v->arr[226513] = aux_sym_number_token1;
	init_small_table15101(v);
}

void	init_small_table15101(t_small_table *v)
{
	v->arr[226514] = 4088;
	v->arr[226515] = 1;
	v->arr[226516] = aux_sym_number_token2;
	v->arr[226517] = 4092;
	v->arr[226518] = 1;
	v->arr[226519] = anon_sym_DOLLAR_LPAREN;
	v->arr[226520] = 4102;
	v->arr[226521] = 1;
	v->arr[226522] = sym__brace_start;
	v->arr[226523] = 9310;
	v->arr[226524] = 1;
	v->arr[226525] = anon_sym_DOLLAR_LBRACK;
	v->arr[226526] = 9316;
	v->arr[226527] = 1;
	v->arr[226528] = anon_sym_DQUOTE;
	init_small_table15102(v);
}

void	init_small_table15102(t_small_table *v)
{
	v->arr[226529] = 9320;
	v->arr[226530] = 1;
	v->arr[226531] = anon_sym_DOLLAR_LBRACE;
	v->arr[226532] = 9322;
	v->arr[226533] = 1;
	v->arr[226534] = anon_sym_BQUOTE;
	v->arr[226535] = 9324;
	v->arr[226536] = 1;
	v->arr[226537] = anon_sym_DOLLAR_BQUOTE;
	v->arr[226538] = 10760;
	v->arr[226539] = 1;
	v->arr[226540] = sym_word;
	v->arr[226541] = 10762;
	v->arr[226542] = 1;
	v->arr[226543] = sym__special_character;
	init_small_table15103(v);
}

void	init_small_table15103(t_small_table *v)
{
	v->arr[226544] = 10766;
	v->arr[226545] = 1;
	v->arr[226546] = sym_test_operator;
	v->arr[226547] = 4500;
	v->arr[226548] = 1;
	v->arr[226549] = aux_sym__literal_repeat1;
	v->arr[226550] = 5029;
	v->arr[226551] = 1;
	v->arr[226552] = sym_concatenation;
	v->arr[226553] = 9308;
	v->arr[226554] = 2;
	v->arr[226555] = anon_sym_LPAREN_LPAREN;
	v->arr[226556] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[226557] = 9326;
	v->arr[226558] = 2;
	init_small_table15104(v);
}

void	init_small_table15104(t_small_table *v)
{
	v->arr[226559] = anon_sym_LT_LPAREN;
	v->arr[226560] = anon_sym_GT_LPAREN;
	v->arr[226561] = 10764;
	v->arr[226562] = 2;
	v->arr[226563] = sym_raw_string;
	v->arr[226564] = sym_ansi_c_string;
	v->arr[226565] = 4687;
	v->arr[226566] = 9;
	v->arr[226567] = sym_arithmetic_expansion;
	v->arr[226568] = sym_brace_expression;
	v->arr[226569] = sym_string;
	v->arr[226570] = sym_translated_string;
	v->arr[226571] = sym_number;
	v->arr[226572] = sym_simple_expansion;
	v->arr[226573] = sym_expansion;
	init_small_table15105(v);
}

// file funcs3020.c
