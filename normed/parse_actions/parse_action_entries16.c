/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs16.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae80(t_parse_action_entries *v)
{
	v->arr[1127] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1128] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2573)}}};
	v->arr[1129] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1130] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3966)}}};
	v->arr[1131] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1132] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2139)}}};
	v->arr[1133] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1134] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1948)}}};
	v->arr[1135] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1136] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2056)}}};
	v->arr[1137] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1138] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2049)}}};
	v->arr[1139] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1140] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2049)}}};
	v->arr[1141] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae81(v);
}

void	init_pae81(t_parse_action_entries *v)
{
	v->arr[1142] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3967)}}};
	v->arr[1143] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1144] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4028)}}};
	v->arr[1145] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1146] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5900)}}};
	v->arr[1147] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1148] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2409)}}};
	v->arr[1149] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1150] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5753)}}};
	v->arr[1151] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1152] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2573)}}};
	v->arr[1153] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1154] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2292)}}};
	v->arr[1155] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1156] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6273)}}};
	init_pae82(v);
}

void	init_pae82(t_parse_action_entries *v)
{
	v->arr[1157] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1158] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4799)}}};
	v->arr[1159] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1160] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (114)}}};
	v->arr[1161] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1162] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (117)}}};
	v->arr[1163] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1164] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (118)}}};
	v->arr[1165] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1166] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (120)}}};
	v->arr[1167] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1168] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (458)}}};
	v->arr[1169] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1170] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7597)}}};
	v->arr[1171] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae83(v);
}

void	init_pae83(t_parse_action_entries *v)
{
	v->arr[1172] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2456)}}};
	v->arr[1173] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1174] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2137)}}};
	v->arr[1175] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1176] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2131)}}};
	v->arr[1177] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1178] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2132)}}};
	v->arr[1179] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1180] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2132)}}};
	v->arr[1181] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1182] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2408)}}};
	v->arr[1183] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1184] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2456)}}};
	v->arr[1185] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1186] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (459)}}};
	init_pae84(v);
}

void	init_pae84(t_parse_action_entries *v)
{
	v->arr[1187] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1188] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2503)}}};
	v->arr[1189] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1190] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2198)}}};
	v->arr[1191] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1192] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1970)}}};
	v->arr[1193] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1194] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1969)}}};
	v->arr[1195] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1196] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1969)}}};
	v->arr[1197] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1198] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2347)}}};
	v->arr[1199] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1200] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2503)}}};
	v->arr[1201] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae85(v);
}

// file funcs16.c
