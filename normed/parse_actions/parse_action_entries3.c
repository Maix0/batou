/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae15(t_parse_action_entries *v)
{
	v->arr[225] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[226] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4786)}}};
	v->arr[227] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[228] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4962)}}};
	v->arr[229] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[230] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5620)}}};
	v->arr[231] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[232] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5012)}}};
	v->arr[233] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[234] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4727)}}};
	v->arr[235] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[236] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5050)}}};
	v->arr[237] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[238] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2500)}}};
	v->arr[239] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae16(v);
}

void	init_pae16(t_parse_action_entries *v)
{
	v->arr[240] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4210)}}};
	v->arr[241] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[242] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, \
.symbol = sym_command_name, .child_count = 1, .dynamic_precedence = 0, \
	.production_id = 1}}};
	v->arr[243] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[244] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, \
.symbol = sym__expression, .child_count = 1, .dynamic_precedence = 0, \
	.production_id = 1}}};
	v->arr[245] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[246] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, \
.symbol = sym_command_name, .child_count = 1, .dynamic_precedence = 0, \
	.production_id = 1}}};
	v->arr[246] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, \
.symbol = sym__expression, .child_count = 1, .dynamic_precedence = 0, \
	.production_id = 1}}};
	v->arr[248] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[249] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2202)}}};
	v->arr[250] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[251] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2036)}}};
	init_pae17(v);
}

void	init_pae17(t_parse_action_entries *v)
{
	v->arr[252] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[253] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2087)}}};
	v->arr[254] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[255] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4208)}}};
	v->arr[256] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[257] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3702)}}};
	v->arr[258] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[259] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5974)}}};
	v->arr[260] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[261] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2433)}}};
	v->arr[262] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[263] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5718)}}};
	v->arr[264] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[265] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2631)}}};
	v->arr[266] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae18(v);
}

void	init_pae18(t_parse_action_entries *v)
{
	v->arr[267] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6271)}}};
	v->arr[268] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[269] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4732)}}};
	v->arr[270] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[271] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (224)}}};
	v->arr[272] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[273] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (225)}}};
	v->arr[274] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[275] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (227)}}};
	v->arr[276] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[277] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (200)}}};
	v->arr[278] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[279] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, \
.symbol = sym_command_name, .child_count = 1, .dynamic_precedence = 0, \
	.production_id = 1}}};
	v->arr[280] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae19(v);
}

void	init_pae19(t_parse_action_entries *v)
{
	v->arr[281] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3702)}}};
	v->arr[282] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[283] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (451)}}};
	v->arr[284] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[285] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7615)}}};
	v->arr[286] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[287] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1080)}}};
	v->arr[288] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[289] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (659)}}};
	v->arr[290] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[291] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3678)}}};
	v->arr[292] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[293] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3678)}}};
	v->arr[294] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[295] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4613)}}};
	init_pae20(v);
}

// file funcs3.c
