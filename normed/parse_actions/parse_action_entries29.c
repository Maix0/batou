/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs29.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae145(t_parse_action_entries *v)
{
	v->arr[1971] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1972] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1161)}}};
	v->arr[1973] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[1974] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1161)}}};
	v->arr[1975] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1976] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1976] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1093), .repetition = true}}};
	v->arr[1978] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1979] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1979] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4211), .repetition = true}}};
	v->arr[1981] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1982] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	init_pae146(v);
}

void	init_pae146(t_parse_action_entries *v)
{
	v->arr[1982] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3695), .repetition = true}}};
	v->arr[1984] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1985] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1985] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3787), .repetition = true}}};
	v->arr[1987] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1988] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1988] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4212), .repetition = true}}};
	v->arr[1990] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1991] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1991] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5884), .repetition = true}}};
	v->arr[1993] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1994] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	init_pae147(v);
}

void	init_pae147(t_parse_action_entries *v)
{
	v->arr[1994] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1144), .repetition = true}}};
	v->arr[1996] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1997] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1997] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5746), .repetition = true}}};
	v->arr[1999] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2000] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[2000] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1272), .repetition = true}}};
	v->arr[2002] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2003] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[2003] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6309), .repetition = true}}};
	v->arr[2005] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2006] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	init_pae148(v);
}

void	init_pae148(t_parse_action_entries *v)
{
	v->arr[2006] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4841), .repetition = true}}};
	v->arr[2008] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2009] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[2009] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (205), .repetition = true}}};
	v->arr[2011] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2012] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[2012] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (206), .repetition = true}}};
	v->arr[2014] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2015] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[2015] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (207), .repetition = true}}};
	v->arr[2017] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2018] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	init_pae149(v);
}

void	init_pae149(t_parse_action_entries *v)
{
	v->arr[2018] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (189), .repetition = true}}};
	v->arr[2020] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2021] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[2021] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7344), .repetition = true}}};
	v->arr[2023] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2024] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[2024] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1094), .repetition = true}}};
	v->arr[2026] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2027] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	v->arr[2027] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1521), .repetition = true}}};
	v->arr[2029] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2030] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat2, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 38}}};
	init_pae150(v);
}

// file funcs29.c
