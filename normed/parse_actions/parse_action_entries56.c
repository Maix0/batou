/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs56.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae280(t_parse_action_entries *v)
{
	v->arr[3728] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3739)}}};
	v->arr[3729] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3730] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4005)}}};
	v->arr[3731] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3732] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6005)}}};
	v->arr[3733] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3734] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5034)}}};
	v->arr[3735] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3736] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5741)}}};
	v->arr[3737] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3738] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4837)}}};
	v->arr[3739] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3740] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6352)}}};
	v->arr[3741] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3742] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4857)}}};
	init_pae281(v);
}

void	init_pae281(t_parse_action_entries *v)
{
	v->arr[3743] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3744] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (110)}}};
	v->arr[3745] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3746] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (111)}}};
	v->arr[3747] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3748] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (113)}}};
	v->arr[3749] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3750] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (366)}}};
	v->arr[3751] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3752] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6155)}}};
	v->arr[3753] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3754] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5048)}}};
	v->arr[3755] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3756] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7632)}}};
	v->arr[3757] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae282(v);
}

void	init_pae282(t_parse_action_entries *v)
{
	v->arr[3758] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6406)}}};
	v->arr[3759] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3760] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3278)}}};
	v->arr[3761] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3762] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3762] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1902), repetition = true}}};
	v->arr[3764] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3765] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3765] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1915), repetition = true}}};
	v->arr[3767] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3768] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3768] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (731), repetition = true}}};
	init_pae283(v);
}

void	init_pae283(t_parse_action_entries *v)
{
	v->arr[3770] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[3771] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_unset_command_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3771] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1903), repetition = true}}};
	v->arr[3773] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3774] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1956)}}};
	v->arr[3775] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3776] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5822)}}};
	v->arr[3777] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3778] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1960)}}};
	v->arr[3779] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3780] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1960)}}};
	v->arr[3781] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3782] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4522)}}};
	v->arr[3783] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae284(v);
}

void	init_pae284(t_parse_action_entries *v)
{
	v->arr[3784] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4025)}}};
	v->arr[3785] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3786] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4021)}}};
	v->arr[3787] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3788] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5981)}}};
	v->arr[3789] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3790] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4359)}}};
	v->arr[3791] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3792] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5723)}}};
	v->arr[3793] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3794] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4395)}}};
	v->arr[3795] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3796] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6288)}}};
	v->arr[3797] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3798] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4845)}}};
	init_pae285(v);
}

// file funcs56.c
