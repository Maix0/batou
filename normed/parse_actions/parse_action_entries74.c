/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs74.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae370(t_parse_action_entries *v)
{
	v->arr[4910] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6283), .repetition = true}}};
	v->arr[4912] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4913] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4913] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4836), .repetition = true}}};
	v->arr[4915] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4916] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4916] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (147), .repetition = true}}};
	v->arr[4918] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4919] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4919] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (156), .repetition = true}}};
	v->arr[4921] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4922] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae371(v);
}

void	init_pae371(t_parse_action_entries *v)
{
	v->arr[4922] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (157), .repetition = true}}};
	v->arr[4924] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4925] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4925] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (100), .repetition = true}}};
	v->arr[4927] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4928] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4928] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2490), .repetition = true}}};
	v->arr[4930] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4931] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4931] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7637), .repetition = true}}};
	v->arr[4933] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4934] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3947)}}};
	init_pae372(v);
}

void	init_pae372(t_parse_action_entries *v)
{
	v->arr[4935] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4936] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3947)}}};
	v->arr[4937] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4938] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4938] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3947), .repetition = true}}};
	v->arr[4940] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[4941] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4941] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3947), .repetition = true}}};
	v->arr[4943] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4944] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2489)}}};
	v->arr[4945] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4946] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3978)}}};
	v->arr[4947] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae373(v);
}

void	init_pae373(t_parse_action_entries *v)
{
	v->arr[4948] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3977)}}};
	v->arr[4949] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4950] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5936)}}};
	v->arr[4951] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4952] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2460)}}};
	v->arr[4953] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4954] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5743)}}};
	v->arr[4955] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4956] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2489)}}};
	v->arr[4957] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4958] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2604)}}};
	v->arr[4959] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4960] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6283)}}};
	v->arr[4961] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4962] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4836)}}};
	init_pae374(v);
}

void	init_pae374(t_parse_action_entries *v)
{
	v->arr[4963] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4964] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (147)}}};
	v->arr[4965] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4966] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (156)}}};
	v->arr[4967] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4968] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (157)}}};
	v->arr[4969] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4970] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (100)}}};
	v->arr[4971] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4972] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2490)}}};
	v->arr[4973] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4974] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7637)}}};
	v->arr[4975] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4976] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2572)}}};
	v->arr[4977] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae375(v);
}

// file funcs74.c
