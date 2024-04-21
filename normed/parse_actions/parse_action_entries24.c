/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs24.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae120(t_parse_action_entries *v)
{
	v->arr[1654] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1155), .repetition = true}}};
	v->arr[1656] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1657] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1657] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6254), .repetition = true}}};
	v->arr[1659] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1660] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1660] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4675), .repetition = true}}};
	v->arr[1662] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1663] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1663] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (305), .repetition = true}}};
	v->arr[1665] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1666] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	init_pae121(v);
}

void	init_pae121(t_parse_action_entries *v)
{
	v->arr[1666] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (304), .repetition = true}}};
	v->arr[1668] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1669] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1669] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (303), .repetition = true}}};
	v->arr[1671] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1672] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1672] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (372), .repetition = true}}};
	v->arr[1674] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[1675] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1675] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6805), .repetition = true}}};
	v->arr[1677] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[1678] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	init_pae122(v);
}

void	init_pae122(t_parse_action_entries *v)
{
	v->arr[1678] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1003), .repetition = true}}};
	v->arr[1680] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[1681] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1681] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1328), .repetition = true}}};
	v->arr[1683] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[1684] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1684] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7664), .repetition = true}}};
	v->arr[1686] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1687] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1219)}}};
	v->arr[1688] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1689] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3682)}}};
	v->arr[1690] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1691] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4052)}}};
	init_pae123(v);
}

void	init_pae123(t_parse_action_entries *v)
{
	v->arr[1692] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1693] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1174)}}};
	v->arr[1694] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1695] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1203)}}};
	v->arr[1696] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1697] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1697] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1067), .repetition = true}}};
	v->arr[1699] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1700] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1700] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3755), .repetition = true}}};
	v->arr[1702] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1703] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae124(v);
}

void	init_pae124(t_parse_action_entries *v)
{
	v->arr[1704] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1705] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1706] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1707] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1707] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3754), .repetition = true}}};
	v->arr[1709] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1710] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1710] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5924), .repetition = true}}};
	v->arr[1712] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1713] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1713] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1092), .repetition = true}}};
	init_pae125(v);
}

// file funcs24.c
