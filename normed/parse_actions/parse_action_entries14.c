/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs14.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae70(t_parse_action_entries *v)
{
	v->arr[980] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (151), repetition = true}}};
	v->arr[982] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[983] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__statements_repeat1, .child_count = 2, dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[983] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (152), repetition = true}}};
	v->arr[985] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[986] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__statements_repeat1, .child_count = 2, dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[986] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6148), repetition = true}}};
	v->arr[988] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[989] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__statements_repeat1, .child_count = 2, dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[989] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6616), repetition = true}}};
	v->arr[991] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[992] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__statements_repeat1, .child_count = 2, dynamic_precedence = 0, \
	.production_id = 0}}};
	init_pae71(v);
}

void	init_pae71(t_parse_action_entries *v)
{
	v->arr[992] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1077), repetition = true}}};
	v->arr[994] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[995] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__statements_repeat1, .child_count = 2, dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[995] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7608), repetition = true}}};
	v->arr[997] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[998] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1719)}}};
	v->arr[999] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1000] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3688)}}};
	v->arr[1001] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1002] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3688)}}};
	v->arr[1003] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1004] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7511)}}};
	v->arr[1005] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1006] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (644)}}};
	init_pae72(v);
}

void	init_pae72(t_parse_action_entries *v)
{
	v->arr[1007] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1008] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (748)}}};
	v->arr[1009] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1010] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (878)}}};
	v->arr[1011] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1012] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (836)}}};
	v->arr[1013] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1014] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4107)}}};
	v->arr[1015] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1016] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1572)}}};
	v->arr[1017] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1018] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1717)}}};
	v->arr[1019] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1020] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6149)}}};
	v->arr[1021] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae73(v);
}

void	init_pae73(t_parse_action_entries *v)
{
	v->arr[1022] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6717)}}};
	v->arr[1023] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1024] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1653)}}};
	v->arr[1025] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1026] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1800)}}};
	v->arr[1027] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1028] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (698)}}};
	v->arr[1029] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1030] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3640)}}};
	v->arr[1031] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1032] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3640)}}};
	v->arr[1033] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1034] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (112)}}};
	v->arr[1035] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1036] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (619)}}};
	init_pae74(v);
}

void	init_pae74(t_parse_action_entries *v)
{
	v->arr[1037] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1038] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (905)}}};
	v->arr[1039] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1040] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3734)}}};
	v->arr[1041] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1042] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4076)}}};
	v->arr[1043] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1044] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4074)}}};
	v->arr[1045] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1046] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5865)}}};
	v->arr[1047] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1048] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1912)}}};
	v->arr[1049] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1050] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5822)}}};
	v->arr[1051] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae75(v);
}

// file funcs14.c
