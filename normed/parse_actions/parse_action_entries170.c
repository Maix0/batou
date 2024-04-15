/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs170.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae850(t_parse_action_entries *v)
{
	v->arr[11675] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11676] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11676] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (785), repetition = true}}};
	v->arr[11678] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11679] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11679] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4170), repetition = true}}};
	v->arr[11681] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[11682] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11682] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6135), repetition = true}}};
	v->arr[11684] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11685] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3712)}}};
	v->arr[11686] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae851(v);
}

void	init_pae851(t_parse_action_entries *v)
{
	v->arr[11687] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6705)}}};
	v->arr[11688] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11689] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3625)}}};
	v->arr[11690] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11691] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (739)}}};
	v->arr[11692] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11693] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3763)}}};
	v->arr[11694] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11695] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6145)}}};
	v->arr[11696] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11697] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3649)}}};
	v->arr[11698] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11699] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (785)}}};
	v->arr[11700] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11701] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4170)}}};
	init_pae852(v);
}

void	init_pae852(t_parse_action_entries *v)
{
	v->arr[11702] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11703] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6135)}}};
	v->arr[11704] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11705] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6668)}}};
	v->arr[11706] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[11707] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_variable_assignments_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11707] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6705), repetition = true}}};
	v->arr[11709] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11710] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3847)}}};
	v->arr[11711] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11712] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3846)}}};
	v->arr[11713] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11714] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3968)}}};
	v->arr[11715] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae853(v);
}

void	init_pae853(t_parse_action_entries *v)
{
	v->arr[11716] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3972)}}};
	v->arr[11717] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11718] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3993)}}};
	v->arr[11719] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11720] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3996)}}};
	v->arr[11721] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11722] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3845)}}};
	v->arr[11723] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11724] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3844)}}};
	v->arr[11725] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11726] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_test_command, child_count = 3, \
	.dynamic_precedence = 0, .production_id = 30}}};
	v->arr[11727] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11728] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_test_command, child_count = 3, \
	.dynamic_precedence = 0, .production_id = 30}}};
	init_pae854(v);
}

void	init_pae854(t_parse_action_entries *v)
{
	v->arr[11729] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11730] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_compound_statement, .child_count = 3, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11731] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11732] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_compound_statement, .child_count = 3, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11733] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11734] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_if_statement, child_count = 5, \
	.dynamic_precedence = 0, .production_id = 44}}};
	v->arr[11735] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11736] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_if_statement, child_count = 5, \
	.dynamic_precedence = 0, .production_id = 44}}};
	v->arr[11737] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11738] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3700)}}};
	v->arr[11739] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11740] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_do_group, child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	init_pae855(v);
}

// file funcs170.c
