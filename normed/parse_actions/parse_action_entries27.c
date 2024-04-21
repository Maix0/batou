/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs27.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae135(t_parse_action_entries *v)
{
	v->arr[1852] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (565)}}};
	v->arr[1853] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1854] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6628)}}};
	v->arr[1855] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1856] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1170)}}};
	v->arr[1857] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1858] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7662)}}};
	v->arr[1859] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1860] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1860] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1023), .repetition = true}}};
	v->arr[1862] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1863] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1863] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4184), .repetition = true}}};
	init_pae136(v);
}

void	init_pae136(t_parse_action_entries *v)
{
	v->arr[1865] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1866] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1866] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3686), .repetition = true}}};
	v->arr[1868] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1869] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1869] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3725), .repetition = true}}};
	v->arr[1871] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1872] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1872] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4183), .repetition = true}}};
	v->arr[1874] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1875] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	init_pae137(v);
}

void	init_pae137(t_parse_action_entries *v)
{
	v->arr[1875] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5997), .repetition = true}}};
	v->arr[1877] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1878] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1878] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1091), .repetition = true}}};
	v->arr[1880] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1881] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1881] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5729), .repetition = true}}};
	v->arr[1883] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1884] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1884] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1268), .repetition = true}}};
	v->arr[1886] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1887] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	init_pae138(v);
}

void	init_pae138(t_parse_action_entries *v)
{
	v->arr[1887] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6350), .repetition = true}}};
	v->arr[1889] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1890] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1890] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4641), .repetition = true}}};
	v->arr[1892] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1893] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1893] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (249), .repetition = true}}};
	v->arr[1895] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1896] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1896] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (251), .repetition = true}}};
	v->arr[1898] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1899] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	init_pae139(v);
}

void	init_pae139(t_parse_action_entries *v)
{
	v->arr[1899] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (253), .repetition = true}}};
	v->arr[1901] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1902] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1902] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (223), .repetition = true}}};
	v->arr[1904] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[1905] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1905] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7063), .repetition = true}}};
	v->arr[1907] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[1908] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1908] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1021), .repetition = true}}};
	v->arr[1910] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[1911] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	init_pae140(v);
}

// file funcs27.c
