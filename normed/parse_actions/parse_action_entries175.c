/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs175.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae875(t_parse_action_entries *v)
{
	v->arr[12009] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12010] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2872)}}};
	v->arr[12011] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12012] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3161)}}};
	v->arr[12013] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12014] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5488)}}};
	v->arr[12015] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12016] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1537)}}};
	v->arr[12017] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12018] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6571)}}};
	v->arr[12019] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12020] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2505)}}};
	v->arr[12021] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12022] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3909)}}};
	v->arr[12023] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae876(v);
}

void	init_pae876(t_parse_action_entries *v)
{
	v->arr[12024] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3908)}}};
	v->arr[12025] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12026] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2318)}}};
	v->arr[12027] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12028] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3904)}}};
	v->arr[12029] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12030] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3903)}}};
	v->arr[12031] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[12032] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_variable_assignments_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12032] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6604), repetition = true}}};
	v->arr[12034] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12035] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_compound_statement, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12036] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae877(v);
}

void	init_pae877(t_parse_action_entries *v)
{
	v->arr[12037] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_compound_statement, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12038] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12039] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6604)}}};
	v->arr[12040] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12041] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3174)}}};
	v->arr[12042] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12043] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1955)}}};
	v->arr[12044] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12045] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2277)}}};
	v->arr[12046] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12047] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4318)}}};
	v->arr[12048] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12049] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 3, \
	.dynamic_precedence = 0, .production_id = 44}}};
	init_pae878(v);
}

void	init_pae878(t_parse_action_entries *v)
{
	v->arr[12050] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12051] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6480)}}};
	v->arr[12052] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12053] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6216)}}};
	v->arr[12054] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12055] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1057)}}};
	v->arr[12056] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12057] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3439)}}};
	v->arr[12058] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12059] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2661)}}};
	v->arr[12060] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12061] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2100)}}};
	v->arr[12062] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12063] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5255)}}};
	v->arr[12064] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae879(v);
}

void	init_pae879(t_parse_action_entries *v)
{
	v->arr[12065] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_pipeline, child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12066] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12067] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (438)}}};
	v->arr[12068] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12069] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_pipeline, child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12070] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12071] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2523)}}};
	v->arr[12072] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12073] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4515)}}};
	v->arr[12074] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12075] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5478)}}};
	v->arr[12076] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12077] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2611)}}};
	init_pae880(v);
}

// file funcs175.c
