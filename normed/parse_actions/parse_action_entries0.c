/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_action_entries0.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 20:42:37 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae0(t_parse_action_entries *v)
{
	v->arr[0] = (t_pae){.entry = {.count = 0, .reusable = false}};
	v->arr[1] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2] = (t_pae){.action = {.type = ACT_TY_RECOVER}};
	v->arr[3] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[4] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.extra = true}}};
	v->arr[5] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol = \
sym_program, .child_count = 0, .dynamic_precedence = 0, .production_id \
	= 0}}};
	v->arr[7] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (907)}}};
	v->arr[9] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[10] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6777)}}};
	v->arr[11] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7604)}}};
	v->arr[13] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (661)}}};
	init_pae1(v);
}

void	init_pae1(t_parse_action_entries *v)
{
	v->arr[15] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[16] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3690)}}};
	v->arr[17] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[18] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3690)}}};
	v->arr[19] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[20] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (240)}}};
	v->arr[21] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[22] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (432)}}};
	v->arr[23] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[24] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (428)}}};
	v->arr[25] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[26] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4078)}}};
	v->arr[27] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[28] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7516)}}};
	v->arr[29] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae2(v);
}

void	init_pae2(t_parse_action_entries *v)
{
	v->arr[30] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (154)}}};
	v->arr[31] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[32] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (618)}}};
	v->arr[33] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[34] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4)}}};
	v->arr[35] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[36] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1730)}}};
	v->arr[37] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[38] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (576)}}};
	v->arr[39] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[40] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (690)}}};
	v->arr[41] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[42] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (682)}}};
	v->arr[43] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[44] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3808)}}};
	init_pae3(v);
}

void	init_pae3(t_parse_action_entries *v)
{
	v->arr[45] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[46] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3830)}}};
	v->arr[47] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[48] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3831)}}};
	v->arr[49] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[50] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5949)}}};
	v->arr[51] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[52] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (966)}}};
	v->arr[53] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[54] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5757)}}};
	v->arr[55] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[56] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (957)}}};
	v->arr[57] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[58] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1104)}}};
	v->arr[59] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae4(v);
}

void	init_pae4(t_parse_action_entries *v)
{
	v->arr[60] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6358)}}};
	v->arr[61] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[62] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4714)}}};
	v->arr[63] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[64] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (64)}}};
	v->arr[65] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[66] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (65)}}};
	v->arr[67] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[68] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (66)}}};
	v->arr[69] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[70] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (67)}}};
	v->arr[71] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[72] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.extra = true}}};
	v->arr[73] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[74] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6144)}}};
	init_pae5(v);
}

// file funcs0.c
