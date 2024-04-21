/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs115.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae575(t_parse_action_entries *v)
{
	v->arr[7673] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7674] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5861)}}};
	v->arr[7675] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7676] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4360)}}};
	v->arr[7677] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7678] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4360)}}};
	v->arr[7679] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7680] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4060)}}};
	v->arr[7681] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7682] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4060)}}};
	v->arr[7683] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7684] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4067)}}};
	v->arr[7685] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7686] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5217)}}};
	v->arr[7687] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae576(v);
}

void	init_pae576(t_parse_action_entries *v)
{
	v->arr[7688] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2000)}}};
	v->arr[7689] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7690] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2008)}}};
	v->arr[7691] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7692] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2009)}}};
	v->arr[7693] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7694] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2010)}}};
	v->arr[7695] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7696] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2011)}}};
	v->arr[7697] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7698] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1636)}}};
	v->arr[7699] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7700] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2013)}}};
	v->arr[7701] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7702] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2013)}}};
	init_pae577(v);
}

void	init_pae577(t_parse_action_entries *v)
{
	v->arr[7703] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7704] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2059)}}};
	v->arr[7705] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7706] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1999)}}};
	v->arr[7707] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7708] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1906)}}};
	v->arr[7709] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7710] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3800)}}};
	v->arr[7711] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7712] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4058)}}};
	v->arr[7713] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7714] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3271)}}};
	v->arr[7715] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7716] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2860)}}};
	v->arr[7717] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae578(v);
}

void	init_pae578(t_parse_action_entries *v)
{
	v->arr[7718] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3455)}}};
	v->arr[7719] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7720] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5203)}}};
	v->arr[7721] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7722] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5202)}}};
	v->arr[7723] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7724] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5198)}}};
	v->arr[7725] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7726] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5197)}}};
	v->arr[7727] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7728] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5196)}}};
	v->arr[7729] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7730] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5196)}}};
	v->arr[7731] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7732] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5194)}}};
	init_pae579(v);
}

void	init_pae579(t_parse_action_entries *v)
{
	v->arr[7733] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7734] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2064)}}};
	v->arr[7735] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7736] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5192)}}};
	v->arr[7737] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7738] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4185)}}};
	v->arr[7739] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7740] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5191)}}};
	v->arr[7741] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7742] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5190)}}};
	v->arr[7743] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7744] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5187)}}};
	v->arr[7745] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7746] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5186)}}};
	v->arr[7747] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae580(v);
}

// file funcs115.c
