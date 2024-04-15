/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs60.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae300(t_parse_action_entries *v)
{
	v->arr[3988] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3715), repetition = true}}};
	v->arr[3990] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3991] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[3991] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4079), repetition = true}}};
	v->arr[3993] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3994] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[3994] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6014), repetition = true}}};
	v->arr[3996] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3997] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[3997] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2033), repetition = true}}};
	v->arr[3999] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4000] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	init_pae301(v);
}

void	init_pae301(t_parse_action_entries *v)
{
	v->arr[4000] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5780), repetition = true}}};
	v->arr[4002] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4003] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[4003] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2211), repetition = true}}};
	v->arr[4005] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4006] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[4006] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2268), repetition = true}}};
	v->arr[4008] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4009] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[4009] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6342), repetition = true}}};
	v->arr[4011] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4012] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	init_pae302(v);
}

void	init_pae302(t_parse_action_entries *v)
{
	v->arr[4012] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4779), repetition = true}}};
	v->arr[4014] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4015] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[4015] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (340), repetition = true}}};
	v->arr[4017] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4018] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[4018] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (341), repetition = true}}};
	v->arr[4020] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4021] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[4021] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (342), repetition = true}}};
	v->arr[4023] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4024] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	init_pae303(v);
}

void	init_pae303(t_parse_action_entries *v)
{
	v->arr[4024] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (258), repetition = true}}};
	v->arr[4026] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4027] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[4027] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6889), repetition = true}}};
	v->arr[4029] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4030] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[4030] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2203), repetition = true}}};
	v->arr[4032] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4033] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[4033] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2558), repetition = true}}};
	v->arr[4035] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4036] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	init_pae304(v);
}

void	init_pae304(t_parse_action_entries *v)
{
	v->arr[4036] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7625), repetition = true}}};
	v->arr[4038] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4039] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6452)}}};
	v->arr[4040] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4041] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6395)}}};
	v->arr[4042] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4043] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3368)}}};
	v->arr[4044] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4045] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (726)}}};
	v->arr[4046] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4047] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2843)}}};
	v->arr[4048] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4049] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2848)}}};
	v->arr[4050] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4051] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4582)}}};
	init_pae305(v);
}

// file funcs60.c
