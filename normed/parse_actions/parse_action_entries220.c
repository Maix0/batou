/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs220.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae1100(t_parse_action_entries *v)
{
	v->arr[15132] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15133] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5441)}}};
	v->arr[15134] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15135] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1015)}}};
	v->arr[15136] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15137] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3519)}}};
	v->arr[15138] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15139] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3517)}}};
	v->arr[15140] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15141] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 6, \
	.dynamic_precedence = 0, .production_id = 130}}};
	v->arr[15142] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[15143] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5334)}}};
	v->arr[15144] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[15145] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5339)}}};
	init_pae1101(v);
}

void	init_pae1101(t_parse_action_entries *v)
{
	v->arr[15146] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15147] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3502)}}};
	v->arr[15148] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15149] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4598)}}};
	v->arr[15150] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15151] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 7, \
	.dynamic_precedence = 0, .production_id = 150}}};
	v->arr[15152] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15153] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3406)}}};
	v->arr[15154] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[15155] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5302)}}};
	v->arr[15156] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15157] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3523)}}};
	v->arr[15158] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15159] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (435)}}};
	init_pae1102(v);
}

void	init_pae1102(t_parse_action_entries *v)
{
	v->arr[15160] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15161] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 3, \
	.dynamic_precedence = 0, .production_id = 58}}};
	v->arr[15162] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15163] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (36)}}};
	v->arr[15164] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15165] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6766)}}};
	v->arr[15166] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15167] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 5, \
	.dynamic_precedence = 0, .production_id = 96}}};
	v->arr[15168] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[15169] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__for_body_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[15169] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4918), repetition = true}}};
	v->arr[15171] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15172] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1216)}}};
	init_pae1103(v);
}

void	init_pae1103(t_parse_action_entries *v)
{
	v->arr[15173] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15174] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 6, \
	.dynamic_precedence = 0, .production_id = 133}}};
	v->arr[15175] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15176] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1477)}}};
	v->arr[15177] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15178] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4801)}}};
	v->arr[15179] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15180] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (474)}}};
	v->arr[15181] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15182] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2544)}}};
	v->arr[15183] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15184] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3487)}}};
	v->arr[15185] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15186] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1375)}}};
	init_pae1104(v);
}

void	init_pae1104(t_parse_action_entries *v)
{
	v->arr[15187] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15188] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1802)}}};
	v->arr[15189] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15190] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 8, \
	.dynamic_precedence = 0, .production_id = 158}}};
	v->arr[15191] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[15192] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5333)}}};
	v->arr[15193] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15194] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1651)}}};
	v->arr[15195] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15196] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1500)}}};
	v->arr[15197] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15198] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2600)}}};
	v->arr[15199] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[15200] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (26)}}};
	init_pae1105(v);
}

// file funcs220.c
