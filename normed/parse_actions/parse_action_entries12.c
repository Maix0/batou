/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs12.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae60(t_parse_action_entries *v)
{
	v->arr[856] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (19)}}};
	v->arr[857] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[858] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5042)}}};
	v->arr[859] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[860] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5049)}}};
	v->arr[861] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[862] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (21)}}};
	v->arr[863] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[864] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (18)}}};
	v->arr[865] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[866] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4875)}}};
	v->arr[867] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[868] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4905)}}};
	v->arr[869] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[870] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (17)}}};
	init_pae61(v);
}

void	init_pae61(t_parse_action_entries *v)
{
	v->arr[871] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[872] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5010)}}};
	v->arr[873] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[874] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, \
.symbol = sym_else_clause, .child_count = 1, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[875] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[876] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, \
.symbol = sym_else_clause, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[877] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[878] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (48)}}};
	v->arr[879] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[880] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4856)}}};
	v->arr[881] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[882] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4615)}}};
	v->arr[883] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[884] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4958)}}};
	init_pae62(v);
}

void	init_pae62(t_parse_action_entries *v)
{
	v->arr[885] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[886] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5621)}}};
	v->arr[887] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[888] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5647)}}};
	v->arr[889] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[890] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[890] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1080), .repetition = true}}};
	v->arr[892] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[893] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[893] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6777), .repetition = true}}};
	v->arr[895] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[896] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	init_pae63(v);
}

void	init_pae63(t_parse_action_entries *v)
{
	v->arr[896] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7604), .repetition = true}}};
	v->arr[898] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[899] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[899] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (659), .repetition = true}}};
	v->arr[901] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[902] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[902] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3678), .repetition = true}}};
	v->arr[904] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[905] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[905] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3678), .repetition = true}}};
	v->arr[907] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[908] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	init_pae64(v);
}

void	init_pae64(t_parse_action_entries *v)
{
	v->arr[908] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (240), .repetition = true}}};
	v->arr[910] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[911] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[911] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (432), .repetition = true}}};
	v->arr[913] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[914] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[914] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (428), .repetition = true}}};
	v->arr[916] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[917] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[917] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4078), .repetition = true}}};
	v->arr[919] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[920] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	init_pae65(v);
}

// file funcs12.c
