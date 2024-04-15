/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs62.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae310(t_parse_action_entries *v)
{
	v->arr[4124] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4524)}}};
	v->arr[4125] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4126] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4733)}}};
	v->arr[4127] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4128] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4479)}}};
	v->arr[4129] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4130] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4488)}}};
	v->arr[4131] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4132] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1968)}}};
	v->arr[4133] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4134] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2074)}}};
	v->arr[4135] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4136] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1972)}}};
	v->arr[4137] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4138] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4834)}}};
	init_pae311(v);
}

void	init_pae311(t_parse_action_entries *v)
{
	v->arr[4139] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4140] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4495)}}};
	v->arr[4141] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4142] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4816)}}};
	v->arr[4143] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4144] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4838)}}};
	v->arr[4145] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4146] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4835)}}};
	v->arr[4147] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4148] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2419)}}};
	v->arr[4149] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4150] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4114)}}};
	v->arr[4151] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4152] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4112)}}};
	v->arr[4153] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae312(v);
}

void	init_pae312(t_parse_action_entries *v)
{
	v->arr[4154] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5894)}}};
	v->arr[4155] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4156] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2373)}}};
	v->arr[4157] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4158] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5754)}}};
	v->arr[4159] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4160] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2419)}}};
	v->arr[4161] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4162] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2469)}}};
	v->arr[4163] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4164] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6298)}}};
	v->arr[4165] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4166] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4730)}}};
	v->arr[4167] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4168] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (278)}}};
	init_pae313(v);
}

void	init_pae313(t_parse_action_entries *v)
{
	v->arr[4169] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4170] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (136)}}};
	v->arr[4171] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4172] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (289)}}};
	v->arr[4173] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4174] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (248)}}};
	v->arr[4175] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4176] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (803)}}};
	v->arr[4177] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4178] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6636)}}};
	v->arr[4179] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4180] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2395)}}};
	v->arr[4181] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4182] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7623)}}};
	v->arr[4183] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae314(v);
}

void	init_pae314(t_parse_action_entries *v)
{
	v->arr[4184] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4692)}}};
	v->arr[4185] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4186] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4689)}}};
	v->arr[4187] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4188] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (797)}}};
	v->arr[4189] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4190] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4190] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2419), repetition = true}}};
	v->arr[4192] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4193] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4193] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4114), repetition = true}}};
	v->arr[4195] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4196] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae315(v);
}

// file funcs62.c
