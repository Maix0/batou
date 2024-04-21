/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs217.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae1085(t_parse_action_entries *v)
{
	v->arr[14918] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14919] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (5215)}}};
	v->arr[14920] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14921] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (5283)}}};
	v->arr[14922] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14923] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (5282)}}};
	v->arr[14924] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[14925] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__literal_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14925] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6581), .repetition = true}}};
	v->arr[14927] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14928] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3497)}}};
	v->arr[14929] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14930] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (2090)}}};
	v->arr[14931] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1086(v);
}

void	init_pae1086(t_parse_action_entries *v)
{
	v->arr[14932] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4796)}}};
	v->arr[14933] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14934] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3503)}}};
	v->arr[14935] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[14936] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__for_body_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14936] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4972), .repetition = true}}};
	v->arr[14938] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14939] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4918)}}};
	v->arr[14940] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14941] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3228)}}};
	v->arr[14942] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14943] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3513)}}};
	v->arr[14944] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[14945] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_arithmetic_expansion_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae1087(v);
}

void	init_pae1087(t_parse_action_entries *v)
{
	v->arr[14945] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4108), .repetition = true}}};
	v->arr[14947] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14948] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (437)}}};
	v->arr[14949] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14950] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1221)}}};
	v->arr[14951] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14952] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3520)}}};
	v->arr[14953] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14954] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4288)}}};
	v->arr[14955] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14956] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6535)}}};
	v->arr[14957] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14958] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (446)}}};
	v->arr[14959] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14960] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (38)}}};
	init_pae1088(v);
}

void	init_pae1088(t_parse_action_entries *v)
{
	v->arr[14961] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14962] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (39)}}};
	v->arr[14963] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14964] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (448)}}};
	v->arr[14965] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14966] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (2439)}}};
	v->arr[14967] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14968] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3527)}}};
	v->arr[14969] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14970] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (2289)}}};
	v->arr[14971] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14972] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1225)}}};
	v->arr[14973] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14974] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3521)}}};
	v->arr[14975] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1089(v);
}

void	init_pae1089(t_parse_action_entries *v)
{
	v->arr[14976] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1815)}}};
	v->arr[14977] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14978] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (1485)}}};
	v->arr[14979] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14980] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3470)}}};
	v->arr[14981] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14982] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_regex_replacement, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 12}}};
	v->arr[14983] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14984] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6789)}}};
	v->arr[14985] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14986] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6733)}}};
	v->arr[14987] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14988] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (438)}}};
	v->arr[14989] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1090(v);
}

// file funcs217.c
