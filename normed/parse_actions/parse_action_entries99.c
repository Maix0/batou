/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs99.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae495(t_parse_action_entries *v)
{
	v->arr[6548] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3133)}}};
	v->arr[6549] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6550] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3070)}}};
	v->arr[6551] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6552] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5678)}}};
	v->arr[6553] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6554] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3070)}}};
	v->arr[6555] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6556] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6556] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2492), repetition = true}}};
	v->arr[6558] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6559] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3164)}}};
	v->arr[6560] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6561] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4876)}}};
	init_pae496(v);
}

void	init_pae496(t_parse_action_entries *v)
{
	v->arr[6562] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6563] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3164)}}};
	v->arr[6564] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6565] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3732)}}};
	v->arr[6566] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6567] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3057)}}};
	v->arr[6568] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6569] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5665)}}};
	v->arr[6570] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6571] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3057)}}};
	v->arr[6572] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6573] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3137)}}};
	v->arr[6574] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6575] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5078)}}};
	v->arr[6576] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae497(v);
}

void	init_pae497(t_parse_action_entries *v)
{
	v->arr[6577] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3137)}}};
	v->arr[6578] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6579] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3032)}}};
	v->arr[6580] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6581] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4874)}}};
	v->arr[6582] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6583] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3032)}}};
	v->arr[6584] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6585] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2982)}}};
	v->arr[6586] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6587] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5667)}}};
	v->arr[6588] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6589] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2982)}}};
	v->arr[6590] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6591] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3922)}}};
	init_pae498(v);
}

void	init_pae498(t_parse_action_entries *v)
{
	v->arr[6592] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6593] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__arithmetic_expression, .child_count = 1, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6594] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6595] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__arithmetic_expression, .child_count = 1, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6596] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6597] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3975)}}};
	v->arr[6598] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6599] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__arithmetic_literal, .child_count = 1, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6600] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6601] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__arithmetic_literal, .child_count = 1, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6602] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6603] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3918)}}};
	init_pae499(v);
}

void	init_pae499(t_parse_action_entries *v)
{
	v->arr[6604] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6605] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3976)}}};
	v->arr[6606] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6607] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3956)}}};
	v->arr[6608] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6609] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3122)}}};
	v->arr[6610] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6611] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4981)}}};
	v->arr[6612] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6613] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3122)}}};
	v->arr[6614] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6615] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3109)}}};
	v->arr[6616] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6617] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4980)}}};
	v->arr[6618] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae500(v);
}

// file funcs99.c
