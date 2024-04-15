/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs97.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae485(t_parse_action_entries *v)
{
	v->arr[6409] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6410] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2549)}}};
	v->arr[6411] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6412] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2549)}}};
	v->arr[6413] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6414] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (455)}}};
	v->arr[6415] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6416] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2455)}}};
	v->arr[6417] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6418] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2455)}}};
	v->arr[6419] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6420] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (462)}}};
	v->arr[6421] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6422] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	init_pae486(v);
}

void	init_pae486(t_parse_action_entries *v)
{
	v->arr[6422] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2280), repetition = true}}};
	v->arr[6424] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6425] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6425] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3025)}}};
	v->arr[6427] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6428] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6428] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1185)}}};
	v->arr[6430] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6431] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6431] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3191)}}};
	v->arr[6433] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6434] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	init_pae487(v);
}

void	init_pae487(t_parse_action_entries *v)
{
	v->arr[6434] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6538)}}};
	v->arr[6436] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6437] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6437] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6147)}}};
	v->arr[6439] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6440] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2418)}}};
	v->arr[6441] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6442] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3717)}}};
	v->arr[6443] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6444] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2381)}}};
	v->arr[6445] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6446] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3826)}}};
	v->arr[6447] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6448] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3928)}}};
	init_pae488(v);
}

void	init_pae488(t_parse_action_entries *v)
{
	v->arr[6449] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6450] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3887)}}};
	v->arr[6451] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6452] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6452] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3717), repetition = true}}};
	v->arr[6454] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6455] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3927)}}};
	v->arr[6456] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6457] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6457] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2418), repetition = true}}};
	v->arr[6459] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6460] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae489(v);
}

void	init_pae489(t_parse_action_entries *v)
{
	v->arr[6460] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4028), repetition = true}}};
	v->arr[6462] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6463] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6463] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2381), repetition = true}}};
	v->arr[6465] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6466] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3925)}}};
	v->arr[6467] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6468] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2351)}}};
	v->arr[6469] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6470] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3923)}}};
	v->arr[6471] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6472] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6472] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2351), repetition = true}}};
	init_pae490(v);
}

// file funcs97.c
