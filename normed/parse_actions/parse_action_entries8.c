/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs8.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae40(t_parse_action_entries *v)
{
	v->arr[581] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[582] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__terminated_statement, .child_count = 2, dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[582] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (428), repetition = true}}};
	v->arr[584] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[585] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__terminated_statement, .child_count = 2, dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[585] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4078), repetition = true}}};
	v->arr[587] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[588] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__terminated_statement, .child_count = 2, dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[588] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7392), repetition = true}}};
	v->arr[590] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[591] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__terminated_statement, .child_count = 2, dynamic_precedence = \
	0, .production_id = 0}}};
	init_pae41(v);
}

void	init_pae41(t_parse_action_entries *v)
{
	v->arr[591] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (154), repetition = true}}};
	v->arr[593] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[594] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__terminated_statement, .child_count = 2, dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[594] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (623), repetition = true}}};
	v->arr[596] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[597] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__terminated_statement, .child_count = 2, dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[597] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4), repetition = true}}};
	v->arr[599] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[600] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__terminated_statement, .child_count = 2, dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[600] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1730), repetition = true}}};
	v->arr[602] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[603] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__terminated_statement, .child_count = 2, dynamic_precedence = \
	0, .production_id = 0}}};
	init_pae42(v);
}

void	init_pae42(t_parse_action_entries *v)
{
	v->arr[603] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (602), repetition = true}}};
	v->arr[605] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[606] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__terminated_statement, .child_count = 2, dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[606] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (718), repetition = true}}};
	v->arr[608] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[609] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__terminated_statement, .child_count = 2, dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[609] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (759), repetition = true}}};
	v->arr[611] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[612] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__terminated_statement, .child_count = 2, dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[612] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4030), repetition = true}}};
	v->arr[614] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[615] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__terminated_statement, .child_count = 2, dynamic_precedence = \
	0, .production_id = 0}}};
	init_pae43(v);
}

void	init_pae43(t_parse_action_entries *v)
{
	v->arr[615] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4154), repetition = true}}};
	v->arr[617] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[618] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__terminated_statement, .child_count = 2, dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[618] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4155), repetition = true}}};
	v->arr[620] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[621] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__terminated_statement, .child_count = 2, dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[621] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5968), repetition = true}}};
	v->arr[623] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[624] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__terminated_statement, .child_count = 2, dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[624] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1105), repetition = true}}};
	v->arr[626] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[627] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__terminated_statement, .child_count = 2, dynamic_precedence = \
	0, .production_id = 0}}};
	init_pae44(v);
}

void	init_pae44(t_parse_action_entries *v)
{
	v->arr[627] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5849), repetition = true}}};
	v->arr[629] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[630] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__terminated_statement, .child_count = 2, dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[630] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1078), repetition = true}}};
	v->arr[632] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[633] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__terminated_statement, .child_count = 2, dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[633] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1085), repetition = true}}};
	v->arr[635] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[636] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__terminated_statement, .child_count = 2, dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[636] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6359), repetition = true}}};
	v->arr[638] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[639] = (t_pae){.action = {reduce = {.type = TSParseActionTypeReduce, \
symbol = aux_sym__terminated_statement, .child_count = 2, dynamic_precedence = \
	0, .production_id = 0}}};
	init_pae45(v);
}

// file funcs8.c
