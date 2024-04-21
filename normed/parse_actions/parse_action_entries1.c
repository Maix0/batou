/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae5(t_parse_action_entries *v)
{
	v->arr[75] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[76] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6575)}}};
	v->arr[77] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[78] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1007)}}};
	v->arr[79] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[80] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7607)}}};
	v->arr[81] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[82] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (471)}}};
	v->arr[83] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[84] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (697)}}};
	v->arr[85] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[86] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3637)}}};
	v->arr[87] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[88] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3637)}}};
	v->arr[89] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae6(v);
}

void	init_pae6(t_parse_action_entries *v)
{
	v->arr[90] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2)}}};
	v->arr[91] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[92] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7268)}}};
	v->arr[93] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[94] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (526)}}};
	v->arr[95] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[96] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (586)}}};
	v->arr[97] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[98] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (693)}}};
	v->arr[99] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[100] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (694)}}};
	v->arr[101] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[102] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4115)}}};
	v->arr[103] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[104] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2087)}}};
	init_pae7(v);
}

void	init_pae7(t_parse_action_entries *v)
{
	v->arr[105] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[106] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2089)}}};
	v->arr[107] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[108] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2089)}}};
	v->arr[109] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[110] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4136)}}};
	v->arr[111] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[112] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4135)}}};
	v->arr[113] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[114] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5907)}}};
	v->arr[115] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[116] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (469)}}};
	v->arr[117] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[118] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5800)}}};
	v->arr[119] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae8(v);
}

void	init_pae8(t_parse_action_entries *v)
{
	v->arr[120] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (472)}}};
	v->arr[121] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[122] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (480)}}};
	v->arr[123] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[124] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6290)}}};
	v->arr[125] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[126] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4713)}}};
	v->arr[127] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[128] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (266)}}};
	v->arr[129] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[130] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (267)}}};
	v->arr[131] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[132] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (271)}}};
	v->arr[133] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[134] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (242)}}};
	init_pae9(v);
}

void	init_pae9(t_parse_action_entries *v)
{
	v->arr[135] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[136] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6119)}}};
	v->arr[137] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[138] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6549)}}};
	v->arr[139] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[140] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (12)}}};
	v->arr[141] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[142] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7622)}}};
	v->arr[143] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[144] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (497)}}};
	v->arr[145] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[146] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6752)}}};
	v->arr[147] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[148] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7265)}}};
	v->arr[149] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae10(v);
}

// file funcs1.c
