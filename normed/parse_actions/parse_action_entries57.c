/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs57.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae285(t_parse_action_entries *v)
{
	v->arr[3799] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3800] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (79)}}};
	v->arr[3801] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3802] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (80)}}};
	v->arr[3803] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3804] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (83)}}};
	v->arr[3805] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3806] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (350)}}};
	v->arr[3807] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3808] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4529)}}};
	v->arr[3809] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3810] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7630)}}};
	v->arr[3811] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3812] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3365)}}};
	v->arr[3813] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae286(v);
}

void	init_pae286(t_parse_action_entries *v)
{
	v->arr[3814] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6442)}}};
	v->arr[3815] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3816] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4518)}}};
	v->arr[3817] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3818] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4401)}}};
	v->arr[3819] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3820] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4599)}}};
	v->arr[3821] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3822] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4486)}}};
	v->arr[3823] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3824] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4484)}}};
	v->arr[3825] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3826] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1484)}}};
	v->arr[3827] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[3828] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1492)}}};
	init_pae287(v);
}

void	init_pae287(t_parse_action_entries *v)
{
	v->arr[3829] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[3830] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1492)}}};
	v->arr[3831] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3832] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3832] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1839), repetition = true}}};
	v->arr[3834] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3835] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3835] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4000), repetition = true}}};
	v->arr[3837] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3838] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3838] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3997), repetition = true}}};
	v->arr[3840] = (t_pae){.entry = {.count = 2, .reusable = false}};
	init_pae288(v);
}

void	init_pae288(t_parse_action_entries *v)
{
	v->arr[3841] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3841] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6060), repetition = true}}};
	v->arr[3843] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3844] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3844] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1832), repetition = true}}};
	v->arr[3846] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3847] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3847] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5733), repetition = true}}};
	v->arr[3849] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3850] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3850] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2116), repetition = true}}};
	init_pae289(v);
}

void	init_pae289(t_parse_action_entries *v)
{
	v->arr[3852] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3853] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3853] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6333), repetition = true}}};
	v->arr[3855] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3856] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3856] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4854), repetition = true}}};
	v->arr[3858] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3859] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[3859] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (116), repetition = true}}};
	v->arr[3861] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[3862] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae290(v);
}

// file funcs57.c
