/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs113.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae565(t_parse_action_entries *v)
{
	v->arr[7528] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[7529] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 20}}};
	v->arr[7529] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3677), repetition = true}}};
	v->arr[7531] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[7532] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 20}}};
	v->arr[7532] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2138), repetition = true}}};
	v->arr[7534] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[7535] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 20}}};
	v->arr[7535] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3965), repetition = true}}};
	v->arr[7537] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[7538] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 20}}};
	init_pae566(v);
}

void	init_pae566(t_parse_action_entries *v)
{
	v->arr[7538] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6132), repetition = true}}};
	v->arr[7540] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[7541] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 20}}};
	v->arr[7541] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6634), repetition = true}}};
	v->arr[7543] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7544] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4865)}}};
	v->arr[7545] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7546] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2134)}}};
	v->arr[7547] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7548] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5119)}}};
	v->arr[7549] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7550] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5107)}}};
	v->arr[7551] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7552] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4984)}}};
	init_pae567(v);
}

void	init_pae567(t_parse_action_entries *v)
{
	v->arr[7553] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7554] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6735)}}};
	v->arr[7555] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7556] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2119)}}};
	v->arr[7557] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7558] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4648)}}};
	v->arr[7559] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7560] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1982)}}};
	v->arr[7561] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7562] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5094)}}};
	v->arr[7563] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7564] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5025)}}};
	v->arr[7565] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7566] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5030)}}};
	v->arr[7567] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae568(v);
}

void	init_pae568(t_parse_action_entries *v)
{
	v->arr[7568] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4130)}}};
	v->arr[7569] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7570] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3450)}}};
	v->arr[7571] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7572] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4131)}}};
	v->arr[7573] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7574] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4132)}}};
	v->arr[7575] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7576] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4134)}}};
	v->arr[7577] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7578] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4142)}}};
	v->arr[7579] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7580] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4143)}}};
	v->arr[7581] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7582] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4145)}}};
	init_pae569(v);
}

void	init_pae569(t_parse_action_entries *v)
{
	v->arr[7583] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7584] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4146)}}};
	v->arr[7585] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7586] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4147)}}};
	v->arr[7587] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7588] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4147)}}};
	v->arr[7589] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7590] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4148)}}};
	v->arr[7591] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7592] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4149)}}};
	v->arr[7593] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7594] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4150)}}};
	v->arr[7595] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7596] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4151)}}};
	v->arr[7597] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae570(v);
}

// file funcs113.c
