/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs153.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae765(t_parse_action_entries *v)
{
	v->arr[10464] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10465] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (999)}}};
	v->arr[10466] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10467] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1004)}}};
	v->arr[10468] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10469] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (999)}}};
	v->arr[10470] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10471] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1004)}}};
	v->arr[10472] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10473] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4285)}}};
	v->arr[10474] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10475] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4303)}}};
	v->arr[10476] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10477] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4285)}}};
	v->arr[10478] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae766(v);
}

void	init_pae766(t_parse_action_entries *v)
{
	v->arr[10479] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4303)}}};
	v->arr[10480] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10481] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1465)}}};
	v->arr[10482] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10483] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1466)}}};
	v->arr[10484] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10485] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1465)}}};
	v->arr[10486] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10487] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1466)}}};
	v->arr[10488] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10489] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1440)}}};
	v->arr[10490] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10491] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1442)}}};
	v->arr[10492] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10493] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1440)}}};
	init_pae767(v);
}

void	init_pae767(t_parse_action_entries *v)
{
	v->arr[10494] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10495] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1442)}}};
	v->arr[10496] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10497] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3317)}}};
	v->arr[10498] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10499] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2763)}}};
	v->arr[10500] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10501] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1569)}}};
	v->arr[10502] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10503] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3786)}}};
	v->arr[10504] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10505] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3789)}}};
	v->arr[10506] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10507] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1568)}}};
	v->arr[10508] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae768(v);
}

void	init_pae768(t_parse_action_entries *v)
{
	v->arr[10509] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5791)}}};
	v->arr[10510] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10511] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1569)}}};
	v->arr[10512] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10513] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4676)}}};
	v->arr[10514] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10515] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (307)}}};
	v->arr[10516] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10517] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (306)}}};
	v->arr[10518] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10519] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (377)}}};
	v->arr[10520] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10521] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1568)}}};
	v->arr[10522] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10523] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1120)}}};
	init_pae769(v);
}

void	init_pae769(t_parse_action_entries *v)
{
	v->arr[10524] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10525] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1119)}}};
	v->arr[10526] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10527] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1120)}}};
	v->arr[10528] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10529] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1119)}}};
	v->arr[10530] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10531] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1827)}}};
	v->arr[10532] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10533] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1834)}}};
	v->arr[10534] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10535] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1827)}}};
	v->arr[10536] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10537] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1834)}}};
	v->arr[10538] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae770(v);
}

// file funcs153.c
