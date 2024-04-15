/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs65.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae325(t_parse_action_entries *v)
{
	v->arr[4318] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4691), repetition = true}}};
	v->arr[4320] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4321] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4321] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (261), repetition = true}}};
	v->arr[4323] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4324] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4324] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (262), repetition = true}}};
	v->arr[4326] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4327] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4327] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (263), repetition = true}}};
	v->arr[4329] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4330] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae326(v);
}

void	init_pae326(t_parse_action_entries *v)
{
	v->arr[4330] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (235), repetition = true}}};
	v->arr[4332] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4333] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4333] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2309), repetition = true}}};
	v->arr[4335] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4336] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4336] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7621), repetition = true}}};
	v->arr[4338] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4339] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (655)}}};
	v->arr[4340] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4341] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (655)}}};
	v->arr[4342] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4343] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae327(v);
}

void	init_pae327(t_parse_action_entries *v)
{
	v->arr[4343] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3881), repetition = true}}};
	v->arr[4345] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4346] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4346] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3881), repetition = true}}};
	v->arr[4348] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4349] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__statement_not_pipeline, .child_count = \
	1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4350] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4351] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4921)}}};
	v->arr[4352] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4353] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4774)}}};
	v->arr[4354] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4355] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4941)}}};
	v->arr[4356] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae328(v);
}

void	init_pae328(t_parse_action_entries *v)
{
	v->arr[4357] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4901)}}};
	v->arr[4358] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4359] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4906)}}};
	v->arr[4360] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4361] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4640)}}};
	v->arr[4362] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4363] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4578)}}};
	v->arr[4364] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4365] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4626)}}};
	v->arr[4366] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4367] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4627)}}};
	v->arr[4368] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4369] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4633)}}};
	v->arr[4370] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4371] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_herestring_redirect, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	init_pae329(v);
}

void	init_pae329(t_parse_action_entries *v)
{
	v->arr[4372] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4373] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_herestring_redirect, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4374] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4375] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3896)}}};
	v->arr[4376] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4377] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3896)}}};
	v->arr[4378] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4379] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (625)}}};
	v->arr[4380] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4381] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (436)}}};
	v->arr[4382] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4383] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7514)}}};
	v->arr[4384] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4385] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (625)}}};
	init_pae330(v);
}

// file funcs65.c
