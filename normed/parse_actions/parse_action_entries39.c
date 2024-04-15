/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs39.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae195(t_parse_action_entries *v)
{
	v->arr[2600] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2601] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3744)}}};
	v->arr[2602] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2603] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3743)}}};
	v->arr[2604] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2605] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5976)}}};
	v->arr[2606] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2607] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1308)}}};
	v->arr[2608] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2609] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5814)}}};
	v->arr[2610] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2611] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1515)}}};
	v->arr[2612] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2613] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6272)}}};
	v->arr[2614] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae196(v);
}

void	init_pae196(t_parse_action_entries *v)
{
	v->arr[2615] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4690)}}};
	v->arr[2616] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2617] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (332)}}};
	v->arr[2618] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2619] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (331)}}};
	v->arr[2620] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2621] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (330)}}};
	v->arr[2622] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2623] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (409)}}};
	v->arr[2624] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2625] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1388)}}};
	v->arr[2626] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2627] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7655)}}};
	v->arr[2628] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2629] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2211)}}};
	init_pae197(v);
}

void	init_pae197(t_parse_action_entries *v)
{
	v->arr[2630] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2631] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4082)}}};
	v->arr[2632] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2633] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3672)}}};
	v->arr[2634] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2635] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3715)}}};
	v->arr[2636] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2637] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4079)}}};
	v->arr[2638] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2639] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6014)}}};
	v->arr[2640] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2641] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2033)}}};
	v->arr[2642] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2643] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5780)}}};
	v->arr[2644] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae198(v);
}

void	init_pae198(t_parse_action_entries *v)
{
	v->arr[2645] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2211)}}};
	v->arr[2646] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2647] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2268)}}};
	v->arr[2648] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2649] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6342)}}};
	v->arr[2650] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2651] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4779)}}};
	v->arr[2652] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2653] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (340)}}};
	v->arr[2654] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2655] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (341)}}};
	v->arr[2656] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2657] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (342)}}};
	v->arr[2658] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2659] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (258)}}};
	init_pae199(v);
}

void	init_pae199(t_parse_action_entries *v)
{
	v->arr[2660] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2661] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2203)}}};
	v->arr[2662] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2663] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2558)}}};
	v->arr[2664] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2665] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7625)}}};
	v->arr[2666] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2667] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (957)}}};
	v->arr[2668] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2669] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1799)}}};
	v->arr[2670] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2671] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2671] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1394), repetition = true}}};
	v->arr[2673] = (t_pae){.entry = {.count = 2, .reusable = false}};
	init_pae200(v);
}

// file funcs39.c
