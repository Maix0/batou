/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs68.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae340(t_parse_action_entries *v)
{
	v->arr[4511] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2438)}}};
	v->arr[4512] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4513] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2560)}}};
	v->arr[4514] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4515] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6349)}}};
	v->arr[4516] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4517] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4826)}}};
	v->arr[4518] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4519] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (178)}}};
	v->arr[4520] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4521] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (183)}}};
	v->arr[4522] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4523] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (191)}}};
	v->arr[4524] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4525] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (115)}}};
	init_pae341(v);
}

void	init_pae341(t_parse_action_entries *v)
{
	v->arr[4526] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4527] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2437)}}};
	v->arr[4528] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4529] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7639)}}};
	v->arr[4530] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4531] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 17}}};
	v->arr[4532] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4533] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 17}}};
	v->arr[4534] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4535] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4535] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2367), .repetition = true}}};
	v->arr[4537] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4538] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae342(v);
}

void	init_pae342(t_parse_action_entries *v)
{
	v->arr[4538] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2386), .repetition = true}}};
	v->arr[4540] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4541] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4541] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (875), .repetition = true}}};
	v->arr[4543] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4544] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4544] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2365), .repetition = true}}};
	v->arr[4546] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4547] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 16}}};
	v->arr[4548] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4549] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 16}}};
	init_pae343(v);
}

void	init_pae343(t_parse_action_entries *v)
{
	v->arr[4550] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4551] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (865)}}};
	v->arr[4552] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4553] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_herestring_redirect, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 4}}};
	v->arr[4554] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4555] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_herestring_redirect, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 4}}};
	v->arr[4556] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4557] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2567)}}};
	v->arr[4558] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4559] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5779)}}};
	v->arr[4560] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4561] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2536)}}};
	v->arr[4562] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4563] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2536)}}};
	init_pae344(v);
}

void	init_pae344(t_parse_action_entries *v)
{
	v->arr[4564] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4565] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_herestring_redirect, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 23}}};
	v->arr[4566] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4567] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_herestring_redirect, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 23}}};
	v->arr[4568] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4569] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_command_name, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4569] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6890)}}};
	v->arr[4571] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4572] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3839)}}};
	v->arr[4573] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4574] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3843)}}};
	v->arr[4575] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4576] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae345(v);
}

// file funcs68.c
