/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs127.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae635(t_parse_action_entries *v)
{
	v->arr[8542] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8543] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7636)}}};
	v->arr[8544] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8545] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_body, .child_count = 1, \
	dynamic_precedence = 0, .production_id = 13}}};
	v->arr[8546] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8547] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6176)}}};
	v->arr[8548] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8549] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_body, .child_count = 1, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[8550] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8551] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_body, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 33}}};
	v->arr[8552] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8553] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3552)}}};
	v->arr[8554] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae636(v);
}

void	init_pae636(t_parse_action_entries *v)
{
	v->arr[8555] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5269)}}};
	v->arr[8556] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8557] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5797)}}};
	v->arr[8558] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8559] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5279)}}};
	v->arr[8560] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8561] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5279)}}};
	v->arr[8562] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[8563] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[8563] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3552), repetition = true}}};
	v->arr[8565] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8566] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5045)}}};
	v->arr[8567] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8568] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4012)}}};
	init_pae637(v);
}

void	init_pae637(t_parse_action_entries *v)
{
	v->arr[8569] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8570] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2173)}}};
	v->arr[8571] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8572] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4008)}}};
	v->arr[8573] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8574] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5903)}}};
	v->arr[8575] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8576] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5097)}}};
	v->arr[8577] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8578] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5762)}}};
	v->arr[8579] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8580] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5045)}}};
	v->arr[8581] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8582] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5149)}}};
	v->arr[8583] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae638(v);
}

void	init_pae638(t_parse_action_entries *v)
{
	v->arr[8584] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6336)}}};
	v->arr[8585] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8586] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4850)}}};
	v->arr[8587] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8588] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (89)}}};
	v->arr[8589] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8590] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (97)}}};
	v->arr[8591] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8592] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (98)}}};
	v->arr[8593] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8594] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (355)}}};
	v->arr[8595] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8596] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5041)}}};
	v->arr[8597] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8598] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7631)}}};
	init_pae639(v);
}

void	init_pae639(t_parse_action_entries *v)
{
	v->arr[8599] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8600] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2913)}}};
	v->arr[8601] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8602] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2884)}}};
	v->arr[8603] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8604] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3578)}}};
	v->arr[8605] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8606] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3597)}}};
	v->arr[8607] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8608] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1574)}}};
	v->arr[8609] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8610] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1542)}}};
	v->arr[8611] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8612] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6338)}}};
	v->arr[8613] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae640(v);
}

// file funcs127.c
