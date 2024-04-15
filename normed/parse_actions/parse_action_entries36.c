/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs36.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae180(t_parse_action_entries *v)
{
	v->arr[2412] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7657), repetition = true}}};
	v->arr[2414] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2415] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (612)}}};
	v->arr[2416] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2417] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1794)}}};
	v->arr[2418] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2419] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3697)}}};
	v->arr[2420] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2421] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4138)}}};
	v->arr[2422] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2423] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1823)}}};
	v->arr[2424] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2425] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1795)}}};
	v->arr[2426] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2427] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1247)}}};
	init_pae181(v);
}

void	init_pae181(t_parse_action_entries *v)
{
	v->arr[2428] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2429] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5825)}}};
	v->arr[2430] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2431] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1246)}}};
	v->arr[2432] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2433] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1246)}}};
	v->arr[2434] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2435] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2435] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1190), repetition = true}}};
	v->arr[2437] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2438] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2438] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3753), repetition = true}}};
	v->arr[2440] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae182(v);
}

void	init_pae182(t_parse_action_entries *v)
{
	v->arr[2441] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2442] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2443] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2444] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2445] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2445] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3751), repetition = true}}};
	v->arr[2447] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2448] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2448] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5940), repetition = true}}};
	v->arr[2450] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2451] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae183(v);
}

void	init_pae183(t_parse_action_entries *v)
{
	v->arr[2451] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1226), repetition = true}}};
	v->arr[2453] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2454] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2454] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5819), repetition = true}}};
	v->arr[2456] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2457] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2457] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1478), repetition = true}}};
	v->arr[2459] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2460] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2460] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6324), repetition = true}}};
	v->arr[2462] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2463] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae184(v);
}

void	init_pae184(t_parse_action_entries *v)
{
	v->arr[2463] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4696), repetition = true}}};
	v->arr[2465] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2466] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2466] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (344), repetition = true}}};
	v->arr[2468] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2469] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2469] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (343), repetition = true}}};
	v->arr[2471] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2472] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2472] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (338), repetition = true}}};
	v->arr[2474] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2475] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae185(v);
}

// file funcs36.c
