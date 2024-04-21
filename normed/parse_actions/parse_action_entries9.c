/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs9.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae45(t_parse_action_entries *v)
{
	v->arr[639] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4814), .repetition = true}}};
	v->arr[641] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[642] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__terminated_statement, .child_count = 2, .dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[642] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (148), .repetition = true}}};
	v->arr[644] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[645] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__terminated_statement, .child_count = 2, .dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[645] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (150), .repetition = true}}};
	v->arr[647] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[648] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__terminated_statement, .child_count = 2, .dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[648] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (151), .repetition = true}}};
	v->arr[650] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[651] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__terminated_statement, .child_count = 2, .dynamic_precedence = \
	0, .production_id = 0}}};
	init_pae46(v);
}

void	init_pae46(t_parse_action_entries *v)
{
	v->arr[651] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (152), .repetition = true}}};
	v->arr[653] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[654] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__terminated_statement, .child_count = 2, .dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[654] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6148), .repetition = true}}};
	v->arr[656] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[657] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__terminated_statement, .child_count = 2, .dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[657] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6616), .repetition = true}}};
	v->arr[659] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[660] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__terminated_statement, .child_count = 2, .dynamic_precedence = \
	0, .production_id = 0}}};
	v->arr[660] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1077), .repetition = true}}};
	v->arr[662] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[663] = (t_pae){.action = {.reduce = {.type = ACT_TY_REDUCE, .symbol \
	= aux_sym__terminated_statement, .child_count = 2, .dynamic_precedence = \
	0, .production_id = 0}}};
	init_pae47(v);
}

void	init_pae47(t_parse_action_entries *v)
{
	v->arr[663] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7608), .repetition = true}}};
	v->arr[665] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[666] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (886)}}};
	v->arr[667] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[668] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6785)}}};
	v->arr[669] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[670] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7479)}}};
	v->arr[671] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[672] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (701)}}};
	v->arr[673] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[674] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3651)}}};
	v->arr[675] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[676] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3651)}}};
	v->arr[677] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[678] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (163)}}};
	init_pae48(v);
}

void	init_pae48(t_parse_action_entries *v)
{
	v->arr[679] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[680] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (424)}}};
	v->arr[681] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[682] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (421)}}};
	v->arr[683] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[684] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3827)}}};
	v->arr[685] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[686] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5261)}}};
	v->arr[687] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[688] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6894)}}};
	v->arr[689] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[690] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (92)}}};
	v->arr[691] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[692] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (650)}}};
	v->arr[693] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae49(v);
}

void	init_pae49(t_parse_action_entries *v)
{
	v->arr[694] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (11)}}};
	v->arr[695] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[696] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1869)}}};
	v->arr[697] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[698] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (563)}}};
	v->arr[699] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[700] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (632)}}};
	v->arr[701] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[702] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (648)}}};
	v->arr[703] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[704] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3821)}}};
	v->arr[705] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[706] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3710)}}};
	v->arr[707] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[708] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3709)}}};
	init_pae50(v);
}

// file funcs9.c
