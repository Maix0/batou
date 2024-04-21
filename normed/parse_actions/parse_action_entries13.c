/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs13.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae65(t_parse_action_entries *v)
{
	v->arr[920] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7392), .repetition = true}}};
	v->arr[922] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[923] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[923] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (154), .repetition = true}}};
	v->arr[925] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[926] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[926] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (623), .repetition = true}}};
	v->arr[928] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[929] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[929] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4), .repetition = true}}};
	v->arr[931] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[932] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	init_pae66(v);
}

void	init_pae66(t_parse_action_entries *v)
{
	v->arr[932] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1730), .repetition = true}}};
	v->arr[934] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[935] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[935] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (602), .repetition = true}}};
	v->arr[937] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[938] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[938] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (718), .repetition = true}}};
	v->arr[940] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[941] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[941] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (759), .repetition = true}}};
	v->arr[943] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[944] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	init_pae67(v);
}

void	init_pae67(t_parse_action_entries *v)
{
	v->arr[944] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4030), .repetition = true}}};
	v->arr[946] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[947] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[947] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4154), .repetition = true}}};
	v->arr[949] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[950] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[950] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4155), .repetition = true}}};
	v->arr[952] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[953] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[953] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5968), .repetition = true}}};
	v->arr[955] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[956] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	init_pae68(v);
}

void	init_pae68(t_parse_action_entries *v)
{
	v->arr[956] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1105), .repetition = true}}};
	v->arr[958] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[959] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[959] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5849), .repetition = true}}};
	v->arr[961] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[962] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[962] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1078), .repetition = true}}};
	v->arr[964] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[965] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[965] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1085), .repetition = true}}};
	v->arr[967] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[968] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	init_pae69(v);
}

void	init_pae69(t_parse_action_entries *v)
{
	v->arr[968] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6359), .repetition = true}}};
	v->arr[970] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[971] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[971] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4814), .repetition = true}}};
	v->arr[973] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[974] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[974] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (148), .repetition = true}}};
	v->arr[976] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[977] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[977] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (150), .repetition = true}}};
	v->arr[979] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[980] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__statements_repeat1, .child_count = 2, .dynamic_precedence = 0, \
	.production_id = 0}}};
	init_pae70(v);
}

// file funcs13.c
