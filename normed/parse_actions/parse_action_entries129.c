/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs129.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae645(t_parse_action_entries *v)
{
	v->arr[8678] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (111), repetition = true}}};
	v->arr[8680] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[8681] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__heredoc_command, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 67}}};
	v->arr[8681] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (113), repetition = true}}};
	v->arr[8683] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[8684] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__heredoc_command, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 67}}};
	v->arr[8684] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (366), repetition = true}}};
	v->arr[8686] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[8687] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__heredoc_command, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 67}}};
	v->arr[8687] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5048), repetition = true}}};
	v->arr[8689] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[8690] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__heredoc_command, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 67}}};
	init_pae646(v);
}

void	init_pae646(t_parse_action_entries *v)
{
	v->arr[8690] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7632), repetition = true}}};
	v->arr[8692] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8693] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5477)}}};
	v->arr[8694] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8695] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5761)}}};
	v->arr[8696] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8697] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5483)}}};
	v->arr[8698] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8699] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5483)}}};
	v->arr[8700] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8701] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6420)}}};
	v->arr[8702] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8703] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6420)}}};
	v->arr[8704] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8705] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6393)}}};
	init_pae647(v);
}

void	init_pae647(t_parse_action_entries *v)
{
	v->arr[8706] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8707] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2020)}}};
	v->arr[8708] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8709] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2817)}}};
	v->arr[8710] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8711] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1561)}}};
	v->arr[8712] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8713] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5485)}}};
	v->arr[8714] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8715] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5830)}}};
	v->arr[8716] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8717] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5486)}}};
	v->arr[8718] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8719] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5486)}}};
	v->arr[8720] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae648(v);
}

void	init_pae648(t_parse_action_entries *v)
{
	v->arr[8721] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6371)}}};
	v->arr[8722] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8723] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6421)}}};
	v->arr[8724] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8725] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1731)}}};
	v->arr[8726] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8727] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4688)}}};
	v->arr[8728] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8729] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5552)}}};
	v->arr[8730] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8731] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1556)}}};
	v->arr[8732] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8733] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1729)}}};
	v->arr[8734] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8735] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6392)}}};
	init_pae649(v);
}

void	init_pae649(t_parse_action_entries *v)
{
	v->arr[8736] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8737] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2247)}}};
	v->arr[8738] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8739] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4636)}}};
	v->arr[8740] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8741] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5610)}}};
	v->arr[8742] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8743] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2253)}}};
	v->arr[8744] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8745] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6378)}}};
	v->arr[8746] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8747] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2807)}}};
	v->arr[8748] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8749] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6505)}}};
	v->arr[8750] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae650(v);
}

// file funcs129.c
