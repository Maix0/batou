/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs88.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae440(t_parse_action_entries *v)
{
	v->arr[5841] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5842] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5842] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1835), repetition = true}}};
	v->arr[5844] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5845] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3766)}}};
	v->arr[5846] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5847] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3766)}}};
	v->arr[5848] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5849] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5842)}}};
	v->arr[5850] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5851] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4744)}}};
	v->arr[5852] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5853] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (392)}}};
	v->arr[5854] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae441(v);
}

void	init_pae441(t_parse_action_entries *v)
{
	v->arr[5855] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (391)}}};
	v->arr[5856] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5857] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (390)}}};
	v->arr[5858] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5859] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5859] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3788), repetition = true}}};
	v->arr[5861] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5862] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5862] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3788), repetition = true}}};
	v->arr[5864] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5865] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5608)}}};
	v->arr[5866] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5867] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3863)}}};
	init_pae442(v);
}

void	init_pae442(t_parse_action_entries *v)
{
	v->arr[5868] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5869] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3862)}}};
	v->arr[5870] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5871] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5992)}}};
	v->arr[5872] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5873] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5518)}}};
	v->arr[5874] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5875] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5846)}}};
	v->arr[5876] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5877] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5625)}}};
	v->arr[5878] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5879] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6362)}}};
	v->arr[5880] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5881] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4752)}}};
	v->arr[5882] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae443(v);
}

void	init_pae443(t_parse_action_entries *v)
{
	v->arr[5883] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (400)}}};
	v->arr[5884] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5885] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (399)}}};
	v->arr[5886] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5887] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (398)}}};
	v->arr[5888] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5889] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (172)}}};
	v->arr[5890] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5891] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5562)}}};
	v->arr[5892] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5893] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7645)}}};
	v->arr[5894] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5895] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1885)}}};
	v->arr[5896] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5897] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae444(v);
}

void	init_pae444(t_parse_action_entries *v)
{
	v->arr[5897] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3948), repetition = true}}};
	v->arr[5899] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5900] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5900] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3948), repetition = true}}};
	v->arr[5902] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5903] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4011)}}};
	v->arr[5904] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5905] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4010)}}};
	v->arr[5906] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5907] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4009)}}};
	v->arr[5908] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5909] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4007)}}};
	v->arr[5910] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5911] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5553)}}};
	init_pae445(v);
}

// file funcs88.c
