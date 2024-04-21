/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs21.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae105(t_parse_action_entries *v)
{
	v->arr[1457] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (969)}}};
	v->arr[1458] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1459] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5788)}}};
	v->arr[1460] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1461] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1155)}}};
	v->arr[1462] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1463] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6254)}}};
	v->arr[1464] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1465] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4675)}}};
	v->arr[1466] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1467] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (305)}}};
	v->arr[1468] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1469] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (304)}}};
	v->arr[1470] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1471] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (303)}}};
	init_pae106(v);
}

void	init_pae106(t_parse_action_entries *v)
{
	v->arr[1472] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1473] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (372)}}};
	v->arr[1474] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1475] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1003)}}};
	v->arr[1476] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1477] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1328)}}};
	v->arr[1478] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1479] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7664)}}};
	v->arr[1480] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1481] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1481] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (874), .repetition = true}}};
	v->arr[1483] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1484] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	init_pae107(v);
}

void	init_pae107(t_parse_action_entries *v)
{
	v->arr[1484] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3749), .repetition = true}}};
	v->arr[1486] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1487] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1488] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1489] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1489] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3660), .repetition = true}}};
	v->arr[1491] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1492] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1493] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1494] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1494] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3799), .repetition = true}}};
	init_pae108(v);
}

void	init_pae108(t_parse_action_entries *v)
{
	v->arr[1496] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1497] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1497] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3748), .repetition = true}}};
	v->arr[1499] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1500] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1500] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5958), .repetition = true}}};
	v->arr[1502] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1503] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1503] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (834), .repetition = true}}};
	v->arr[1505] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1506] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	init_pae109(v);
}

void	init_pae109(t_parse_action_entries *v)
{
	v->arr[1506] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5817), .repetition = true}}};
	v->arr[1508] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1509] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1509] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (987), .repetition = true}}};
	v->arr[1511] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1512] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1512] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6354), .repetition = true}}};
	v->arr[1514] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1515] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1515] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4693), .repetition = true}}};
	v->arr[1517] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1518] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	init_pae110(v);
}

// file funcs21.c
