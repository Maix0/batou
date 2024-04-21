/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs7.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae35(t_parse_action_entries *v)
{
	v->arr[515] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[516] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5259)}}};
	v->arr[517] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[518] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5384)}}};
	v->arr[519] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[520] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5193)}}};
	v->arr[521] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[522] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5396)}}};
	v->arr[523] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[524] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5401)}}};
	v->arr[525] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[526] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5145)}}};
	v->arr[527] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[528] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5330)}}};
	v->arr[529] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae36(v);
}

void	init_pae36(t_parse_action_entries *v)
{
	v->arr[530] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5329)}}};
	v->arr[531] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[532] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, \
.symbol = sym_last_case_item, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 60}}};
	v->arr[533] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[534] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5169)}}};
	v->arr[535] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[536] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5353)}}};
	v->arr[537] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[538] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, \
.symbol = sym_last_case_item, .child_count = 3, .dynamic_precedence = 0, \
	.production_id = 45}}};
	v->arr[539] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[540] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5164)}}};
	v->arr[541] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[542] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5325)}}};
	init_pae37(v);
}

void	init_pae37(t_parse_action_entries *v)
{
	v->arr[543] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[544] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, \
.symbol = sym_last_case_item, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 59}}};
	v->arr[545] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[546] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5172)}}};
	v->arr[547] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[548] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5354)}}};
	v->arr[549] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[550] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5250)}}};
	v->arr[551] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[552] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5257)}}};
	v->arr[553] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[554] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5273)}}};
	v->arr[555] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[556] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__terminated_statement, .child_count = 2, .dynamic_precedence = \
	0, .production_id = 0}}};
	init_pae38(v);
}

void	init_pae38(t_parse_action_entries *v)
{
	v->arr[556] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1080), .repetition = true}}};
	v->arr[558] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[559] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__terminated_statement, .child_count = 2, .dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[559] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6777), .repetition = true}}};
	v->arr[561] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[562] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__terminated_statement, .child_count = 2, .dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[562] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7604), .repetition = true}}};
	v->arr[564] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[565] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__terminated_statement, .child_count = 2, .dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[565] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (659), .repetition = true}}};
	v->arr[567] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[568] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__terminated_statement, .child_count = 2, .dynamic_precedence = \
	0, .production_id = 0}}};
	init_pae39(v);
}

void	init_pae39(t_parse_action_entries *v)
{
	v->arr[568] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3678), .repetition = true}}};
	v->arr[570] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[571] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__terminated_statement, .child_count = 2, .dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[571] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3678), .repetition = true}}};
	v->arr[573] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[574] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__terminated_statement, .child_count = 2, .dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[574] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (240), .repetition = true}}};
	v->arr[576] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[577] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__terminated_statement, .child_count = 2, .dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[577] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (432), .repetition = true}}};
	v->arr[579] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[580] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__terminated_statement, .child_count = 2, .dynamic_precedence = \
	0, .production_id = 0}}};
	init_pae40(v);
}

// file funcs7.c
