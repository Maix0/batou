/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs78.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae390(t_parse_action_entries *v)
{
	v->arr[5177] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5178] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5179] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 1}}};
	v->arr[5180] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5181] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 1}}};
	v->arr[5182] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5183] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3891)}}};
	v->arr[5184] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5185] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3752)}}};
	v->arr[5186] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5187] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3756)}}};
	v->arr[5188] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5189] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae391(v);
}

void	init_pae391(t_parse_action_entries *v)
{
	v->arr[5189] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2613), repetition = true}}};
	v->arr[5191] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5192] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5192] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3835), repetition = true}}};
	v->arr[5194] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5195] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5195] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3818), repetition = true}}};
	v->arr[5197] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5198] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5198] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6082), repetition = true}}};
	v->arr[5200] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5201] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae392(v);
}

void	init_pae392(t_parse_action_entries *v)
{
	v->arr[5201] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2632), repetition = true}}};
	v->arr[5203] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5204] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5204] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5837), repetition = true}}};
	v->arr[5206] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5207] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5207] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2613), repetition = true}}};
	v->arr[5209] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5210] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5210] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2869), repetition = true}}};
	v->arr[5212] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5213] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae393(v);
}

void	init_pae393(t_parse_action_entries *v)
{
	v->arr[5213] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6366), repetition = true}}};
	v->arr[5215] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5216] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5216] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4737), repetition = true}}};
	v->arr[5218] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5219] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5219] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (384), repetition = true}}};
	v->arr[5221] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5222] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5222] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (383), repetition = true}}};
	v->arr[5224] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5225] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae394(v);
}

void	init_pae394(t_parse_action_entries *v)
{
	v->arr[5225] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (382), repetition = true}}};
	v->arr[5227] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5228] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5228] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (210), repetition = true}}};
	v->arr[5230] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5231] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5231] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2612), repetition = true}}};
	v->arr[5233] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5234] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5234] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7647), repetition = true}}};
	v->arr[5236] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5237] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae395(v);
}

// file funcs78.c
