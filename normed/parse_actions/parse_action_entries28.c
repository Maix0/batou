/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs28.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae140(t_parse_action_entries *v)
{
	v->arr[1911] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1716), repetition = true}}};
	v->arr[1913] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[1914] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_command_repeat2, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 38}}};
	v->arr[1914] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7619), repetition = true}}};
	v->arr[1916] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1917] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (559)}}};
	v->arr[1918] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1919] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1919] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1171), repetition = true}}};
	v->arr[1921] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1922] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1922] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3741), repetition = true}}};
	init_pae141(v);
}

void	init_pae141(t_parse_action_entries *v)
{
	v->arr[1924] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1925] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1925] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3742), repetition = true}}};
	v->arr[1927] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1928] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1928] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6085), repetition = true}}};
	v->arr[1930] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1931] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1931] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1266), repetition = true}}};
	v->arr[1933] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1934] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae142(v);
}

void	init_pae142(t_parse_action_entries *v)
{
	v->arr[1934] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5793), repetition = true}}};
	v->arr[1936] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1937] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1937] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1469), repetition = true}}};
	v->arr[1939] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1940] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1940] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6285), repetition = true}}};
	v->arr[1942] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1943] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1943] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4677), repetition = true}}};
	v->arr[1945] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1946] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae143(v);
}

void	init_pae143(t_parse_action_entries *v)
{
	v->arr[1946] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (311), repetition = true}}};
	v->arr[1948] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1949] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1949] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (310), repetition = true}}};
	v->arr[1951] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1952] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1952] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (309), repetition = true}}};
	v->arr[1954] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1955] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1955] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (381), repetition = true}}};
	v->arr[1957] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[1958] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae144(v);
}

void	init_pae144(t_parse_action_entries *v)
{
	v->arr[1958] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (565), repetition = true}}};
	v->arr[1960] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[1961] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1961] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6628), repetition = true}}};
	v->arr[1963] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[1964] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1964] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1170), repetition = true}}};
	v->arr[1966] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[1967] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_declaration_command_repeat1, \
	.child_count = 2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[1967] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7662), repetition = true}}};
	v->arr[1969] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[1970] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1159)}}};
	init_pae145(v);
}

// file funcs28.c
