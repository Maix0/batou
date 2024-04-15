/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs143.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae715(t_parse_action_entries *v)
{
	v->arr[9714] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9715] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5300)}}};
	v->arr[9716] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9717] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5300)}}};
	v->arr[9718] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9719] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5323)}}};
	v->arr[9720] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9721] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1590)}}};
	v->arr[9722] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9723] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (692)}}};
	v->arr[9724] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9725] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1621)}}};
	v->arr[9726] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9727] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1590)}}};
	v->arr[9728] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae716(v);
}

void	init_pae716(t_parse_action_entries *v)
{
	v->arr[9729] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1621)}}};
	v->arr[9730] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9731] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (465)}}};
	v->arr[9732] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9733] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5303)}}};
	v->arr[9734] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9735] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5303)}}};
	v->arr[9736] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9737] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5301)}}};
	v->arr[9738] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9739] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (662)}}};
	v->arr[9740] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9741] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2004)}}};
	v->arr[9742] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9743] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2005)}}};
	init_pae717(v);
}

void	init_pae717(t_parse_action_entries *v)
{
	v->arr[9744] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9745] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2004)}}};
	v->arr[9746] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9747] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2005)}}};
	v->arr[9748] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9749] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1127)}}};
	v->arr[9750] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9751] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1127)}}};
	v->arr[9752] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9753] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1121)}}};
	v->arr[9754] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9755] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6225)}}};
	v->arr[9756] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9757] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4175)}}};
	v->arr[9758] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae718(v);
}

void	init_pae718(t_parse_action_entries *v)
{
	v->arr[9759] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4176)}}};
	v->arr[9760] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9761] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5925)}}};
	v->arr[9762] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9763] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6205)}}};
	v->arr[9764] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9765] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5787)}}};
	v->arr[9766] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9767] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6225)}}};
	v->arr[9768] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9769] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6238)}}};
	v->arr[9770] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9771] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6253)}}};
	v->arr[9772] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9773] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4720)}}};
	init_pae719(v);
}

void	init_pae719(t_parse_action_entries *v)
{
	v->arr[9774] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9775] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (158)}}};
	v->arr[9776] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9777] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (159)}}};
	v->arr[9778] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9779] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (160)}}};
	v->arr[9780] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9781] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (161)}}};
	v->arr[9782] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9783] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6205)}}};
	v->arr[9784] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9785] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7609)}}};
	v->arr[9786] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9787] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1162)}}};
	v->arr[9788] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae720(v);
}

// file funcs143.c
