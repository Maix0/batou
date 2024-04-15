/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs71.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae355(t_parse_action_entries *v)
{
	v->arr[4711] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4712] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4080)}}};
	v->arr[4713] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4714] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4714] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2487), repetition = true}}};
	v->arr[4716] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4717] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4717] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3797), repetition = true}}};
	v->arr[4719] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4720] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4720] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3793), repetition = true}}};
	v->arr[4722] = (t_pae){.entry = {.count = 2, .reusable = false}};
	init_pae356(v);
}

void	init_pae356(t_parse_action_entries *v)
{
	v->arr[4723] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4723] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5876), repetition = true}}};
	v->arr[4725] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4726] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4726] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2458), repetition = true}}};
	v->arr[4728] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4729] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4729] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5832), repetition = true}}};
	v->arr[4731] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4732] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4732] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2487), repetition = true}}};
	init_pae357(v);
}

void	init_pae357(t_parse_action_entries *v)
{
	v->arr[4734] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4735] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4735] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2651), repetition = true}}};
	v->arr[4737] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4738] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4738] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6320), repetition = true}}};
	v->arr[4740] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4741] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4741] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4729), repetition = true}}};
	v->arr[4743] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4744] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae358(v);
}

void	init_pae358(t_parse_action_entries *v)
{
	v->arr[4744] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (376), repetition = true}}};
	v->arr[4746] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4747] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4747] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (61), repetition = true}}};
	v->arr[4749] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4750] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4750] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (373), repetition = true}}};
	v->arr[4752] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4753] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4753] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (250), repetition = true}}};
	v->arr[4755] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4756] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae359(v);
}

void	init_pae359(t_parse_action_entries *v)
{
	v->arr[4756] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2493), repetition = true}}};
	v->arr[4758] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4759] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4759] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7649), repetition = true}}};
	v->arr[4761] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4762] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (966)}}};
	v->arr[4763] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4764] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5178)}}};
	v->arr[4765] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4766] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3934)}}};
	v->arr[4767] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4768] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3933)}}};
	v->arr[4769] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4770] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5870)}}};
	init_pae360(v);
}

// file funcs71.c
