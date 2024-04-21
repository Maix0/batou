/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs33.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae165(t_parse_action_entries *v)
{
	v->arr[2216] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2217] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2218] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2219] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2219] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3759), .repetition = true}}};
	v->arr[2221] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2222] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2222] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5908), .repetition = true}}};
	v->arr[2224] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2225] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2225] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1089), .repetition = true}}};
	init_pae166(v);
}

void	init_pae166(t_parse_action_entries *v)
{
	v->arr[2227] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2228] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2228] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5825), .repetition = true}}};
	v->arr[2230] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2231] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2231] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1232), .repetition = true}}};
	v->arr[2233] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2234] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2234] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6255), .repetition = true}}};
	v->arr[2236] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2237] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae167(v);
}

void	init_pae167(t_parse_action_entries *v)
{
	v->arr[2237] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4707), .repetition = true}}};
	v->arr[2239] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2240] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2240] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (360), .repetition = true}}};
	v->arr[2242] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2243] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2243] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (358), .repetition = true}}};
	v->arr[2245] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2246] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2246] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (352), .repetition = true}}};
	v->arr[2248] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2249] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae168(v);
}

void	init_pae168(t_parse_action_entries *v)
{
	v->arr[2249] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (273), .repetition = true}}};
	v->arr[2251] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2252] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2252] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1163), .repetition = true}}};
	v->arr[2254] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2255] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2255] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7651), .repetition = true}}};
	v->arr[2257] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2258] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1360)}}};
	v->arr[2259] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2260] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4196)}}};
	v->arr[2261] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2262] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4195)}}};
	init_pae169(v);
}

void	init_pae169(t_parse_action_entries *v)
{
	v->arr[2263] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2264] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6071)}}};
	v->arr[2265] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2266] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1356)}}};
	v->arr[2267] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2268] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5758)}}};
	v->arr[2269] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2270] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1571)}}};
	v->arr[2271] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2272] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6343)}}};
	v->arr[2273] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2274] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4649)}}};
	v->arr[2275] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2276] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (236)}}};
	v->arr[2277] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae170(v);
}

// file funcs33.c
