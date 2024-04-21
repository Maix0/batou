/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs76.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae380(t_parse_action_entries *v)
{
	v->arr[5037] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (979), .repetition = true}}};
	v->arr[5039] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5040] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5040] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2538), .repetition = true}}};
	v->arr[5042] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5043] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5043] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7624), .repetition = true}}};
	v->arr[5045] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5046] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3936)}}};
	v->arr[5047] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5048] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (850)}}};
	v->arr[5049] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5050] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (794)}}};
	init_pae381(v);
}

void	init_pae381(t_parse_action_entries *v)
{
	v->arr[5051] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5052] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (794)}}};
	v->arr[5053] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5054] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5054] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4027), .repetition = true}}};
	v->arr[5056] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5057] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5057] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4027), .repetition = true}}};
	v->arr[5059] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5060] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2646)}}};
	v->arr[5061] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5062] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5769)}}};
	v->arr[5063] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae382(v);
}

void	init_pae382(t_parse_action_entries *v)
{
	v->arr[5064] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2649)}}};
	v->arr[5065] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5066] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2649)}}};
	v->arr[5067] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5068] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_variable_assignment, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 25}}};
	v->arr[5069] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5070] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_variable_assignment, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 25}}};
	v->arr[5071] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5072] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3894)}}};
	v->arr[5073] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5074] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3894)}}};
	v->arr[5075] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5076] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_command_name, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	init_pae383(v);
}

void	init_pae383(t_parse_action_entries *v)
{
	v->arr[5076] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7486)}}};
	v->arr[5078] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5079] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1229)}}};
	v->arr[5080] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5081] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3733)}}};
	v->arr[5082] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5083] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3733)}}};
	v->arr[5084] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5085] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2304)}}};
	v->arr[5086] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5087] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5753)}}};
	v->arr[5088] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5089] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2307)}}};
	v->arr[5090] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5091] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2307)}}};
	init_pae384(v);
}

void	init_pae384(t_parse_action_entries *v)
{
	v->arr[5092] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5093] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1260)}}};
	v->arr[5094] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5095] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat1, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5095] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6705)}}};
	v->arr[5097] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5098] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (780)}}};
	v->arr[5099] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5100] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (444)}}};
	v->arr[5101] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5102] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (780)}}};
	v->arr[5103] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5104] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat1, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	init_pae385(v);
}

// file funcs76.c
