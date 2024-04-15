/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs50.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae250(t_parse_action_entries *v)
{
	v->arr[3309] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3310] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3310] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6351), repetition = true}}};
	v->arr[3312] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3313] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3313] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4843), repetition = true}}};
	v->arr[3315] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3316] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3316] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (69), repetition = true}}};
	v->arr[3318] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3319] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae251(v);
}

void	init_pae251(t_parse_action_entries *v)
{
	v->arr[3319] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (73), repetition = true}}};
	v->arr[3321] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3322] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3322] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (75), repetition = true}}};
	v->arr[3324] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3325] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3325] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (339), repetition = true}}};
	v->arr[3327] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3328] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3328] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1632), repetition = true}}};
	v->arr[3330] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3331] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae252(v);
}

void	init_pae252(t_parse_action_entries *v)
{
	v->arr[3331] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7629), repetition = true}}};
	v->arr[3333] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3334] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1526)}}};
	v->arr[3335] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3336] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3817)}}};
	v->arr[3337] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3338] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3820)}}};
	v->arr[3339] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3340] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6061)}}};
	v->arr[3341] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3342] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1725)}}};
	v->arr[3343] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3344] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1782)}}};
	v->arr[3345] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3346] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6252)}}};
	init_pae253(v);
}

void	init_pae253(t_parse_action_entries *v)
{
	v->arr[3347] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3348] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4672)}}};
	v->arr[3349] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3350] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (302)}}};
	v->arr[3351] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3352] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (301)}}};
	v->arr[3353] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3354] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (300)}}};
	v->arr[3355] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3356] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (368)}}};
	v->arr[3357] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3358] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1524)}}};
	v->arr[3359] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3360] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7665)}}};
	v->arr[3361] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae254(v);
}

void	init_pae254(t_parse_action_entries *v)
{
	v->arr[3362] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4271)}}};
	v->arr[3363] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3364] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3728)}}};
	v->arr[3365] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3366] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3726)}}};
	v->arr[3367] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3368] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5994)}}};
	v->arr[3369] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3370] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4259)}}};
	v->arr[3371] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3372] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5811)}}};
	v->arr[3373] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3374] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4600)}}};
	v->arr[3375] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3376] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6284)}}};
	init_pae255(v);
}

// file funcs50.c
