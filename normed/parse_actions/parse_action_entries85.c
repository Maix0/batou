/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs85.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae425(t_parse_action_entries *v)
{
	v->arr[5648] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5649] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4168)}}};
	v->arr[5650] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5651] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4023)}}};
	v->arr[5652] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5653] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1724)}}};
	v->arr[5654] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5655] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4168)}}};
	v->arr[5656] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5657] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5657] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3951), repetition = true}}};
	v->arr[5659] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5660] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae426(v);
}

void	init_pae426(t_parse_action_entries *v)
{
	v->arr[5660] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3951), repetition = true}}};
	v->arr[5662] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5663] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1551)}}};
	v->arr[5664] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5665] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3798)}}};
	v->arr[5666] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5667] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3798)}}};
	v->arr[5668] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5669] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4086)}}};
	v->arr[5670] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5671] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5671] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1656), repetition = true}}};
	v->arr[5673] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5674] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae427(v);
}

void	init_pae427(t_parse_action_entries *v)
{
	v->arr[5674] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3853), repetition = true}}};
	v->arr[5676] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5677] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5677] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3853), repetition = true}}};
	v->arr[5679] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5680] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4178)}}};
	v->arr[5681] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5682] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1535)}}};
	v->arr[5683] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5684] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5684] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3798), repetition = true}}};
	v->arr[5686] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5687] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae428(v);
}

void	init_pae428(t_parse_action_entries *v)
{
	v->arr[5687] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3798), repetition = true}}};
	v->arr[5689] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5690] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5690] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4168), repetition = true}}};
	v->arr[5692] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5693] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5693] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4168), repetition = true}}};
	v->arr[5695] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5696] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_file_redirect, child_count = 3, \
	.dynamic_precedence = 0, .production_id = 22}}};
	v->arr[5697] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5698] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_file_redirect, child_count = 3, \
	.dynamic_precedence = 0, .production_id = 22}}};
	init_pae429(v);
}

void	init_pae429(t_parse_action_entries *v)
{
	v->arr[5699] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5700] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3746)}}};
	v->arr[5701] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5702] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4163)}}};
	v->arr[5703] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5704] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5704] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3946), repetition = true}}};
	v->arr[5706] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5707] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5707] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3946), repetition = true}}};
	v->arr[5709] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5710] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4104)}}};
	v->arr[5711] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae430(v);
}

// file funcs85.c
