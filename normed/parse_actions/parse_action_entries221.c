/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs221.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae1105(t_parse_action_entries *v)
{
	v->arr[15201] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15202] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3495)}}};
	v->arr[15203] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15204] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5508)}}};
	v->arr[15205] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15206] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6207)}}};
	v->arr[15207] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15208] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1145)}}};
	v->arr[15209] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[15210] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5344)}}};
	v->arr[15211] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15212] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5400)}}};
	v->arr[15213] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15214] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 6, \
	.dynamic_precedence = 0, .production_id = 129}}};
	init_pae1106(v);
}

void	init_pae1106(t_parse_action_entries *v)
{
	v->arr[15215] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15216] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (37)}}};
	v->arr[15217] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15218] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3518)}}};
	v->arr[15219] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15220] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3496)}}};
	v->arr[15221] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15222] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 7, \
	.dynamic_precedence = 0, .production_id = 151}}};
	v->arr[15223] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15224] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (29)}}};
	v->arr[15225] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15226] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1917)}}};
	v->arr[15227] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15228] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (25)}}};
	init_pae1107(v);
}

void	init_pae1107(t_parse_action_entries *v)
{
	v->arr[15229] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15230] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (24)}}};
	v->arr[15231] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15232] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (43)}}};
	v->arr[15233] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15234] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5467)}}};
	v->arr[15235] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15236] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 7, \
	.dynamic_precedence = 0, .production_id = 152}}};
	v->arr[15237] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15238] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 6, \
	.dynamic_precedence = 0, .production_id = 128}}};
	v->arr[15239] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15240] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5683)}}};
	v->arr[15241] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[15242] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5345)}}};
	init_pae1108(v);
}

void	init_pae1108(t_parse_action_entries *v)
{
	v->arr[15243] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15244] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3500)}}};
	v->arr[15245] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15246] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (443)}}};
	v->arr[15247] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[15248] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5346)}}};
	v->arr[15249] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15250] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4317)}}};
	v->arr[15251] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15252] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1671)}}};
	v->arr[15253] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[15254] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5324)}}};
	v->arr[15255] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15256] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5123)}}};
	v->arr[15257] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1109(v);
}

void	init_pae1109(t_parse_action_entries *v)
{
	v->arr[15258] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1505)}}};
	v->arr[15259] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15260] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4219)}}};
	v->arr[15261] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15262] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6381)}}};
	v->arr[15263] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15264] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6946)}}};
	v->arr[15265] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15266] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_regex_replacement, \
	.child_count = 5, dynamic_precedence = 0, .production_id = 119}}};
	v->arr[15267] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15268] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4217)}}};
	v->arr[15269] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15270] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6408)}}};
	v->arr[15271] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1110(v);
}

// file funcs221.c
