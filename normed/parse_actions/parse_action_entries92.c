/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs92.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae460(t_parse_action_entries *v)
{
	v->arr[6105] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3774), repetition = true}}};
	v->arr[6107] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6108] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6108] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3774), repetition = true}}};
	v->arr[6110] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6111] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4004)}}};
	v->arr[6112] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6113] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7037)}}};
	v->arr[6114] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6115] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6115] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5495)}}};
	v->arr[6117] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6118] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	init_pae461(v);
}

void	init_pae461(t_parse_action_entries *v)
{
	v->arr[6118] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2597)}}};
	v->arr[6120] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6121] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6121] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2317)}}};
	v->arr[6123] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6124] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6124] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2310), repetition = true}}};
	v->arr[6126] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6127] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2310)}}};
	v->arr[6128] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6129] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2306)}}};
	v->arr[6130] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6131] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	init_pae462(v);
}

void	init_pae462(t_parse_action_entries *v)
{
	v->arr[6131] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2306), repetition = true}}};
	v->arr[6133] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6134] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3758)}}};
	v->arr[6135] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6136] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6136] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1550)}}};
	v->arr[6138] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6139] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2563)}}};
	v->arr[6140] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6141] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2563)}}};
	v->arr[6142] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6143] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (452)}}};
	v->arr[6144] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6145] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3803)}}};
	init_pae463(v);
}

void	init_pae463(t_parse_action_entries *v)
{
	v->arr[6146] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6147] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3819)}}};
	v->arr[6148] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6149] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6149] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2882)}}};
	v->arr[6151] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6152] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6152] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4448)}}};
	v->arr[6154] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6155] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6155] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4444)}}};
	v->arr[6157] = (t_pae){.entry = {.count = 2, .reusable = false}};
	init_pae464(v);
}

void	init_pae464(t_parse_action_entries *v)
{
	v->arr[6158] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6158] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1592)}}};
	v->arr[6160] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6161] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6161] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4852)}}};
	v->arr[6163] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6164] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6164] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1761)}}};
	v->arr[6166] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[6167] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_redirected_statement_repeat2, \
	.child_count = 1, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6167] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1101)}}};
	init_pae465(v);
}

// file funcs92.c
