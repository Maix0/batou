/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs160.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae800(t_parse_action_entries *v)
{
	v->arr[10989] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (883)}}};
	v->arr[10990] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10991] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4992)}}};
	v->arr[10992] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10993] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4774)}}};
	v->arr[10994] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10995] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4992)}}};
	v->arr[10996] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10997] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4919)}}};
	v->arr[10998] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10999] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4896)}}};
	v->arr[11000] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11001] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4896)}}};
	v->arr[11002] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11003] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4897)}}};
	init_pae801(v);
}

void	init_pae801(t_parse_action_entries *v)
{
	v->arr[11004] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11005] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6198)}}};
	v->arr[11006] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11007] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6198)}}};
	v->arr[11008] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11009] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6200)}}};
	v->arr[11010] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11011] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4806)}}};
	v->arr[11012] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11013] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4495)}}};
	v->arr[11014] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11015] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4806)}}};
	v->arr[11016] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11017] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4822)}}};
	v->arr[11018] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae802(v);
}

void	init_pae802(t_parse_action_entries *v)
{
	v->arr[11019] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4750)}}};
	v->arr[11020] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11021] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4750)}}};
	v->arr[11022] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11023] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4754)}}};
	v->arr[11024] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11025] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1010)}}};
	v->arr[11026] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11027] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (568)}}};
	v->arr[11028] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11029] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3434)}}};
	v->arr[11030] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11031] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3433)}}};
	v->arr[11032] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11033] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3432)}}};
	init_pae803(v);
}

void	init_pae803(t_parse_action_entries *v)
{
	v->arr[11034] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11035] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (567)}}};
	v->arr[11036] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11037] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3431)}}};
	v->arr[11038] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11039] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3260)}}};
	v->arr[11040] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11041] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (2845)}}};
	v->arr[11042] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11043] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1752)}}};
	v->arr[11044] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11045] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1752)}}};
	v->arr[11046] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11047] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1758)}}};
	v->arr[11048] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae804(v);
}

void	init_pae804(t_parse_action_entries *v)
{
	v->arr[11049] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1426)}}};
	v->arr[11050] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11051] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (805)}}};
	v->arr[11052] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11053] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (717)}}};
	v->arr[11054] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11055] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3430)}}};
	v->arr[11056] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11057] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3429)}}};
	v->arr[11058] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11059] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3257)}}};
	v->arr[11060] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11061] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3428)}}};
	v->arr[11062] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11063] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3425)}}};
	init_pae805(v);
}

// file funcs160.c
