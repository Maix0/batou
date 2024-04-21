/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs90.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae450(t_parse_action_entries *v)
{
	v->arr[5977] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5978] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2889)}}};
	v->arr[5979] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5980] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3841)}}};
	v->arr[5981] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5982] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3861)}}};
	v->arr[5983] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5984] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__literal_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5984] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2094), .repetition = true}}};
	v->arr[5986] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5987] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3768)}}};
	v->arr[5988] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5989] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2237)}}};
	v->arr[5990] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae451(v);
}

void	init_pae451(t_parse_action_entries *v)
{
	v->arr[5991] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2160)}}};
	v->arr[5992] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5993] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (447)}}};
	v->arr[5994] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5995] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7274)}}};
	v->arr[5996] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5997] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7274)}}};
	v->arr[5998] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5999] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat1, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5999] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6664)}}};
	v->arr[6001] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6002] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__literal_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6002] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2182), .repetition = true}}};
	init_pae452(v);
}

void	init_pae452(t_parse_action_entries *v)
{
	v->arr[6004] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6005] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2215)}}};
	v->arr[6006] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6007] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3917)}}};
	v->arr[6008] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6009] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3913)}}};
	v->arr[6010] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6011] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__literal_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6011] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2237), .repetition = true}}};
	v->arr[6013] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6014] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3829)}}};
	v->arr[6015] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6016] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3829)}}};
	v->arr[6017] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae453(v);
}

void	init_pae453(t_parse_action_entries *v)
{
	v->arr[6018] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3774)}}};
	v->arr[6019] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6020] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3774)}}};
	v->arr[6021] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6022] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3146)}}};
	v->arr[6023] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6024] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2182)}}};
	v->arr[6025] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6026] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2659)}}};
	v->arr[6027] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6028] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6028] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3480), .repetition = true}}};
	v->arr[6030] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6031] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae454(v);
}

void	init_pae454(t_parse_action_entries *v)
{
	v->arr[6031] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4169), .repetition = true}}};
	v->arr[6033] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6034] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6034] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4166), .repetition = true}}};
	v->arr[6036] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6037] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6037] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5971), .repetition = true}}};
	v->arr[6039] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6040] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6040] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3476), .repetition = true}}};
	v->arr[6042] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6043] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae455(v);
}

// file funcs90.c
