/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs51.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae255(t_parse_action_entries *v)
{
	v->arr[3377] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3378] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4686)}}};
	v->arr[3379] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3380] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (329)}}};
	v->arr[3381] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3382] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (328)}}};
	v->arr[3383] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3384] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (327)}}};
	v->arr[3385] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3386] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (405)}}};
	v->arr[3387] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3388] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4406)}}};
	v->arr[3389] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3390] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7656)}}};
	v->arr[3391] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae256(v);
}

void	init_pae256(t_parse_action_entries *v)
{
	v->arr[3392] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1711)}}};
	v->arr[3393] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3394] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3995)}}};
	v->arr[3395] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3396] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3994)}}};
	v->arr[3397] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3398] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6039)}}};
	v->arr[3399] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3400] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1710)}}};
	v->arr[3401] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3402] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1790)}}};
	v->arr[3403] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3404] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6357)}}};
	v->arr[3405] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3406] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4851)}}};
	init_pae257(v);
}

void	init_pae257(t_parse_action_entries *v)
{
	v->arr[3407] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3408] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (124)}}};
	v->arr[3409] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3410] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (126)}}};
	v->arr[3411] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3412] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (127)}}};
	v->arr[3413] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3414] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (375)}}};
	v->arr[3415] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3416] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1708)}}};
	v->arr[3417] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3418] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7634)}}};
	v->arr[3419] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3420] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2811)}}};
	v->arr[3421] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae258(v);
}

void	init_pae258(t_parse_action_entries *v)
{
	v->arr[3422] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1482)}}};
	v->arr[3423] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3424] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5772)}}};
	v->arr[3425] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3426] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1690)}}};
	v->arr[3427] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3428] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1690)}}};
	v->arr[3429] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3430] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1681)}}};
	v->arr[3431] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3432] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4205)}}};
	v->arr[3433] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3434] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4206)}}};
	v->arr[3435] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3436] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6007)}}};
	init_pae259(v);
}

void	init_pae259(t_parse_action_entries *v)
{
	v->arr[3437] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3438] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1597)}}};
	v->arr[3439] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3440] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5735)}}};
	v->arr[3441] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3442] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1726)}}};
	v->arr[3443] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3444] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6297)}}};
	v->arr[3445] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3446] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4728)}}};
	v->arr[3447] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3448] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (180)}}};
	v->arr[3449] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3450] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (181)}}};
	v->arr[3451] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae260(v);
}

// file funcs51.c
