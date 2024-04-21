/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs64.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae320(t_parse_action_entries *v)
{
	v->arr[4259] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4260] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (622)}}};
	v->arr[4261] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4262] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat1, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4263] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4264] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat1, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4264] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6662)}}};
	v->arr[4266] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4267] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3881)}}};
	v->arr[4268] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4269] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3939)}}};
	v->arr[4270] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4271] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_list, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 0}}};
	init_pae321(v);
}

void	init_pae321(t_parse_action_entries *v)
{
	v->arr[4272] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4273] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_list, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4274] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4275] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4275] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2337), .repetition = true}}};
	v->arr[4277] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4278] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4278] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2302), .repetition = true}}};
	v->arr[4280] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4281] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4281] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2340), .repetition = true}}};
	init_pae322(v);
}

void	init_pae322(t_parse_action_entries *v)
{
	v->arr[4283] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4284] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_command_name, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4284] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6956)}}};
	v->arr[4286] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4287] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3881)}}};
	v->arr[4288] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4289] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3924)}}};
	v->arr[4290] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4291] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4291] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2271), .repetition = true}}};
	v->arr[4293] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4294] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae323(v);
}

void	init_pae323(t_parse_action_entries *v)
{
	v->arr[4294] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4164), .repetition = true}}};
	v->arr[4296] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4297] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4297] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4144), .repetition = true}}};
	v->arr[4299] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4300] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4300] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5923), .repetition = true}}};
	v->arr[4302] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4303] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4303] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2298), .repetition = true}}};
	v->arr[4305] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4306] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae324(v);
}

void	init_pae324(t_parse_action_entries *v)
{
	v->arr[4306] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5730), .repetition = true}}};
	v->arr[4308] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4309] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4309] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2271), .repetition = true}}};
	v->arr[4311] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4312] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4312] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2420), .repetition = true}}};
	v->arr[4314] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4315] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4315] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6316), .repetition = true}}};
	v->arr[4317] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4318] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae325(v);
}

// file funcs64.c
