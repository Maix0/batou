/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs195.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae975(t_parse_action_entries *v)
{
	v->arr[13336] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6127), repetition = true}}};
	v->arr[13338] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[13339] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_string_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[13339] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4652), repetition = true}}};
	v->arr[13341] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[13342] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_string_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[13342] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (196), repetition = true}}};
	v->arr[13344] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[13345] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_string_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[13345] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (197), repetition = true}}};
	v->arr[13347] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[13348] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_string_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	init_pae976(v);
}

void	init_pae976(t_parse_action_entries *v)
{
	v->arr[13348] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (198), repetition = true}}};
	v->arr[13350] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13351] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5927)}}};
	v->arr[13352] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13353] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2666)}}};
	v->arr[13354] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13355] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5931)}}};
	v->arr[13356] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13357] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2652)}}};
	v->arr[13358] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13359] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5933)}}};
	v->arr[13360] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13361] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4436)}}};
	v->arr[13362] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13363] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6020)}}};
	init_pae977(v);
}

void	init_pae977(t_parse_action_entries *v)
{
	v->arr[13364] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13365] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1684)}}};
	v->arr[13366] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13367] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5939)}}};
	v->arr[13368] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13369] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4434)}}};
	v->arr[13370] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13371] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5941)}}};
	v->arr[13372] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13373] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4426)}}};
	v->arr[13374] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13375] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5943)}}};
	v->arr[13376] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13377] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4424)}}};
	v->arr[13378] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae978(v);
}

void	init_pae978(t_parse_action_entries *v)
{
	v->arr[13379] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5945)}}};
	v->arr[13380] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13381] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1518)}}};
	v->arr[13382] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13383] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5951)}}};
	v->arr[13384] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13385] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1676)}}};
	v->arr[13386] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13387] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5953)}}};
	v->arr[13388] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13389] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4770)}}};
	v->arr[13390] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13391] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5965)}}};
	v->arr[13392] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13393] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2571)}}};
	init_pae979(v);
}

void	init_pae979(t_parse_action_entries *v)
{
	v->arr[13394] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13395] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5987)}}};
	v->arr[13396] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13397] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2343)}}};
	v->arr[13398] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13399] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6003)}}};
	v->arr[13400] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13401] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1022)}}};
	v->arr[13402] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13403] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5957)}}};
	v->arr[13404] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13405] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4753)}}};
	v->arr[13406] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[13407] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6056)}}};
	v->arr[13408] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae980(v);
}

// file funcs195.c
