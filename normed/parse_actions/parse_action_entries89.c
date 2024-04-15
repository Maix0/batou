/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs89.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae445(t_parse_action_entries *v)
{
	v->arr[5912] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5913] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5584)}}};
	v->arr[5914] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5915] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4094)}}};
	v->arr[5916] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5917] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2374)}}};
	v->arr[5918] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5919] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1312)}}};
	v->arr[5920] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5921] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3837)}}};
	v->arr[5922] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5923] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3767)}}};
	v->arr[5924] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5925] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3773)}}};
	v->arr[5926] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae446(v);
}

void	init_pae446(t_parse_action_entries *v)
{
	v->arr[5927] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1648)}}};
	v->arr[5928] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5929] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1835)}}};
	v->arr[5930] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5931] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_negated_command, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5932] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5933] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_negated_command, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5934] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5935] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5935] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3837), repetition = true}}};
	v->arr[5937] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5938] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae447(v);
}

void	init_pae447(t_parse_action_entries *v)
{
	v->arr[5938] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3837), repetition = true}}};
	v->arr[5940] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5941] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (445)}}};
	v->arr[5942] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5943] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__heredoc_expression, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 66}}};
	v->arr[5944] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5945] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__heredoc_pipeline, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5946] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5947] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3837)}}};
	v->arr[5948] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5949] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4038)}}};
	v->arr[5950] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5951] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3935)}}};
	init_pae448(v);
}

void	init_pae448(t_parse_action_entries *v)
{
	v->arr[5952] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5953] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_command_name, child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5953] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7513)}}};
	v->arr[5955] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5956] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3931)}}};
	v->arr[5957] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5958] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5958] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3766), repetition = true}}};
	v->arr[5960] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5961] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5961] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3766), repetition = true}}};
	v->arr[5963] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae449(v);
}

void	init_pae449(t_parse_action_entries *v)
{
	v->arr[5964] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4003)}}};
	v->arr[5965] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5966] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5966] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1951), repetition = true}}};
	v->arr[5968] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5969] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1994)}}};
	v->arr[5970] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5971] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1951)}}};
	v->arr[5972] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5973] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2953)}}};
	v->arr[5974] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5975] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5975] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1994), repetition = true}}};
	init_pae450(v);
}

// file funcs89.c
