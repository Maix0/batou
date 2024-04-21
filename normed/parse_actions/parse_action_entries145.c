/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs145.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae725(t_parse_action_entries *v)
{
	v->arr[9864] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9865] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4398)}}};
	v->arr[9866] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9867] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4357)}}};
	v->arr[9868] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9869] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4398)}}};
	v->arr[9870] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9871] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3607)}}};
	v->arr[9872] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9873] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4337)}}};
	v->arr[9874] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9875] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3535)}}};
	v->arr[9876] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9877] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4338)}}};
	v->arr[9878] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae726(v);
}

void	init_pae726(t_parse_action_entries *v)
{
	v->arr[9879] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4337)}}};
	v->arr[9880] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9881] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4338)}}};
	v->arr[9882] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9883] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3338)}}};
	v->arr[9884] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9885] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3540)}}};
	v->arr[9886] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9887] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3612)}}};
	v->arr[9888] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9889] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3600)}}};
	v->arr[9890] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9891] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2753)}}};
	v->arr[9892] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9893] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (832)}}};
	init_pae727(v);
}

void	init_pae727(t_parse_action_entries *v)
{
	v->arr[9894] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9895] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (832)}}};
	v->arr[9896] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9897] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (859)}}};
	v->arr[9898] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9899] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4066)}}};
	v->arr[9900] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9901] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4123)}}};
	v->arr[9902] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9903] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4121)}}};
	v->arr[9904] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9905] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4120)}}};
	v->arr[9906] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9907] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4120)}}};
	v->arr[9908] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae728(v);
}

void	init_pae728(t_parse_action_entries *v)
{
	v->arr[9909] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6108)}}};
	v->arr[9910] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9911] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5852)}}};
	v->arr[9912] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9913] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3287)}}};
	v->arr[9914] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9915] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6278)}}};
	v->arr[9916] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9917] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4815)}}};
	v->arr[9918] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9919] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (359)}}};
	v->arr[9920] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9921] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (363)}}};
	v->arr[9922] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9923] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (365)}}};
	init_pae729(v);
}

void	init_pae729(t_parse_action_entries *v)
{
	v->arr[9924] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9925] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3188)}}};
	v->arr[9926] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9927] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (880)}}};
	v->arr[9928] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9929] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (880)}}};
	v->arr[9930] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9931] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (885)}}};
	v->arr[9932] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9933] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (793)}}};
	v->arr[9934] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9935] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3337)}}};
	v->arr[9936] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9937] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4242)}}};
	v->arr[9938] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae730(v);
}

// file funcs145.c
