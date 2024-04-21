/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs26.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae130(t_parse_action_entries *v)
{
	v->arr[1778] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (346)}}};
	v->arr[1779] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1780] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (285)}}};
	v->arr[1781] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1782] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (551)}}};
	v->arr[1783] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1784] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6673)}}};
	v->arr[1785] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1786] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1068)}}};
	v->arr[1787] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1788] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7652)}}};
	v->arr[1789] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1790] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (931)}}};
	v->arr[1791] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1792] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5804)}}};
	init_pae131(v);
}

void	init_pae131(t_parse_action_entries *v)
{
	v->arr[1793] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1794] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (934)}}};
	v->arr[1795] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1796] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (934)}}};
	v->arr[1797] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1798] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_declaration_command, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1799] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1800] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_declaration_command, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1801] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1802] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (546)}}};
	v->arr[1803] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1804] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (975)}}};
	v->arr[1805] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1806] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (977)}}};
	init_pae132(v);
}

void	init_pae132(t_parse_action_entries *v)
{
	v->arr[1807] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1808] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (977)}}};
	v->arr[1809] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1810] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1062)}}};
	v->arr[1811] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1812] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5849)}}};
	v->arr[1813] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1814] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1063)}}};
	v->arr[1815] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1816] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1063)}}};
	v->arr[1817] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1818] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1126)}}};
	v->arr[1819] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1820] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5757)}}};
	v->arr[1821] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae133(v);
}

void	init_pae133(t_parse_action_entries *v)
{
	v->arr[1822] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1128)}}};
	v->arr[1823] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1824] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1128)}}};
	v->arr[1825] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1826] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1171)}}};
	v->arr[1827] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1828] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3741)}}};
	v->arr[1829] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1830] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3742)}}};
	v->arr[1831] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1832] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6085)}}};
	v->arr[1833] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1834] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1266)}}};
	v->arr[1835] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1836] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5793)}}};
	init_pae134(v);
}

void	init_pae134(t_parse_action_entries *v)
{
	v->arr[1837] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1838] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1469)}}};
	v->arr[1839] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1840] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6285)}}};
	v->arr[1841] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1842] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4677)}}};
	v->arr[1843] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1844] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (311)}}};
	v->arr[1845] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1846] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (310)}}};
	v->arr[1847] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1848] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (309)}}};
	v->arr[1849] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1850] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (381)}}};
	v->arr[1851] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae135(v);
}

// file funcs26.c
