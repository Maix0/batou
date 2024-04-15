/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs96.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae480(t_parse_action_entries *v)
{
	v->arr[6348] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4544)}}};
	v->arr[6350] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6351] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6351] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2216)}}};
	v->arr[6353] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6354] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2280)}}};
	v->arr[6355] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6356] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6356] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1044)}}};
	v->arr[6358] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6359] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6359] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3179)}}};
	init_pae481(v);
}

void	init_pae481(t_parse_action_entries *v)
{
	v->arr[6361] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6362] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6362] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2065)}}};
	v->arr[6364] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6365] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6365] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2295)}}};
	v->arr[6367] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6368] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6368] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2628)}}};
	v->arr[6370] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6371] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	init_pae482(v);
}

void	init_pae482(t_parse_action_entries *v)
{
	v->arr[6371] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1488)}}};
	v->arr[6373] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6374] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6374] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (477)}}};
	v->arr[6376] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6377] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6377] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2423)}}};
	v->arr[6379] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6380] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6380] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2686)}}};
	v->arr[6382] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6383] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	init_pae483(v);
}

void	init_pae483(t_parse_action_entries *v)
{
	v->arr[6383] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1238)}}};
	v->arr[6385] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6386] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6386] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1837)}}};
	v->arr[6388] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6389] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6389] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1693)}}};
	v->arr[6391] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6392] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6392] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1565)}}};
	v->arr[6394] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6395] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	init_pae484(v);
}

void	init_pae484(t_parse_action_entries *v)
{
	v->arr[6395] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2709)}}};
	v->arr[6397] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6398] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6398] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1854)}}};
	v->arr[6400] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6401] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6401] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2822)}}};
	v->arr[6403] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6404] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2546)}}};
	v->arr[6405] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6406] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2546)}}};
	v->arr[6407] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6408] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (457)}}};
	init_pae485(v);
}

// file funcs96.c
