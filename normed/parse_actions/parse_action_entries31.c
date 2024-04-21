/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs31.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae155(t_parse_action_entries *v)
{
	v->arr[2097] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym_file_redirect, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 8}}};
	v->arr[2098] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2099] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (570)}}};
	v->arr[2100] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2101] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2101] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1322), .repetition = true}}};
	v->arr[2103] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2104] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2104] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4200), .repetition = true}}};
	v->arr[2106] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2107] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae156(v);
}

void	init_pae156(t_parse_action_entries *v)
{
	v->arr[2107] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4204), .repetition = true}}};
	v->arr[2109] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2110] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2110] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6034), .repetition = true}}};
	v->arr[2112] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2113] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2113] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1460), .repetition = true}}};
	v->arr[2115] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2116] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2116] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5722), .repetition = true}}};
	v->arr[2118] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2119] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae157(v);
}

void	init_pae157(t_parse_action_entries *v)
{
	v->arr[2119] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1580), .repetition = true}}};
	v->arr[2121] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2122] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2122] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6321), .repetition = true}}};
	v->arr[2124] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2125] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2125] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4765), .repetition = true}}};
	v->arr[2127] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2128] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2128] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (174), .repetition = true}}};
	v->arr[2130] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2131] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae158(v);
}

void	init_pae158(t_parse_action_entries *v)
{
	v->arr[2131] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (175), .repetition = true}}};
	v->arr[2133] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2134] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2134] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (176), .repetition = true}}};
	v->arr[2136] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2137] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2137] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (177), .repetition = true}}};
	v->arr[2139] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2140] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2140] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (577), .repetition = true}}};
	v->arr[2142] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2143] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae159(v);
}

void	init_pae159(t_parse_action_entries *v)
{
	v->arr[2143] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6704), .repetition = true}}};
	v->arr[2145] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2146] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2146] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1318), .repetition = true}}};
	v->arr[2148] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2149] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2149] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7611), .repetition = true}}};
	v->arr[2151] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2152] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1194)}}};
	v->arr[2153] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2154] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1195)}}};
	v->arr[2155] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[2156] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1195)}}};
	init_pae160(v);
}

// file funcs31.c
