/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs20.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae100(t_parse_action_entries *v)
{
	v->arr[1386] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1387] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (472)}}};
	v->arr[1388] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1389] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3677)}}};
	v->arr[1390] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1391] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3677)}}};
	v->arr[1392] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1393] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2138)}}};
	v->arr[1394] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1395] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3965)}}};
	v->arr[1396] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1397] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6132)}}};
	v->arr[1398] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1399] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (496)}}};
	v->arr[1400] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae101(v);
}

void	init_pae101(t_parse_action_entries *v)
{
	v->arr[1401] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (874)}}};
	v->arr[1402] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1403] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3749)}}};
	v->arr[1404] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1405] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_command, child_count = 1, \
	.dynamic_precedence = 0, .production_id = 2}}};
	v->arr[1406] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1407] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3660)}}};
	v->arr[1408] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1409] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_command, child_count = 1, \
	.dynamic_precedence = 0, .production_id = 2}}};
	v->arr[1410] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1411] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3799)}}};
	v->arr[1412] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1413] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3748)}}};
	init_pae102(v);
}

void	init_pae102(t_parse_action_entries *v)
{
	v->arr[1414] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1415] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5958)}}};
	v->arr[1416] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1417] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (834)}}};
	v->arr[1418] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1419] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5817)}}};
	v->arr[1420] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1421] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (987)}}};
	v->arr[1422] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1423] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6354)}}};
	v->arr[1424] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1425] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4693)}}};
	v->arr[1426] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1427] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (335)}}};
	v->arr[1428] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae103(v);
}

void	init_pae103(t_parse_action_entries *v)
{
	v->arr[1429] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (334)}}};
	v->arr[1430] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1431] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (333)}}};
	v->arr[1432] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1433] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (414)}}};
	v->arr[1434] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1435] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (876)}}};
	v->arr[1436] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1437] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1182)}}};
	v->arr[1438] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1439] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7654)}}};
	v->arr[1440] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1441] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_command, child_count = 2, \
	.dynamic_precedence = 0, .production_id = 19}}};
	v->arr[1442] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae104(v);
}

void	init_pae104(t_parse_action_entries *v)
{
	v->arr[1443] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_command, child_count = 2, \
	.dynamic_precedence = 0, .production_id = 19}}};
	v->arr[1444] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1445] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (985)}}};
	v->arr[1446] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1447] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3809)}}};
	v->arr[1448] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1449] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3620)}}};
	v->arr[1450] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1451] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3832)}}};
	v->arr[1452] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1453] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3812)}}};
	v->arr[1454] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1455] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6070)}}};
	v->arr[1456] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae105(v);
}

// file funcs20.c
