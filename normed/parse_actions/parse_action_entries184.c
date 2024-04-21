/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs184.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae920(t_parse_action_entries *v)
{
	v->arr[12586] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12587] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3202)}}};
	v->arr[12588] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12589] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (443)}}};
	v->arr[12590] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12591] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3201)}}};
	v->arr[12592] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12593] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3075)}}};
	v->arr[12594] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12595] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3200)}}};
	v->arr[12596] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12597] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3199)}}};
	v->arr[12598] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12599] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3198)}}};
	v->arr[12600] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae921(v);
}

void	init_pae921(t_parse_action_entries *v)
{
	v->arr[12601] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3196)}}};
	v->arr[12602] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12603] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6798)}}};
	v->arr[12604] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12605] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_max_length, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 49}}};
	v->arr[12606] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12607] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6260)}}};
	v->arr[12608] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12609] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (2948)}}};
	v->arr[12610] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12611] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3005)}}};
	v->arr[12612] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12613] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (2999)}}};
	v->arr[12614] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae922(v);
}

void	init_pae922(t_parse_action_entries *v)
{
	v->arr[12615] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (2993)}}};
	v->arr[12616] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12617] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (2992)}}};
	v->arr[12618] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12619] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (2991)}}};
	v->arr[12620] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12621] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3019)}}};
	v->arr[12622] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12623] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3890)}}};
	v->arr[12624] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12625] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (2965)}}};
	v->arr[12626] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12627] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (2956)}}};
	v->arr[12628] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12629] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (2952)}}};
	init_pae923(v);
}

void	init_pae923(t_parse_action_entries *v)
{
	v->arr[12630] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12631] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3036)}}};
	v->arr[12632] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12633] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 140}}};
	v->arr[12634] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12635] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 140}}};
	v->arr[12636] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12637] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_last_case_item, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 46}}};
	v->arr[12638] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12639] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (2947)}}};
	v->arr[12640] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12641] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 142}}};
	init_pae924(v);
}

void	init_pae924(t_parse_action_entries *v)
{
	v->arr[12642] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12643] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_case_item, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 142}}};
	v->arr[12644] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12645] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_last_case_item, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 112}}};
	v->arr[12646] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12647] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6498)}}};
	v->arr[12648] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12649] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3602)}}};
	v->arr[12650] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12651] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6112)}}};
	v->arr[12652] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12653] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_expression, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 12}}};
	v->arr[12654] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae925(v);
}

// file funcs184.c
