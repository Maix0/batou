/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs167.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae835(t_parse_action_entries *v)
{
	v->arr[11477] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11478] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4198)}}};
	v->arr[11479] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11480] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3645)}}};
	v->arr[11481] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11482] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (783)}}};
	v->arr[11483] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11484] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6090)}}};
	v->arr[11485] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11486] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3661)}}};
	v->arr[11487] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11488] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (829)}}};
	v->arr[11489] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11490] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6094)}}};
	v->arr[11491] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae836(v);
}

void	init_pae836(t_parse_action_entries *v)
{
	v->arr[11492] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3950)}}};
	v->arr[11493] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11494] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3950)}}};
	v->arr[11495] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11496] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11496] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4577), repetition = true}}};
	v->arr[11498] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11499] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4541)}}};
	v->arr[11500] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11501] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3873)}}};
	v->arr[11502] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11503] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3873)}}};
	v->arr[11504] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11505] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_function_definition, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 61}}};
	init_pae837(v);
}

void	init_pae837(t_parse_action_entries *v)
{
	v->arr[11506] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11507] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_function_definition, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 61}}};
	v->arr[11508] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11509] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4036)}}};
	v->arr[11510] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11511] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6619)}}};
	v->arr[11512] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11513] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3802)}}};
	v->arr[11514] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11515] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3802)}}};
	v->arr[11516] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11517] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4542)}}};
	v->arr[11518] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11519] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	init_pae838(v);
}

void	init_pae838(t_parse_action_entries *v)
{
	v->arr[11519] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4563), repetition = true}}};
	v->arr[11521] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11522] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3654)}}};
	v->arr[11523] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11524] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (658)}}};
	v->arr[11525] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11526] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3840)}}};
	v->arr[11527] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11528] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6133)}}};
	v->arr[11529] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11530] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4181)}}};
	v->arr[11531] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11532] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4563)}}};
	v->arr[11533] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11534] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_function_definition, .child_count = 3, \
	dynamic_precedence = 0, .production_id = 29}}};
	init_pae839(v);
}

void	init_pae839(t_parse_action_entries *v)
{
	v->arr[11535] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11536] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_function_definition, .child_count = 3, \
	dynamic_precedence = 0, .production_id = 29}}};
	v->arr[11537] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11538] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11538] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4423), repetition = true}}};
	v->arr[11540] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11541] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3647)}}};
	v->arr[11542] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11543] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (779)}}};
	v->arr[11544] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11545] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6093)}}};
	v->arr[11546] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11547] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae840(v);
}

// file funcs167.c
