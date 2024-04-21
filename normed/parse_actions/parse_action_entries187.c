/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs187.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae935(t_parse_action_entries *v)
{
	v->arr[12779] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6109)}}};
	v->arr[12780] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12781] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6134)}}};
	v->arr[12782] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[12783] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12783] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3618), .repetition = true}}};
	v->arr[12785] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[12786] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12786] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1111), .repetition = true}}};
	v->arr[12788] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[12789] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12789] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6109), .repetition = true}}};
	init_pae936(v);
}

void	init_pae936(t_parse_action_entries *v)
{
	v->arr[12791] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[12792] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12792] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3877), .repetition = true}}};
	v->arr[12794] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[12795] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12795] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3689), .repetition = true}}};
	v->arr[12797] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[12798] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12798] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (7274), .repetition = true}}};
	v->arr[12800] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[12801] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae937(v);
}

void	init_pae937(t_parse_action_entries *v)
{
	v->arr[12801] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3689), .repetition = true}}};
	v->arr[12803] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[12804] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12804] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1117), .repetition = true}}};
	v->arr[12806] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[12807] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12807] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (7274), .repetition = true}}};
	v->arr[12809] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[12810] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12810] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6104), .repetition = true}}};
	v->arr[12812] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[12813] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_variable_assignments_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae938(v);
}

void	init_pae938(t_parse_action_entries *v)
{
	v->arr[12813] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6664), .repetition = true}}};
	v->arr[12815] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[12816] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__literal_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12816] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (5410), .repetition = true}}};
	v->arr[12818] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12819] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4203)}}};
	v->arr[12820] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12821] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 137}}};
	v->arr[12822] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12823] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 137}}};
	v->arr[12824] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12825] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3795)}}};
	init_pae939(v);
}

void	init_pae939(t_parse_action_entries *v)
{
	v->arr[12826] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12827] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3796)}}};
	v->arr[12828] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12829] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 104}}};
	v->arr[12830] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12831] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 104}}};
	v->arr[12832] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12833] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3629)}}};
	v->arr[12834] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12835] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3629)}}};
	v->arr[12836] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12837] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1178)}}};
	v->arr[12838] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12839] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6150)}}};
	init_pae940(v);
}

// file funcs187.c
