/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs121.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae605(t_parse_action_entries *v)
{
	v->arr[8092] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8093] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4550)}}};
	v->arr[8094] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8095] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4559)}}};
	v->arr[8096] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8097] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1148)}}};
	v->arr[8098] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8099] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3764)}}};
	v->arr[8100] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8101] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3589)}}};
	v->arr[8102] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8103] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3759)}}};
	v->arr[8104] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8105] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5908)}}};
	v->arr[8106] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae606(v);
}

void	init_pae606(t_parse_action_entries *v)
{
	v->arr[8107] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1089)}}};
	v->arr[8108] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8109] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5825)}}};
	v->arr[8110] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8111] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1148)}}};
	v->arr[8112] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8113] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1232)}}};
	v->arr[8114] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8115] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6255)}}};
	v->arr[8116] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8117] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4707)}}};
	v->arr[8118] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8119] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (360)}}};
	v->arr[8120] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8121] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (358)}}};
	init_pae607(v);
}

void	init_pae607(t_parse_action_entries *v)
{
	v->arr[8122] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8123] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (352)}}};
	v->arr[8124] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8125] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (273)}}};
	v->arr[8126] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8127] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1667)}}};
	v->arr[8128] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8129] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1667)}}};
	v->arr[8130] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8131] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1147)}}};
	v->arr[8132] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8133] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7651)}}};
	v->arr[8134] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8135] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4410)}}};
	v->arr[8136] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae608(v);
}

void	init_pae608(t_parse_action_entries *v)
{
	v->arr[8137] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3919)}}};
	v->arr[8138] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8139] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3611)}}};
	v->arr[8140] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8141] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3920)}}};
	v->arr[8142] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8143] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6028)}}};
	v->arr[8144] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8145] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4255)}}};
	v->arr[8146] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8147] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5773)}}};
	v->arr[8148] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8149] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4410)}}};
	v->arr[8150] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8151] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4587)}}};
	init_pae609(v);
}

void	init_pae609(t_parse_action_entries *v)
{
	v->arr[8152] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8153] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6296)}}};
	v->arr[8154] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8155] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4657)}}};
	v->arr[8156] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8157] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (277)}}};
	v->arr[8158] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8159] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (276)}}};
	v->arr[8160] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8161] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (275)}}};
	v->arr[8162] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8163] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (337)}}};
	v->arr[8164] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8165] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4925)}}};
	v->arr[8166] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae610(v);
}

// file funcs121.c
