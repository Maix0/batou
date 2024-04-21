/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs6.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae30(t_parse_action_entries *v)
{
	v->arr[443] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[444] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (590)}}};
	v->arr[445] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[446] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (604)}}};
	v->arr[447] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[448] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3775)}}};
	v->arr[449] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[450] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3857)}}};
	v->arr[451] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[452] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3855)}}};
	v->arr[453] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[454] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6024)}}};
	v->arr[455] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[456] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (824)}}};
	v->arr[457] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae31(v);
}

void	init_pae31(t_parse_action_entries *v)
{
	v->arr[458] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5840)}}};
	v->arr[459] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[460] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (815)}}};
	v->arr[461] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[462] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (884)}}};
	v->arr[463] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[464] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6269)}}};
	v->arr[465] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[466] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4740)}}};
	v->arr[467] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[468] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (388)}}};
	v->arr[469] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[470] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (387)}}};
	v->arr[471] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[472] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (386)}}};
	init_pae32(v);
}

void	init_pae32(t_parse_action_entries *v)
{
	v->arr[473] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[474] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (195)}}};
	v->arr[475] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[476] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6156)}}};
	v->arr[477] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[478] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6547)}}};
	v->arr[479] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[480] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (819)}}};
	v->arr[481] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[482] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7646)}}};
	v->arr[483] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[484] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, \
.symbol = sym_last_case_item, .child_count = 3, .dynamic_precedence = 0, \
	.production_id = 46}}};
	v->arr[485] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[486] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5162)}}};
	init_pae33(v);
}

void	init_pae33(t_parse_action_entries *v)
{
	v->arr[487] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[488] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5321)}}};
	v->arr[489] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[490] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, \
.symbol = sym_last_case_item, .child_count = 3, .dynamic_precedence = 0, \
	.production_id = 83}}};
	v->arr[491] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[492] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5143)}}};
	v->arr[493] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[494] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5314)}}};
	v->arr[495] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[496] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5313)}}};
	v->arr[497] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[498] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5144)}}};
	v->arr[499] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[500] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5310)}}};
	init_pae34(v);
}

void	init_pae34(t_parse_action_entries *v)
{
	v->arr[501] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[502] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5309)}}};
	v->arr[503] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[504] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, \
.symbol = sym_last_case_item, .child_count = 3, .dynamic_precedence = 0, \
	.production_id = 79}}};
	v->arr[505] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[506] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5132)}}};
	v->arr[507] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[508] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5281)}}};
	v->arr[509] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[510] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5277)}}};
	v->arr[511] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[512] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, \
.symbol = sym_last_case_item, .child_count = 4, .dynamic_precedence = 0, \
	.production_id = 109}}};
	v->arr[513] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[514] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5227)}}};
	init_pae35(v);
}

// file funcs6.c
