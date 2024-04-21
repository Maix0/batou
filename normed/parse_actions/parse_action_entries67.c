/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs67.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae335(t_parse_action_entries *v)
{
	v->arr[4446] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (140), .repetition = true}}};
	v->arr[4448] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4449] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4449] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (141), .repetition = true}}};
	v->arr[4451] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4452] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4452] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (142), .repetition = true}}};
	v->arr[4454] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4455] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4455] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (88), .repetition = true}}};
	v->arr[4457] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4458] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae336(v);
}

void	init_pae336(t_parse_action_entries *v)
{
	v->arr[4458] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2371), .repetition = true}}};
	v->arr[4460] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4461] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4461] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7636), .repetition = true}}};
	v->arr[4463] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4464] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 37}}};
	v->arr[4465] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4466] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 37}}};
	v->arr[4467] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4468] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_herestring_redirect, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 10}}};
	v->arr[4469] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4470] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_herestring_redirect, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 10}}};
	init_pae337(v);
}

void	init_pae337(t_parse_action_entries *v)
{
	v->arr[4471] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4472] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4472] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2422), .repetition = true}}};
	v->arr[4474] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4475] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4475] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2389), .repetition = true}}};
	v->arr[4477] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4478] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4478] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2431), .repetition = true}}};
	v->arr[4480] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4481] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 36}}};
	init_pae338(v);
}

void	init_pae338(t_parse_action_entries *v)
{
	v->arr[4482] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4483] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 36}}};
	v->arr[4484] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4485] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2422)}}};
	v->arr[4486] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4487] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2389)}}};
	v->arr[4488] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4489] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2431)}}};
	v->arr[4490] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4491] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2367)}}};
	v->arr[4492] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4493] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2386)}}};
	v->arr[4494] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4495] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (875)}}};
	init_pae339(v);
}

void	init_pae339(t_parse_action_entries *v)
{
	v->arr[4496] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4497] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2365)}}};
	v->arr[4498] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4499] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2438)}}};
	v->arr[4500] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4501] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3945)}}};
	v->arr[4502] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4503] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3944)}}};
	v->arr[4504] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4505] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5883)}}};
	v->arr[4506] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4507] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2356)}}};
	v->arr[4508] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4509] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5779)}}};
	v->arr[4510] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae340(v);
}

// file funcs67.c
