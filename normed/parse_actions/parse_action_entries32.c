/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs32.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae160(t_parse_action_entries *v)
{
	v->arr[2157] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2158] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2158] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1360), .repetition = true}}};
	v->arr[2160] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2161] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2161] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4196), .repetition = true}}};
	v->arr[2163] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2164] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2164] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4195), .repetition = true}}};
	v->arr[2166] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2167] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae161(v);
}

void	init_pae161(t_parse_action_entries *v)
{
	v->arr[2167] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6071), .repetition = true}}};
	v->arr[2169] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2170] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2170] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1356), .repetition = true}}};
	v->arr[2172] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2173] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2173] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (5758), .repetition = true}}};
	v->arr[2175] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2176] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2176] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1571), .repetition = true}}};
	v->arr[2178] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2179] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae162(v);
}

void	init_pae162(t_parse_action_entries *v)
{
	v->arr[2179] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6343), .repetition = true}}};
	v->arr[2181] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2182] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2182] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (4649), .repetition = true}}};
	v->arr[2184] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2185] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2185] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (236), .repetition = true}}};
	v->arr[2187] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2188] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2188] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (238), .repetition = true}}};
	v->arr[2190] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2191] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae163(v);
}

void	init_pae163(t_parse_action_entries *v)
{
	v->arr[2191] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (241), .repetition = true}}};
	v->arr[2193] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2194] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2194] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (214), .repetition = true}}};
	v->arr[2196] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2197] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2197] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (581), .repetition = true}}};
	v->arr[2199] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2200] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2200] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (6603), .repetition = true}}};
	v->arr[2202] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2203] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae164(v);
}

void	init_pae164(t_parse_action_entries *v)
{
	v->arr[2203] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1362), .repetition = true}}};
	v->arr[2205] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[2206] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2206] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (7617), .repetition = true}}};
	v->arr[2208] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2209] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2209] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (1158), .repetition = true}}};
	v->arr[2211] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[2212] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[2212] = (t_pae){.action = {.shift = {.type = ACT_TY_SHIFT, \
	.state = (3764), .repetition = true}}};
	v->arr[2214] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[2215] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_for_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae165(v);
}

// file funcs32.c
