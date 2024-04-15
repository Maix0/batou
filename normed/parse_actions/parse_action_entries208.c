/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs208.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae1040(t_parse_action_entries *v)
{
	v->arr[14300] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14301] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1824)}}};
	v->arr[14302] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14303] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (55)}}};
	v->arr[14304] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14305] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (173)}}};
	v->arr[14306] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14307] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (52)}}};
	v->arr[14308] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14309] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (56)}}};
	v->arr[14310] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14311] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (60)}}};
	v->arr[14312] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14313] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (58)}}};
	v->arr[14314] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae1041(v);
}

void	init_pae1041(t_parse_action_entries *v)
{
	v->arr[14315] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_string_repeat1, .child_count = 3, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14316] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14317] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (49)}}};
	v->arr[14318] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14319] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (57)}}};
	v->arr[14320] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14321] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3462)}}};
	v->arr[14322] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14323] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5833)}}};
	v->arr[14324] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14325] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_regex_replacement, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 12}}};
	v->arr[14326] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14327] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (211)}}};
	init_pae1042(v);
}

void	init_pae1042(t_parse_action_entries *v)
{
	v->arr[14328] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14329] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (212)}}};
	v->arr[14330] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14331] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (213)}}};
	v->arr[14332] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14333] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6749)}}};
	v->arr[14334] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14335] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3776)}}};
	v->arr[14336] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14337] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3776)}}};
	v->arr[14338] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14339] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2353)}}};
	v->arr[14340] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14341] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7259)}}};
	v->arr[14342] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1043(v);
}

void	init_pae1043(t_parse_action_entries *v)
{
	v->arr[14343] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7259)}}};
	v->arr[14344] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14345] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6361)}}};
	v->arr[14346] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14347] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5815)}}};
	v->arr[14348] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14349] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6194)}}};
	v->arr[14350] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14351] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_regex, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 12}}};
	v->arr[14352] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14353] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6361)}}};
	v->arr[14354] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14355] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6194)}}};
	v->arr[14356] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae1044(v);
}

void	init_pae1044(t_parse_action_entries *v)
{
	v->arr[14357] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2361)}}};
	v->arr[14358] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14359] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6884)}}};
	v->arr[14360] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14361] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6884)}}};
	v->arr[14362] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14363] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2360)}}};
	v->arr[14364] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14365] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6882)}}};
	v->arr[14366] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14367] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6882)}}};
	v->arr[14368] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14369] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4160)}}};
	v->arr[14370] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[14371] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__expansion_regex_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae1045(v);
}

// file funcs208.c
