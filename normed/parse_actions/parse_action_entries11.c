/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs11.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae55(t_parse_action_entries *v)
{
	v->arr[782] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6162)}}};
	v->arr[783] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[784] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6170)}}};
	v->arr[785] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[786] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (280)}}};
	v->arr[787] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[788] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6163)}}};
	v->arr[789] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[790] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6178)}}};
	v->arr[791] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[792] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6161)}}};
	v->arr[793] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[794] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6165)}}};
	v->arr[795] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[796] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (70)}}};
	init_pae56(v);
}

void	init_pae56(t_parse_action_entries *v)
{
	v->arr[797] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[798] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6182)}}};
	v->arr[799] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[800] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1012)}}};
	v->arr[801] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[802] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7482)}}};
	v->arr[803] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[804] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (626)}}};
	v->arr[805] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[806] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (592)}}};
	v->arr[807] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[808] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (761)}}};
	v->arr[809] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[810] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__terminated_statement, .child_count = 2, dynamic_precedence = \
	0, .production_id = 0}}};
	init_pae57(v);
}

void	init_pae57(t_parse_action_entries *v)
{
	v->arr[811] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[812] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4858)}}};
	v->arr[813] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[814] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4609)}}};
	v->arr[815] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[816] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5547)}}};
	v->arr[817] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[818] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5615)}}};
	v->arr[819] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[820] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5613)}}};
	v->arr[821] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[822] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5591)}}};
	v->arr[823] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[824] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5676)}}};
	v->arr[825] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae58(v);
}

void	init_pae58(t_parse_action_entries *v)
{
	v->arr[826] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5652)}}};
	v->arr[827] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[828] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5016)}}};
	v->arr[829] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[830] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4959)}}};
	v->arr[831] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[832] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4844)}}};
	v->arr[833] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[834] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4712)}}};
	v->arr[835] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[836] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4785)}}};
	v->arr[837] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[838] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4643)}}};
	v->arr[839] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[840] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4976)}}};
	init_pae59(v);
}

void	init_pae59(t_parse_action_entries *v)
{
	v->arr[841] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[842] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5008)}}};
	v->arr[843] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[844] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5074)}}};
	v->arr[845] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[846] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5092)}}};
	v->arr[847] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[848] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4953)}}};
	v->arr[849] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[850] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4864)}}};
	v->arr[851] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[852] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4982)}}};
	v->arr[853] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[854] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5019)}}};
	v->arr[855] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae60(v);
}

// file funcs11.c
