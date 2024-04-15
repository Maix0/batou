/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs150.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae750(t_parse_action_entries *v)
{
	v->arr[10239] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5480)}}};
	v->arr[10240] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10241] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5461)}}};
	v->arr[10242] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10243] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5480)}}};
	v->arr[10244] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10245] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (578)}}};
	v->arr[10246] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10247] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1532)}}};
	v->arr[10248] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10249] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (628)}}};
	v->arr[10250] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10251] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1533)}}};
	v->arr[10252] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10253] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1532)}}};
	init_pae751(v);
}

void	init_pae751(t_parse_action_entries *v)
{
	v->arr[10254] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10255] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1533)}}};
	v->arr[10256] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10257] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2450)}}};
	v->arr[10258] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10259] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2449)}}};
	v->arr[10260] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10261] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2450)}}};
	v->arr[10262] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10263] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2449)}}};
	v->arr[10264] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10265] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5387)}}};
	v->arr[10266] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10267] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5380)}}};
	v->arr[10268] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae752(v);
}

void	init_pae752(t_parse_action_entries *v)
{
	v->arr[10269] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5387)}}};
	v->arr[10270] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10271] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5380)}}};
	v->arr[10272] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10273] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1135)}}};
	v->arr[10274] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10275] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (634)}}};
	v->arr[10276] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10277] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3328)}}};
	v->arr[10278] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10279] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2758)}}};
	v->arr[10280] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10281] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3326)}}};
	v->arr[10282] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10283] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5428)}}};
	init_pae753(v);
}

void	init_pae753(t_parse_action_entries *v)
{
	v->arr[10284] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10285] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5413)}}};
	v->arr[10286] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10287] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5428)}}};
	v->arr[10288] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10289] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5413)}}};
	v->arr[10290] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10291] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3415)}}};
	v->arr[10292] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10293] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3418)}}};
	v->arr[10294] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10295] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3415)}}};
	v->arr[10296] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10297] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3418)}}};
	v->arr[10298] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae754(v);
}

void	init_pae754(t_parse_action_entries *v)
{
	v->arr[10299] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2759)}}};
	v->arr[10300] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10301] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5680)}}};
	v->arr[10302] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10303] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5660)}}};
	v->arr[10304] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10305] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5680)}}};
	v->arr[10306] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10307] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5660)}}};
	v->arr[10308] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10309] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (866)}}};
	v->arr[10310] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10311] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (864)}}};
	v->arr[10312] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10313] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (866)}}};
	init_pae755(v);
}

// file funcs150.c
