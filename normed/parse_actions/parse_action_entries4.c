/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae20(t_parse_action_entries *v)
{
	v->arr[296] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[297] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (418)}}};
	v->arr[298] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[299] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (226)}}};
	v->arr[300] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[301] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7392)}}};
	v->arr[302] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[303] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (623)}}};
	v->arr[304] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[305] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (602)}}};
	v->arr[306] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[307] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (718)}}};
	v->arr[308] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[309] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (759)}}};
	v->arr[310] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae21(v);
}

void	init_pae21(t_parse_action_entries *v)
{
	v->arr[311] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4030)}}};
	v->arr[312] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[313] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4154)}}};
	v->arr[314] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[315] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4155)}}};
	v->arr[316] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[317] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5968)}}};
	v->arr[318] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[319] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1105)}}};
	v->arr[320] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[321] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5849)}}};
	v->arr[322] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[323] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1078)}}};
	v->arr[324] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[325] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1085)}}};
	init_pae22(v);
}

void	init_pae22(t_parse_action_entries *v)
{
	v->arr[326] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[327] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6359)}}};
	v->arr[328] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[329] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4814)}}};
	v->arr[330] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[331] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (148)}}};
	v->arr[332] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[333] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (150)}}};
	v->arr[334] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[335] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (151)}}};
	v->arr[336] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[337] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (152)}}};
	v->arr[338] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[339] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6148)}}};
	v->arr[340] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae23(v);
}

void	init_pae23(t_parse_action_entries *v)
{
	v->arr[341] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6616)}}};
	v->arr[342] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[343] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1077)}}};
	v->arr[344] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[345] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7608)}}};
	v->arr[346] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[347] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5567)}}};
	v->arr[348] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[349] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4950)}}};
	v->arr[350] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[351] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2521)}}};
	v->arr[352] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[353] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3699)}}};
	v->arr[354] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[355] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
.symbol = sym__expression, child_count = 1, .dynamic_precedence = 0, \
	.production_id = 1}}};
	init_pae24(v);
}

void	init_pae24(t_parse_action_entries *v)
{
	v->arr[356] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[357] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
.symbol = sym_command_name, child_count = 1, .dynamic_precedence = 0, \
	.production_id = 1}}};
	v->arr[357] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
.symbol = sym__expression, child_count = 1, .dynamic_precedence = 0, \
	.production_id = 1}}};
	v->arr[359] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[360] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2261)}}};
	v->arr[361] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[362] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2001)}}};
	v->arr[363] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[364] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4215)}}};
	v->arr[365] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[366] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3921)}}};
	v->arr[367] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[368] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5935)}}};
	init_pae25(v);
}

// file funcs4.c
