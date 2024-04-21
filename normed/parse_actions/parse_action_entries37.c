/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs37.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae185(t_parse_action_entries *v)
{
	v->arr[2475] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (357), .repetition = true}}};
	v->arr[2477] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2478] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2478] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (598), .repetition = true}}};
	v->arr[2480] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2481] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2481] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1191), .repetition = true}}};
	v->arr[2483] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2484] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2484] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7653), .repetition = true}}};
	v->arr[2486] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2487] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (610)}}};
	init_pae186(v);
}

void	init_pae186(t_parse_action_entries *v)
{
	v->arr[2488] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2489] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1309)}}};
	v->arr[2490] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2491] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1310)}}};
	v->arr[2492] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2493] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1310)}}};
	v->arr[2494] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2495] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_file_redirect, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2496] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2497] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_file_redirect, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2498] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2499] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_file_redirect, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 4}}};
	v->arr[2500] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae187(v);
}

void	init_pae187(t_parse_action_entries *v)
{
	v->arr[2501] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_file_redirect, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 4}}};
	v->arr[2502] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2503] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2503] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1269), .repetition = true}}};
	v->arr[2505] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2506] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2506] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3729), .repetition = true}}};
	v->arr[2508] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2509] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2509] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3730), .repetition = true}}};
	v->arr[2511] = (t_pae){.entry = {.count = 2, .reusable = false}};
	init_pae188(v);
}

void	init_pae188(t_parse_action_entries *v)
{
	v->arr[2512] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2512] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6084), .repetition = true}}};
	v->arr[2514] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2515] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2515] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1264), .repetition = true}}};
	v->arr[2517] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2518] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2518] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5796), .repetition = true}}};
	v->arr[2520] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2521] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2521] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1393), .repetition = true}}};
	init_pae189(v);
}

void	init_pae189(t_parse_action_entries *v)
{
	v->arr[2523] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2524] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2524] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6311), .repetition = true}}};
	v->arr[2526] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2527] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2527] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4678), .repetition = true}}};
	v->arr[2529] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2530] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2530] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (314), .repetition = true}}};
	v->arr[2532] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2533] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae190(v);
}

// file funcs37.c
