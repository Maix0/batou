/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs120.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae600(t_parse_action_entries *v)
{
	v->arr[8018] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8019] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (228)}}};
	v->arr[8020] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8021] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3601)}}};
	v->arr[8022] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8023] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3601)}}};
	v->arr[8024] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8025] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3465)}}};
	v->arr[8026] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8027] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7620)}}};
	v->arr[8028] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8029] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6755)}}};
	v->arr[8030] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8031] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6187)}}};
	v->arr[8032] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae601(v);
}

void	init_pae601(t_parse_action_entries *v)
{
	v->arr[8033] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6197)}}};
	v->arr[8034] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8035] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5260)}}};
	v->arr[8036] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8037] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6197)}}};
	v->arr[8038] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8039] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_body, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 12}}};
	v->arr[8040] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8041] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6121)}}};
	v->arr[8042] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8043] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7006)}}};
	v->arr[8044] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8045] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5249)}}};
	v->arr[8046] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae602(v);
}

void	init_pae602(t_parse_action_entries *v)
{
	v->arr[8047] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6187)}}};
	v->arr[8048] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8049] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6755)}}};
	v->arr[8050] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8051] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6489)}}};
	v->arr[8052] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8053] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4802)}}};
	v->arr[8054] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8055] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4487)}}};
	v->arr[8056] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8057] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4802)}}};
	v->arr[8058] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8059] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4775)}}};
	v->arr[8060] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8061] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2324)}}};
	init_pae603(v);
}

void	init_pae603(t_parse_action_entries *v)
{
	v->arr[8062] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8063] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4196)}}};
	v->arr[8064] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8065] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3592)}}};
	v->arr[8066] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8067] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4195)}}};
	v->arr[8068] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8069] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2342)}}};
	v->arr[8070] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8071] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5758)}}};
	v->arr[8072] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8073] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2324)}}};
	v->arr[8074] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8075] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4649)}}};
	v->arr[8076] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae604(v);
}

void	init_pae604(t_parse_action_entries *v)
{
	v->arr[8077] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (238)}}};
	v->arr[8078] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8079] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (241)}}};
	v->arr[8080] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8081] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (214)}}};
	v->arr[8082] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8083] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2158)}}};
	v->arr[8084] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8085] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2158)}}};
	v->arr[8086] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8087] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2323)}}};
	v->arr[8088] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8089] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4550)}}};
	v->arr[8090] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8091] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4345)}}};
	init_pae605(v);
}

// file funcs120.c
