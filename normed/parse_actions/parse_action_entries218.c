/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs218.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae1090(t_parse_action_entries *v)
{
	v->arr[14990] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6734)}}};
	v->arr[14991] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14992] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2479)}}};
	v->arr[14993] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14994] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 6, \
	.dynamic_precedence = 0, .production_id = 132}}};
	v->arr[14995] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14996] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4972)}}};
	v->arr[14997] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14998] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1279)}}};
	v->arr[14999] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15000] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3056)}}};
	v->arr[15001] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15002] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (40)}}};
	v->arr[15003] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1091(v);
}

void	init_pae1091(t_parse_action_entries *v)
{
	v->arr[15004] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1455)}}};
	v->arr[15005] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15006] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1753)}}};
	v->arr[15007] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15008] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4280)}}};
	v->arr[15009] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15010] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (27)}}};
	v->arr[15011] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15012] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (22)}}};
	v->arr[15013] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15014] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (33)}}};
	v->arr[15015] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15016] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (28)}}};
	v->arr[15017] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[15018] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_case_item_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 80}}};
	init_pae1092(v);
}

void	init_pae1092(t_parse_action_entries *v)
{
	v->arr[15018] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3574), repetition = true}}};
	v->arr[15020] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15021] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_case_item_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 80}}};
	v->arr[15022] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15023] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5414)}}};
	v->arr[15024] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15025] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2260)}}};
	v->arr[15026] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15027] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4343)}}};
	v->arr[15028] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15029] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3509)}}};
	v->arr[15030] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15031] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3493)}}};
	v->arr[15032] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1093(v);
}

void	init_pae1093(t_parse_action_entries *v)
{
	v->arr[15033] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2946)}}};
	v->arr[15034] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15035] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2644)}}};
	v->arr[15036] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15037] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6615)}}};
	v->arr[15038] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15039] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1005)}}};
	v->arr[15040] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15041] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6776)}}};
	v->arr[15042] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15043] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6778)}}};
	v->arr[15044] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[15045] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5336)}}};
	v->arr[15046] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15047] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (872)}}};
	init_pae1094(v);
}

void	init_pae1094(t_parse_action_entries *v)
{
	v->arr[15048] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15049] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (515)}}};
	v->arr[15050] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15051] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (442)}}};
	v->arr[15052] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15053] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3524)}}};
	v->arr[15054] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15055] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1598)}}};
	v->arr[15056] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15057] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 5, \
	.dynamic_precedence = 0, .production_id = 102}}};
	v->arr[15058] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15059] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3499)}}};
	v->arr[15060] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[15061] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5342)}}};
	init_pae1095(v);
}

// file funcs218.c
