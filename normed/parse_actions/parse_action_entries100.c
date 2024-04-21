/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae500(t_parse_action_entries *v)
{
	v->arr[6619] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3109)}}};
	v->arr[6620] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6621] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3106)}}};
	v->arr[6622] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6623] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4884)}}};
	v->arr[6624] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6625] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3106)}}};
	v->arr[6626] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6627] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3105)}}};
	v->arr[6628] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6629] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4883)}}};
	v->arr[6630] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6631] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3105)}}};
	v->arr[6632] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6633] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4113)}}};
	init_pae501(v);
}

void	init_pae501(t_parse_action_entries *v)
{
	v->arr[6634] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6635] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6635] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3869), .repetition = true}}};
	v->arr[6637] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6638] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3961)}}};
	v->arr[6639] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6640] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3136)}}};
	v->arr[6641] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6642] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5076)}}};
	v->arr[6643] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6644] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3136)}}};
	v->arr[6645] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6646] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3949)}}};
	v->arr[6647] = (t_pae){.entry = {.count = 2, .reusable = true}};
	init_pae502(v);
}

void	init_pae502(t_parse_action_entries *v)
{
	v->arr[6648] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6648] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3732), .repetition = true}}};
	v->arr[6650] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6651] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4117)}}};
	v->arr[6652] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6653] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2584)}}};
	v->arr[6654] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6655] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7177)}}};
	v->arr[6656] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6657] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3738)}}};
	v->arr[6658] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6659] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2984)}}};
	v->arr[6660] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6661] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3668)}}};
	init_pae503(v);
}

void	init_pae503(t_parse_action_entries *v)
{
	v->arr[6662] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6663] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2725)}}};
	v->arr[6664] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6665] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3885)}}};
	v->arr[6666] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6667] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3938)}}};
	v->arr[6668] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6669] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3865)}}};
	v->arr[6670] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6671] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6609)}}};
	v->arr[6672] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6673] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3663)}}};
	v->arr[6674] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6675] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7363)}}};
	v->arr[6676] = (t_pae){.entry = {.count = 2, .reusable = true}};
	init_pae504(v);
}

void	init_pae504(t_parse_action_entries *v)
{
	v->arr[6677] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6677] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3929), .repetition = true}}};
	v->arr[6679] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6680] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4029)}}};
	v->arr[6681] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6682] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3980)}}};
	v->arr[6683] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6684] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3979)}}};
	v->arr[6685] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6686] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4022)}}};
	v->arr[6687] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6688] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__literal_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6688] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2584), .repetition = true}}};
	init_pae505(v);
}

// file funcs100.c
