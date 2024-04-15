/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs66.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae330(t_parse_action_entries *v)
{
	v->arr[4386] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4387] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat1, .child_count = 1, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4387] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6619)}}};
	v->arr[4389] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4390] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3940)}}};
	v->arr[4391] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4392] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3984)}}};
	v->arr[4393] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4394] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3988)}}};
	v->arr[4395] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4396] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2362)}}};
	v->arr[4397] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4398] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5730)}}};
	v->arr[4399] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae331(v);
}

void	init_pae331(t_parse_action_entries *v)
{
	v->arr[4400] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2363)}}};
	v->arr[4401] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4402] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2363)}}};
	v->arr[4403] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4404] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4404] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3940), repetition = true}}};
	v->arr[4406] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4407] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4407] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3940), repetition = true}}};
	v->arr[4409] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4410] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (624)}}};
	v->arr[4411] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4412] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (624)}}};
	init_pae332(v);
}

void	init_pae332(t_parse_action_entries *v)
{
	v->arr[4413] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4414] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3940)}}};
	v->arr[4415] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4416] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4416] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2369), repetition = true}}};
	v->arr[4418] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4419] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4419] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3983), repetition = true}}};
	v->arr[4421] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4422] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4422] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3982), repetition = true}}};
	v->arr[4424] = (t_pae){.entry = {.count = 2, .reusable = false}};
	init_pae333(v);
}

void	init_pae333(t_parse_action_entries *v)
{
	v->arr[4425] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4425] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5950), repetition = true}}};
	v->arr[4427] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4428] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4428] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2396), repetition = true}}};
	v->arr[4430] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4431] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4431] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5725), repetition = true}}};
	v->arr[4433] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4434] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4434] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2369), repetition = true}}};
	init_pae334(v);
}

void	init_pae334(t_parse_action_entries *v)
{
	v->arr[4436] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4437] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4437] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2507), repetition = true}}};
	v->arr[4439] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4440] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4440] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6313), repetition = true}}};
	v->arr[4442] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4443] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4443] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4839), repetition = true}}};
	v->arr[4445] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4446] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae335(v);
}

// file funcs66.c
