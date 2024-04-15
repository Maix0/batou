/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs209.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae1045(t_parse_action_entries *v)
{
	v->arr[14371] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6361), repetition = true}}};
	v->arr[14373] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[14374] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__expansion_regex_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14374] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5815), repetition = true}}};
	v->arr[14376] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[14377] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__expansion_regex_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14377] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6194), repetition = true}}};
	v->arr[14379] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14380] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__expansion_regex_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14381] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[14382] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__expansion_regex_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae1046(v);
}

void	init_pae1046(t_parse_action_entries *v)
{
	v->arr[14382] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6361), repetition = true}}};
	v->arr[14384] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[14385] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__expansion_regex_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14385] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6194), repetition = true}}};
	v->arr[14387] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14388] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4813)}}};
	v->arr[14389] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14390] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6215)}}};
	v->arr[14391] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14392] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6212)}}};
	v->arr[14393] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14394] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6190)}}};
	v->arr[14395] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14396] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_regex, .child_count = 1, \
	dynamic_precedence = 0, .production_id = 12}}};
	init_pae1047(v);
}

void	init_pae1047(t_parse_action_entries *v)
{
	v->arr[14397] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14398] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6190)}}};
	v->arr[14399] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14400] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2414)}}};
	v->arr[14401] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14402] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6948)}}};
	v->arr[14403] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14404] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6948)}}};
	v->arr[14405] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14406] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2376)}}};
	v->arr[14407] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14408] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7055)}}};
	v->arr[14409] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14410] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7055)}}};
	v->arr[14411] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae1048(v);
}

void	init_pae1048(t_parse_action_entries *v)
{
	v->arr[14412] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2416)}}};
	v->arr[14413] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14414] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6950)}}};
	v->arr[14415] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14416] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6950)}}};
	v->arr[14417] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14418] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4087)}}};
	v->arr[14419] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14420] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2349)}}};
	v->arr[14421] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14422] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7258)}}};
	v->arr[14423] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14424] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7258)}}};
	v->arr[14425] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14426] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2379)}}};
	init_pae1049(v);
}

void	init_pae1049(t_parse_action_entries *v)
{
	v->arr[14427] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14428] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7057)}}};
	v->arr[14429] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14430] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7057)}}};
	v->arr[14431] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[14432] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14432] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3776), repetition = true}}};
	v->arr[14434] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[14435] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14435] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3776), repetition = true}}};
	v->arr[14437] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14438] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_max_length_expression, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	init_pae1050(v);
}

// file funcs209.c
