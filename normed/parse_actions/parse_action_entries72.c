/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs72.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae360(t_parse_action_entries *v)
{
	v->arr[4771] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4772] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5064)}}};
	v->arr[4773] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4774] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5797)}}};
	v->arr[4775] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4776] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5178)}}};
	v->arr[4777] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4778] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5327)}}};
	v->arr[4779] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4780] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6295)}}};
	v->arr[4781] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4782] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4823)}}};
	v->arr[4783] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4784] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (199)}}};
	v->arr[4785] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae361(v);
}

void	init_pae361(t_parse_action_entries *v)
{
	v->arr[4786] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (208)}}};
	v->arr[4787] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4788] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (209)}}};
	v->arr[4789] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4790] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (123)}}};
	v->arr[4791] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4792] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5179)}}};
	v->arr[4793] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4794] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7640)}}};
	v->arr[4795] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4796] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2610)}}};
	v->arr[4797] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4798] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5743)}}};
	v->arr[4799] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4800] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2609)}}};
	init_pae362(v);
}

void	init_pae362(t_parse_action_entries *v)
{
	v->arr[4801] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4802] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2609)}}};
	v->arr[4803] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4804] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5182)}}};
	v->arr[4805] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4806] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5182)}}};
	v->arr[4807] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4808] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5170)}}};
	v->arr[4809] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4810] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (441)}}};
	v->arr[4811] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4812] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat1, .child_count = 1, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4812] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6578)}}};
	v->arr[4814] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae363(v);
}

void	init_pae363(t_parse_action_entries *v)
{
	v->arr[4815] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4153)}}};
	v->arr[4816] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4817] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2539)}}};
	v->arr[4818] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4819] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4103)}}};
	v->arr[4820] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4821] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4101)}}};
	v->arr[4822] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4823] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5879)}}};
	v->arr[4824] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4825] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2453)}}};
	v->arr[4826] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4827] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5769)}}};
	v->arr[4828] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4829] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2539)}}};
	init_pae364(v);
}

void	init_pae364(t_parse_action_entries *v)
{
	v->arr[4830] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4831] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2667)}}};
	v->arr[4832] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4833] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6277)}}};
	v->arr[4834] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4835] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4751)}}};
	v->arr[4836] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4837] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (296)}}};
	v->arr[4838] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4839] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (297)}}};
	v->arr[4840] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4841] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (336)}}};
	v->arr[4842] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4843] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (254)}}};
	v->arr[4844] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae365(v);
}

// file funcs72.c
