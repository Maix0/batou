/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1251.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_small_table6255(t_small_table *v)
{
	v->arr[93825] = 27;
	v->arr[93825] = 71;
	v->arr[93826] = 1;
	v->arr[93827] = sym_comment;
	v->arr[93828] = 1131;
	v->arr[93829] = 1;
	v->arr[93830] = anon_sym_LPAREN;
	v->arr[93831] = 1141;
	v->arr[93832] = 1;
	v->arr[93833] = anon_sym_DOLLAR_LBRACK;
	v->arr[93834] = 1145;
	v->arr[93835] = 1;
	v->arr[93836] = anon_sym_DOLLAR;
	v->arr[93837] = 1149;
	v->arr[93838] = 1;
	init_small_table6256(v);
}

void	init_small_table6256(t_small_table *v)
{
	v->arr[93839] = anon_sym_DQUOTE;
	v->arr[93840] = 1153;
	v->arr[93841] = 1;
	v->arr[93842] = aux_sym_number_token1;
	v->arr[93843] = 1155;
	v->arr[93844] = 1;
	v->arr[93845] = aux_sym_number_token2;
	v->arr[93846] = 1157;
	v->arr[93847] = 1;
	v->arr[93848] = anon_sym_DOLLAR_LBRACE;
	v->arr[93849] = 1159;
	v->arr[93850] = 1;
	v->arr[93851] = anon_sym_DOLLAR_LPAREN;
	v->arr[93852] = 1163;
	v->arr[93853] = 1;
	init_small_table6257(v);
}

void	init_small_table6257(t_small_table *v)
{
	v->arr[93854] = anon_sym_DOLLAR_BQUOTE;
	v->arr[93855] = 1169;
	v->arr[93856] = 1;
	v->arr[93857] = sym__brace_start;
	v->arr[93858] = 1187;
	v->arr[93859] = 1;
	v->arr[93860] = sym_word;
	v->arr[93861] = 1189;
	v->arr[93862] = 1;
	v->arr[93863] = anon_sym_BANG;
	v->arr[93864] = 1195;
	v->arr[93865] = 1;
	v->arr[93866] = anon_sym_TILDE;
	v->arr[93867] = 1201;
	v->arr[93868] = 1;
	init_small_table6258(v);
}

void	init_small_table6258(t_small_table *v)
{
	v->arr[93869] = sym_test_operator;
	v->arr[93870] = 3060;
	v->arr[93871] = 1;
	v->arr[93872] = anon_sym_BQUOTE;
	v->arr[93873] = 5779;
	v->arr[93874] = 1;
	v->arr[93875] = sym__special_character;
	v->arr[93876] = 6112;
	v->arr[93877] = 1;
	v->arr[93878] = sym__regex_no_space;
	v->arr[93879] = 2717;
	v->arr[93880] = 1;
	v->arr[93881] = aux_sym__literal_repeat1;
	v->arr[93882] = 2995;
	v->arr[93883] = 1;
	init_small_table6259(v);
}

void	init_small_table6259(t_small_table *v)
{
	v->arr[93884] = sym__expression;
	v->arr[93885] = 1129;
	v->arr[93886] = 2;
	v->arr[93887] = anon_sym_LPAREN_LPAREN;
	v->arr[93888] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->arr[93889] = 1165;
	v->arr[93890] = 2;
	v->arr[93891] = anon_sym_LT_LPAREN;
	v->arr[93892] = anon_sym_GT_LPAREN;
	v->arr[93893] = 1191;
	v->arr[93894] = 2;
	v->arr[93895] = anon_sym_PLUS_PLUS2;
	v->arr[93896] = anon_sym_DASH_DASH2;
	v->arr[93897] = 1193;
	v->arr[93898] = 2;
	init_small_table6260(v);
}

// file funcs1251.c
