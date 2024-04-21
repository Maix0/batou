/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs205.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae1025(t_parse_action_entries *v)
{
	v->arr[14082] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14083] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6183)}}};
	v->arr[14084] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14085] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6110)}}};
	v->arr[14086] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14087] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4715)}}};
	v->arr[14088] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14089] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (367)}}};
	v->arr[14090] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14091] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (364)}}};
	v->arr[14092] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14093] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (362)}}};
	v->arr[14094] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14095] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6131)}}};
	v->arr[14096] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1026(v);
}

void	init_pae1026(t_parse_action_entries *v)
{
	v->arr[14097] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_heredoc_body, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14098] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14099] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6137)}}};
	v->arr[14100] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14101] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_heredoc_body, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14102] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14103] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3675)}}};
	v->arr[14104] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14105] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3675)}}};
	v->arr[14106] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14107] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (2123)}}};
	v->arr[14108] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14109] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3963)}}};
	init_pae1027(v);
}

void	init_pae1027(t_parse_action_entries *v)
{
	v->arr[14110] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14111] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3655)}}};
	v->arr[14112] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14113] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3655)}}};
	v->arr[14114] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14115] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (665)}}};
	v->arr[14116] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14117] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3859)}}};
	v->arr[14118] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14119] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3648)}}};
	v->arr[14120] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14121] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3648)}}};
	v->arr[14122] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14123] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (778)}}};
	v->arr[14124] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1028(v);
}

void	init_pae1028(t_parse_action_entries *v)
{
	v->arr[14125] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4174)}}};
	v->arr[14126] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14127] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3694)}}};
	v->arr[14128] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14129] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3694)}}};
	v->arr[14130] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14131] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (792)}}};
	v->arr[14132] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14133] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4126)}}};
	v->arr[14134] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[14135] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_heredoc_body_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14135] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6110), .repetition = true}}};
	v->arr[14137] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[14138] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_heredoc_body_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae1029(v);
}

void	init_pae1029(t_parse_action_entries *v)
{
	v->arr[14138] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4715), .repetition = true}}};
	v->arr[14140] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[14141] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_heredoc_body_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14141] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (367), .repetition = true}}};
	v->arr[14143] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[14144] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_heredoc_body_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14144] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (364), .repetition = true}}};
	v->arr[14146] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[14147] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_heredoc_body_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14147] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (362), .repetition = true}}};
	v->arr[14149] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[14150] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_heredoc_body_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae1030(v);
}

// file funcs205.c
