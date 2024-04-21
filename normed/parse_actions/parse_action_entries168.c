/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs168.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae840(t_parse_action_entries *v)
{
	v->arr[11547] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3953), .repetition = true}}};
	v->arr[11549] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[11550] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11550] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3953), .repetition = true}}};
	v->arr[11552] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11553] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4180)}}};
	v->arr[11554] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11555] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3696)}}};
	v->arr[11556] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11557] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (825)}}};
	v->arr[11558] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11559] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4118)}}};
	v->arr[11560] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11561] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6089)}}};
	init_pae841(v);
}

void	init_pae841(t_parse_action_entries *v)
{
	v->arr[11562] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11563] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6116)}}};
	v->arr[11564] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11565] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6130)}}};
	v->arr[11566] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11567] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4846)}}};
	v->arr[11568] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11569] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3823)}}};
	v->arr[11570] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11571] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3711)}}};
	v->arr[11572] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11573] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4726)}}};
	v->arr[11574] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[11575] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_variable_assignments_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae842(v);
}

void	init_pae842(t_parse_action_entries *v)
{
	v->arr[11575] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6578), .repetition = true}}};
	v->arr[11577] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11578] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11578] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3950), .repetition = true}}};
	v->arr[11580] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[11581] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11581] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3950), .repetition = true}}};
	v->arr[11583] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11584] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3823)}}};
	v->arr[11585] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11586] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4788)}}};
	v->arr[11587] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11588] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae843(v);
}

void	init_pae843(t_parse_action_entries *v)
{
	v->arr[11588] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3653), .repetition = true}}};
	v->arr[11590] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11591] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11591] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (7514), .repetition = true}}};
	v->arr[11593] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11594] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11594] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (724), .repetition = true}}};
	v->arr[11596] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[11597] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11597] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6116), .repetition = true}}};
	v->arr[11599] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11600] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4191)}}};
	init_pae844(v);
}

void	init_pae844(t_parse_action_entries *v)
{
	v->arr[11601] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11602] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4187)}}};
	v->arr[11603] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11604] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3670)}}};
	v->arr[11605] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11606] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (733)}}};
	v->arr[11607] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11608] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4045)}}};
	v->arr[11609] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11610] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6152)}}};
	v->arr[11611] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11612] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__literal_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11612] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4788), .repetition = true}}};
	v->arr[11614] = (t_pae){.entry = {.count = 2, .reusable = false}};
	init_pae845(v);
}

// file funcs168.c
