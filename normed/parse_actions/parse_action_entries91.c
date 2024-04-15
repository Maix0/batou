/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs91.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae455(t_parse_action_entries *v)
{
	v->arr[6043] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5716), repetition = true}}};
	v->arr[6045] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6046] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6046] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3480), repetition = true}}};
	v->arr[6048] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6049] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6049] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3516), repetition = true}}};
	v->arr[6051] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6052] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6052] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6332), repetition = true}}};
	v->arr[6054] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6055] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae456(v);
}

void	init_pae456(t_parse_action_entries *v)
{
	v->arr[6055] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4668), repetition = true}}};
	v->arr[6057] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6058] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6058] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (255), repetition = true}}};
	v->arr[6060] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6061] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6061] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (256), repetition = true}}};
	v->arr[6063] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6064] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6064] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (257), repetition = true}}};
	v->arr[6066] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6067] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae457(v);
}

void	init_pae457(t_parse_action_entries *v)
{
	v->arr[6067] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (228), repetition = true}}};
	v->arr[6069] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6070] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6070] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3479), repetition = true}}};
	v->arr[6072] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6073] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6073] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7620), repetition = true}}};
	v->arr[6075] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6076] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6076] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2215), repetition = true}}};
	v->arr[6078] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6079] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae458(v);
}

void	init_pae458(t_parse_action_entries *v)
{
	v->arr[6079] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3829), repetition = true}}};
	v->arr[6081] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6082] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6082] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3829), repetition = true}}};
	v->arr[6084] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6085] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6085] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2160), repetition = true}}};
	v->arr[6087] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6088] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3737)}}};
	v->arr[6089] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6090] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3735)}}};
	v->arr[6091] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6092] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3990)}}};
	init_pae459(v);
}

void	init_pae459(t_parse_action_entries *v)
{
	v->arr[6093] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6094] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2094)}}};
	v->arr[6095] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6096] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3971)}}};
	v->arr[6097] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6098] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6098] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3768), repetition = true}}};
	v->arr[6100] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6101] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3886)}}};
	v->arr[6102] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6103] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3854)}}};
	v->arr[6104] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6105] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae460(v);
}

// file funcs91.c
