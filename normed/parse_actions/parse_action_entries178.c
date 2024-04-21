/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs178.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae890(t_parse_action_entries *v)
{
	v->arr[12205] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12206] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_command, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 2}}};
	v->arr[12207] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12208] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_command, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 2}}};
	v->arr[12209] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12210] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_heredoc_redirect, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12211] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12212] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_heredoc_redirect, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[12213] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12214] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_c_style_for_statement, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 56}}};
	v->arr[12215] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12216] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_c_style_for_statement, .child_count = 5, \
	.dynamic_precedence = 0, .production_id = 56}}};
	init_pae891(v);
}

void	init_pae891(t_parse_action_entries *v)
{
	v->arr[12217] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12218] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_heredoc_redirect, .child_count = 6, \
	.dynamic_precedence = 0, .production_id = 4}}};
	v->arr[12219] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12220] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_heredoc_redirect, .child_count = 6, \
	.dynamic_precedence = 0, .production_id = 4}}};
	v->arr[12221] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12222] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6113)}}};
	v->arr[12223] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12224] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_heredoc_redirect, .child_count = 6, \
	.dynamic_precedence = 0, .production_id = 125}}};
	v->arr[12225] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12226] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_heredoc_redirect, .child_count = 6, \
	.dynamic_precedence = 0, .production_id = 125}}};
	v->arr[12227] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12228] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_c_style_for_statement, .child_count = 6, \
	.dynamic_precedence = 0, .production_id = 68}}};
	init_pae892(v);
}

void	init_pae892(t_parse_action_entries *v)
{
	v->arr[12229] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12230] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_c_style_for_statement, .child_count = 6, \
	.dynamic_precedence = 0, .production_id = 68}}};
	v->arr[12231] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12232] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (5226)}}};
	v->arr[12233] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12234] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4891)}}};
	v->arr[12235] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12236] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (2838)}}};
	v->arr[12237] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12238] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (5705)}}};
	v->arr[12239] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12240] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (2997)}}};
	v->arr[12241] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12242] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (4763)}}};
	init_pae893(v);
}

void	init_pae893(t_parse_action_entries *v)
{
	v->arr[12243] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12244] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (220)}}};
	v->arr[12245] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12246] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (221)}}};
	v->arr[12247] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12248] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (222)}}};
	v->arr[12249] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12250] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_heredoc_redirect, .child_count = 6, \
	.dynamic_precedence = 0, .production_id = 126}}};
	v->arr[12251] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12252] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_heredoc_redirect, .child_count = 6, \
	.dynamic_precedence = 0, .production_id = 126}}};
	v->arr[12253] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12254] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_for_statement, .child_count = 6, \
	.dynamic_precedence = 0, .production_id = 75}}};
	v->arr[12255] = (t_pae){.entry = {.count = 1, .reusable = false}};
	init_pae894(v);
}

void	init_pae894(t_parse_action_entries *v)
{
	v->arr[12256] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_for_statement, .child_count = 6, \
	.dynamic_precedence = 0, .production_id = 75}}};
	v->arr[12257] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12258] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_heredoc_redirect, .child_count = 6, \
	.dynamic_precedence = 0, .production_id = 127}}};
	v->arr[12259] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12260] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_heredoc_redirect, .child_count = 6, \
	.dynamic_precedence = 0, .production_id = 127}}};
	v->arr[12261] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[12262] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_function_definition, .child_count = 6, \
	.dynamic_precedence = 0, .production_id = 84}}};
	v->arr[12263] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12264] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_function_definition, .child_count = 6, \
	.dynamic_precedence = 0, .production_id = 84}}};
	v->arr[12265] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[12266] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_command, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 19}}};
	init_pae895(v);
}

// file funcs178.c
