/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs87.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae435(t_parse_action_entries *v)
{
	v->arr[5775] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4141)}}};
	v->arr[5776] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5777] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat1, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5777] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6686)}}};
	v->arr[5779] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5780] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2347)}}};
	v->arr[5781] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5782] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1173)}}};
	v->arr[5783] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5784] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5784] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4127), .repetition = true}}};
	v->arr[5786] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5787] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae436(v);
}

void	init_pae436(t_parse_action_entries *v)
{
	v->arr[5787] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4127), .repetition = true}}};
	v->arr[5789] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5790] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4127)}}};
	v->arr[5791] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5792] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5854)}}};
	v->arr[5793] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5794] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4761)}}};
	v->arr[5795] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5796] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (413)}}};
	v->arr[5797] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5798] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (412)}}};
	v->arr[5799] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5800] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (411)}}};
	v->arr[5801] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5802] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__literal_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	init_pae437(v);
}

void	init_pae437(t_parse_action_entries *v)
{
	v->arr[5802] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1885), .repetition = true}}};
	v->arr[5804] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5805] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym__literal_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5805] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1844), .repetition = true}}};
	v->arr[5807] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5808] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (2382)}}};
	v->arr[5809] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5810] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (216)}}};
	v->arr[5811] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5812] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1603)}}};
	v->arr[5813] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5814] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3788)}}};
	v->arr[5815] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5816] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3788)}}};
	init_pae438(v);
}

void	init_pae438(t_parse_action_entries *v)
{
	v->arr[5817] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5818] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1890)}}};
	v->arr[5819] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5820] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat1, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 3}}};
	v->arr[5821] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[5822] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5823] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[5824] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5824] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat1, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 3}}};
	v->arr[5826] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5827] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae439(v);
}

void	init_pae439(t_parse_action_entries *v)
{
	v->arr[5828] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[5829] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[5829] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat1, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 3}}};
	v->arr[5831] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5832] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_command_repeat1, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 3}}};
	v->arr[5833] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5834] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3906)}}};
	v->arr[5835] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5836] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3914)}}};
	v->arr[5837] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5838] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4158)}}};
	v->arr[5839] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[5840] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4162)}}};
	init_pae440(v);
}

// file funcs87.c
