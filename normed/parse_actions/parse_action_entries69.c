/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs69.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae345(t_parse_action_entries *v)
{
	v->arr[4576] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3896), repetition = true}}};
	v->arr[4578] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4579] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4579] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3896), repetition = true}}};
	v->arr[4581] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4582] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4582] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2438), repetition = true}}};
	v->arr[4584] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4585] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4585] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3945), repetition = true}}};
	v->arr[4587] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4588] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae346(v);
}

void	init_pae346(t_parse_action_entries *v)
{
	v->arr[4588] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3944), repetition = true}}};
	v->arr[4590] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4591] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4591] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5883), repetition = true}}};
	v->arr[4593] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4594] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4594] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2356), repetition = true}}};
	v->arr[4596] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4597] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4597] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5779), repetition = true}}};
	v->arr[4599] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4600] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae347(v);
}

void	init_pae347(t_parse_action_entries *v)
{
	v->arr[4600] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2438), repetition = true}}};
	v->arr[4602] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4603] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4603] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2560), repetition = true}}};
	v->arr[4605] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4606] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4606] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6349), repetition = true}}};
	v->arr[4608] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4609] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4609] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4826), repetition = true}}};
	v->arr[4611] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4612] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae348(v);
}

void	init_pae348(t_parse_action_entries *v)
{
	v->arr[4612] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (178), repetition = true}}};
	v->arr[4614] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4615] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4615] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (183), repetition = true}}};
	v->arr[4617] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4618] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4618] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (191), repetition = true}}};
	v->arr[4620] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4621] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4621] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (115), repetition = true}}};
	v->arr[4623] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4624] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae349(v);
}

void	init_pae349(t_parse_action_entries *v)
{
	v->arr[4624] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2437), repetition = true}}};
	v->arr[4626] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4627] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4627] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7639), repetition = true}}};
	v->arr[4629] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4630] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2487)}}};
	v->arr[4631] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4632] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3797)}}};
	v->arr[4633] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4634] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3793)}}};
	v->arr[4635] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4636] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5876)}}};
	v->arr[4637] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4638] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2458)}}};
	init_pae350(v);
}

// file funcs69.c
