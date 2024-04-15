/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs212.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae1060(t_parse_action_entries *v)
{
	v->arr[14576] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14577] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (166)}}};
	v->arr[14578] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14579] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (205)}}};
	v->arr[14580] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14581] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (32)}}};
	v->arr[14582] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14583] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (314)}}};
	v->arr[14584] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14585] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (45)}}};
	v->arr[14586] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14587] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (140)}}};
	v->arr[14588] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14589] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (7285)}}};
	v->arr[14590] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1061(v);
}

void	init_pae1061(t_parse_action_entries *v)
{
	v->arr[14591] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5425)}}};
	v->arr[14592] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14593] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_regex_replacement, \
	.child_count = 5, dynamic_precedence = 0, .production_id = 89}}};
	v->arr[14594] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14595] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6779)}}};
	v->arr[14596] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14597] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (404)}}};
	v->arr[14598] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14599] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (261)}}};
	v->arr[14600] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14601] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (42)}}};
	v->arr[14602] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14603] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4236)}}};
	v->arr[14604] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1062(v);
}

void	init_pae1062(t_parse_action_entries *v)
{
	v->arr[14605] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4236)}}};
	v->arr[14606] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14607] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (376)}}};
	v->arr[14608] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14609] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (174)}}};
	v->arr[14610] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14611] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (164)}}};
	v->arr[14612] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14613] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (344)}}};
	v->arr[14614] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14615] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (417)}}};
	v->arr[14616] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14617] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5570)}}};
	v->arr[14618] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14619] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (35)}}};
	init_pae1063(v);
}

void	init_pae1063(t_parse_action_entries *v)
{
	v->arr[14620] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14621] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (317)}}};
	v->arr[14622] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14623] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4803)}}};
	v->arr[14624] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14625] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4803)}}};
	v->arr[14626] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14627] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4769)}}};
	v->arr[14628] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14629] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (255)}}};
	v->arr[14630] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14631] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (116)}}};
	v->arr[14632] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14633] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4741)}}};
	v->arr[14634] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1064(v);
}

void	init_pae1064(t_parse_action_entries *v)
{
	v->arr[14635] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4741)}}};
	v->arr[14636] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14637] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (351)}}};
	v->arr[14638] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14639] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (89)}}};
	v->arr[14640] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14641] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5567)}}};
	v->arr[14642] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14643] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (23)}}};
	v->arr[14644] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14645] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4610)}}};
	v->arr[14646] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14647] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4950)}}};
	v->arr[14648] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14649] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (323)}}};
	init_pae1065(v);
}

// file funcs212.c
