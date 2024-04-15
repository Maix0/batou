/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs232.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae1160(t_parse_action_entries *v)
{
	v->arr[16013] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16014] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1242)}}};
	v->arr[16015] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16016] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1240)}}};
	v->arr[16017] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16018] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6171)}}};
	v->arr[16019] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16020] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7062)}}};
	v->arr[16021] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16022] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (918)}}};
	v->arr[16023] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16024] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_regex_replacement, \
	.child_count = 6, dynamic_precedence = 0, .production_id = 147}}};
	v->arr[16025] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16026] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6184)}}};
	init_pae1161(v);
}

void	init_pae1161(t_parse_action_entries *v)
{
	v->arr[16027] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16028] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (729)}}};
	v->arr[16029] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16030] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5078)}}};
	v->arr[16031] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16032] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4548)}}};
	v->arr[16033] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16034] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1545)}}};
	v->arr[16035] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16036] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1674)}}};
	v->arr[16037] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16038] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1516)}}};
	v->arr[16039] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16040] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1256)}}};
	v->arr[16041] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1162(v);
}

void	init_pae1162(t_parse_action_entries *v)
{
	v->arr[16042] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2224)}}};
	v->arr[16043] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16044] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1254)}}};
	v->arr[16045] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16046] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1456)}}};
	v->arr[16047] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16048] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_regex_replacement, \
	.child_count = 6, dynamic_precedence = 0, .production_id = 148}}};
	v->arr[16049] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16050] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1544)}}};
	v->arr[16051] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16052] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (831)}}};
	v->arr[16053] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16054] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4618)}}};
	v->arr[16055] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1163(v);
}

void	init_pae1163(t_parse_action_entries *v)
{
	v->arr[16056] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6224)}}};
	v->arr[16057] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16058] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6233)}}};
	v->arr[16059] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16060] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5093)}}};
	v->arr[16061] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16062] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (728)}}};
	v->arr[16063] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16064] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5053)}}};
	v->arr[16065] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16066] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2222)}}};
	v->arr[16067] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16068] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1286)}}};
	v->arr[16069] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16070] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1652)}}};
	init_pae1164(v);
}

void	init_pae1164(t_parse_action_entries *v)
{
	v->arr[16071] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16072] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5337)}}};
	v->arr[16073] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16074] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2446)}}};
	v->arr[16075] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16076] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2214)}}};
	v->arr[16077] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16078] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2218)}}};
	v->arr[16079] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16080] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_regex_replacement, \
	.child_count = 5, dynamic_precedence = 0, .production_id = 120}}};
	v->arr[16081] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16082] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1644)}}};
	v->arr[16083] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[16084] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1187)}}};
	init_pae1165(v);
}

// file funcs232.c
