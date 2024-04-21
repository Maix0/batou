/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs86.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae430(t_parse_action_entries *v)
{
	v->arr[5712] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4100)}}};
	v->arr[5713] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5714] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3770)}}};
	v->arr[5715] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5716] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3181)}}};
	v->arr[5717] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5718] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3177)}}};
	v->arr[5719] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5720] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3177)}}};
	v->arr[5721] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5722] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_file_redirect, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 9}}};
	v->arr[5723] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5724] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_file_redirect, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 9}}};
	init_pae431(v);
}

void	init_pae431(t_parse_action_entries *v)
{
	v->arr[5725] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5726] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__literal_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5726] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1551), .repetition = true}}};
	v->arr[5728] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5729] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3868)}}};
	v->arr[5730] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5731] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4161)}}};
	v->arr[5732] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5733] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3872)}}};
	v->arr[5734] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5735] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3747)}}};
	v->arr[5736] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5737] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__literal_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	init_pae432(v);
}

void	init_pae432(t_parse_action_entries *v)
{
	v->arr[5737] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1535), .repetition = true}}};
	v->arr[5739] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5740] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5740] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3899), .repetition = true}}};
	v->arr[5742] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5743] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5743] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3899), .repetition = true}}};
	v->arr[5745] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5746] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4213)}}};
	v->arr[5747] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5748] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5748] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4065), .repetition = true}}};
	init_pae433(v);
}

void	init_pae433(t_parse_action_entries *v)
{
	v->arr[5750] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5751] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5751] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4065), .repetition = true}}};
	v->arr[5753] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5754] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1844)}}};
	v->arr[5755] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5756] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__literal_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5756] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1890), .repetition = true}}};
	v->arr[5758] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5759] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3948)}}};
	v->arr[5760] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5761] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3948)}}};
	v->arr[5762] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae434(v);
}

void	init_pae434(t_parse_action_entries *v)
{
	v->arr[5763] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4127)}}};
	v->arr[5764] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5765] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4106)}}};
	v->arr[5766] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5767] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_array, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5768] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5769] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_array, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5770] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5771] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_array, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5772] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5773] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_array, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5774] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae435(v);
}

// file funcs86.c
