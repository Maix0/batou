/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs79.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae395(t_parse_action_entries *v)
{
	v->arr[5237] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3891), repetition = true}}};
	v->arr[5239] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5240] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5240] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3891), repetition = true}}};
	v->arr[5242] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5243] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_command_name, child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5243] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7396)}}};
	v->arr[5245] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5246] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3891)}}};
	v->arr[5247] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5248] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3781)}}};
	v->arr[5249] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5250] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3785)}}};
	init_pae396(v);
}

void	init_pae396(t_parse_action_entries *v)
{
	v->arr[5251] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5252] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5252] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3894), repetition = true}}};
	v->arr[5254] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5255] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5255] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3894), repetition = true}}};
	v->arr[5257] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5258] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5378)}}};
	v->arr[5259] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5260] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3784)}}};
	v->arr[5261] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5262] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3783)}}};
	v->arr[5263] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae397(v);
}

void	init_pae397(t_parse_action_entries *v)
{
	v->arr[5264] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5892)}}};
	v->arr[5265] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5266] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5240)}}};
	v->arr[5267] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5268] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5830)}}};
	v->arr[5269] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5270] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5378)}}};
	v->arr[5271] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5272] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5492)}}};
	v->arr[5273] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5274] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6294)}}};
	v->arr[5275] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5276] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4718)}}};
	v->arr[5277] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5278] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (371)}}};
	init_pae398(v);
}

void	init_pae398(t_parse_action_entries *v)
{
	v->arr[5279] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5280] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (370)}}};
	v->arr[5281] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5282] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (369)}}};
	v->arr[5283] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5284] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (264)}}};
	v->arr[5285] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5286] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5373)}}};
	v->arr[5287] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5288] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7650)}}};
	v->arr[5289] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5290] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5290] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1229), repetition = true}}};
	v->arr[5292] = (t_pae){.entry = {.count = 2, .reusable = false}};
	init_pae399(v);
}

void	init_pae399(t_parse_action_entries *v)
{
	v->arr[5293] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5293] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1260), repetition = true}}};
	v->arr[5295] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5296] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5352)}}};
	v->arr[5297] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5298] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5352)}}};
	v->arr[5299] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5300] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5359)}}};
	v->arr[5301] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5302] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5293)}}};
	v->arr[5303] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5304] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5206)}}};
	v->arr[5305] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5306] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5305)}}};
	init_pae400(v);
}

// file funcs79.c
