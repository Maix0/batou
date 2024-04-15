/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs206.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae1030(t_parse_action_entries *v)
{
	v->arr[14150] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6137), repetition = true}}};
	v->arr[14152] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14153] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_heredoc_body_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14154] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14155] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3639)}}};
	v->arr[14156] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14157] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3639)}}};
	v->arr[14158] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14159] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (949)}}};
	v->arr[14160] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14161] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3736)}}};
	v->arr[14162] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14163] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3652)}}};
	v->arr[14164] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1031(v);
}

void	init_pae1031(t_parse_action_entries *v)
{
	v->arr[14165] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3652)}}};
	v->arr[14166] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14167] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (645)}}};
	v->arr[14168] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14169] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3822)}}};
	v->arr[14170] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14171] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3673)}}};
	v->arr[14172] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14173] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3673)}}};
	v->arr[14174] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14175] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (689)}}};
	v->arr[14176] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14177] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4024)}}};
	v->arr[14178] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14179] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3627)}}};
	init_pae1032(v);
}

void	init_pae1032(t_parse_action_entries *v)
{
	v->arr[14180] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14181] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3627)}}};
	v->arr[14182] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14183] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (738)}}};
	v->arr[14184] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14185] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3761)}}};
	v->arr[14186] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14187] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3679)}}};
	v->arr[14188] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14189] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3679)}}};
	v->arr[14190] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14191] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (772)}}};
	v->arr[14192] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14193] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4031)}}};
	v->arr[14194] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae1033(v);
}

void	init_pae1033(t_parse_action_entries *v)
{
	v->arr[14195] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3691)}}};
	v->arr[14196] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14197] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3691)}}};
	v->arr[14198] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14199] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (833)}}};
	v->arr[14200] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14201] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4111)}}};
	v->arr[14202] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14203] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3765)}}};
	v->arr[14204] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14205] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3646)}}};
	v->arr[14206] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14207] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3646)}}};
	v->arr[14208] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14209] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (635)}}};
	init_pae1034(v);
}

void	init_pae1034(t_parse_action_entries *v)
{
	v->arr[14210] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14211] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3807)}}};
	v->arr[14212] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14213] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3674)}}};
	v->arr[14214] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14215] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3674)}}};
	v->arr[14216] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14217] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (764)}}};
	v->arr[14218] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14219] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4050)}}};
	v->arr[14220] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14221] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3632)}}};
	v->arr[14222] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14223] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3632)}}};
	v->arr[14224] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1035(v);
}

// file funcs206.c
