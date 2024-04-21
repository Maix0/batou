/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alias_sequcences.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:24:31 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 21:09:06 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alias_seq.h"

static inline void	init_alias_seq2(t_alias_seq *v)
{
	v->arr[86][2] = sym_word;
	v->arr[88][3] = sym_word;
	v->arr[103][0] = sym_word;
	v->arr[104][0] = sym_word;
	v->arr[105][0] = sym_word;
	v->arr[106][0] = sym_word;
	v->arr[107][1] = sym_word;
	v->arr[108][1] = sym_word;
	v->arr[109][1] = sym_word;
	v->arr[117][3] = sym_word;
	v->arr[119][4] = sym_word;
	v->arr[120][3] = sym_word;
	v->arr[121][4] = sym_word;
	v->arr[134][0] = sym_word;
	v->arr[135][0] = sym_word;
	v->arr[136][1] = sym_word;
	v->arr[137][1] = sym_word;
	v->arr[138][1] = sym_word;
	v->arr[139][1] = sym_word;
	v->arr[146][4] = sym_word;
	v->arr[147][4] = sym_word;
	v->arr[153][1] = sym_word;
	v->arr[154][1] = sym_word;
}

void	init_alias_seq(t_alias_seq *v)
{
	v->arr[0][0] = 0;
	v->arr[1][0] = sym_word;
	v->arr[9][1] = sym_word;
	v->arr[10][1] = sym_word;
	v->arr[11][1] = anon_sym_AT2;
	v->arr[13][0] = anon_sym_AT2;
	v->arr[16][0] = sym_word;
	v->arr[22][2] = sym_word;
	v->arr[23][2] = sym_word;
	v->arr[25][2] = sym_word;
	v->arr[32][0] = anon_sym_AT2;
	v->arr[33][1] = anon_sym_AT2;
	v->arr[36][1] = sym_word;
	v->arr[40][2] = sym_word;
	v->arr[45][1] = sym_word;
	v->arr[48][0] = sym_regex;
	v->arr[53][1] = anon_sym_AT2;
	v->arr[55][0] = sym_variable_name;
	v->arr[59][0] = sym_word;
	v->arr[62][2] = sym_word;
	v->arr[77][0] = sym_word;
	v->arr[78][0] = sym_word;
	v->arr[79][0] = sym_word;
	v->arr[85][3] = sym_word;
	init_alias_seq2(v);
}
