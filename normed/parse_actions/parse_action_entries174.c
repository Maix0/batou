/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs174.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae870(t_parse_action_entries *v)
{
	v->arr[11945] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11946] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 3, \
	.dynamic_precedence = 0, .production_id = 57}}};
	v->arr[11947] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11948] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11948] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3661), repetition = true}}};
	v->arr[11950] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11951] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11951] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (829), repetition = true}}};
	v->arr[11953] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[11954] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11954] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6115), repetition = true}}};
	init_pae871(v);
}

void	init_pae871(t_parse_action_entries *v)
{
	v->arr[11956] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11957] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_test_command, child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11958] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[11959] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_test_command, child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11960] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11961] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1874)}}};
	v->arr[11962] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11963] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2674)}}};
	v->arr[11964] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11965] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2477)}}};
	v->arr[11966] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11967] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5523)}}};
	v->arr[11968] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11969] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2630)}}};
	init_pae872(v);
}

void	init_pae872(t_parse_action_entries *v)
{
	v->arr[11970] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11971] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11971] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3645), repetition = true}}};
	v->arr[11973] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[11974] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11974] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (783), repetition = true}}};
	v->arr[11976] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[11977] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[11977] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6106), repetition = true}}};
	v->arr[11979] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11980] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2904)}}};
	v->arr[11981] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae873(v);
}

void	init_pae873(t_parse_action_entries *v)
{
	v->arr[11982] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3211)}}};
	v->arr[11983] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11984] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (844)}}};
	v->arr[11985] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11986] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 6, \
	.dynamic_precedence = 0, .production_id = 131}}};
	v->arr[11987] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11988] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 4, \
	.dynamic_precedence = 0, .production_id = 69}}};
	v->arr[11989] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11990] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 4, \
	.dynamic_precedence = 0, .production_id = 71}}};
	v->arr[11991] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11992] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2737)}}};
	v->arr[11993] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11994] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6107)}}};
	init_pae874(v);
}

void	init_pae874(t_parse_action_entries *v)
{
	v->arr[11995] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11996] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2657)}}};
	v->arr[11997] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[11998] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2645)}}};
	v->arr[11999] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12000] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5662)}}};
	v->arr[12001] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12002] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_if_statement, child_count = 6, \
	.dynamic_precedence = 0, .production_id = 44}}};
	v->arr[12003] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12004] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_if_statement, child_count = 6, \
	.dynamic_precedence = 0, .production_id = 44}}};
	v->arr[12005] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12006] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3221)}}};
	v->arr[12007] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12008] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__for_body, child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	init_pae875(v);
}

// file funcs174.c
