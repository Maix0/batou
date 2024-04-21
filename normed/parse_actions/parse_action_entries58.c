/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs58.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae290(t_parse_action_entries *v)
{
	v->arr[3862] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (119), .repetition = true}}};
	v->arr[3864] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3865] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3865] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (121), .repetition = true}}};
	v->arr[3867] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3868] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3868] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (182), .repetition = true}}};
	v->arr[3870] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3871] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3871] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1843), .repetition = true}}};
	v->arr[3873] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3874] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae291(v);
}

void	init_pae291(t_parse_action_entries *v)
{
	v->arr[3874] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7633), .repetition = true}}};
	v->arr[3876] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3877] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1846)}}};
	v->arr[3878] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3879] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4061)}}};
	v->arr[3880] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3881] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4054)}}};
	v->arr[3882] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3883] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5926)}}};
	v->arr[3884] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3885] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1916)}}};
	v->arr[3886] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3887] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1946)}}};
	v->arr[3888] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3889] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6348)}}};
	init_pae292(v);
}

void	init_pae292(t_parse_action_entries *v)
{
	v->arr[3890] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3891] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4819)}}};
	v->arr[3892] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3893] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (374)}}};
	v->arr[3894] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3895] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (410)}}};
	v->arr[3896] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3897] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (247)}}};
	v->arr[3898] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3899] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (272)}}};
	v->arr[3900] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3901] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1845)}}};
	v->arr[3902] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3903] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7627)}}};
	v->arr[3904] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae293(v);
}

void	init_pae293(t_parse_action_entries *v)
{
	v->arr[3905] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6466)}}};
	v->arr[3906] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3907] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6411)}}};
	v->arr[3908] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3909] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3909] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2330), .repetition = true}}};
	v->arr[3911] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3912] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3912] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2342), .repetition = true}}};
	v->arr[3914] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3915] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3915] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (746), .repetition = true}}};
	init_pae294(v);
}

void	init_pae294(t_parse_action_entries *v)
{
	v->arr[3917] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3918] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3918] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6696), .repetition = true}}};
	v->arr[3920] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3921] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3921] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2331), .repetition = true}}};
	v->arr[3923] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3924] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3924] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1846), .repetition = true}}};
	v->arr[3926] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3927] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae295(v);
}

// file funcs58.c
