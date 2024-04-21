/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs154.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae770(t_parse_action_entries *v)
{
	v->arr[10539] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (960)}}};
	v->arr[10540] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10541] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4831)}}};
	v->arr[10542] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10543] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4805)}}};
	v->arr[10544] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10545] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4831)}}};
	v->arr[10546] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10547] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4805)}}};
	v->arr[10548] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10549] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1669)}}};
	v->arr[10550] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10551] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1678)}}};
	v->arr[10552] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10553] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1669)}}};
	init_pae771(v);
}

void	init_pae771(t_parse_action_entries *v)
{
	v->arr[10554] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10555] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1678)}}};
	v->arr[10556] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10557] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4493)}}};
	v->arr[10558] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10559] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4494)}}};
	v->arr[10560] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10561] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4493)}}};
	v->arr[10562] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10563] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4494)}}};
	v->arr[10564] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10565] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4526)}}};
	v->arr[10566] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10567] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4419)}}};
	v->arr[10568] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae772(v);
}

void	init_pae772(t_parse_action_entries *v)
{
	v->arr[10569] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4526)}}};
	v->arr[10570] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10571] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4419)}}};
	v->arr[10572] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10573] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1053)}}};
	v->arr[10574] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10575] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (2705)}}};
	v->arr[10576] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10577] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1050)}}};
	v->arr[10578] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10579] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1051)}}};
	v->arr[10580] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10581] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (946)}}};
	v->arr[10582] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10583] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (2706)}}};
	init_pae773(v);
}

void	init_pae773(t_parse_action_entries *v)
{
	v->arr[10584] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10585] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3262)}}};
	v->arr[10586] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10587] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1048)}}};
	v->arr[10588] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10589] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (943)}}};
	v->arr[10590] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10591] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3467)}}};
	v->arr[10592] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10593] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3467)}}};
	v->arr[10594] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10595] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3472)}}};
	v->arr[10596] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10597] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3163)}}};
	v->arr[10598] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae774(v);
}

void	init_pae774(t_parse_action_entries *v)
{
	v->arr[10599] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3456)}}};
	v->arr[10600] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10601] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3456)}}};
	v->arr[10602] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[10603] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3483)}}};
	v->arr[10604] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10605] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (2880)}}};
	v->arr[10606] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10607] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3426)}}};
	v->arr[10608] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10609] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3238)}}};
	v->arr[10610] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10611] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (467)}}};
	v->arr[10612] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10613] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (2898)}}};
	init_pae775(v);
}

// file funcs154.c
