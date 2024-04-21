/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs40.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae200(t_parse_action_entries *v)
{
	v->arr[2674] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2674] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3849), .repetition = true}}};
	v->arr[2676] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2677] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2677] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3850), .repetition = true}}};
	v->arr[2679] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2680] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2680] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6044), .repetition = true}}};
	v->arr[2682] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2683] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2683] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1468), .repetition = true}}};
	init_pae201(v);
}

void	init_pae201(t_parse_action_entries *v)
{
	v->arr[2685] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2686] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2686] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5777), .repetition = true}}};
	v->arr[2688] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2689] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2689] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1616), .repetition = true}}};
	v->arr[2691] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2692] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2692] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6274), .repetition = true}}};
	v->arr[2694] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2695] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae202(v);
}

void	init_pae202(t_parse_action_entries *v)
{
	v->arr[2695] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4661), .repetition = true}}};
	v->arr[2697] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2698] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2698] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (292), .repetition = true}}};
	v->arr[2700] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2701] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2701] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (291), .repetition = true}}};
	v->arr[2703] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2704] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2704] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (288), .repetition = true}}};
	v->arr[2706] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2707] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae203(v);
}

void	init_pae203(t_parse_action_entries *v)
{
	v->arr[2707] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (349), .repetition = true}}};
	v->arr[2709] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2710] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2710] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1307), .repetition = true}}};
	v->arr[2712] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2713] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2713] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7667), .repetition = true}}};
	v->arr[2715] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2716] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__statements_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2717] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2718] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__statements_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae204(v);
}

void	init_pae204(t_parse_action_entries *v)
{
	v->arr[2719] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2720] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__statements, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2721] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2722] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__statements, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2723] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2724] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1078)}}};
	v->arr[2725] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2726] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__statements, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2727] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2728] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__statements, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2729] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2730] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae205(v);
}

// file funcs40.c
