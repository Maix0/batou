/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs185.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae925(t_parse_action_entries *v)
{
	v->arr[12655] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (233)}}};
	v->arr[12656] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12657] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (239)}}};
	v->arr[12658] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12659] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (246)}}};
	v->arr[12660] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12661] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 141}}};
	v->arr[12662] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12663] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 141}}};
	v->arr[12664] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12665] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 143}}};
	v->arr[12666] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12667] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 143}}};
	init_pae926(v);
}

void	init_pae926(t_parse_action_entries *v)
{
	v->arr[12668] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12669] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (5410)}}};
	v->arr[12670] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12671] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 139}}};
	v->arr[12672] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12673] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 139}}};
	v->arr[12674] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12675] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6780)}}};
	v->arr[12676] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12677] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (5232)}}};
	v->arr[12678] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12679] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_max_length, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 12}}};
	v->arr[12680] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae927(v);
}

void	init_pae927(t_parse_action_entries *v)
{
	v->arr[12681] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6208)}}};
	v->arr[12682] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12683] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 135}}};
	v->arr[12684] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12685] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 135}}};
	v->arr[12686] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12687] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6104)}}};
	v->arr[12688] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12689] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3884)}}};
	v->arr[12690] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12691] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 6, \
	.dynamic_precedence = 0, .production_id = 154}}};
	v->arr[12692] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12693] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 6, \
	.dynamic_precedence = 0, .production_id = 154}}};
	init_pae928(v);
}

void	init_pae928(t_parse_action_entries *v)
{
	v->arr[12694] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12695] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3723)}}};
	v->arr[12696] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12697] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3727)}}};
	v->arr[12698] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[12699] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__literal_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12699] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (5416), .repetition = true}}};
	v->arr[12701] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12702] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 6, \
	.dynamic_precedence = 0, .production_id = 156}}};
	v->arr[12703] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12704] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 6, \
	.dynamic_precedence = 0, .production_id = 156}}};
	v->arr[12705] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[12706] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae929(v);
}

void	init_pae929(t_parse_action_entries *v)
{
	v->arr[12706] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3890), .repetition = true}}};
	v->arr[12708] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12709] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 106}}};
	v->arr[12710] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12711] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 106}}};
	v->arr[12712] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12713] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4199)}}};
	v->arr[12714] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12715] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 116}}};
	v->arr[12716] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12717] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 116}}};
	v->arr[12718] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae930(v);
}

// file funcs185.c
