/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs177.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae885(t_parse_action_entries *v)
{
	v->arr[12141] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12142] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__simple_heredoc_body, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12143] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12144] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__simple_heredoc_body, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12145] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12146] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_heredoc_redirect, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 4}}};
	v->arr[12147] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12148] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_heredoc_redirect, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 4}}};
	v->arr[12149] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12150] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_case_statement, .child_count = 4, \
	dynamic_precedence = 0, .production_id = 45}}};
	v->arr[12151] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12152] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_case_statement, .child_count = 4, \
	dynamic_precedence = 0, .production_id = 45}}};
	init_pae886(v);
}

void	init_pae886(t_parse_action_entries *v)
{
	v->arr[12153] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12154] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_case_statement, .child_count = 4, \
	dynamic_precedence = 0, .production_id = 46}}};
	v->arr[12155] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12156] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_case_statement, .child_count = 4, \
	dynamic_precedence = 0, .production_id = 46}}};
	v->arr[12157] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12158] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_heredoc_redirect, .child_count = 7, \
	dynamic_precedence = 0, .production_id = 149}}};
	v->arr[12159] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12160] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_heredoc_redirect, .child_count = 7, \
	dynamic_precedence = 0, .production_id = 149}}};
	v->arr[12161] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12162] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_heredoc_redirect, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 95}}};
	v->arr[12163] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12164] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_heredoc_redirect, .child_count = 5, \
	dynamic_precedence = 0, .production_id = 95}}};
	init_pae887(v);
}

void	init_pae887(t_parse_action_entries *v)
{
	v->arr[12165] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12166] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5168)}}};
	v->arr[12167] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12168] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4967)}}};
	v->arr[12169] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12170] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3031)}}};
	v->arr[12171] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12172] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6111)}}};
	v->arr[12173] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12174] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (5750)}}};
	v->arr[12175] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12176] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (3275)}}};
	v->arr[12177] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12178] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (6360)}}};
	v->arr[12179] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae888(v);
}

void	init_pae888(t_parse_action_entries *v)
{
	v->arr[12180] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (4863)}}};
	v->arr[12181] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12182] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (101)}}};
	v->arr[12183] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12184] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (107)}}};
	v->arr[12185] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12186] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (108)}}};
	v->arr[12187] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12188] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_heredoc_redirect, .child_count = 4, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12189] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12190] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_heredoc_redirect, .child_count = 4, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12191] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12192] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_case_statement, .child_count = 7, \
	dynamic_precedence = 0, .production_id = 46}}};
	init_pae889(v);
}

void	init_pae889(t_parse_action_entries *v)
{
	v->arr[12193] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12194] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_case_statement, .child_count = 7, \
	dynamic_precedence = 0, .production_id = 46}}};
	v->arr[12195] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12196] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_for_statement, child_count = 4, \
	.dynamic_precedence = 0, .production_id = 42}}};
	v->arr[12197] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12198] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym_for_statement, child_count = 4, \
	.dynamic_precedence = 0, .production_id = 42}}};
	v->arr[12199] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12200] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_heredoc_redirect, .child_count = 6, \
	dynamic_precedence = 0, .production_id = 124}}};
	v->arr[12201] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12202] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym_heredoc_redirect, .child_count = 6, \
	dynamic_precedence = 0, .production_id = 124}}};
	v->arr[12203] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12204] = (t_pae){.action = {.shift = {.type = \
	TSParseActionTypeShift, .state = (435)}}};
	init_pae890(v);
}

// file funcs177.c
