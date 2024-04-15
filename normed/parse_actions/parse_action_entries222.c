/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs222.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae1110(t_parse_action_entries *v)
{
	v->arr[15272] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_regex_removal, .child_count = \
	1, dynamic_precedence = 0, .production_id = 12}}};
	v->arr[15273] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15274] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7029)}}};
	v->arr[15275] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15276] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4226)}}};
	v->arr[15277] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15278] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6443)}}};
	v->arr[15279] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15280] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7065)}}};
	v->arr[15281] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15282] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_regex_replacement, \
	.child_count = 6, dynamic_precedence = 0, .production_id = 89}}};
	v->arr[15283] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15284] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4220)}}};
	init_pae1111(v);
}

void	init_pae1111(t_parse_action_entries *v)
{
	v->arr[15285] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15286] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6471)}}};
	v->arr[15287] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15288] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3486)}}};
	v->arr[15289] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15290] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_regex_replacement, \
	.child_count = 3, dynamic_precedence = 0, .production_id = 12}}};
	v->arr[15291] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15292] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7303)}}};
	v->arr[15293] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15294] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_regex_replacement, \
	.child_count = 4, dynamic_precedence = 0, .production_id = 88}}};
	v->arr[15295] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15296] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6457)}}};
	v->arr[15297] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15298] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7490)}}};
	init_pae1112(v);
}

void	init_pae1112(t_parse_action_entries *v)
{
	v->arr[15299] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15300] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1996)}}};
	v->arr[15301] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15302] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2299)}}};
	v->arr[15303] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15304] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5060)}}};
	v->arr[15305] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15306] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7532)}}};
	v->arr[15307] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15308] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2012)}}};
	v->arr[15309] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15310] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1766)}}};
	v->arr[15311] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15312] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5389)}}};
	v->arr[15313] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1113(v);
}

void	init_pae1113(t_parse_action_entries *v)
{
	v->arr[15314] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7453)}}};
	v->arr[15315] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15316] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7404)}}};
	v->arr[15317] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15318] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4369)}}};
	v->arr[15319] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15320] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3833)}}};
	v->arr[15321] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15322] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6458)}}};
	v->arr[15323] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15324] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6516)}}};
	v->arr[15325] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15326] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6483)}}};
	v->arr[15327] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15328] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1280)}}};
	init_pae1114(v);
}

void	init_pae1114(t_parse_action_entries *v)
{
	v->arr[15329] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15330] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7415)}}};
	v->arr[15331] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15332] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7244)}}};
	v->arr[15333] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15334] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3801)}}};
	v->arr[15335] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15336] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2478)}}};
	v->arr[15337] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15338] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1836)}}};
	v->arr[15339] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15340] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1838)}}};
	v->arr[15341] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15342] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5403)}}};
	v->arr[15343] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1115(v);
}

// file funcs222.c
