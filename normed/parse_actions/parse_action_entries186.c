/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs186.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae930(t_parse_action_entries *v)
{
	v->arr[12719] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 114}}};
	v->arr[12720] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12721] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 114}}};
	v->arr[12722] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12723] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 111}}};
	v->arr[12724] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12725] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 111}}};
	v->arr[12726] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12727] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4059)}}};
	v->arr[12728] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12729] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 108}}};
	init_pae931(v);
}

void	init_pae931(t_parse_action_entries *v)
{
	v->arr[12730] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12731] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 108}}};
	v->arr[12732] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12733] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4077)}}};
	v->arr[12734] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12735] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 145}}};
	v->arr[12736] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12737] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 145}}};
	v->arr[12738] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[12739] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12739] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3866), .repetition = true}}};
	v->arr[12741] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae932(v);
}

void	init_pae932(t_parse_action_entries *v)
{
	v->arr[12742] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 82}}};
	v->arr[12743] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12744] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 82}}};
	v->arr[12745] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12746] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 78}}};
	v->arr[12747] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12748] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 78}}};
	v->arr[12749] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12750] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6664)}}};
	v->arr[12751] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12752] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3624)}}};
	v->arr[12753] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae933(v);
}

void	init_pae933(t_parse_action_entries *v)
{
	v->arr[12754] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3624)}}};
	v->arr[12755] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12756] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1090)}}};
	v->arr[12757] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12758] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3769)}}};
	v->arr[12759] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12760] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6117)}}};
	v->arr[12761] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[12762] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12762] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3624), .repetition = true}}};
	v->arr[12764] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[12765] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12765] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3624), .repetition = true}}};
	init_pae934(v);
}

void	init_pae934(t_parse_action_entries *v)
{
	v->arr[12767] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[12768] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12768] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1090), .repetition = true}}};
	v->arr[12770] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[12771] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12771] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3769), .repetition = true}}};
	v->arr[12773] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[12774] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12774] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6117), .repetition = true}}};
	v->arr[12776] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12777] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (5416)}}};
	v->arr[12778] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae935(v);
}

// file funcs186.c
