/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs35.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae175(t_parse_action_entries *v)
{
	v->arr[2352] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (324)}}};
	v->arr[2353] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2354] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (401)}}};
	v->arr[2355] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2356] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1291)}}};
	v->arr[2357] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2358] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7657)}}};
	v->arr[2359] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2360] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1602)}}};
	v->arr[2361] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2362] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1665)}}};
	v->arr[2363] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2364] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (594)}}};
	v->arr[2365] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2366] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6560)}}};
	init_pae176(v);
}

void	init_pae176(t_parse_action_entries *v)
{
	v->arr[2367] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2368] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1481)}}};
	v->arr[2369] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2370] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2370] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1290), .repetition = true}}};
	v->arr[2372] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2373] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2373] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3724), .repetition = true}}};
	v->arr[2375] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2376] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2376] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3722), .repetition = true}}};
	v->arr[2378] = (t_pae){.entry = {.count = 2, .reusable = false}};
	init_pae177(v);
}

void	init_pae177(t_parse_action_entries *v)
{
	v->arr[2379] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2379] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6012), .repetition = true}}};
	v->arr[2381] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2382] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2382] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1234), .repetition = true}}};
	v->arr[2384] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2385] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2385] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5809), .repetition = true}}};
	v->arr[2387] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2388] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2388] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1406), .repetition = true}}};
	init_pae178(v);
}

void	init_pae178(t_parse_action_entries *v)
{
	v->arr[2390] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2391] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2391] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6305), .repetition = true}}};
	v->arr[2393] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2394] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2394] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4682), .repetition = true}}};
	v->arr[2396] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2397] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2397] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (326), .repetition = true}}};
	v->arr[2399] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2400] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae179(v);
}

void	init_pae179(t_parse_action_entries *v)
{
	v->arr[2400] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (325), .repetition = true}}};
	v->arr[2402] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2403] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2403] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (324), .repetition = true}}};
	v->arr[2405] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2406] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2406] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (401), .repetition = true}}};
	v->arr[2408] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2409] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2409] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1291), .repetition = true}}};
	v->arr[2411] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2412] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae180(v);
}

// file funcs35.c
