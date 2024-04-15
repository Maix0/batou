/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs164.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae820(t_parse_action_entries *v)
{
	v->arr[11289] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_variable_assignments_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11290] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11291] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_variable_assignments_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11292] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[11293] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_variable_assignments_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11293] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6662), repetition = true}}};
	v->arr[11295] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11296] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11296] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3912), repetition = true}}};
	v->arr[11298] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[11299] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae821(v);
}

void	init_pae821(t_parse_action_entries *v)
{
	v->arr[11299] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3912), repetition = true}}};
	v->arr[11301] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11302] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3952)}}};
	v->arr[11303] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11304] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3952)}}};
	v->arr[11305] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11306] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3907)}}};
	v->arr[11307] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11308] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11309] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11310] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11310] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3642), repetition = true}}};
	v->arr[11312] = (t_pae){.entry = {.count = 2, .reusable = false}};
	init_pae822(v);
}

void	init_pae822(t_parse_action_entries *v)
{
	v->arr[11313] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11313] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (631), repetition = true}}};
	v->arr[11315] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11316] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11317] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11318] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11318] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3805), repetition = true}}};
	v->arr[11320] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[11321] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11321] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6151), repetition = true}}};
	v->arr[11323] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae823(v);
}

void	init_pae823(t_parse_action_entries *v)
{
	v->arr[11324] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4743)}}};
	v->arr[11325] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11326] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4743)}}};
	v->arr[11327] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11328] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_variable_assignments, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11329] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11330] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_variable_assignments, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11331] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11332] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6662)}}};
	v->arr[11333] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11334] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3653)}}};
	v->arr[11335] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11336] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (724)}}};
	init_pae824(v);
}

void	init_pae824(t_parse_action_entries *v)
{
	v->arr[11337] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11338] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6092)}}};
	v->arr[11339] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11340] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4721)}}};
	v->arr[11341] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11342] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4721)}}};
	v->arr[11343] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11344] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4757)}}};
	v->arr[11345] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11346] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4757)}}};
	v->arr[11347] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11348] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11348] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3873), repetition = true}}};
	v->arr[11350] = (t_pae){.entry = {.count = 2, .reusable = true}};
	init_pae825(v);
}

// file funcs164.c
