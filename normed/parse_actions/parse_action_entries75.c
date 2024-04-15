/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs75.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae375(t_parse_action_entries *v)
{
	v->arr[4978] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2480)}}};
	v->arr[4979] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4980] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2578)}}};
	v->arr[4981] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4982] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4133)}}};
	v->arr[4983] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4984] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4984] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2572), repetition = true}}};
	v->arr[4986] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4987] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4987] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2480), repetition = true}}};
	v->arr[4989] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4990] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae376(v);
}

void	init_pae376(t_parse_action_entries *v)
{
	v->arr[4990] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2578), repetition = true}}};
	v->arr[4992] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4993] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4129)}}};
	v->arr[4994] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4995] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4995] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2539), repetition = true}}};
	v->arr[4997] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4998] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4998] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4103), repetition = true}}};
	v->arr[5000] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5001] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5001] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4101), repetition = true}}};
	init_pae377(v);
}

void	init_pae377(t_parse_action_entries *v)
{
	v->arr[5003] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5004] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5004] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5879), repetition = true}}};
	v->arr[5006] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5007] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5007] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2453), repetition = true}}};
	v->arr[5009] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5010] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5010] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5769), repetition = true}}};
	v->arr[5012] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5013] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae378(v);
}

void	init_pae378(t_parse_action_entries *v)
{
	v->arr[5013] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2539), repetition = true}}};
	v->arr[5015] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5016] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5016] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2667), repetition = true}}};
	v->arr[5018] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5019] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5019] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6277), repetition = true}}};
	v->arr[5021] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5022] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5022] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4751), repetition = true}}};
	v->arr[5024] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5025] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae379(v);
}

void	init_pae379(t_parse_action_entries *v)
{
	v->arr[5025] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (296), repetition = true}}};
	v->arr[5027] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5028] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5028] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (297), repetition = true}}};
	v->arr[5030] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5031] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5031] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (336), repetition = true}}};
	v->arr[5033] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5034] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5034] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (254), repetition = true}}};
	v->arr[5036] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5037] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae380(v);
}

// file funcs75.c
