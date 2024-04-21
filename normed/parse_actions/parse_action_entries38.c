/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs38.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae190(t_parse_action_entries *v)
{
	v->arr[2533] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (313), .repetition = true}}};
	v->arr[2535] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2536] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2536] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (312), .repetition = true}}};
	v->arr[2538] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2539] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2539] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (385), .repetition = true}}};
	v->arr[2541] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2542] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2542] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1270), .repetition = true}}};
	v->arr[2544] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2545] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae191(v);
}

void	init_pae191(t_parse_action_entries *v)
{
	v->arr[2545] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7661), .repetition = true}}};
	v->arr[2547] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2548] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2548] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1602), .repetition = true}}};
	v->arr[2550] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2551] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2551] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1665), .repetition = true}}};
	v->arr[2553] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2554] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2554] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (612), .repetition = true}}};
	v->arr[2556] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2557] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae192(v);
}

void	init_pae192(t_parse_action_entries *v)
{
	v->arr[2557] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6560), .repetition = true}}};
	v->arr[2559] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2560] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2560] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1481), .repetition = true}}};
	v->arr[2562] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2563] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_unset_command, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2564] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2565] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_unset_command, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2566] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2567] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (598)}}};
	v->arr[2568] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2569] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1394)}}};
	init_pae193(v);
}

void	init_pae193(t_parse_action_entries *v)
{
	v->arr[2570] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2571] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3849)}}};
	v->arr[2572] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2573] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3850)}}};
	v->arr[2574] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2575] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6044)}}};
	v->arr[2576] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2577] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1468)}}};
	v->arr[2578] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2579] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5777)}}};
	v->arr[2580] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2581] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1616)}}};
	v->arr[2582] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2583] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6274)}}};
	v->arr[2584] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae194(v);
}

void	init_pae194(t_parse_action_entries *v)
{
	v->arr[2585] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4661)}}};
	v->arr[2586] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2587] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (292)}}};
	v->arr[2588] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2589] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (291)}}};
	v->arr[2590] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2591] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (288)}}};
	v->arr[2592] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2593] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (349)}}};
	v->arr[2594] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2595] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1307)}}};
	v->arr[2596] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2597] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7667)}}};
	v->arr[2598] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2599] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1381)}}};
	init_pae195(v);
}

// file funcs38.c
