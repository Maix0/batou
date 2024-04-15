/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs77.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae385(t_parse_action_entries *v)
{
	v->arr[5104] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6604)}}};
	v->arr[5106] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5107] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3745)}}};
	v->arr[5108] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5109] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2613)}}};
	v->arr[5110] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5111] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3835)}}};
	v->arr[5112] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5113] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3818)}}};
	v->arr[5114] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5115] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6082)}}};
	v->arr[5116] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5117] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2632)}}};
	v->arr[5118] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5119] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5837)}}};
	init_pae386(v);
}

void	init_pae386(t_parse_action_entries *v)
{
	v->arr[5120] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5121] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2613)}}};
	v->arr[5122] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5123] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2869)}}};
	v->arr[5124] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5125] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6366)}}};
	v->arr[5126] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5127] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4737)}}};
	v->arr[5128] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5129] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (384)}}};
	v->arr[5130] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5131] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (383)}}};
	v->arr[5132] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5133] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (382)}}};
	v->arr[5134] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae387(v);
}

void	init_pae387(t_parse_action_entries *v)
{
	v->arr[5135] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (210)}}};
	v->arr[5136] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5137] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2612)}}};
	v->arr[5138] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5139] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7647)}}};
	v->arr[5140] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5141] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (827)}}};
	v->arr[5142] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5143] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (827)}}};
	v->arr[5144] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5145] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4034)}}};
	v->arr[5146] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5147] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4034)}}};
	v->arr[5148] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5149] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3750)}}};
	init_pae388(v);
}

void	init_pae388(t_parse_action_entries *v)
{
	v->arr[5150] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5151] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2468)}}};
	v->arr[5152] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5153] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5754)}}};
	v->arr[5154] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5155] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2467)}}};
	v->arr[5156] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5157] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2467)}}};
	v->arr[5158] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5159] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2625)}}};
	v->arr[5160] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5161] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2624)}}};
	v->arr[5162] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5163] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2624)}}};
	v->arr[5164] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae389(v);
}

void	init_pae389(t_parse_action_entries *v)
{
	v->arr[5165] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4019)}}};
	v->arr[5166] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5167] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4020)}}};
	v->arr[5168] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5169] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5169] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3733), repetition = true}}};
	v->arr[5171] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5172] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5172] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3733), repetition = true}}};
	v->arr[5174] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5175] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5176] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae390(v);
}

// file funcs77.c
