/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs25.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae125(t_parse_action_entries *v)
{
	v->arr[1715] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1716] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1716] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5823), repetition = true}}};
	v->arr[1718] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1719] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1719] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1235), repetition = true}}};
	v->arr[1721] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1722] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1722] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6282), repetition = true}}};
	v->arr[1724] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1725] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae126(v);
}

void	init_pae126(t_parse_action_entries *v)
{
	v->arr[1725] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4703), repetition = true}}};
	v->arr[1727] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1728] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1728] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (348), repetition = true}}};
	v->arr[1730] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1731] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1731] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (347), repetition = true}}};
	v->arr[1733] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1734] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1734] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (346), repetition = true}}};
	v->arr[1736] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1737] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae127(v);
}

void	init_pae127(t_parse_action_entries *v)
{
	v->arr[1737] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (285), repetition = true}}};
	v->arr[1739] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1740] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1740] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (546), repetition = true}}};
	v->arr[1742] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[1743] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1743] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6673), repetition = true}}};
	v->arr[1745] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[1746] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1746] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1068), repetition = true}}};
	v->arr[1748] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[1749] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae128(v);
}

void	init_pae128(t_parse_action_entries *v)
{
	v->arr[1749] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7652), repetition = true}}};
	v->arr[1751] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1752] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1067)}}};
	v->arr[1753] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1754] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3755)}}};
	v->arr[1755] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1756] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_declaration_command, .child_count = 1, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1757] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1758] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_declaration_command, .child_count = 1, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1759] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1760] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3754)}}};
	v->arr[1761] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1762] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5924)}}};
	init_pae129(v);
}

void	init_pae129(t_parse_action_entries *v)
{
	v->arr[1763] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1764] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1092)}}};
	v->arr[1765] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1766] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5823)}}};
	v->arr[1767] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1768] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1235)}}};
	v->arr[1769] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1770] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6282)}}};
	v->arr[1771] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1772] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4703)}}};
	v->arr[1773] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1774] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (348)}}};
	v->arr[1775] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1776] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (347)}}};
	v->arr[1777] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae130(v);
}

// file funcs25.c
