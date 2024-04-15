/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs53.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae265(t_parse_action_entries *v)
{
	v->arr[3520] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3521] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3521] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1662), repetition = true}}};
	v->arr[3523] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3524] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3524] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1575), repetition = true}}};
	v->arr[3526] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3527] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4370)}}};
	v->arr[3528] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3529] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4364)}}};
	v->arr[3530] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3531] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae266(v);
}

void	init_pae266(t_parse_action_entries *v)
{
	v->arr[3531] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1650), repetition = true}}};
	v->arr[3533] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3534] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3534] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4193), repetition = true}}};
	v->arr[3536] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3537] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3537] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4192), repetition = true}}};
	v->arr[3539] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3540] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3540] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6047), repetition = true}}};
	v->arr[3542] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3543] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae267(v);
}

void	init_pae267(t_parse_action_entries *v)
{
	v->arr[3543] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1705), repetition = true}}};
	v->arr[3545] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3546] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3546] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5736), repetition = true}}};
	v->arr[3548] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3549] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3549] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1788), repetition = true}}};
	v->arr[3551] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3552] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3552] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6257), repetition = true}}};
	v->arr[3554] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3555] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae268(v);
}

void	init_pae268(t_parse_action_entries *v)
{
	v->arr[3555] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4624), repetition = true}}};
	v->arr[3557] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3558] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3558] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (243), repetition = true}}};
	v->arr[3560] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3561] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3561] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (244), repetition = true}}};
	v->arr[3563] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3564] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3564] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (245), repetition = true}}};
	v->arr[3566] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3567] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae269(v);
}

void	init_pae269(t_parse_action_entries *v)
{
	v->arr[3567] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (219), repetition = true}}};
	v->arr[3569] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3570] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3570] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (709), repetition = true}}};
	v->arr[3572] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3573] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3573] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1647), repetition = true}}};
	v->arr[3575] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3576] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3576] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7618), repetition = true}}};
	v->arr[3578] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3579] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2081)}}};
	init_pae270(v);
}

// file funcs53.c
