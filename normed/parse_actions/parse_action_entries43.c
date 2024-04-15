/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs43.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae215(t_parse_action_entries *v)
{
	v->arr[2855] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7655), repetition = true}}};
	v->arr[2857] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2858] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4240)}}};
	v->arr[2859] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2860] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3714)}}};
	v->arr[2861] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2862] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3713)}}};
	v->arr[2863] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2864] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6030)}}};
	v->arr[2865] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2866] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4218)}}};
	v->arr[2867] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2868] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5807)}}};
	v->arr[2869] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2870] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4399)}}};
	init_pae216(v);
}

void	init_pae216(t_parse_action_entries *v)
{
	v->arr[2871] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2872] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6341)}}};
	v->arr[2873] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2874] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4681)}}};
	v->arr[2875] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2876] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (323)}}};
	v->arr[2877] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2878] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (322)}}};
	v->arr[2879] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2880] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (321)}}};
	v->arr[2881] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2882] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (397)}}};
	v->arr[2883] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2884] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4252)}}};
	v->arr[2885] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae217(v);
}

void	init_pae217(t_parse_action_entries *v)
{
	v->arr[2886] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7658)}}};
	v->arr[2887] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2888] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (629)}}};
	v->arr[2889] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2890] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2890] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1326), repetition = true}}};
	v->arr[2892] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2893] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2893] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3786), repetition = true}}};
	v->arr[2895] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2896] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2896] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3789), repetition = true}}};
	init_pae218(v);
}

void	init_pae218(t_parse_action_entries *v)
{
	v->arr[2898] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2899] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2899] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6078), repetition = true}}};
	v->arr[2901] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2902] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2902] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1369), repetition = true}}};
	v->arr[2904] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2905] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2905] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5791), repetition = true}}};
	v->arr[2907] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2908] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae219(v);
}

void	init_pae219(t_parse_action_entries *v)
{
	v->arr[2908] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1496), repetition = true}}};
	v->arr[2910] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2911] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2911] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6251), repetition = true}}};
	v->arr[2913] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2914] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2914] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4676), repetition = true}}};
	v->arr[2916] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2917] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2917] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (308), repetition = true}}};
	v->arr[2919] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2920] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae220(v);
}

// file funcs43.c
