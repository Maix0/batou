/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs73.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae365(t_parse_action_entries *v)
{
	v->arr[4845] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (962)}}};
	v->arr[4846] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4847] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2538)}}};
	v->arr[4848] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4849] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7624)}}};
	v->arr[4850] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4851] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (920)}}};
	v->arr[4852] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4853] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4853] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1052), repetition = true}}};
	v->arr[4855] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4856] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2655)}}};
	v->arr[4857] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4858] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5832)}}};
	init_pae366(v);
}

void	init_pae366(t_parse_action_entries *v)
{
	v->arr[4859] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4860] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2653)}}};
	v->arr[4861] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4862] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2653)}}};
	v->arr[4863] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4864] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1912)}}};
	v->arr[4865] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4866] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2516)}}};
	v->arr[4867] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4868] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5725)}}};
	v->arr[4869] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4870] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2515)}}};
	v->arr[4871] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4872] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2515)}}};
	v->arr[4873] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae367(v);
}

void	init_pae367(t_parse_action_entries *v)
{
	v->arr[4874] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1105)}}};
	v->arr[4875] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4876] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4179)}}};
	v->arr[4877] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4878] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (979)}}};
	v->arr[4879] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4880] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4880] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3707), repetition = true}}};
	v->arr[4882] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4883] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4883] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3707), repetition = true}}};
	v->arr[4885] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4886] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae368(v);
}

void	init_pae368(t_parse_action_entries *v)
{
	v->arr[4886] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2489), repetition = true}}};
	v->arr[4888] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4889] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4889] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3978), repetition = true}}};
	v->arr[4891] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4892] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4892] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3977), repetition = true}}};
	v->arr[4894] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4895] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4895] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5936), repetition = true}}};
	v->arr[4897] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4898] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae369(v);
}

void	init_pae369(t_parse_action_entries *v)
{
	v->arr[4898] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2460), repetition = true}}};
	v->arr[4900] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4901] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4901] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5743), repetition = true}}};
	v->arr[4903] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4904] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4904] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2489), repetition = true}}};
	v->arr[4906] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4907] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4907] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2604), repetition = true}}};
	v->arr[4909] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4910] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae370(v);
}

// file funcs73.c
