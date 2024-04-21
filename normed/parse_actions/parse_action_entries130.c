/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs130.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae650(t_parse_action_entries *v)
{
	v->arr[8751] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6456)}}};
	v->arr[8752] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[8753] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[8753] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5045), .repetition = true}}};
	v->arr[8755] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[8756] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[8756] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4012), .repetition = true}}};
	v->arr[8758] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[8759] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[8759] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4008), .repetition = true}}};
	v->arr[8761] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[8762] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae651(v);
}

void	init_pae651(t_parse_action_entries *v)
{
	v->arr[8762] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5903), .repetition = true}}};
	v->arr[8764] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[8765] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[8765] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5097), .repetition = true}}};
	v->arr[8767] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[8768] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[8768] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5762), .repetition = true}}};
	v->arr[8770] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[8771] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[8771] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5045), .repetition = true}}};
	v->arr[8773] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[8774] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae652(v);
}

void	init_pae652(t_parse_action_entries *v)
{
	v->arr[8774] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5149), .repetition = true}}};
	v->arr[8776] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[8777] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[8777] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6336), .repetition = true}}};
	v->arr[8779] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[8780] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[8780] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4850), .repetition = true}}};
	v->arr[8782] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[8783] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[8783] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (89), .repetition = true}}};
	v->arr[8785] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[8786] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae653(v);
}

void	init_pae653(t_parse_action_entries *v)
{
	v->arr[8786] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (97), .repetition = true}}};
	v->arr[8788] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[8789] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[8789] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (98), .repetition = true}}};
	v->arr[8791] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[8792] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[8792] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (355), .repetition = true}}};
	v->arr[8794] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[8795] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[8795] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5041), .repetition = true}}};
	v->arr[8797] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[8798] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae654(v);
}

void	init_pae654(t_parse_action_entries *v)
{
	v->arr[8798] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7631), .repetition = true}}};
	v->arr[8800] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8801] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6437)}}};
	v->arr[8802] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8803] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6517)}}};
	v->arr[8804] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8805] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6401)}}};
	v->arr[8806] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8807] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6302)}}};
	v->arr[8808] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8809] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6302)}}};
	v->arr[8810] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8811] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6312)}}};
	v->arr[8812] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8813] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4870)}}};
	init_pae655(v);
}

// file funcs130.c
