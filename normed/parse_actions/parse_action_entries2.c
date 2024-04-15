/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae10(t_parse_action_entries *v)
{
	v->arr[150] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (685)}}};
	v->arr[151] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[152] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3665)}}};
	v->arr[153] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[154] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3665)}}};
	v->arr[155] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[156] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3)}}};
	v->arr[157] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[158] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (420)}}};
	v->arr[159] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[160] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (425)}}};
	v->arr[161] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[162] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4018)}}};
	v->arr[163] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[164] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7068)}}};
	init_pae11(v);
}

void	init_pae11(t_parse_action_entries *v)
{
	v->arr[165] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[166] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (284)}}};
	v->arr[167] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[168] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (527)}}};
	v->arr[169] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[170] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (8)}}};
	v->arr[171] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[172] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4994)}}};
	v->arr[173] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[174] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1905)}}};
	v->arr[175] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[176] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (799)}}};
	v->arr[177] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[178] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (950)}}};
	v->arr[179] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae12(v);
}

void	init_pae12(t_parse_action_entries *v)
{
	v->arr[180] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (830)}}};
	v->arr[181] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[182] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3902)}}};
	v->arr[183] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[184] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2129)}}};
	v->arr[185] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[186] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2130)}}};
	v->arr[187] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[188] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2130)}}};
	v->arr[189] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[190] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4190)}}};
	v->arr[191] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[192] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4194)}}};
	v->arr[193] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[194] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5915)}}};
	init_pae13(v);
}

void	init_pae13(t_parse_action_entries *v)
{
	v->arr[195] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[196] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (500)}}};
	v->arr[197] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[198] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5734)}}};
	v->arr[199] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[200] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (496)}}};
	v->arr[201] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[202] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (510)}}};
	v->arr[203] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[204] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6308)}}};
	v->arr[205] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[206] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4654)}}};
	v->arr[207] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[208] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (166)}}};
	v->arr[209] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae14(v);
}

void	init_pae14(t_parse_action_entries *v)
{
	v->arr[210] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (167)}}};
	v->arr[211] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[212] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (170)}}};
	v->arr[213] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[214] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (171)}}};
	v->arr[215] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[216] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6157)}}};
	v->arr[217] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[218] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6638)}}};
	v->arr[219] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[220] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (16)}}};
	v->arr[221] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[222] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7610)}}};
	v->arr[223] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[224] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5603)}}};
	init_pae15(v);
}

// file funcs2.c
