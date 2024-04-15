/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs83.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae415(t_parse_action_entries *v)
{
	v->arr[5515] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5516] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5516] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3942), repetition = true}}};
	v->arr[5518] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5519] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5519] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3942), repetition = true}}};
	v->arr[5521] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5522] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4071)}}};
	v->arr[5523] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5524] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4075)}}};
	v->arr[5525] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5526] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae416(v);
}

void	init_pae416(t_parse_action_entries *v)
{
	v->arr[5526] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3943), repetition = true}}};
	v->arr[5528] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5529] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5529] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3943), repetition = true}}};
	v->arr[5531] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5532] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1351)}}};
	v->arr[5533] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5534] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5534] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1338), repetition = true}}};
	v->arr[5536] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5537] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3951)}}};
	v->arr[5538] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5539] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3951)}}};
	init_pae417(v);
}

void	init_pae417(t_parse_action_entries *v)
{
	v->arr[5540] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5541] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3899)}}};
	v->arr[5542] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5543] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3899)}}};
	v->arr[5544] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5545] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4214)}}};
	v->arr[5546] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5547] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5844)}}};
	v->arr[5548] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5549] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4749)}}};
	v->arr[5550] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5551] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (396)}}};
	v->arr[5552] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5553] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (395)}}};
	v->arr[5554] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae418(v);
}

void	init_pae418(t_parse_action_entries *v)
{
	v->arr[5555] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (394)}}};
	v->arr[5556] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5557] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5557] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1724), repetition = true}}};
	v->arr[5559] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5560] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5560] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3093), repetition = true}}};
	v->arr[5562] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5563] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5563] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3875), repetition = true}}};
	v->arr[5565] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5566] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae419(v);
}

void	init_pae419(t_parse_action_entries *v)
{
	v->arr[5566] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3874), repetition = true}}};
	v->arr[5568] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5569] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5569] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5952), repetition = true}}};
	v->arr[5571] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5572] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5572] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3110), repetition = true}}};
	v->arr[5574] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5575] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5575] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5850), repetition = true}}};
	v->arr[5577] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5578] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae420(v);
}

// file funcs83.c
