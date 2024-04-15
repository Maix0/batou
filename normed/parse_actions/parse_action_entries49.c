/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs49.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae245(t_parse_action_entries *v)
{
	v->arr[3246] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1790), repetition = true}}};
	v->arr[3248] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3249] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3249] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6357), repetition = true}}};
	v->arr[3251] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3252] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3252] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4851), repetition = true}}};
	v->arr[3254] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3255] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3255] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (124), repetition = true}}};
	v->arr[3257] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3258] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae246(v);
}

void	init_pae246(t_parse_action_entries *v)
{
	v->arr[3258] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (126), repetition = true}}};
	v->arr[3260] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3261] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3261] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (127), repetition = true}}};
	v->arr[3263] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3264] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3264] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (375), repetition = true}}};
	v->arr[3266] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3267] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3267] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1708), repetition = true}}};
	v->arr[3269] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3270] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae247(v);
}

void	init_pae247(t_parse_action_entries *v)
{
	v->arr[3270] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7634), repetition = true}}};
	v->arr[3272] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3273] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1773)}}};
	v->arr[3274] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3275] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5784)}}};
	v->arr[3276] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3277] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1775)}}};
	v->arr[3278] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3279] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1775)}}};
	v->arr[3280] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3281] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1700)}}};
	v->arr[3282] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3283] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5764)}}};
	v->arr[3284] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3285] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1586)}}};
	init_pae248(v);
}

void	init_pae248(t_parse_action_entries *v)
{
	v->arr[3286] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3287] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1586)}}};
	v->arr[3288] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3289] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3289] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1630), repetition = true}}};
	v->arr[3291] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3292] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3292] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4047), repetition = true}}};
	v->arr[3294] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3295] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3295] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4037), repetition = true}}};
	v->arr[3297] = (t_pae){.entry = {.count = 2, .reusable = false}};
	init_pae249(v);
}

void	init_pae249(t_parse_action_entries *v)
{
	v->arr[3298] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3298] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6051), repetition = true}}};
	v->arr[3300] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3301] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3301] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1675), repetition = true}}};
	v->arr[3303] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3304] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3304] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5783), repetition = true}}};
	v->arr[3306] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3307] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3307] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1896), repetition = true}}};
	init_pae250(v);
}

// file funcs49.c
