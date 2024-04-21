/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs46.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae230(t_parse_action_entries *v)
{
	v->arr[3054] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3055] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (762)}}};
	v->arr[3056] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3057] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (763)}}};
	v->arr[3058] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3059] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (763)}}};
	v->arr[3060] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3061] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (117)}}};
	v->arr[3062] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3063] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2836)}}};
	v->arr[3064] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3065] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2589)}}};
	v->arr[3066] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3067] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae231(v);
}

void	init_pae231(t_parse_action_entries *v)
{
	v->arr[3067] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1526), .repetition = true}}};
	v->arr[3069] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3070] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3070] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3817), .repetition = true}}};
	v->arr[3072] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3073] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3073] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3820), .repetition = true}}};
	v->arr[3075] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3076] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3076] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6061), .repetition = true}}};
	v->arr[3078] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3079] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae232(v);
}

void	init_pae232(t_parse_action_entries *v)
{
	v->arr[3079] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1725), .repetition = true}}};
	v->arr[3081] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3082] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3082] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5784), .repetition = true}}};
	v->arr[3084] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3085] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3085] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1782), .repetition = true}}};
	v->arr[3087] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3088] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3088] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6252), .repetition = true}}};
	v->arr[3090] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3091] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae233(v);
}

void	init_pae233(t_parse_action_entries *v)
{
	v->arr[3091] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4672), .repetition = true}}};
	v->arr[3093] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3094] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3094] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (302), .repetition = true}}};
	v->arr[3096] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3097] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3097] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (301), .repetition = true}}};
	v->arr[3099] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3100] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3100] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (300), .repetition = true}}};
	v->arr[3102] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3103] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae234(v);
}

void	init_pae234(t_parse_action_entries *v)
{
	v->arr[3103] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (368), .repetition = true}}};
	v->arr[3105] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3106] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3106] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1524), .repetition = true}}};
	v->arr[3108] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3109] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3109] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7665), .repetition = true}}};
	v->arr[3111] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3112] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2799)}}};
	v->arr[3113] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3114] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1769)}}};
	v->arr[3115] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3116] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5720)}}};
	init_pae235(v);
}

// file funcs46.c
