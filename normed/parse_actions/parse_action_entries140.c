/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs140.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae700(t_parse_action_entries *v)
{
	v->arr[9489] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1106)}}};
	v->arr[9490] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9491] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3346)}}};
	v->arr[9492] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9493] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3582)}}};
	v->arr[9494] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9495] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2746)}}};
	v->arr[9496] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9497] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2741)}}};
	v->arr[9498] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9499] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3362)}}};
	v->arr[9500] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9501] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2890)}}};
	v->arr[9502] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9503] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2580)}}};
	init_pae701(v);
}

void	init_pae701(t_parse_action_entries *v)
{
	v->arr[9504] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9505] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2579)}}};
	v->arr[9506] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9507] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2580)}}};
	v->arr[9508] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9509] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2579)}}};
	v->arr[9510] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9511] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2436)}}};
	v->arr[9512] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9513] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2436)}}};
	v->arr[9514] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9515] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2432)}}};
	v->arr[9516] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9517] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2210)}}};
	v->arr[9518] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae702(v);
}

void	init_pae702(t_parse_action_entries *v)
{
	v->arr[9519] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (774)}}};
	v->arr[9520] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9521] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2162)}}};
	v->arr[9522] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9523] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2210)}}};
	v->arr[9524] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9525] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2162)}}};
	v->arr[9526] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9527] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2413)}}};
	v->arr[9528] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9529] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2413)}}};
	v->arr[9530] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9531] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2415)}}};
	v->arr[9532] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9533] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (710)}}};
	init_pae703(v);
}

void	init_pae703(t_parse_action_entries *v)
{
	v->arr[9534] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9535] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2707)}}};
	v->arr[9536] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9537] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2711)}}};
	v->arr[9538] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9539] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2707)}}};
	v->arr[9540] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9541] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2711)}}};
	v->arr[9542] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9543] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5616)}}};
	v->arr[9544] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9545] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3863)}}};
	v->arr[9546] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9547] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3862)}}};
	v->arr[9548] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae704(v);
}

void	init_pae704(t_parse_action_entries *v)
{
	v->arr[9549] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5518)}}};
	v->arr[9550] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9551] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5846)}}};
	v->arr[9552] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9553] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5616)}}};
	v->arr[9554] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9555] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4752)}}};
	v->arr[9556] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9557] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (399)}}};
	v->arr[9558] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9559] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (398)}}};
	v->arr[9560] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9561] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (172)}}};
	v->arr[9562] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9563] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5548)}}};
	init_pae705(v);
}

// file funcs140.c
