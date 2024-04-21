/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs30.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae150(t_parse_action_entries *v)
{
	v->arr[2030] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7613), .repetition = true}}};
	v->arr[2032] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2033] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1322)}}};
	v->arr[2034] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2035] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4200)}}};
	v->arr[2036] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2037] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4204)}}};
	v->arr[2038] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2039] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6034)}}};
	v->arr[2040] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2041] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1460)}}};
	v->arr[2042] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2043] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5722)}}};
	v->arr[2044] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2045] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1580)}}};
	init_pae151(v);
}

void	init_pae151(t_parse_action_entries *v)
{
	v->arr[2046] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2047] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6321)}}};
	v->arr[2048] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2049] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4765)}}};
	v->arr[2050] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2051] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (174)}}};
	v->arr[2052] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2053] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (175)}}};
	v->arr[2054] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2055] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (176)}}};
	v->arr[2056] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2057] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (177)}}};
	v->arr[2058] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2059] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (577)}}};
	v->arr[2060] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae152(v);
}

void	init_pae152(t_parse_action_entries *v)
{
	v->arr[2061] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6704)}}};
	v->arr[2062] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2063] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1318)}}};
	v->arr[2064] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2065] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7611)}}};
	v->arr[2066] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2067] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1287)}}};
	v->arr[2068] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2069] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1289)}}};
	v->arr[2070] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2071] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1289)}}};
	v->arr[2072] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2073] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_file_redirect, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 21}}};
	v->arr[2074] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae153(v);
}

void	init_pae153(t_parse_action_entries *v)
{
	v->arr[2075] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_file_redirect, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 21}}};
	v->arr[2076] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2077] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[2077] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1219), .repetition = true}}};
	v->arr[2079] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2080] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[2080] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3682), .repetition = true}}};
	v->arr[2082] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2083] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[2083] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4052), .repetition = true}}};
	v->arr[2085] = (t_pae){.entry = {.count = 2, .reusable = false}};
	init_pae154(v);
}

void	init_pae154(t_parse_action_entries *v)
{
	v->arr[2086] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[2086] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1174), .repetition = true}}};
	v->arr[2088] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2089] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[2089] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6955), .repetition = true}}};
	v->arr[2091] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2092] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[2092] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1203), .repetition = true}}};
	v->arr[2094] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2095] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_file_redirect, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 8}}};
	v->arr[2096] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae155(v);
}

// file funcs30.c
