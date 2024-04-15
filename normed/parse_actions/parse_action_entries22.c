/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs22.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae110(t_parse_action_entries *v)
{
	v->arr[1518] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (335), repetition = true}}};
	v->arr[1520] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1521] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1521] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (334), repetition = true}}};
	v->arr[1523] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1524] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1524] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (333), repetition = true}}};
	v->arr[1526] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1527] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1527] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (414), repetition = true}}};
	v->arr[1529] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[1530] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	init_pae111(v);
}

void	init_pae111(t_parse_action_entries *v)
{
	v->arr[1530] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6813), repetition = true}}};
	v->arr[1532] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[1533] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1533] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (876), repetition = true}}};
	v->arr[1535] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[1536] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1536] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1182), repetition = true}}};
	v->arr[1538] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[1539] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1539] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7654), repetition = true}}};
	v->arr[1541] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1542] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1023)}}};
	init_pae112(v);
}

void	init_pae112(t_parse_action_entries *v)
{
	v->arr[1543] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1544] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4184)}}};
	v->arr[1545] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1546] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3686)}}};
	v->arr[1547] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1548] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3725)}}};
	v->arr[1549] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1550] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4183)}}};
	v->arr[1551] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1552] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5997)}}};
	v->arr[1553] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1554] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1091)}}};
	v->arr[1555] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1556] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5729)}}};
	v->arr[1557] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae113(v);
}

void	init_pae113(t_parse_action_entries *v)
{
	v->arr[1558] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1268)}}};
	v->arr[1559] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1560] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6350)}}};
	v->arr[1561] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1562] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4641)}}};
	v->arr[1563] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1564] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (249)}}};
	v->arr[1565] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1566] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (251)}}};
	v->arr[1567] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1568] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (253)}}};
	v->arr[1569] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1570] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (223)}}};
	v->arr[1571] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1572] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1021)}}};
	init_pae114(v);
}

void	init_pae114(t_parse_action_entries *v)
{
	v->arr[1573] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1574] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1716)}}};
	v->arr[1575] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1576] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7619)}}};
	v->arr[1577] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1578] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1093)}}};
	v->arr[1579] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1580] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4211)}}};
	v->arr[1581] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1582] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3695)}}};
	v->arr[1583] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1584] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3787)}}};
	v->arr[1585] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1586] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4212)}}};
	v->arr[1587] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae115(v);
}

// file funcs22.c
