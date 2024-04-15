/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs84.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae420(t_parse_action_entries *v)
{
	v->arr[5578] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3184), repetition = true}}};
	v->arr[5580] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5581] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5581] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6315), repetition = true}}};
	v->arr[5583] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5584] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5584] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4756), repetition = true}}};
	v->arr[5586] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5587] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5587] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (404), repetition = true}}};
	v->arr[5589] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5590] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae421(v);
}

void	init_pae421(t_parse_action_entries *v)
{
	v->arr[5590] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (403), repetition = true}}};
	v->arr[5592] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5593] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5593] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (402), repetition = true}}};
	v->arr[5595] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5596] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5596] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (162), repetition = true}}};
	v->arr[5598] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5599] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5599] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3092), repetition = true}}};
	v->arr[5601] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5602] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae422(v);
}

void	init_pae422(t_parse_action_entries *v)
{
	v->arr[5602] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7644), repetition = true}}};
	v->arr[5604] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5605] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3093)}}};
	v->arr[5606] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5607] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3875)}}};
	v->arr[5608] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5609] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3874)}}};
	v->arr[5610] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5611] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5952)}}};
	v->arr[5612] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5613] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3110)}}};
	v->arr[5614] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5615] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5850)}}};
	v->arr[5616] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5617] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3184)}}};
	init_pae423(v);
}

void	init_pae423(t_parse_action_entries *v)
{
	v->arr[5618] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5619] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6315)}}};
	v->arr[5620] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5621] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4756)}}};
	v->arr[5622] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5623] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (404)}}};
	v->arr[5624] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5625] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (403)}}};
	v->arr[5626] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5627] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (402)}}};
	v->arr[5628] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5629] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (162)}}};
	v->arr[5630] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5631] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3092)}}};
	v->arr[5632] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae424(v);
}

void	init_pae424(t_parse_action_entries *v)
{
	v->arr[5633] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7644)}}};
	v->arr[5634] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5635] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4065)}}};
	v->arr[5636] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5637] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4065)}}};
	v->arr[5638] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5639] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3853)}}};
	v->arr[5640] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5641] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3853)}}};
	v->arr[5642] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5643] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1656)}}};
	v->arr[5644] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5645] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3946)}}};
	v->arr[5646] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5647] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3946)}}};
	init_pae425(v);
}

// file funcs84.c
