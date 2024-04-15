/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs180.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae900(t_parse_action_entries *v)
{
	v->arr[12329] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12330] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4099)}}};
	v->arr[12331] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[12332] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_pipeline_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12332] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (437), repetition = true}}};
	v->arr[12334] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[12335] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_pipeline_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12335] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (442), repetition = true}}};
	v->arr[12337] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12338] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (448)}}};
	v->arr[12339] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12340] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (437)}}};
	v->arr[12341] = (t_pae){.entry = {.count = 2, .reusable = false}};
	init_pae901(v);
}

void	init_pae901(t_parse_action_entries *v)
{
	v->arr[12342] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_pipeline_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12342] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (448), repetition = true}}};
	v->arr[12344] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12345] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3618)}}};
	v->arr[12346] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12347] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1111)}}};
	v->arr[12348] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12349] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6091)}}};
	v->arr[12350] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12351] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 6, \
	.dynamic_precedence = 0, .production_id = 153}}};
	v->arr[12352] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12353] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 6, \
	.dynamic_precedence = 0, .production_id = 153}}};
	init_pae902(v);
}

void	init_pae902(t_parse_action_entries *v)
{
	v->arr[12354] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12355] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 6, \
	dynamic_precedence = 0, .production_id = 109}}};
	v->arr[12356] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12357] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 5, \
	.dynamic_precedence = 0, .production_id = 134}}};
	v->arr[12358] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12359] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 5, \
	.dynamic_precedence = 0, .production_id = 134}}};
	v->arr[12360] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12361] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 79}}};
	v->arr[12362] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12363] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 6, \
	.dynamic_precedence = 0, .production_id = 155}}};
	v->arr[12364] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12365] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 6, \
	.dynamic_precedence = 0, .production_id = 155}}};
	init_pae903(v);
}

void	init_pae903(t_parse_action_entries *v)
{
	v->arr[12366] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12367] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 6, \
	dynamic_precedence = 0, .production_id = 112}}};
	v->arr[12368] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12369] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 4, \
	.dynamic_precedence = 0, .production_id = 105}}};
	v->arr[12370] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12371] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 4, \
	.dynamic_precedence = 0, .production_id = 105}}};
	v->arr[12372] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12373] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 4, \
	dynamic_precedence = 0, .production_id = 79}}};
	v->arr[12374] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12375] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3276)}}};
	v->arr[12376] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12377] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 4, \
	.dynamic_precedence = 0, .production_id = 115}}};
	init_pae904(v);
}

void	init_pae904(t_parse_action_entries *v)
{
	v->arr[12378] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12379] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 4, \
	.dynamic_precedence = 0, .production_id = 115}}};
	v->arr[12380] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12381] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 4, \
	dynamic_precedence = 0, .production_id = 83}}};
	v->arr[12382] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12383] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 4, \
	.dynamic_precedence = 0, .production_id = 113}}};
	v->arr[12384] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12385] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 4, \
	.dynamic_precedence = 0, .production_id = 113}}};
	v->arr[12386] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12387] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 4, \
	dynamic_precedence = 0, .production_id = 60}}};
	v->arr[12388] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[12389] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_variable_assignments_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae905(v);
}

// file funcs180.c
