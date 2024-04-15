/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs137.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae685(t_parse_action_entries *v)
{
	v->arr[9264] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9265] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1784)}}};
	v->arr[9266] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9267] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1787)}}};
	v->arr[9268] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9269] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1189)}}};
	v->arr[9270] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9271] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (608)}}};
	v->arr[9272] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9273] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1188)}}};
	v->arr[9274] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9275] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1189)}}};
	v->arr[9276] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9277] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1188)}}};
	v->arr[9278] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae686(v);
}

void	init_pae686(t_parse_action_entries *v)
{
	v->arr[9279] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4124)}}};
	v->arr[9280] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9281] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4096)}}};
	v->arr[9282] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9283] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4110)}}};
	v->arr[9284] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9285] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4102)}}};
	v->arr[9286] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9287] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4102)}}};
	v->arr[9288] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9289] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6101)}}};
	v->arr[9290] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9291] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5806)}}};
	v->arr[9292] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9293] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2866)}}};
	init_pae687(v);
}

void	init_pae687(t_parse_action_entries *v)
{
	v->arr[9294] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9295] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6347)}}};
	v->arr[9296] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9297] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4629)}}};
	v->arr[9298] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9299] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (186)}}};
	v->arr[9300] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9301] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (187)}}};
	v->arr[9302] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9303] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (188)}}};
	v->arr[9304] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9305] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2790)}}};
	v->arr[9306] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9307] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4566)}}};
	v->arr[9308] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae688(v);
}

void	init_pae688(t_parse_action_entries *v)
{
	v->arr[9309] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4049)}}};
	v->arr[9310] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9311] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4048)}}};
	v->arr[9312] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9313] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3243)}}};
	v->arr[9314] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9315] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4429)}}};
	v->arr[9316] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9317] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5727)}}};
	v->arr[9318] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9319] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4566)}}};
	v->arr[9320] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9321] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4830)}}};
	v->arr[9322] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9323] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (149)}}};
	init_pae689(v);
}

void	init_pae689(t_parse_action_entries *v)
{
	v->arr[9324] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9325] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (146)}}};
	v->arr[9326] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9327] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (294)}}};
	v->arr[9328] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9329] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4429)}}};
	v->arr[9330] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9331] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2634)}}};
	v->arr[9332] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9333] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (953)}}};
	v->arr[9334] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9335] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2633)}}};
	v->arr[9336] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9337] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2634)}}};
	v->arr[9338] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae690(v);
}

// file funcs137.c
