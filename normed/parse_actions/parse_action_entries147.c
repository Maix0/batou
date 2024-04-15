/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs147.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae735(t_parse_action_entries *v)
{
	v->arr[10014] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10015] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5199)}}};
	v->arr[10016] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10017] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5200)}}};
	v->arr[10018] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10019] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5199)}}};
	v->arr[10020] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10021] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5200)}}};
	v->arr[10022] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10023] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2754)}}};
	v->arr[10024] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10025] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2792)}}};
	v->arr[10026] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10027] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3336)}}};
	v->arr[10028] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae736(v);
}

void	init_pae736(t_parse_action_entries *v)
{
	v->arr[10029] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (796)}}};
	v->arr[10030] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10031] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3369)}}};
	v->arr[10032] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10033] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1263)}}};
	v->arr[10034] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10035] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1263)}}};
	v->arr[10036] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10037] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1265)}}};
	v->arr[10038] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10039] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1258)}}};
	v->arr[10040] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10041] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1258)}}};
	v->arr[10042] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10043] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1261)}}};
	init_pae737(v);
}

void	init_pae737(t_parse_action_entries *v)
{
	v->arr[10044] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10045] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2793)}}};
	v->arr[10046] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10047] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3370)}}};
	v->arr[10048] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10049] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (842)}}};
	v->arr[10050] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10051] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6192)}}};
	v->arr[10052] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10053] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6188)}}};
	v->arr[10054] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10055] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6192)}}};
	v->arr[10056] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10057] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6191)}}};
	v->arr[10058] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae738(v);
}

void	init_pae738(t_parse_action_entries *v)
{
	v->arr[10059] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4430)}}};
	v->arr[10060] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10061] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3824)}}};
	v->arr[10062] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10063] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3825)}}};
	v->arr[10064] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10065] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4315)}}};
	v->arr[10066] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10067] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5782)}}};
	v->arr[10068] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10069] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4430)}}};
	v->arr[10070] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10071] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4671)}}};
	v->arr[10072] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10073] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (298)}}};
	init_pae739(v);
}

void	init_pae739(t_parse_action_entries *v)
{
	v->arr[10074] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10075] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (293)}}};
	v->arr[10076] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10077] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (361)}}};
	v->arr[10078] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10079] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4601)}}};
	v->arr[10080] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10081] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3435)}}};
	v->arr[10082] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10083] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (993)}}};
	v->arr[10084] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10085] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (993)}}};
	v->arr[10086] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10087] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (992)}}};
	v->arr[10088] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae740(v);
}

// file funcs147.c
