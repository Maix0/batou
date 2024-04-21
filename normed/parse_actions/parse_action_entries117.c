/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs117.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae585(t_parse_action_entries *v)
{
	v->arr[7821] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3511)}}};
	v->arr[7822] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7823] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6379)}}};
	v->arr[7824] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7825] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6379)}}};
	v->arr[7826] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7827] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_regex_replacement, \
	.child_count = 3, .dynamic_precedence = 0, .production_id = 51}}};
	v->arr[7828] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7829] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6784)}}};
	v->arr[7830] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7831] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6372)}}};
	v->arr[7832] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[7833] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__literal_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	init_pae586(v);
}

void	init_pae586(t_parse_action_entries *v)
{
	v->arr[7833] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3511), .repetition = true}}};
	v->arr[7835] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7836] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6763)}}};
	v->arr[7837] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7838] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6763)}}};
	v->arr[7839] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[7840] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_case_statement_repeat1, .child_count \
	= 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7840] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6328), .repetition = true}}};
	v->arr[7842] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[7843] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_case_statement_repeat1, .child_count \
	= 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7843] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3986), .repetition = true}}};
	v->arr[7845] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[7846] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_case_statement_repeat1, .child_count \
	= 2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae587(v);
}

void	init_pae587(t_parse_action_entries *v)
{
	v->arr[7846] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3609), .repetition = true}}};
	v->arr[7848] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[7849] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_case_statement_repeat1, .child_count \
	= 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7849] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3985), .repetition = true}}};
	v->arr[7851] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[7852] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_case_statement_repeat1, .child_count \
	= 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7852] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5969), .repetition = true}}};
	v->arr[7854] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[7855] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_case_statement_repeat1, .child_count \
	= 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7855] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6326), .repetition = true}}};
	v->arr[7857] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[7858] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_case_statement_repeat1, .child_count \
	= 2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae588(v);
}

void	init_pae588(t_parse_action_entries *v)
{
	v->arr[7858] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5708), .repetition = true}}};
	v->arr[7860] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[7861] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_case_statement_repeat1, .child_count \
	= 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7861] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6328), .repetition = true}}};
	v->arr[7863] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[7864] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_case_statement_repeat1, .child_count \
	= 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7864] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6523), .repetition = true}}};
	v->arr[7866] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[7867] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_case_statement_repeat1, .child_count \
	= 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7867] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6291), .repetition = true}}};
	v->arr[7869] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[7870] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_case_statement_repeat1, .child_count \
	= 2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae589(v);
}

void	init_pae589(t_parse_action_entries *v)
{
	v->arr[7870] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4848), .repetition = true}}};
	v->arr[7872] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[7873] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_case_statement_repeat1, .child_count \
	= 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7873] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (134), .repetition = true}}};
	v->arr[7875] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[7876] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_case_statement_repeat1, .child_count \
	= 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7876] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (135), .repetition = true}}};
	v->arr[7878] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[7879] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_case_statement_repeat1, .child_count \
	= 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7879] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (138), .repetition = true}}};
	v->arr[7881] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[7882] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_case_statement_repeat1, .child_count \
	= 2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae590(v);
}

// file funcs117.c
