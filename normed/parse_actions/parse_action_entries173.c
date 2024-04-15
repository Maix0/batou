/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs173.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae865(t_parse_action_entries *v)
{
	v->arr[11875] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11876] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3848)}}};
	v->arr[11877] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11878] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4762)}}};
	v->arr[11879] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11880] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1770)}}};
	v->arr[11881] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11882] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3851)}}};
	v->arr[11883] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11884] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1138)}}};
	v->arr[11885] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11886] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1657)}}};
	v->arr[11887] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11888] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1316)}}};
	v->arr[11889] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae866(v);
}

void	init_pae866(t_parse_action_entries *v)
{
	v->arr[11890] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1348)}}};
	v->arr[11891] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11892] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4325)}}};
	v->arr[11893] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11894] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (915)}}};
	v->arr[11895] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11896] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4300)}}};
	v->arr[11897] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11898] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1403)}}};
	v->arr[11899] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11900] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4497)}}};
	v->arr[11901] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11902] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1507)}}};
	v->arr[11903] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11904] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2348)}}};
	init_pae867(v);
}

void	init_pae867(t_parse_action_entries *v)
{
	v->arr[11905] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11906] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (924)}}};
	v->arr[11907] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11908] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1687)}}};
	v->arr[11909] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11910] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1450)}}};
	v->arr[11911] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11912] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 4, \
	.dynamic_precedence = 0, .production_id = 73}}};
	v->arr[11913] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11914] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1297)}}};
	v->arr[11915] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11916] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1302)}}};
	v->arr[11917] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11918] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae868(v);
}

void	init_pae868(t_parse_action_entries *v)
{
	v->arr[11918] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3647), repetition = true}}};
	v->arr[11920] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11921] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11921] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7349), repetition = true}}};
	v->arr[11923] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11924] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11924] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (779), repetition = true}}};
	v->arr[11926] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[11927] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11927] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6107), repetition = true}}};
	v->arr[11929] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11930] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_do_group, child_count = 3, \
	.dynamic_precedence = 0, .production_id = 0}}};
	init_pae869(v);
}

void	init_pae869(t_parse_action_entries *v)
{
	v->arr[11931] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11932] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_do_group, child_count = 3, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11933] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11934] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (486)}}};
	v->arr[11935] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11936] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1112)}}};
	v->arr[11937] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11938] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6239)}}};
	v->arr[11939] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11940] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5449)}}};
	v->arr[11941] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11942] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6153)}}};
	v->arr[11943] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11944] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6217)}}};
	init_pae870(v);
}

// file funcs173.c
