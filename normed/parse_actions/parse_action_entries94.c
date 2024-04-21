/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs94.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae470(t_parse_action_entries *v)
{
	v->arr[6229] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1241)}}};
	v->arr[6231] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6232] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6232] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3505)}}};
	v->arr[6234] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6235] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4089)}}};
	v->arr[6236] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6237] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6237] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6226)}}};
	v->arr[6239] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6240] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6240] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5433)}}};
	init_pae471(v);
}

void	init_pae471(t_parse_action_entries *v)
{
	v->arr[6242] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6243] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6243] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1255)}}};
	v->arr[6245] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6246] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6246] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5524)}}};
	v->arr[6248] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6249] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6249] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2919)}}};
	v->arr[6251] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6252] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae472(v);
}

void	init_pae472(t_parse_action_entries *v)
{
	v->arr[6252] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (856)}}};
	v->arr[6254] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6255] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6255] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2909)}}};
	v->arr[6257] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6258] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2305)}}};
	v->arr[6259] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6260] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6260] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2669)}}};
	v->arr[6262] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6263] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6263] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5669)}}};
	init_pae473(v);
}

void	init_pae473(t_parse_action_entries *v)
{
	v->arr[6265] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6266] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6266] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3253)}}};
	v->arr[6268] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6269] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6269] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6436)}}};
	v->arr[6271] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6272] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4140)}}};
	v->arr[6273] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6274] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6274] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2527)}}};
	v->arr[6276] = (t_pae){.entry = {.count = 2, .reusable = false}};
	init_pae474(v);
}

void	init_pae474(t_parse_action_entries *v)
{
	v->arr[6277] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6277] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6555)}}};
	v->arr[6279] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6280] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6280] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2530)}}};
	v->arr[6282] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6283] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2338)}}};
	v->arr[6284] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6285] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6285] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3172)}}};
	v->arr[6287] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6288] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae475(v);
}

// file funcs94.c
