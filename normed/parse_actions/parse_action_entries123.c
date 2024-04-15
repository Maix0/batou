/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs123.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae615(t_parse_action_entries *v)
{
	v->arr[8242] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8243] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (310)}}};
	v->arr[8244] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8245] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (309)}}};
	v->arr[8246] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8247] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (381)}}};
	v->arr[8248] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8249] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1735)}}};
	v->arr[8250] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8251] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1735)}}};
	v->arr[8252] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8253] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1167)}}};
	v->arr[8254] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8255] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1470)}}};
	v->arr[8256] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae616(v);
}

void	init_pae616(t_parse_action_entries *v)
{
	v->arr[8257] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1356)}}};
	v->arr[8258] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8259] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1470)}}};
	v->arr[8260] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8261] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1467)}}};
	v->arr[8262] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8263] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1192)}}};
	v->arr[8264] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8265] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3729)}}};
	v->arr[8266] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8267] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3586)}}};
	v->arr[8268] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8269] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3730)}}};
	v->arr[8270] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8271] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6084)}}};
	init_pae617(v);
}

void	init_pae617(t_parse_action_entries *v)
{
	v->arr[8272] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8273] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1264)}}};
	v->arr[8274] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8275] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5796)}}};
	v->arr[8276] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8277] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1192)}}};
	v->arr[8278] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8279] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1393)}}};
	v->arr[8280] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8281] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6311)}}};
	v->arr[8282] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8283] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4678)}}};
	v->arr[8284] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8285] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (314)}}};
	v->arr[8286] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae618(v);
}

void	init_pae618(t_parse_action_entries *v)
{
	v->arr[8287] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (313)}}};
	v->arr[8288] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8289] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (312)}}};
	v->arr[8290] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8291] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (385)}}};
	v->arr[8292] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8293] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1747)}}};
	v->arr[8294] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8295] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1747)}}};
	v->arr[8296] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8297] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1193)}}};
	v->arr[8298] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8299] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7661)}}};
	v->arr[8300] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8301] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5253)}}};
	init_pae619(v);
}

void	init_pae619(t_parse_action_entries *v)
{
	v->arr[8302] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8303] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3879)}}};
	v->arr[8304] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8305] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3594)}}};
	v->arr[8306] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8307] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3876)}}};
	v->arr[8308] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8309] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5895)}}};
	v->arr[8310] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8311] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5221)}}};
	v->arr[8312] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8313] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5856)}}};
	v->arr[8314] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8315] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5253)}}};
	v->arr[8316] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae620(v);
}

// file funcs123.c
