/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs219.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae1095(t_parse_action_entries *v)
{
	v->arr[15062] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15063] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2683)}}};
	v->arr[15064] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15065] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2675)}}};
	v->arr[15066] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15067] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1504)}}};
	v->arr[15068] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15069] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1995)}}};
	v->arr[15070] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15071] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1409)}}};
	v->arr[15072] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15073] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 5, \
	.dynamic_precedence = 0, .production_id = 101}}};
	v->arr[15074] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15075] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (44)}}};
	init_pae1096(v);
}

void	init_pae1096(t_parse_action_entries *v)
{
	v->arr[15076] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15077] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3507)}}};
	v->arr[15078] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15079] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2721)}}};
	v->arr[15080] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15081] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (980)}}};
	v->arr[15082] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15083] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 5, \
	.dynamic_precedence = 0, .production_id = 100}}};
	v->arr[15084] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15085] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2504)}}};
	v->arr[15086] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15087] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3489)}}};
	v->arr[15088] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15089] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3526)}}};
	init_pae1097(v);
}

void	init_pae1097(t_parse_action_entries *v)
{
	v->arr[15090] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[15091] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5343)}}};
	v->arr[15092] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15093] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3530)}}};
	v->arr[15094] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15095] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3311)}}};
	v->arr[15096] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15097] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3189)}}};
	v->arr[15098] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15099] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3514)}}};
	v->arr[15100] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15101] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4508)}}};
	v->arr[15102] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15103] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1849)}}};
	v->arr[15104] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1098(v);
}

void	init_pae1098(t_parse_action_entries *v)
{
	v->arr[15105] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2398)}}};
	v->arr[15106] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15107] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 4, \
	.dynamic_precedence = 0, .production_id = 74}}};
	v->arr[15108] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15109] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1979)}}};
	v->arr[15110] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15111] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 4, \
	.dynamic_precedence = 0, .production_id = 72}}};
	v->arr[15112] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[15113] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5319)}}};
	v->arr[15114] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15115] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4482)}}};
	v->arr[15116] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15117] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (46)}}};
	init_pae1099(v);
}

void	init_pae1099(t_parse_action_entries *v)
{
	v->arr[15118] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15119] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2861)}}};
	v->arr[15120] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15121] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 5, \
	.dynamic_precedence = 0, .production_id = 98}}};
	v->arr[15122] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15123] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4474)}}};
	v->arr[15124] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15125] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6138)}}};
	v->arr[15126] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15127] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1033)}}};
	v->arr[15128] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15129] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 4, \
	.dynamic_precedence = 0, .production_id = 70}}};
	v->arr[15130] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15131] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3380)}}};
	init_pae1100(v);
}

// file funcs219.c
