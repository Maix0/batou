/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs82.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae410(t_parse_action_entries *v)
{
	v->arr[5450] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3698)}}};
	v->arr[5451] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5452] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5427)}}};
	v->arr[5453] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5454] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5427)}}};
	v->arr[5455] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5456] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5476)}}};
	v->arr[5457] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5458] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5458] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1351), repetition = true}}};
	v->arr[5460] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5461] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 1, \
	dynamic_precedence = 0, .production_id = 3}}};
	v->arr[5462] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae411(v);
}

void	init_pae411(t_parse_action_entries *v)
{
	v->arr[5463] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 1, \
	dynamic_precedence = 0, .production_id = 3}}};
	v->arr[5464] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5465] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3942)}}};
	v->arr[5466] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5467] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3942)}}};
	v->arr[5468] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5469] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5470] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5471] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5472] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5473] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3895)}}};
	v->arr[5474] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5475] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3895)}}};
	init_pae412(v);
}

void	init_pae412(t_parse_action_entries *v)
{
	v->arr[5476] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5477] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	1, dynamic_precedence = 0, .production_id = 1}}};
	v->arr[5478] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5479] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	1, dynamic_precedence = 0, .production_id = 1}}};
	v->arr[5480] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5481] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5481] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1404), repetition = true}}};
	v->arr[5483] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5484] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3810)}}};
	v->arr[5485] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5486] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1404)}}};
	v->arr[5487] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5488] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3814)}}};
	init_pae413(v);
}

void	init_pae413(t_parse_action_entries *v)
{
	v->arr[5489] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5490] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4002)}}};
	v->arr[5491] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5492] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5492] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3895), repetition = true}}};
	v->arr[5494] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5495] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5495] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3895), repetition = true}}};
	v->arr[5497] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5498] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3905)}}};
	v->arr[5499] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5500] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3926)}}};
	v->arr[5501] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae414(v);
}

void	init_pae414(t_parse_action_entries *v)
{
	v->arr[5502] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3930)}}};
	v->arr[5503] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5504] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5504] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3905), repetition = true}}};
	v->arr[5506] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5507] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5507] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3905), repetition = true}}};
	v->arr[5509] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5510] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3905)}}};
	v->arr[5511] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5512] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4042)}}};
	v->arr[5513] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5514] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4046)}}};
	init_pae415(v);
}

// file funcs82.c
