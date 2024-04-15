/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs182.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae910(t_parse_action_entries *v)
{
	v->arr[12453] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12454] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4159)}}};
	v->arr[12455] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[12456] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12456] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3633), repetition = true}}};
	v->arr[12458] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[12459] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12459] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (908), repetition = true}}};
	v->arr[12461] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[12462] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12462] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4188), repetition = true}}};
	v->arr[12464] = (t_pae){.entry = {.count = 2, .reusable = true}};
	init_pae911(v);
}

void	init_pae911(t_parse_action_entries *v)
{
	v->arr[12465] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12465] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6120), repetition = true}}};
	v->arr[12467] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12468] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 5, \
	.dynamic_precedence = 0, .production_id = 144}}};
	v->arr[12469] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12470] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 5, \
	.dynamic_precedence = 0, .production_id = 144}}};
	v->arr[12471] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12472] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 83}}};
	v->arr[12473] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12474] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3762)}}};
	v->arr[12475] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12476] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3405)}}};
	init_pae912(v);
}

void	init_pae912(t_parse_action_entries *v)
{
	v->arr[12477] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12478] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3404)}}};
	v->arr[12479] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12480] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3403)}}};
	v->arr[12481] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[12482] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12482] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3870), repetition = true}}};
	v->arr[12484] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12485] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3402)}}};
	v->arr[12486] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12487] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3399)}}};
	v->arr[12488] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12489] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3395)}}};
	v->arr[12490] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae913(v);
}

void	init_pae913(t_parse_action_entries *v)
{
	v->arr[12491] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 5, \
	.dynamic_precedence = 0, .production_id = 138}}};
	v->arr[12492] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12493] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_case_item, child_count = 5, \
	.dynamic_precedence = 0, .production_id = 138}}};
	v->arr[12494] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12495] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_last_case_item, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 109}}};
	v->arr[12496] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12497] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3394)}}};
	v->arr[12498] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12499] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3689)}}};
	v->arr[12500] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12501] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3689)}}};
	v->arr[12502] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12503] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1117)}}};
	init_pae914(v);
}

void	init_pae914(t_parse_action_entries *v)
{
	v->arr[12504] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12505] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3703)}}};
	v->arr[12506] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12507] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6088)}}};
	v->arr[12508] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12509] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3392)}}};
	v->arr[12510] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12511] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3390)}}};
	v->arr[12512] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12513] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3387)}}};
	v->arr[12514] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12515] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3384)}}};
	v->arr[12516] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12517] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3381)}}};
	v->arr[12518] = (t_pae){.entry = {.count = 2, .reusable = false}};
	init_pae915(v);
}

// file funcs182.c
