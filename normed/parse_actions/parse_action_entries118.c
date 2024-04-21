/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs118.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae590(t_parse_action_entries *v)
{
	v->arr[7882] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (77), .repetition = true}}};
	v->arr[7884] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[7885] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_case_statement_repeat1, .child_count \
	= 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7885] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6318), .repetition = true}}};
	v->arr[7887] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[7888] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_case_statement_repeat1, .child_count \
	= 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7888] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6164), .repetition = true}}};
	v->arr[7890] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[7891] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_case_statement_repeat1, .child_count \
	= 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7891] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7635), .repetition = true}}};
	v->arr[7893] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[7894] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae591(v);
}

void	init_pae591(t_parse_action_entries *v)
{
	v->arr[7894] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4460), .repetition = true}}};
	v->arr[7896] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[7897] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7897] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4006), .repetition = true}}};
	v->arr[7899] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[7900] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7900] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4005), .repetition = true}}};
	v->arr[7902] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[7903] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7903] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6005), .repetition = true}}};
	v->arr[7905] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[7906] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae592(v);
}

void	init_pae592(t_parse_action_entries *v)
{
	v->arr[7906] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4491), .repetition = true}}};
	v->arr[7908] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[7909] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7909] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5741), .repetition = true}}};
	v->arr[7911] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[7912] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7912] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4837), .repetition = true}}};
	v->arr[7914] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[7915] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7915] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6352), .repetition = true}}};
	v->arr[7917] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[7918] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae593(v);
}

void	init_pae593(t_parse_action_entries *v)
{
	v->arr[7918] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4857), .repetition = true}}};
	v->arr[7920] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[7921] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7921] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (110), .repetition = true}}};
	v->arr[7923] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[7924] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7924] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (111), .repetition = true}}};
	v->arr[7926] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[7927] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7927] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (113), .repetition = true}}};
	v->arr[7929] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[7930] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae594(v);
}

void	init_pae594(t_parse_action_entries *v)
{
	v->arr[7930] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (366), .repetition = true}}};
	v->arr[7932] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[7933] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7933] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4458), .repetition = true}}};
	v->arr[7935] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[7936] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7936] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7632), .repetition = true}}};
	v->arr[7938] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7939] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6770)}}};
	v->arr[7940] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7941] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6770)}}};
	v->arr[7942] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7943] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6449)}}};
	init_pae595(v);
}

// file funcs118.c
