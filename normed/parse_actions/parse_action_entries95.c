/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs95.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae475(t_parse_action_entries *v)
{
	v->arr[6288] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6242)}}};
	v->arr[6290] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6291] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6291] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4402)}}};
	v->arr[6293] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6294] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2497)}}};
	v->arr[6295] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6296] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2497)}}};
	v->arr[6297] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6298] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (461)}}};
	v->arr[6299] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6300] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6300] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6532)}}};
	init_pae476(v);
}

void	init_pae476(t_parse_action_entries *v)
{
	v->arr[6302] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6303] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6303] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6246)}}};
	v->arr[6305] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6306] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6306] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5284)}}};
	v->arr[6308] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6309] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6309] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2448)}}};
	v->arr[6311] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6312] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	init_pae477(v);
}

void	init_pae477(t_parse_action_entries *v)
{
	v->arr[6312] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5455)}}};
	v->arr[6314] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6315] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6315] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2616)}}};
	v->arr[6317] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6318] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6318] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2542)}}};
	v->arr[6320] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6321] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6321] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6484)}}};
	v->arr[6323] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6324] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	init_pae478(v);
}

void	init_pae478(t_parse_action_entries *v)
{
	v->arr[6324] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1755)}}};
	v->arr[6326] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6327] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6327] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2006)}}};
	v->arr[6329] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6330] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6330] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4631)}}};
	v->arr[6332] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6333] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6333] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3353)}}};
	v->arr[6335] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6336] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	init_pae479(v);
}

void	init_pae479(t_parse_action_entries *v)
{
	v->arr[6336] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5160)}}};
	v->arr[6338] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6339] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6339] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4411)}}};
	v->arr[6341] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6342] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6342] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (518)}}};
	v->arr[6344] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6345] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6345] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1818)}}};
	v->arr[6347] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6348] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	init_pae480(v);
}

// file funcs95.c
