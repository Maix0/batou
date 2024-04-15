/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs61.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae305(t_parse_action_entries *v)
{
	v->arr[4052] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4053] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4481)}}};
	v->arr[4054] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4055] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1805)}}};
	v->arr[4056] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4057] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1804)}}};
	v->arr[4058] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4059] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1804)}}};
	v->arr[4060] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4061] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6375)}}};
	v->arr[4062] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4063] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6397)}}};
	v->arr[4064] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4065] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6447)}}};
	v->arr[4066] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae306(v);
}

void	init_pae306(t_parse_action_entries *v)
{
	v->arr[4067] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (746)}}};
	v->arr[4068] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4069] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4472)}}};
	v->arr[4070] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4071] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4362)}}};
	v->arr[4072] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4073] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4476)}}};
	v->arr[4074] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4075] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4828)}}};
	v->arr[4076] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4077] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4049)}}};
	v->arr[4078] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4079] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4048)}}};
	v->arr[4080] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4081] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5956)}}};
	init_pae307(v);
}

void	init_pae307(t_parse_action_entries *v)
{
	v->arr[4082] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4083] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4593)}}};
	v->arr[4084] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4085] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5727)}}};
	v->arr[4086] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4087] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4451)}}};
	v->arr[4088] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4089] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6276)}}};
	v->arr[4090] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4091] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4830)}}};
	v->arr[4092] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4093] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (165)}}};
	v->arr[4094] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4095] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (149)}}};
	v->arr[4096] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae308(v);
}

void	init_pae308(t_parse_action_entries *v)
{
	v->arr[4097] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (146)}}};
	v->arr[4098] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4099] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (294)}}};
	v->arr[4100] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4101] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4621)}}};
	v->arr[4102] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4103] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7628)}}};
	v->arr[4104] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4105] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4105] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1968), repetition = true}}};
	v->arr[4107] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4108] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4108] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2074), repetition = true}}};
	init_pae309(v);
}

void	init_pae309(t_parse_action_entries *v)
{
	v->arr[4110] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4111] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4111] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1972), repetition = true}}};
	v->arr[4113] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4114] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2320)}}};
	v->arr[4115] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4116] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5780)}}};
	v->arr[4117] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4118] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2326)}}};
	v->arr[4119] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4120] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2326)}}};
	v->arr[4121] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4122] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4705)}}};
	v->arr[4123] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae310(v);
}

// file funcs61.c
