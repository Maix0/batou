/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs44.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae220(t_parse_action_entries *v)
{
	v->arr[2920] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (307), repetition = true}}};
	v->arr[2922] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2923] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2923] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (306), repetition = true}}};
	v->arr[2925] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2926] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2926] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (377), repetition = true}}};
	v->arr[2928] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2929] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2929] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (633), repetition = true}}};
	v->arr[2931] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2932] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae221(v);
}

void	init_pae221(t_parse_action_entries *v)
{
	v->arr[2932] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1325), repetition = true}}};
	v->arr[2934] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2935] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2935] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7663), repetition = true}}};
	v->arr[2937] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2938] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4247)}}};
	v->arr[2939] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2940] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4231)}}};
	v->arr[2941] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2942] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (938)}}};
	v->arr[2943] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2944] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1417)}}};
	v->arr[2945] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2946] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1418)}}};
	init_pae222(v);
}

void	init_pae222(t_parse_action_entries *v)
{
	v->arr[2947] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2948] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1418)}}};
	v->arr[2949] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2950] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1709)}}};
	v->arr[2951] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2952] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1701)}}};
	v->arr[2953] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2954] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1701)}}};
	v->arr[2955] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2956] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1253)}}};
	v->arr[2957] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2958] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1252)}}};
	v->arr[2959] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2960] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1252)}}};
	v->arr[2961] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae223(v);
}

void	init_pae223(t_parse_action_entries *v)
{
	v->arr[2962] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1717)}}};
	v->arr[2963] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2964] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1427)}}};
	v->arr[2965] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2966] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5796)}}};
	v->arr[2967] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2968] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1428)}}};
	v->arr[2969] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2970] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1428)}}};
	v->arr[2971] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2972] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (852)}}};
	v->arr[2973] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2974] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2974] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1399), repetition = true}}};
	init_pae224(v);
}

void	init_pae224(t_parse_action_entries *v)
{
	v->arr[2976] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2977] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2977] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4062), repetition = true}}};
	v->arr[2979] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2980] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2980] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4063), repetition = true}}};
	v->arr[2982] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2983] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2983] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5930), repetition = true}}};
	v->arr[2985] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2986] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae225(v);
}

// file funcs44.c
