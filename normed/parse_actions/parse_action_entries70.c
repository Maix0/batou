/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs70.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae350(t_parse_action_entries *v)
{
	v->arr[4639] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4640] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5832)}}};
	v->arr[4641] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4642] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2487)}}};
	v->arr[4643] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4644] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2651)}}};
	v->arr[4645] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4646] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6320)}}};
	v->arr[4647] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4648] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4729)}}};
	v->arr[4649] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4650] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (376)}}};
	v->arr[4651] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4652] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (61)}}};
	v->arr[4653] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae351(v);
}

void	init_pae351(t_parse_action_entries *v)
{
	v->arr[4654] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (373)}}};
	v->arr[4655] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4656] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (250)}}};
	v->arr[4657] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4658] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2493)}}};
	v->arr[4659] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4660] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7649)}}};
	v->arr[4661] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4662] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2664)}}};
	v->arr[4663] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4664] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5724)}}};
	v->arr[4665] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4666] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2665)}}};
	v->arr[4667] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4668] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2665)}}};
	init_pae352(v);
}

void	init_pae352(t_parse_action_entries *v)
{
	v->arr[4669] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[4670] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_command_name, child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4670] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7352)}}};
	v->arr[4672] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4673] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4027)}}};
	v->arr[4674] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4675] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4027)}}};
	v->arr[4676] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4677] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5135)}}};
	v->arr[4678] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4679] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5109)}}};
	v->arr[4680] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4681] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5136)}}};
	v->arr[4682] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae353(v);
}

void	init_pae353(t_parse_action_entries *v)
{
	v->arr[4683] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5133)}}};
	v->arr[4684] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4685] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5134)}}};
	v->arr[4686] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4687] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__statements, child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4688] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4689] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (800)}}};
	v->arr[4690] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4691] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (433)}}};
	v->arr[4692] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4693] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7349)}}};
	v->arr[4694] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4695] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (800)}}};
	v->arr[4696] = (t_pae){.entry = {.count = 2, .reusable = true}};
	init_pae354(v);
}

void	init_pae354(t_parse_action_entries *v)
{
	v->arr[4697] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat1, .child_count = 1, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[4697] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6668)}}};
	v->arr[4699] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4700] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3707)}}};
	v->arr[4701] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4702] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3707)}}};
	v->arr[4703] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4704] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (824)}}};
	v->arr[4705] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4706] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6634)}}};
	v->arr[4707] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4708] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1052)}}};
	v->arr[4709] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[4710] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1572)}}};
	init_pae355(v);
}

// file funcs70.c
