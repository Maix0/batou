/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs204.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae1020(t_parse_action_entries *v)
{
	v->arr[14009] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3626)}}};
	v->arr[14010] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14011] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (7401)}}};
	v->arr[14012] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14013] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3626)}}};
	v->arr[14014] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14015] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1172)}}};
	v->arr[14016] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14017] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (7401)}}};
	v->arr[14018] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14019] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3445)}}};
	v->arr[14020] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14021] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3448)}}};
	v->arr[14022] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14023] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3448)}}};
	init_pae1021(v);
}

void	init_pae1021(t_parse_action_entries *v)
{
	v->arr[14024] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14025] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6235)}}};
	v->arr[14026] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14027] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6211)}}};
	v->arr[14028] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14029] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6211)}}};
	v->arr[14030] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14031] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3307)}}};
	v->arr[14032] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14033] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3306)}}};
	v->arr[14034] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14035] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3306)}}};
	v->arr[14036] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14037] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3210)}}};
	v->arr[14038] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae1022(v);
}

void	init_pae1022(t_parse_action_entries *v)
{
	v->arr[14039] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3213)}}};
	v->arr[14040] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14041] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3213)}}};
	v->arr[14042] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14043] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3623)}}};
	v->arr[14044] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14045] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3623)}}};
	v->arr[14046] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14047] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1102)}}};
	v->arr[14048] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14049] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3772)}}};
	v->arr[14050] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14051] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3667)}}};
	v->arr[14052] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14053] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3667)}}};
	init_pae1023(v);
}

void	init_pae1023(t_parse_action_entries *v)
{
	v->arr[14054] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14055] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (939)}}};
	v->arr[14056] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14057] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3720)}}};
	v->arr[14058] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14059] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3693)}}};
	v->arr[14060] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14061] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3693)}}};
	v->arr[14062] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14063] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (708)}}};
	v->arr[14064] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14065] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4109)}}};
	v->arr[14066] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14067] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3630)}}};
	v->arr[14068] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1024(v);
}

void	init_pae1024(t_parse_action_entries *v)
{
	v->arr[14069] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3630)}}};
	v->arr[14070] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14071] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (909)}}};
	v->arr[14072] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14073] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4189)}}};
	v->arr[14074] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14075] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_body, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 51}}};
	v->arr[14076] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14077] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (7014)}}};
	v->arr[14078] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14079] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6179)}}};
	v->arr[14080] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14081] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_string_repeat1, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	init_pae1025(v);
}

// file funcs204.c
