/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs179.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae895(t_parse_action_entries *v)
{
	v->arr[12267] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12268] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_command, child_count = 3, \
	.dynamic_precedence = 0, .production_id = 19}}};
	v->arr[12269] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12270] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_case_statement, .child_count = 7, \
	dynamic_precedence = 0, .production_id = 45}}};
	v->arr[12271] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12272] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_case_statement, .child_count = 7, \
	dynamic_precedence = 0, .production_id = 45}}};
	v->arr[12273] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[12274] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_pipeline_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12274] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (435), repetition = true}}};
	v->arr[12276] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12277] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5044)}}};
	v->arr[12278] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae896(v);
}

void	init_pae896(t_parse_action_entries *v)
{
	v->arr[12279] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6129)}}};
	v->arr[12280] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[12281] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12281] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3696), repetition = true}}};
	v->arr[12283] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[12284] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12284] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (825), repetition = true}}};
	v->arr[12286] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[12287] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12287] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6113), repetition = true}}};
	v->arr[12289] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[12290] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	init_pae897(v);
}

void	init_pae897(t_parse_action_entries *v)
{
	v->arr[12290] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5044), repetition = true}}};
	v->arr[12292] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12293] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_case_statement, .child_count = 6, \
	dynamic_precedence = 0, .production_id = 46}}};
	v->arr[12294] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12295] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_case_statement, .child_count = 6, \
	dynamic_precedence = 0, .production_id = 46}}};
	v->arr[12296] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12297] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_case_statement, .child_count = 6, \
	dynamic_precedence = 0, .production_id = 45}}};
	v->arr[12298] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12299] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_case_statement, .child_count = 6, \
	dynamic_precedence = 0, .production_id = 45}}};
	v->arr[12300] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12301] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3911)}}};
	v->arr[12302] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae898(v);
}

void	init_pae898(t_parse_action_entries *v)
{
	v->arr[12303] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3910)}}};
	v->arr[12304] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12305] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (442)}}};
	v->arr[12306] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[12307] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12307] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3815), repetition = true}}};
	v->arr[12309] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12310] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3815)}}};
	v->arr[12311] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12312] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__heredoc_command, .child_count = 1, \
	dynamic_precedence = 0, .production_id = 16}}};
	v->arr[12313] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12314] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__heredoc_command, .child_count = 1, \
	dynamic_precedence = 0, .production_id = 16}}};
	init_pae899(v);
}

void	init_pae899(t_parse_action_entries *v)
{
	v->arr[12315] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12316] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3989)}}};
	v->arr[12317] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12318] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4182)}}};
	v->arr[12319] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12320] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3992)}}};
	v->arr[12321] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12322] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4081)}}};
	v->arr[12323] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12324] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__heredoc_command, .child_count = 1, \
	dynamic_precedence = 0, .production_id = 17}}};
	v->arr[12325] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12326] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__heredoc_command, .child_count = 1, \
	dynamic_precedence = 0, .production_id = 17}}};
	v->arr[12327] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12328] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3870)}}};
	init_pae900(v);
}

// file funcs179.c
