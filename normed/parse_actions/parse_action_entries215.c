/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs215.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae1075(t_parse_action_entries *v)
{
	v->arr[14787] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3889)}}};
	v->arr[14788] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14789] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6512)}}};
	v->arr[14790] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14791] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (90)}}};
	v->arr[14792] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14793] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3676)}}};
	v->arr[14794] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14795] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6732)}}};
	v->arr[14796] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14797] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6732)}}};
	v->arr[14798] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14799] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__concatenation_in_expansion_repeat1, \
	child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14800] = (t_pae){.entry = {.count = 2, .reusable = true}};
	init_pae1076(v);
}

void	init_pae1076(t_parse_action_entries *v)
{
	v->arr[14801] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__concatenation_in_expansion_repeat1, \
	child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14801] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5425), repetition = true}}};
	v->arr[14803] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14804] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__for_body_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14805] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[14806] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__for_body_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14806] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4999), repetition = true}}};
	v->arr[14808] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14809] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__for_body_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14810] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14811] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_body, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 32}}};
	init_pae1077(v);
}

void	init_pae1077(t_parse_action_entries *v)
{
	v->arr[14812] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14813] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6196)}}};
	v->arr[14814] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14815] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3617)}}};
	v->arr[14816] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14817] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6745)}}};
	v->arr[14818] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14819] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6745)}}};
	v->arr[14820] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14821] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__expansion_body_repeat1, .child_count \
	= 2, dynamic_precedence = 0, .production_id = 34}}};
	v->arr[14822] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[14823] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__expansion_body_repeat1, .child_count \
	= 2, dynamic_precedence = 0, .production_id = 34}}};
	v->arr[14823] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6489), repetition = true}}};
	init_pae1078(v);
}

void	init_pae1078(t_parse_action_entries *v)
{
	v->arr[14825] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14826] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__concatenation_in_expansion, .child_count \
	= 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14827] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14828] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_body, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 31}}};
	v->arr[14829] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14830] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__expansion_body_repeat1, .child_count \
	= 1, dynamic_precedence = 0, .production_id = 12}}};
	v->arr[14831] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14832] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 109}}};
	v->arr[14833] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14834] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5121)}}};
	v->arr[14835] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14836] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5268)}}};
	init_pae1079(v);
}

void	init_pae1079(t_parse_action_entries *v)
{
	v->arr[14837] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14838] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5272)}}};
	v->arr[14839] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14840] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 4, \
	dynamic_precedence = 0, .production_id = 83}}};
	v->arr[14841] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14842] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5183)}}};
	v->arr[14843] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14844] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5355)}}};
	v->arr[14845] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14846] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5341)}}};
	v->arr[14847] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14848] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__c_expression, child_count = 1, \
	.dynamic_precedence = 0, .production_id = 26}}};
	v->arr[14849] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14850] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__c_expression, child_count = 1, \
	.dynamic_precedence = 0, .production_id = 26}}};
	init_pae1080(v);
}

// file funcs215.c
