/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs181.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae905(t_parse_action_entries *v)
{
	v->arr[12389] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6686), repetition = true}}};
	v->arr[12391] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12392] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6686)}}};
	v->arr[12393] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12394] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 4, \
	.dynamic_precedence = 0, .production_id = 110}}};
	v->arr[12395] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12396] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 4, \
	.dynamic_precedence = 0, .production_id = 110}}};
	v->arr[12397] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12398] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 4, \
	dynamic_precedence = 0, .production_id = 46}}};
	v->arr[12399] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12400] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 4, \
	.dynamic_precedence = 0, .production_id = 107}}};
	v->arr[12401] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae906(v);
}

void	init_pae906(t_parse_action_entries *v)
{
	v->arr[12402] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 4, \
	.dynamic_precedence = 0, .production_id = 107}}};
	v->arr[12403] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12404] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 4, \
	dynamic_precedence = 0, .production_id = 45}}};
	v->arr[12405] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12406] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 4, \
	.dynamic_precedence = 0, .production_id = 103}}};
	v->arr[12407] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12408] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 4, \
	.dynamic_precedence = 0, .production_id = 103}}};
	v->arr[12409] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12410] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 4, \
	dynamic_precedence = 0, .production_id = 59}}};
	v->arr[12411] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12412] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3669)}}};
	init_pae907(v);
}

void	init_pae907(t_parse_action_entries *v)
{
	v->arr[12413] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12414] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3669)}}};
	v->arr[12415] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12416] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (944)}}};
	v->arr[12417] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12418] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3716)}}};
	v->arr[12419] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12420] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6118)}}};
	v->arr[12421] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12422] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3454)}}};
	v->arr[12423] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12424] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 3, \
	.dynamic_precedence = 0, .production_id = 81}}};
	v->arr[12425] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12426] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 3, \
	.dynamic_precedence = 0, .production_id = 81}}};
	init_pae908(v);
}

void	init_pae908(t_parse_action_entries *v)
{
	v->arr[12427] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12428] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 3, \
	dynamic_precedence = 0, .production_id = 60}}};
	v->arr[12429] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12430] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 3, \
	.dynamic_precedence = 0, .production_id = 77}}};
	v->arr[12431] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12432] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 3, \
	.dynamic_precedence = 0, .production_id = 77}}};
	v->arr[12433] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12434] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 3, \
	dynamic_precedence = 0, .production_id = 59}}};
	v->arr[12435] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12436] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3866)}}};
	v->arr[12437] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12438] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4157)}}};
	init_pae909(v);
}

void	init_pae909(t_parse_action_entries *v)
{
	v->arr[12439] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12440] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3633)}}};
	v->arr[12441] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12442] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (908)}}};
	v->arr[12443] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12444] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4188)}}};
	v->arr[12445] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12446] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6120)}}};
	v->arr[12447] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12448] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 5, \
	.dynamic_precedence = 0, .production_id = 136}}};
	v->arr[12449] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12450] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 5, \
	.dynamic_precedence = 0, .production_id = 136}}};
	v->arr[12451] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12452] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 45}}};
	init_pae910(v);
}

// file funcs181.c
