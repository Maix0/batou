/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs19.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae95(t_parse_action_entries *v)
{
	v->arr[1326] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1327] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 10}}};
	v->arr[1328] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1329] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_number, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1330] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1331] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_number, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1332] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1333] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_arithmetic_expansion, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1334] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1335] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_arithmetic_expansion, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1336] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1337] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_expansion, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	init_pae96(v);
}

void	init_pae96(t_parse_action_entries *v)
{
	v->arr[1338] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1339] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_expansion, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1340] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1341] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_string, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1342] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1343] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_string, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1344] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1345] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_simple_expansion, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 11}}};
	v->arr[1346] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1347] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_simple_expansion, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 11}}};
	v->arr[1348] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1349] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_translated_string, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	init_pae97(v);
}

void	init_pae97(t_parse_action_entries *v)
{
	v->arr[1350] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1351] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_translated_string, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1352] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1353] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_string, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1354] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1355] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_string, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1356] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1357] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_simple_expansion, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1358] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1359] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_simple_expansion, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1360] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1361] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (495)}}};
	init_pae98(v);
}

void	init_pae98(t_parse_action_entries *v)
{
	v->arr[1362] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1363] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__literal_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1364] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1365] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__literal_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1366] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1367] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__literal_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1367] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (495), .repetition = true}}};
	v->arr[1369] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1370] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expression, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1371] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1372] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_command_name, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	init_pae99(v);
}

void	init_pae99(t_parse_action_entries *v)
{
	v->arr[1372] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7064)}}};
	v->arr[1374] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1375] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3991)}}};
	v->arr[1376] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1377] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3969)}}};
	v->arr[1378] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[1379] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1379] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3921), .repetition = true}}};
	v->arr[1381] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1382] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (525)}}};
	v->arr[1383] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1384] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__literal_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1384] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (525), .repetition = true}}};
	init_pae100(v);
}

// file funcs19.c
