/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs176.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae880(t_parse_action_entries *v)
{
	v->arr[12078] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12079] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2517)}}};
	v->arr[12080] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12081] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1186)}}};
	v->arr[12082] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12083] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1862)}}};
	v->arr[12084] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12085] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4348)}}};
	v->arr[12086] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12087] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6502)}}};
	v->arr[12088] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12089] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5156)}}};
	v->arr[12090] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12091] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (1768)}}};
	v->arr[12092] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae881(v);
}

void	init_pae881(t_parse_action_entries *v)
{
	v->arr[12093] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (2073)}}};
	v->arr[12094] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[12095] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12095] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4913), repetition = true}}};
	v->arr[12097] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12098] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4766)}}};
	v->arr[12099] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12100] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3312)}}};
	v->arr[12101] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12102] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_redirected_statement, .child_count = 2, \
	dynamic_precedence = -1, .production_id = 15}}};
	v->arr[12103] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12104] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_redirected_statement, .child_count = 2, \
	dynamic_precedence = -1, .production_id = 15}}};
	init_pae882(v);
}

void	init_pae882(t_parse_action_entries *v)
{
	v->arr[12105] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12106] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_heredoc_redirect, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 93}}};
	v->arr[12107] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12108] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_heredoc_redirect, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 93}}};
	v->arr[12109] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12110] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_function_definition, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 65}}};
	v->arr[12111] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12112] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_function_definition, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 65}}};
	v->arr[12113] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12114] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_case_statement, .child_count = 8, \
	dynamic_precedence = 0, .production_id = 45}}};
	v->arr[12115] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12116] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_case_statement, .child_count = 8, \
	dynamic_precedence = 0, .production_id = 45}}};
	init_pae883(v);
}

void	init_pae883(t_parse_action_entries *v)
{
	v->arr[12117] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12118] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_heredoc_redirect, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 94}}};
	v->arr[12119] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12120] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_heredoc_redirect, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 94}}};
	v->arr[12121] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12122] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_case_statement, .child_count = 8, \
	dynamic_precedence = 0, .production_id = 46}}};
	v->arr[12123] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12124] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_case_statement, .child_count = 8, \
	dynamic_precedence = 0, .production_id = 46}}};
	v->arr[12125] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12126] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_case_statement, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 46}}};
	v->arr[12127] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12128] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_case_statement, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 46}}};
	init_pae884(v);
}

void	init_pae884(t_parse_action_entries *v)
{
	v->arr[12129] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12130] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_case_statement, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 45}}};
	v->arr[12131] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12132] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_case_statement, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 45}}};
	v->arr[12133] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12134] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_function_definition, .child_count = 4, \
	dynamic_precedence = 0, .production_id = 47}}};
	v->arr[12135] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12136] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_function_definition, .child_count = 4, \
	dynamic_precedence = 0, .production_id = 47}}};
	v->arr[12137] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12138] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__heredoc_body, child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12139] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12140] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__heredoc_body, child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	init_pae885(v);
}

// file funcs176.c
