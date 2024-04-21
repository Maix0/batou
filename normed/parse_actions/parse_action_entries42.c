/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs42.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae210(t_parse_action_entries *v)
{
	v->arr[2795] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6251)}}};
	v->arr[2796] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2797] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4676)}}};
	v->arr[2798] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2799] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (308)}}};
	v->arr[2800] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2801] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (307)}}};
	v->arr[2802] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2803] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (306)}}};
	v->arr[2804] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2805] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (377)}}};
	v->arr[2806] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2807] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (633)}}};
	v->arr[2808] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2809] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1325)}}};
	init_pae211(v);
}

void	init_pae211(t_parse_action_entries *v)
{
	v->arr[2810] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2811] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7663)}}};
	v->arr[2812] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2813] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2813] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1381), .repetition = true}}};
	v->arr[2815] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2816] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2816] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3744), .repetition = true}}};
	v->arr[2818] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2819] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2819] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3743), .repetition = true}}};
	v->arr[2821] = (t_pae){.entry = {.count = 2, .reusable = false}};
	init_pae212(v);
}

void	init_pae212(t_parse_action_entries *v)
{
	v->arr[2822] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2822] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5976), .repetition = true}}};
	v->arr[2824] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2825] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2825] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1308), .repetition = true}}};
	v->arr[2827] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2828] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2828] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5814), .repetition = true}}};
	v->arr[2830] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2831] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2831] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1515), .repetition = true}}};
	init_pae213(v);
}

void	init_pae213(t_parse_action_entries *v)
{
	v->arr[2833] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2834] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2834] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6272), .repetition = true}}};
	v->arr[2836] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2837] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2837] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4690), .repetition = true}}};
	v->arr[2839] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2840] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2840] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (332), .repetition = true}}};
	v->arr[2842] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2843] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae214(v);
}

void	init_pae214(t_parse_action_entries *v)
{
	v->arr[2843] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (331), .repetition = true}}};
	v->arr[2845] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2846] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2846] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (330), .repetition = true}}};
	v->arr[2848] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2849] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2849] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (409), .repetition = true}}};
	v->arr[2851] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2852] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2852] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1388), .repetition = true}}};
	v->arr[2854] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2855] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae215(v);
}

// file funcs42.c
