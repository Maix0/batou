/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs210.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae1050(t_parse_action_entries *v)
{
	v->arr[14439] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14440] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (5212)}}};
	v->arr[14441] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14442] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_max_length, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 12}}};
	v->arr[14443] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14444] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_max_length_binary_expression, \
	.child_count = 3, .dynamic_precedence = 0, .production_id = 27}}};
	v->arr[14445] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14446] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6195)}}};
	v->arr[14447] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14448] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6304)}}};
	v->arr[14449] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14450] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_max_length_expression, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 7}}};
	v->arr[14451] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1051(v);
}

void	init_pae1051(t_parse_action_entries *v)
{
	v->arr[14452] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (5211)}}};
	v->arr[14453] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14454] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_max_length, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 50}}};
	v->arr[14455] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[14456] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__literal_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14456] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6304), .repetition = true}}};
	v->arr[14458] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14459] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (286)}}};
	v->arr[14460] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14461] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (308)}}};
	v->arr[14462] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14463] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (302)}}};
	v->arr[14464] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1052(v);
}

void	init_pae1052(t_parse_action_entries *v)
{
	v->arr[14465] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (158)}}};
	v->arr[14466] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14467] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (305)}}};
	v->arr[14468] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14469] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (360)}}};
	v->arr[14470] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14471] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_max_length, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 90}}};
	v->arr[14472] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14473] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (243)}}};
	v->arr[14474] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14475] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_max_length, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 49}}};
	v->arr[14476] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14477] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_max_length, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 91}}};
	init_pae1053(v);
}

void	init_pae1053(t_parse_action_entries *v)
{
	v->arr[14478] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14479] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_max_length, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 49}}};
	v->arr[14480] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14481] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_max_length, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 123}}};
	v->arr[14482] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14483] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_max_length, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 64}}};
	v->arr[14484] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14485] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (299)}}};
	v->arr[14486] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14487] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4917)}}};
	v->arr[14488] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14489] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (418)}}};
	v->arr[14490] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1054(v);
}

void	init_pae1054(t_parse_action_entries *v)
{
	v->arr[14491] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (226)}}};
	v->arr[14492] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14493] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_max_length, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 63}}};
	v->arr[14494] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14495] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_max_length, .child_count = 4, \
	.dynamic_precedence = 0, .production_id = 92}}};
	v->arr[14496] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14497] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (388)}}};
	v->arr[14498] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14499] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4651)}}};
	v->arr[14500] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14501] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4999)}}};
	v->arr[14502] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14503] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4651)}}};
	init_pae1055(v);
}

// file funcs210.c
