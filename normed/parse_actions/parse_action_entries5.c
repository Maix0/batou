/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae25(t_parse_action_entries *v)
{
	v->arr[369] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[370] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2382)}}};
	v->arr[371] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[372] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5724)}}};
	v->arr[373] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[374] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2521)}}};
	v->arr[375] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[376] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2679)}}};
	v->arr[377] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[378] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6307)}}};
	v->arr[379] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[380] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4817)}}};
	v->arr[381] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[382] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (215)}}};
	v->arr[383] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae26(v);
}

void	init_pae26(t_parse_action_entries *v)
{
	v->arr[384] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (216)}}};
	v->arr[385] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[386] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (218)}}};
	v->arr[387] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[388] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (194)}}};
	v->arr[389] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[390] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (454)}}};
	v->arr[391] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[392] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7614)}}};
	v->arr[393] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[394] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5024)}}};
	v->arr[395] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[396] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4818)}}};
	v->arr[397] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[398] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4623)}}};
	init_pae27(v);
}

void	init_pae27(t_parse_action_entries *v)
{
	v->arr[399] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[400] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4610)}}};
	v->arr[401] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[402] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5564)}}};
	v->arr[403] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[404] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (813)}}};
	v->arr[405] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[406] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6729)}}};
	v->arr[407] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[408] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7389)}}};
	v->arr[409] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[410] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (671)}}};
	v->arr[411] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[412] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3622)}}};
	v->arr[413] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae28(v);
}

void	init_pae28(t_parse_action_entries *v)
{
	v->arr[414] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3622)}}};
	v->arr[415] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[416] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (155)}}};
	v->arr[417] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[418] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (430)}}};
	v->arr[419] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[420] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (422)}}};
	v->arr[421] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[422] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4122)}}};
	v->arr[423] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[424] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, \
.symbol = sym_last_case_item, .child_count = 4, .dynamic_precedence = 0, \
	.production_id = 112}}};
	v->arr[425] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[426] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5247)}}};
	v->arr[427] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae29(v);
}

void	init_pae29(t_parse_action_entries *v)
{
	v->arr[428] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5280)}}};
	v->arr[429] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[430] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5295)}}};
	v->arr[431] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[432] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6970)}}};
	v->arr[433] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[434] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (81)}}};
	v->arr[435] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[436] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (656)}}};
	v->arr[437] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[438] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (9)}}};
	v->arr[439] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[440] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1830)}}};
	v->arr[441] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[442] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (548)}}};
	init_pae30(v);
}

// file funcs5.c
