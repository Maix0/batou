/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs23.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae115(t_parse_action_entries *v)
{
	v->arr[1588] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5884)}}};
	v->arr[1589] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1590] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1144)}}};
	v->arr[1591] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1592] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5746)}}};
	v->arr[1593] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1594] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1272)}}};
	v->arr[1595] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1596] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6309)}}};
	v->arr[1597] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1598] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4841)}}};
	v->arr[1599] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1600] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (205)}}};
	v->arr[1601] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1602] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (206)}}};
	init_pae116(v);
}

void	init_pae116(t_parse_action_entries *v)
{
	v->arr[1603] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1604] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (207)}}};
	v->arr[1605] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1606] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (189)}}};
	v->arr[1607] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1608] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1094)}}};
	v->arr[1609] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1610] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1521)}}};
	v->arr[1611] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1612] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7613)}}};
	v->arr[1613] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1614] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_command, child_count = 3, \
	.dynamic_precedence = 0, .production_id = 39}}};
	v->arr[1615] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1616] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_command, child_count = 3, \
	.dynamic_precedence = 0, .production_id = 39}}};
	init_pae117(v);
}

void	init_pae117(t_parse_action_entries *v)
{
	v->arr[1617] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1618] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (888)}}};
	v->arr[1619] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1620] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5840)}}};
	v->arr[1621] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1622] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (889)}}};
	v->arr[1623] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1624] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (889)}}};
	v->arr[1625] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1626] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_command, child_count = 2, \
	.dynamic_precedence = 0, .production_id = 18}}};
	v->arr[1627] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1628] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_command, child_count = 2, \
	.dynamic_precedence = 0, .production_id = 18}}};
	v->arr[1629] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1630] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	init_pae118(v);
}

void	init_pae118(t_parse_action_entries *v)
{
	v->arr[1630] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (985), repetition = true}}};
	v->arr[1632] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1633] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1633] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3809), repetition = true}}};
	v->arr[1635] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1636] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1636] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3620), repetition = true}}};
	v->arr[1638] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1639] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1639] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3832), repetition = true}}};
	v->arr[1641] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1642] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	init_pae119(v);
}

void	init_pae119(t_parse_action_entries *v)
{
	v->arr[1642] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3812), repetition = true}}};
	v->arr[1644] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1645] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1645] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6070), repetition = true}}};
	v->arr[1647] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1648] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1648] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (969), repetition = true}}};
	v->arr[1650] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1651] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1651] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5788), repetition = true}}};
	v->arr[1653] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1654] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	init_pae120(v);
}

// file funcs23.c
