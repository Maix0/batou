/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs41.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae205(t_parse_action_entries *v)
{
	v->arr[2730] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1370), .repetition = true}}};
	v->arr[2732] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2733] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2733] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4202), .repetition = true}}};
	v->arr[2735] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2736] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2736] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4201), .repetition = true}}};
	v->arr[2738] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2739] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2739] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6038), .repetition = true}}};
	v->arr[2741] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2742] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae206(v);
}

void	init_pae206(t_parse_action_entries *v)
{
	v->arr[2742] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1445), .repetition = true}}};
	v->arr[2744] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2745] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2745] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5764), .repetition = true}}};
	v->arr[2747] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2748] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2748] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1702), .repetition = true}}};
	v->arr[2750] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2751] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2751] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6292), .repetition = true}}};
	v->arr[2753] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2754] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae207(v);
}

void	init_pae207(t_parse_action_entries *v)
{
	v->arr[2754] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4694), .repetition = true}}};
	v->arr[2756] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2757] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2757] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (229), .repetition = true}}};
	v->arr[2759] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2760] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2760] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (230), .repetition = true}}};
	v->arr[2762] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2763] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2763] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (231), .repetition = true}}};
	v->arr[2765] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2766] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae208(v);
}

void	init_pae208(t_parse_action_entries *v)
{
	v->arr[2766] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (204), .repetition = true}}};
	v->arr[2768] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2769] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2769] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1372), .repetition = true}}};
	v->arr[2771] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2772] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2772] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7616), .repetition = true}}};
	v->arr[2774] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2775] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1642)}}};
	v->arr[2776] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2777] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1641)}}};
	v->arr[2778] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2779] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1641)}}};
	init_pae209(v);
}

void	init_pae209(t_parse_action_entries *v)
{
	v->arr[2780] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2781] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1326)}}};
	v->arr[2782] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2783] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3786)}}};
	v->arr[2784] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2785] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3789)}}};
	v->arr[2786] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2787] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6078)}}};
	v->arr[2788] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2789] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1369)}}};
	v->arr[2790] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2791] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5791)}}};
	v->arr[2792] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2793] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1496)}}};
	v->arr[2794] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae210(v);
}

// file funcs41.c
