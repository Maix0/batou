/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs141.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae705(t_parse_action_entries *v)
{
	v->arr[9564] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9565] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5605)}}};
	v->arr[9566] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9567] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5605)}}};
	v->arr[9568] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9569] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5606)}}};
	v->arr[9570] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9571] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2740)}}};
	v->arr[9572] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9573] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3363)}}};
	v->arr[9574] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9575] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3344)}}};
	v->arr[9576] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9577] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2747)}}};
	v->arr[9578] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae706(v);
}

void	init_pae706(t_parse_action_entries *v)
{
	v->arr[9579] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (589)}}};
	v->arr[9580] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9581] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1623)}}};
	v->arr[9582] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9583] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (740)}}};
	v->arr[9584] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9585] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1619)}}};
	v->arr[9586] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9587] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1623)}}};
	v->arr[9588] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9589] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1619)}}};
	v->arr[9590] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9591] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (756)}}};
	v->arr[9592] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9593] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3343)}}};
	init_pae707(v);
}

void	init_pae707(t_parse_action_entries *v)
{
	v->arr[9594] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9595] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2748)}}};
	v->arr[9596] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9597] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (572)}}};
	v->arr[9598] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9599] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3342)}}};
	v->arr[9600] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9601] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1199)}}};
	v->arr[9602] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9603] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (611)}}};
	v->arr[9604] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9605] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1198)}}};
	v->arr[9606] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9607] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1199)}}};
	v->arr[9608] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae708(v);
}

void	init_pae708(t_parse_action_entries *v)
{
	v->arr[9609] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1198)}}};
	v->arr[9610] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9611] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2749)}}};
	v->arr[9612] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9613] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3341)}}};
	v->arr[9614] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9615] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2750)}}};
	v->arr[9616] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9617] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (597)}}};
	v->arr[9618] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9619] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (904)}}};
	v->arr[9620] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9621] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2344)}}};
	v->arr[9622] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9623] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2341)}}};
	init_pae709(v);
}

void	init_pae709(t_parse_action_entries *v)
{
	v->arr[9624] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9625] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2344)}}};
	v->arr[9626] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9627] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2341)}}};
	v->arr[9628] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9629] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3340)}}};
	v->arr[9630] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9631] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (902)}}};
	v->arr[9632] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9633] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4604)}}};
	v->arr[9634] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9635] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4025)}}};
	v->arr[9636] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9637] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4021)}}};
	v->arr[9638] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae710(v);
}

// file funcs141.c
