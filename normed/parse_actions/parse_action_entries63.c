/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs63.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae315(t_parse_action_entries *v)
{
	v->arr[4196] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4112), repetition = true}}};
	v->arr[4198] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4199] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4199] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5894), repetition = true}}};
	v->arr[4201] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4202] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4202] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2373), repetition = true}}};
	v->arr[4204] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4205] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4205] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5754), repetition = true}}};
	v->arr[4207] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4208] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae316(v);
}

void	init_pae316(t_parse_action_entries *v)
{
	v->arr[4208] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2419), repetition = true}}};
	v->arr[4210] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4211] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4211] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2469), repetition = true}}};
	v->arr[4213] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4214] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4214] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6298), repetition = true}}};
	v->arr[4216] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4217] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4217] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4730), repetition = true}}};
	v->arr[4219] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4220] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae317(v);
}

void	init_pae317(t_parse_action_entries *v)
{
	v->arr[4220] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (278), repetition = true}}};
	v->arr[4222] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4223] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4223] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (136), repetition = true}}};
	v->arr[4225] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4226] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4226] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (289), repetition = true}}};
	v->arr[4228] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4229] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4229] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (248), repetition = true}}};
	v->arr[4231] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4232] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae318(v);
}

void	init_pae318(t_parse_action_entries *v)
{
	v->arr[4232] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (803), repetition = true}}};
	v->arr[4234] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4235] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4235] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6636), repetition = true}}};
	v->arr[4237] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4238] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4238] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2395), repetition = true}}};
	v->arr[4240] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4241] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4241] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7623), repetition = true}}};
	v->arr[4243] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4244] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4614)}}};
	init_pae319(v);
}

void	init_pae319(t_parse_action_entries *v)
{
	v->arr[4245] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4246] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4795)}}};
	v->arr[4247] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4248] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat1, .child_count = 1, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4249] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4250] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (622)}}};
	v->arr[4251] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4252] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (450)}}};
	v->arr[4253] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4254] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__statement_not_pipeline, .child_count = \
	1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4255] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4256] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7487)}}};
	v->arr[4257] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4258] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__statements, child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	init_pae320(v);
}

// file funcs63.c
