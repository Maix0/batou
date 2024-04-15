/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs81.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae405(t_parse_action_entries *v)
{
	v->arr[5379] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5380] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (812)}}};
	v->arr[5381] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5382] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (599)}}};
	v->arr[5383] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5384] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (599)}}};
	v->arr[5385] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5386] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (802)}}};
	v->arr[5387] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5388] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (802)}}};
	v->arr[5389] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5390] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5391] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5392] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	1, dynamic_precedence = 0, .production_id = 0}}};
	init_pae406(v);
}

void	init_pae406(t_parse_action_entries *v)
{
	v->arr[5393] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5394] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	1, dynamic_precedence = 0, .production_id = 1}}};
	v->arr[5395] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5396] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	1, dynamic_precedence = 0, .production_id = 1}}};
	v->arr[5397] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5398] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3943)}}};
	v->arr[5399] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5400] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3943)}}};
	v->arr[5401] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5402] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5418)}}};
	v->arr[5403] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5404] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3816)}}};
	v->arr[5405] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5406] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3804)}}};
	init_pae407(v);
}

void	init_pae407(t_parse_action_entries *v)
{
	v->arr[5407] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5408] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5979)}}};
	v->arr[5409] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5410] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5267)}}};
	v->arr[5411] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5412] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5835)}}};
	v->arr[5413] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5414] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5418)}}};
	v->arr[5415] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5416] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5509)}}};
	v->arr[5417] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5418] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6345)}}};
	v->arr[5419] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5420] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4731)}}};
	v->arr[5421] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae408(v);
}

void	init_pae408(t_parse_action_entries *v)
{
	v->arr[5422] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (380)}}};
	v->arr[5423] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5424] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (379)}}};
	v->arr[5425] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5426] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (378)}}};
	v->arr[5427] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5428] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (217)}}};
	v->arr[5429] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5430] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5417)}}};
	v->arr[5431] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5432] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7648)}}};
	v->arr[5433] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5434] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__extglob_blob, child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5435] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae409(v);
}

void	init_pae409(t_parse_action_entries *v)
{
	v->arr[5436] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__extglob_blob, child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5437] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5438] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5755)}}};
	v->arr[5439] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5440] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4773)}}};
	v->arr[5441] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5442] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (274)}}};
	v->arr[5443] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5444] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (281)}}};
	v->arr[5445] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5446] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (283)}}};
	v->arr[5447] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5448] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1338)}}};
	v->arr[5449] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae410(v);
}

// file funcs81.c
