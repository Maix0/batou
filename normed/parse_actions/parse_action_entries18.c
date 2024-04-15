/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs18.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae90(t_parse_action_entries *v)
{
	v->arr[1269] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1270] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3771)}}};
	v->arr[1271] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1272] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_command_name, child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1273] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1274] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__expression, child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1275] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1276] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_command_name, child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1276] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__expression, child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1278] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1279] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_command_name, child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	init_pae91(v);
}

void	init_pae91(t_parse_action_entries *v)
{
	v->arr[1279] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7273)}}};
	v->arr[1281] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1282] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_command_name, child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1283] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[1284] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_command_name, child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1284] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__expression, child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1286] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1287] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_concatenation, child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1288] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1289] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_concatenation, child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1290] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae92(v);
}

void	init_pae92(t_parse_action_entries *v)
{
	v->arr[1291] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3813)}}};
	v->arr[1292] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1293] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_arithmetic_expansion, .child_count = 4, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1294] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1295] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_arithmetic_expansion, .child_count = 4, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1296] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1297] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_process_substitution, .child_count = 3, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1298] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1299] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_process_substitution, .child_count = 3, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1300] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1301] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_brace_expression, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 0}}};
	init_pae93(v);
}

void	init_pae93(t_parse_action_entries *v)
{
	v->arr[1302] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1303] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_brace_expression, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1304] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1305] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_command_substitution, .child_count = 3, \
	dynamic_precedence = 0, .production_id = 35}}};
	v->arr[1306] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1307] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_command_substitution, .child_count = 3, \
	dynamic_precedence = 0, .production_id = 35}}};
	v->arr[1308] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1309] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_command_substitution, .child_count = 3, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1310] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1311] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_command_substitution, .child_count = 3, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1312] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1313] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_expansion, child_count = 3, \
	.dynamic_precedence = 0, .production_id = 31}}};
	init_pae94(v);
}

void	init_pae94(t_parse_action_entries *v)
{
	v->arr[1314] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1315] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_expansion, child_count = 3, \
	.dynamic_precedence = 0, .production_id = 31}}};
	v->arr[1316] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1317] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_number, child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1318] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1319] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_number, child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1320] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1321] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_string, child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1322] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1323] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_string, child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1324] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1325] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 10}}};
	init_pae95(v);
}

// file funcs18.c
