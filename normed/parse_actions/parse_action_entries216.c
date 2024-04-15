/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs216.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae1080(t_parse_action_entries *v)
{
	v->arr[14851] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14852] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5141)}}};
	v->arr[14853] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14854] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5296)}}};
	v->arr[14855] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14856] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5299)}}};
	v->arr[14857] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14858] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_expression, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 12}}};
	v->arr[14859] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[14860] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14860] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6651), repetition = true}}};
	v->arr[14862] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14863] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 112}}};
	init_pae1081(v);
}

void	init_pae1081(t_parse_action_entries *v)
{
	v->arr[14864] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14865] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5139)}}};
	v->arr[14866] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14867] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5291)}}};
	v->arr[14868] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14869] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5308)}}};
	v->arr[14870] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14871] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5201)}}};
	v->arr[14872] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14873] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5395)}}};
	v->arr[14874] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14875] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5386)}}};
	v->arr[14876] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14877] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5126)}}};
	v->arr[14878] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1082(v);
}

void	init_pae1082(t_parse_action_entries *v)
{
	v->arr[14879] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5275)}}};
	v->arr[14880] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14881] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5285)}}};
	v->arr[14882] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14883] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 4, \
	dynamic_precedence = 0, .production_id = 79}}};
	v->arr[14884] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14885] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5125)}}};
	v->arr[14886] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14887] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5264)}}};
	v->arr[14888] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14889] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5265)}}};
	v->arr[14890] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14891] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__c_variable_assignment, .child_count = 3, \
	dynamic_precedence = 0, .production_id = 55}}};
	init_pae1083(v);
}

void	init_pae1083(t_parse_action_entries *v)
{
	v->arr[14892] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14893] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__c_variable_assignment, .child_count = 3, \
	dynamic_precedence = 0, .production_id = 55}}};
	v->arr[14894] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14895] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 3, \
	dynamic_precedence = 0, .production_id = 59}}};
	v->arr[14896] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14897] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5166)}}};
	v->arr[14898] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14899] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5397)}}};
	v->arr[14900] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14901] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 4, \
	dynamic_precedence = 0, .production_id = 45}}};
	v->arr[14902] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14903] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5177)}}};
	v->arr[14904] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1084(v);
}

void	init_pae1084(t_parse_action_entries *v)
{
	v->arr[14905] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5391)}}};
	v->arr[14906] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14907] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 4, \
	dynamic_precedence = 0, .production_id = 46}}};
	v->arr[14908] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14909] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5245)}}};
	v->arr[14910] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14911] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5254)}}};
	v->arr[14912] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14913] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 3, \
	dynamic_precedence = 0, .production_id = 60}}};
	v->arr[14914] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14915] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5146)}}};
	v->arr[14916] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14917] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5316)}}};
	init_pae1085(v);
}

// file funcs216.c
