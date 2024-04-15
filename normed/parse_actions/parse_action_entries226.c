/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs226.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae1130(t_parse_action_entries *v)
{
	v->arr[15568] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7443)}}};
	v->arr[15569] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15570] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2410)}}};
	v->arr[15571] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15572] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2384)}}};
	v->arr[15573] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15574] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2411)}}};
	v->arr[15575] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15576] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6441)}}};
	v->arr[15577] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15578] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7376)}}};
	v->arr[15579] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15580] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7322)}}};
	v->arr[15581] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15582] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4053)}}};
	init_pae1131(v);
}

void	init_pae1131(t_parse_action_entries *v)
{
	v->arr[15583] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15584] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6168)}}};
	v->arr[15585] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15586] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_regex_replacement, \
	.child_count = 4, dynamic_precedence = 0, .production_id = 86}}};
	v->arr[15587] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15588] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_regex_replacement, \
	.child_count = 4, dynamic_precedence = 0, .production_id = 87}}};
	v->arr[15589] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15590] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7281)}}};
	v->arr[15591] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15592] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2388)}}};
	v->arr[15593] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15594] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7145)}}};
	v->arr[15595] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15596] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6160)}}};
	init_pae1132(v);
}

void	init_pae1132(t_parse_action_entries *v)
{
	v->arr[15597] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15598] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2354)}}};
	v->arr[15599] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15600] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7116)}}};
	v->arr[15601] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15602] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1566)}}};
	v->arr[15603] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15604] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7090)}}};
	v->arr[15605] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15606] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1531)}}};
	v->arr[15607] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15608] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7019)}}};
	v->arr[15609] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15610] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5677)}}};
	v->arr[15611] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1133(v);
}

void	init_pae1133(t_parse_action_entries *v)
{
	v->arr[15612] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6852)}}};
	v->arr[15613] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15614] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5678)}}};
	v->arr[15615] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15616] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6468)}}};
	v->arr[15617] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15618] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6814)}}};
	v->arr[15619] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15620] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5691)}}};
	v->arr[15621] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15622] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5694)}}};
	v->arr[15623] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15624] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5572)}}};
	v->arr[15625] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15626] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6817)}}};
	init_pae1134(v);
}

void	init_pae1134(t_parse_action_entries *v)
{
	v->arr[15627] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15628] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5573)}}};
	v->arr[15629] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15630] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5582)}}};
	v->arr[15631] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15632] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5682)}}};
	v->arr[15633] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15634] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_operator, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 49}}};
	v->arr[15635] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15636] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2046)}}};
	v->arr[15637] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15638] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5684)}}};
	v->arr[15639] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15640] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6858)}}};
	init_pae1135(v);
}

// file funcs226.c
