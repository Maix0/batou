/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs10.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae50(t_parse_action_entries *v)
{
	v->arr[709] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[710] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6048)}}};
	v->arr[711] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[712] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (850)}}};
	v->arr[713] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[714] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5804)}}};
	v->arr[715] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[716] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (852)}}};
	v->arr[717] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[718] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (968)}}};
	v->arr[719] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[720] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6355)}}};
	v->arr[721] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[722] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4680)}}};
	v->arr[723] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae51(v);
}

void	init_pae51(t_parse_action_entries *v)
{
	v->arr[724] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (320)}}};
	v->arr[725] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[726] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (319)}}};
	v->arr[727] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[728] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (318)}}};
	v->arr[729] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[730] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (393)}}};
	v->arr[731] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[732] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6142)}}};
	v->arr[733] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[734] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6641)}}};
	v->arr[735] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[736] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (853)}}};
	v->arr[737] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[738] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7659)}}};
	init_pae52(v);
}

void	init_pae52(t_parse_action_entries *v)
{
	v->arr[739] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[740] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5326)}}};
	v->arr[741] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[742] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5252)}}};
	v->arr[743] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[744] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5338)}}};
	v->arr[745] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[746] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5251)}}};
	v->arr[747] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[748] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5335)}}};
	v->arr[749] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[750] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5311)}}};
	v->arr[751] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[752] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5340)}}};
	v->arr[753] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae53(v);
}

void	init_pae53(t_parse_action_entries *v)
{
	v->arr[754] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5320)}}};
	v->arr[755] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[756] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5332)}}};
	v->arr[757] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[758] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5307)}}};
	v->arr[759] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[760] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5304)}}};
	v->arr[761] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[762] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, \
.symbol = sym_elif_clause, .child_count = 4, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[763] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[764] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, \
.symbol = sym_elif_clause, .child_count = 3, .dynamic_precedence = 0, \
	.production_id = 0}}};
	v->arr[765] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[766] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (940)}}};
	init_pae54(v);
}

void	init_pae54(t_parse_action_entries *v)
{
	v->arr[767] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[768] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6166)}}};
	v->arr[769] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[770] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (636)}}};
	v->arr[771] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[772] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (920)}}};
	v->arr[773] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[774] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (938)}}};
	v->arr[775] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[776] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (932)}}};
	v->arr[777] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[778] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (94)}}};
	v->arr[779] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[780] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (84)}}};
	v->arr[781] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae55(v);
}

// file funcs10.c
