/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs142.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae710(t_parse_action_entries *v)
{
	v->arr[9639] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4401)}}};
	v->arr[9640] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9641] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5723)}}};
	v->arr[9642] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9643] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4604)}}};
	v->arr[9644] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9645] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4845)}}};
	v->arr[9646] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9647] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (80)}}};
	v->arr[9648] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9649] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (83)}}};
	v->arr[9650] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9651] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (350)}}};
	v->arr[9652] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9653] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4602)}}};
	init_pae711(v);
}

void	init_pae711(t_parse_action_entries *v)
{
	v->arr[9654] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9655] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5412)}}};
	v->arr[9656] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9657] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5412)}}};
	v->arr[9658] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9659] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5420)}}};
	v->arr[9660] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9661] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4477)}}};
	v->arr[9662] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9663] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4477)}}};
	v->arr[9664] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9665] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4467)}}};
	v->arr[9666] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9667] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2751)}}};
	v->arr[9668] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae712(v);
}

void	init_pae712(t_parse_action_entries *v)
{
	v->arr[9669] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5415)}}};
	v->arr[9670] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9671] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5415)}}};
	v->arr[9672] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9673] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5474)}}};
	v->arr[9674] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9675] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1733)}}};
	v->arr[9676] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9677] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4193)}}};
	v->arr[9678] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9679] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4192)}}};
	v->arr[9680] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9681] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1734)}}};
	v->arr[9682] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9683] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5736)}}};
	init_pae713(v);
}

void	init_pae713(t_parse_action_entries *v)
{
	v->arr[9684] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9685] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1733)}}};
	v->arr[9686] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9687] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4624)}}};
	v->arr[9688] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9689] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (244)}}};
	v->arr[9690] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9691] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (245)}}};
	v->arr[9692] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9693] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (219)}}};
	v->arr[9694] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9695] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1734)}}};
	v->arr[9696] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9697] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1851)}}};
	v->arr[9698] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae714(v);
}

void	init_pae714(t_parse_action_entries *v)
{
	v->arr[9699] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (668)}}};
	v->arr[9700] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9701] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1861)}}};
	v->arr[9702] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9703] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1851)}}};
	v->arr[9704] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9705] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1861)}}};
	v->arr[9706] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9707] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2075)}}};
	v->arr[9708] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9709] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2077)}}};
	v->arr[9710] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[9711] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2075)}}};
	v->arr[9712] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[9713] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2077)}}};
	init_pae715(v);
}

// file funcs142.c
