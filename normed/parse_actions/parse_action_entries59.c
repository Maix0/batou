/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs59.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae295(t_parse_action_entries *v)
{
	v->arr[3927] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4061), repetition = true}}};
	v->arr[3929] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3930] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3930] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4054), repetition = true}}};
	v->arr[3932] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3933] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3933] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5926), repetition = true}}};
	v->arr[3935] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3936] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3936] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1916), repetition = true}}};
	v->arr[3938] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3939] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae296(v);
}

void	init_pae296(t_parse_action_entries *v)
{
	v->arr[3939] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5721), repetition = true}}};
	v->arr[3941] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3942] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3942] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1946), repetition = true}}};
	v->arr[3944] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3945] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3945] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6348), repetition = true}}};
	v->arr[3947] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3948] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3948] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4819), repetition = true}}};
	v->arr[3950] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3951] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae297(v);
}

void	init_pae297(t_parse_action_entries *v)
{
	v->arr[3951] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (374), repetition = true}}};
	v->arr[3953] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3954] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3954] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (410), repetition = true}}};
	v->arr[3956] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3957] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3957] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (247), repetition = true}}};
	v->arr[3959] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3960] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3960] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (272), repetition = true}}};
	v->arr[3962] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3963] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae298(v);
}

void	init_pae298(t_parse_action_entries *v)
{
	v->arr[3963] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1845), repetition = true}}};
	v->arr[3965] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3966] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3966] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7627), repetition = true}}};
	v->arr[3968] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3969] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2330)}}};
	v->arr[3970] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3971] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2342)}}};
	v->arr[3972] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3973] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (777)}}};
	v->arr[3974] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3975] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6696)}}};
	v->arr[3976] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3977] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2331)}}};
	init_pae299(v);
}

void	init_pae299(t_parse_action_entries *v)
{
	v->arr[3978] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3979] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[3979] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2211), repetition = true}}};
	v->arr[3981] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3982] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[3982] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4082), repetition = true}}};
	v->arr[3984] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3985] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[3985] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3672), repetition = true}}};
	v->arr[3987] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3988] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	init_pae300(v);
}

// file funcs59.c
