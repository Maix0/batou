/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs211.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae1055(t_parse_action_entries *v)
{
	v->arr[14504] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14505] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (224)}}};
	v->arr[14506] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14507] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (332)}}};
	v->arr[14508] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14509] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (114)}}};
	v->arr[14510] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14511] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (292)}}};
	v->arr[14512] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14513] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_max_length, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 64}}};
	v->arr[14514] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14515] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (165)}}};
	v->arr[14516] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14517] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (296)}}};
	init_pae1056(v);
}

void	init_pae1056(t_parse_action_entries *v)
{
	v->arr[14518] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14519] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_max_length, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 51}}};
	v->arr[14520] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14521] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4646)}}};
	v->arr[14522] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14523] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4646)}}};
	v->arr[14524] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14525] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (252)}}};
	v->arr[14526] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14527] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (348)}}};
	v->arr[14528] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14529] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (147)}}};
	v->arr[14530] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14531] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (329)}}};
	init_pae1057(v);
}

void	init_pae1057(t_parse_action_entries *v)
{
	v->arr[14532] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14533] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (311)}}};
	v->arr[14534] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14535] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4700)}}};
	v->arr[14536] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14537] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4700)}}};
	v->arr[14538] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14539] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (79)}}};
	v->arr[14540] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14541] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4755)}}};
	v->arr[14542] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14543] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (266)}}};
	v->arr[14544] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14545] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (134)}}};
	v->arr[14546] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1058(v);
}

void	init_pae1058(t_parse_action_entries *v)
{
	v->arr[14547] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (229)}}};
	v->arr[14548] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14549] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (371)}}};
	v->arr[14550] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14551] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (199)}}};
	v->arr[14552] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14553] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (277)}}};
	v->arr[14554] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14555] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (180)}}};
	v->arr[14556] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14557] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (278)}}};
	v->arr[14558] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14559] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4742)}}};
	v->arr[14560] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14561] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4742)}}};
	init_pae1059(v);
}

void	init_pae1059(t_parse_action_entries *v)
{
	v->arr[14562] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14563] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_max_length, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 122}}};
	v->arr[14564] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14565] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3574)}}};
	v->arr[14566] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14567] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (41)}}};
	v->arr[14568] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14569] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3860)}}};
	v->arr[14570] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14571] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (30)}}};
	v->arr[14572] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14573] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (326)}}};
	v->arr[14574] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14575] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (215)}}};
	init_pae1060(v);
}

// file funcs211.c
