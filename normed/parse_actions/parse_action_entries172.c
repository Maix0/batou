/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs172.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae860(t_parse_action_entries *v)
{
	v->arr[11808] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11809] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5015)}}};
	v->arr[11810] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11811] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2949)}}};
	v->arr[11812] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11813] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6114)}}};
	v->arr[11814] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11815] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5858)}}};
	v->arr[11816] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11817] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3254)}}};
	v->arr[11818] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11819] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6323)}}};
	v->arr[11820] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11821] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4791)}}};
	v->arr[11822] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae861(v);
}

void	init_pae861(t_parse_action_entries *v)
{
	v->arr[11823] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (268)}}};
	v->arr[11824] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11825] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (269)}}};
	v->arr[11826] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11827] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (270)}}};
	v->arr[11828] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11829] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_test_command, child_count = 3, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11830] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11831] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_test_command, child_count = 3, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11832] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11833] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1499)}}};
	v->arr[11834] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11835] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6106)}}};
	init_pae862(v);
}

void	init_pae862(t_parse_action_entries *v)
{
	v->arr[11836] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11837] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 5, \
	.dynamic_precedence = 0, .production_id = 99}}};
	v->arr[11838] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11839] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6124)}}};
	v->arr[11840] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11841] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (511)}}};
	v->arr[11842] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11843] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_if_statement, child_count = 7, \
	.dynamic_precedence = 0, .production_id = 44}}};
	v->arr[11844] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11845] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_if_statement, child_count = 7, \
	.dynamic_precedence = 0, .production_id = 44}}};
	v->arr[11846] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11847] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4435)}}};
	v->arr[11848] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae863(v);
}

void	init_pae863(t_parse_action_entries *v)
{
	v->arr[11849] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4425)}}};
	v->arr[11850] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11851] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6126)}}};
	v->arr[11852] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11853] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1682)}}};
	v->arr[11854] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11855] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1510)}}};
	v->arr[11856] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11857] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6115)}}};
	v->arr[11858] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11859] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_pipeline_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11859] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (438), repetition = true}}};
	v->arr[11861] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11862] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae864(v);
}

void	init_pae864(t_parse_action_entries *v)
{
	v->arr[11862] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3684), repetition = true}}};
	v->arr[11864] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11865] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11865] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (790), repetition = true}}};
	v->arr[11867] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11868] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11868] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4125), repetition = true}}};
	v->arr[11870] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[11871] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11871] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6136), repetition = true}}};
	v->arr[11873] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11874] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3492)}}};
	init_pae865(v);
}

// file funcs172.c
