/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs213.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae1065(t_parse_action_entries *v)
{
	v->arr[14650] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14651] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (340)}}};
	v->arr[14652] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14653] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (236)}}};
	v->arr[14654] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14655] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_max_length, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 51}}};
	v->arr[14656] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14657] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (380)}}};
	v->arr[14658] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14659] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6958)}}};
	v->arr[14660] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14661] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_regex_replacement, \
	.child_count = 3, .dynamic_precedence = 0, .production_id = 49}}};
	v->arr[14662] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14663] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6791)}}};
	init_pae1066(v);
}

void	init_pae1066(t_parse_action_entries *v)
{
	v->arr[14664] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14665] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (374)}}};
	v->arr[14666] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14667] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (178)}}};
	v->arr[14668] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14669] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (249)}}};
	v->arr[14670] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14671] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (69)}}};
	v->arr[14672] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14673] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (110)}}};
	v->arr[14674] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14675] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (7670)}}};
	v->arr[14676] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14677] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_regex_replacement, \
	.child_count = 4, .dynamic_precedence = 0, .production_id = 51}}};
	init_pae1067(v);
}

void	init_pae1067(t_parse_action_entries *v)
{
	v->arr[14678] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14679] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6747)}}};
	v->arr[14680] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14681] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (335)}}};
	v->arr[14682] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14683] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (320)}}};
	v->arr[14684] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14685] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (124)}}};
	v->arr[14686] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14687] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (64)}}};
	v->arr[14688] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14689] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (148)}}};
	v->arr[14690] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14691] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__expansion_regex_repeat1, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 48}}};
	init_pae1068(v);
}

void	init_pae1068(t_parse_action_entries *v)
{
	v->arr[14692] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14693] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__expansion_regex_repeat1, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 48}}};
	v->arr[14694] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14695] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (400)}}};
	v->arr[14696] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14697] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4613)}}};
	v->arr[14698] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14699] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (31)}}};
	v->arr[14700] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14701] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4241)}}};
	v->arr[14702] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14703] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4241)}}};
	v->arr[14704] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14705] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (384)}}};
	init_pae1069(v);
}

void	init_pae1069(t_parse_action_entries *v)
{
	v->arr[14706] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14707] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (128)}}};
	v->arr[14708] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14709] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (7142)}}};
	v->arr[14710] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14711] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6128)}}};
	v->arr[14712] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14713] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (7465)}}};
	v->arr[14714] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14715] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6528)}}};
	v->arr[14716] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14717] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (7530)}}};
	v->arr[14718] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14719] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_regex_replacement, \
	.child_count = 4, .dynamic_precedence = 0, .production_id = 85}}};
	init_pae1070(v);
}

// file funcs213.c
