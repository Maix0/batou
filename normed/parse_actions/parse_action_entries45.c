/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs45.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae225(t_parse_action_entries *v)
{
	v->arr[2986] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1405), repetition = true}}};
	v->arr[2988] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2989] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2989] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5772), repetition = true}}};
	v->arr[2991] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2992] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2992] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1605), repetition = true}}};
	v->arr[2994] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2995] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2995] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6367), repetition = true}}};
	v->arr[2997] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2998] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae226(v);
}

void	init_pae226(t_parse_action_entries *v)
{
	v->arr[2998] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4660), repetition = true}}};
	v->arr[3000] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3001] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3001] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (128), repetition = true}}};
	v->arr[3003] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3004] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3004] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (129), repetition = true}}};
	v->arr[3006] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3007] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3007] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (130), repetition = true}}};
	v->arr[3009] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3010] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae227(v);
}

void	init_pae227(t_parse_action_entries *v)
{
	v->arr[3010] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (132), repetition = true}}};
	v->arr[3012] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3013] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3013] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1407), repetition = true}}};
	v->arr[3015] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3016] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3016] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7605), repetition = true}}};
	v->arr[3018] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3019] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (815)}}};
	v->arr[3020] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3021] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4310)}}};
	v->arr[3022] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3023] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3888)}}};
	init_pae228(v);
}

void	init_pae228(t_parse_action_entries *v)
{
	v->arr[3024] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3025] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3893)}}};
	v->arr[3026] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3027] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6035)}}};
	v->arr[3028] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3029] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4233)}}};
	v->arr[3030] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3031] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5775)}}};
	v->arr[3032] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3033] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4575)}}};
	v->arr[3034] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3035] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6248)}}};
	v->arr[3036] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3037] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4658)}}};
	v->arr[3038] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae229(v);
}

void	init_pae229(t_parse_action_entries *v)
{
	v->arr[3039] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (286)}}};
	v->arr[3040] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3041] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (106)}}};
	v->arr[3042] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3043] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (279)}}};
	v->arr[3044] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3045] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (345)}}};
	v->arr[3046] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3047] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4299)}}};
	v->arr[3048] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3049] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7668)}}};
	v->arr[3050] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3051] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (760)}}};
	v->arr[3052] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3053] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (711)}}};
	init_pae230(v);
}

// file funcs45.c
