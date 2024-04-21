/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs80.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae400(t_parse_action_entries *v)
{
	v->arr[5307] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5308] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5398)}}};
	v->arr[5309] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5310] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5318)}}};
	v->arr[5311] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5312] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5379)}}};
	v->arr[5313] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5314] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3974)}}};
	v->arr[5315] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5316] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3973)}}};
	v->arr[5317] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5318] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5919)}}};
	v->arr[5319] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5320] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5174)}}};
	v->arr[5321] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae401(v);
}

void	init_pae401(t_parse_action_entries *v)
{
	v->arr[5322] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5761)}}};
	v->arr[5323] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5324] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5379)}}};
	v->arr[5325] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5326] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5463)}}};
	v->arr[5327] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5328] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6322)}}};
	v->arr[5329] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5330] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4832)}}};
	v->arr[5331] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5332] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (164)}}};
	v->arr[5333] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5334] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (168)}}};
	v->arr[5335] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5336] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (169)}}};
	init_pae402(v);
}

void	init_pae402(t_parse_action_entries *v)
{
	v->arr[5337] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5338] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (109)}}};
	v->arr[5339] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5340] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5371)}}};
	v->arr[5341] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5342] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7638)}}};
	v->arr[5343] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5344] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5331)}}};
	v->arr[5345] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5346] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5331)}}};
	v->arr[5347] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5348] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5377)}}};
	v->arr[5349] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5350] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3867)}}};
	v->arr[5351] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae403(v);
}

void	init_pae403(t_parse_action_entries *v)
{
	v->arr[5352] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3834)}}};
	v->arr[5353] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5354] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (810)}}};
	v->arr[5355] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5356] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (449)}}};
	v->arr[5357] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5358] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (810)}}};
	v->arr[5359] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5360] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2879)}}};
	v->arr[5361] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5362] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5837)}}};
	v->arr[5363] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5364] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2877)}}};
	v->arr[5365] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5366] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2877)}}};
	init_pae404(v);
}

void	init_pae404(t_parse_action_entries *v)
{
	v->arr[5367] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5368] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5368] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4034), .repetition = true}}};
	v->arr[5370] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5371] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5371] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4034), .repetition = true}}};
	v->arr[5373] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5374] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_variable_assignment, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 24}}};
	v->arr[5375] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5376] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_variable_assignment, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 24}}};
	v->arr[5377] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5378] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (812)}}};
	init_pae405(v);
}

// file funcs80.c
