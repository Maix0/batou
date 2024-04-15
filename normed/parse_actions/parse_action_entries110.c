/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs110.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae550(t_parse_action_entries *v)
{
	v->arr[7319] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2229)}}};
	v->arr[7320] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7321] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2226)}}};
	v->arr[7322] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7323] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2225)}}};
	v->arr[7324] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7325] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2250)}}};
	v->arr[7326] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7327] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2248)}}};
	v->arr[7328] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7329] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2239)}}};
	v->arr[7330] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7331] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2238)}}};
	v->arr[7332] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7333] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2197)}}};
	init_pae551(v);
}

void	init_pae551(t_parse_action_entries *v)
{
	v->arr[7334] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7335] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1576)}}};
	v->arr[7336] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7337] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2233)}}};
	v->arr[7338] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7339] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2233)}}};
	v->arr[7340] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7341] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2267)}}};
	v->arr[7342] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7343] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2258)}}};
	v->arr[7344] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7345] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2192)}}};
	v->arr[7346] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7347] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1867)}}};
	v->arr[7348] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae552(v);
}

void	init_pae552(t_parse_action_entries *v)
{
	v->arr[7349] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4637)}}};
	v->arr[7350] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7351] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4638)}}};
	v->arr[7352] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7353] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4638)}}};
	v->arr[7354] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7355] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_arithmetic_expansion_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[7356] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7357] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4556)}}};
	v->arr[7358] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7359] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5773)}}};
	v->arr[7360] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7361] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4557)}}};
	v->arr[7362] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae553(v);
}

void	init_pae553(t_parse_action_entries *v)
{
	v->arr[7363] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4557)}}};
	v->arr[7364] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7365] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2213)}}};
	v->arr[7366] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7367] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3194)}}};
	v->arr[7368] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7369] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3190)}}};
	v->arr[7370] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7371] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4924)}}};
	v->arr[7372] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7373] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5027)}}};
	v->arr[7374] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7375] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5637)}}};
	v->arr[7376] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7377] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2051)}}};
	init_pae554(v);
}

void	init_pae554(t_parse_action_entries *v)
{
	v->arr[7378] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7379] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2048)}}};
	v->arr[7380] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7381] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2047)}}};
	v->arr[7382] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7383] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2045)}}};
	v->arr[7384] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7385] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2044)}}};
	v->arr[7386] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7387] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2043)}}};
	v->arr[7388] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7389] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2042)}}};
	v->arr[7390] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7391] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1925)}}};
	v->arr[7392] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae555(v);
}

// file funcs110.c
