/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1541.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table7705(t_small_table *v)
{
	v->arr[115574] = sym_string;
	v->arr[115575] = sym_translated_string;
	v->arr[115576] = sym_number;
	v->arr[115577] = sym_simple_expansion;
	v->arr[115578] = sym_expansion;
	v->arr[115579] = sym_command_substitution;
	v->arr[115580] = sym_process_substitution;
	v->arr[115582] = 26;
	v->arr[115582] = 71;
	v->arr[115583] = 1;
	v->arr[115584] = sym_comment;
	v->arr[115585] = 107;
	v->arr[115586] = 1;
	v->arr[115587] = anon_sym_TILDE;
	v->arr[115588] = 237;
	init_small_table7706(v);
}

void	init_small_table7706(t_small_table *v)
{
	v->arr[115589] = 1;
	v->arr[115590] = sym_word;
	v->arr[115591] = 248;
	v->arr[115592] = 1;
	v->arr[115593] = anon_sym_LPAREN;
	v->arr[115594] = 250;
	v->arr[115595] = 1;
	v->arr[115596] = anon_sym_BANG;
	v->arr[115597] = 258;
	v->arr[115598] = 1;
	v->arr[115599] = anon_sym_DOLLAR;
	v->arr[115600] = 264;
	v->arr[115601] = 1;
	v->arr[115602] = aux_sym_number_token1;
	v->arr[115603] = 266;
	init_small_table7707(v);
}

void	init_small_table7707(t_small_table *v)
{
	v->arr[115604] = 1;
	v->arr[115605] = aux_sym_number_token2;
	v->arr[115606] = 270;
	v->arr[115607] = 1;
	v->arr[115608] = anon_sym_DOLLAR_LPAREN;
	v->arr[115609] = 282;
	v->arr[115610] = 1;
	v->arr[115611] = sym_test_operator;
	v->arr[115612] = 284;
	v->arr[115613] = 1;
	v->arr[115614] = sym__brace_start;
	v->arr[115615] = 1075;
	v->arr[115616] = 1;
	v->arr[115617] = anon_sym_DOLLAR_LBRACK;
	v->arr[115618] = 1079;
	init_small_table7708(v);
}

void	init_small_table7708(t_small_table *v)
{
	v->arr[115619] = 1;
	v->arr[115620] = sym__special_character;
	v->arr[115621] = 1081;
	v->arr[115622] = 1;
	v->arr[115623] = anon_sym_DQUOTE;
	v->arr[115624] = 1085;
	v->arr[115625] = 1;
	v->arr[115626] = anon_sym_DOLLAR_LBRACE;
	v->arr[115627] = 1087;
	v->arr[115628] = 1;
	v->arr[115629] = anon_sym_DOLLAR_BQUOTE;
	v->arr[115630] = 3598;
	v->arr[115631] = 1;
	v->arr[115632] = anon_sym_BQUOTE;
	v->arr[115633] = 2690;
	init_small_table7709(v);
}

void	init_small_table7709(t_small_table *v)
{
	v->arr[115634] = 1;
	v->arr[115635] = aux_sym__literal_repeat1;
	v->arr[115636] = 3084;
	v->arr[115637] = 1;
	v->arr[115638] = sym__expression;
	v->arr[115639] = 103;
	v->arr[115640] = 2;
	v->arr[115641] = anon_sym_PLUS_PLUS2;
	v->arr[115642] = anon_sym_DASH_DASH2;
	v->arr[115643] = 105;
	v->arr[115644] = 2;
	v->arr[115645] = anon_sym_DASH2;
	v->arr[115646] = anon_sym_PLUS2;
	v->arr[115647] = 1073;
	v->arr[115648] = 2;
	init_small_table7710(v);
}

// file funcs1541.c
