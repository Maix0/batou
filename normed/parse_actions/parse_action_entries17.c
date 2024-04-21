/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs17.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae85(t_parse_action_entries *v)
{
	v->arr[1202] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (460)}}};
	v->arr[1203] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1204] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4291)}}};
	v->arr[1205] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1206] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3657)}}};
	v->arr[1207] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1208] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2983)}}};
	v->arr[1209] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1210] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3671)}}};
	v->arr[1211] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1212] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2588)}}};
	v->arr[1213] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1214] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2069)}}};
	v->arr[1215] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1216] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2184)}}};
	init_pae86(v);
}

void	init_pae86(t_parse_action_entries *v)
{
	v->arr[1217] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1218] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2188)}}};
	v->arr[1219] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1220] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2188)}}};
	v->arr[1221] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1222] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2537)}}};
	v->arr[1223] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1224] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2588)}}};
	v->arr[1225] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1226] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (463)}}};
	v->arr[1227] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1228] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_concatenation, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1229] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1230] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (488)}}};
	init_pae87(v);
}

void	init_pae87(t_parse_action_entries *v)
{
	v->arr[1231] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1232] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5800)}}};
	v->arr[1233] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1234] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (492)}}};
	v->arr[1235] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1236] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_concatenation, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1237] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1238] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (492)}}};
	v->arr[1239] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1240] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_concatenation, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 1}}};
	v->arr[1241] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1242] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_concatenation, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 1}}};
	v->arr[1243] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae88(v);
}

void	init_pae88(t_parse_action_entries *v)
{
	v->arr[1244] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (506)}}};
	v->arr[1245] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1246] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5734)}}};
	v->arr[1247] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1248] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (507)}}};
	v->arr[1249] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1250] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (507)}}};
	v->arr[1251] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1252] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1253] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1254] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1255] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1256] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae89(v);
}

void	init_pae89(t_parse_action_entries *v)
{
	v->arr[1256] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3702), .repetition = true}}};
	v->arr[1258] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[1259] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1259] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3702), .repetition = true}}};
	v->arr[1261] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1262] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__literal_repeat1, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1263] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1264] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__literal_repeat1, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1265] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1266] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_concatenation, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 1}}};
	v->arr[1267] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1268] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_concatenation, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 1}}};
	init_pae90(v);
}

// file funcs17.c
