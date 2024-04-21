/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs214.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae1070(t_parse_action_entries *v)
{
	v->arr[14720] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14721] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3883)}}};
	v->arr[14722] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14723] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6826)}}};
	v->arr[14724] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14725] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (7523)}}};
	v->arr[14726] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14727] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3692)}}};
	v->arr[14728] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14729] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6730)}}};
	v->arr[14730] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14731] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6730)}}};
	v->arr[14732] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14733] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6495)}}};
	v->arr[14734] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1071(v);
}

void	init_pae1071(t_parse_action_entries *v)
{
	v->arr[14735] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (103)}}};
	v->arr[14736] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14737] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6546)}}};
	v->arr[14738] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14739] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_body, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 52}}};
	v->arr[14740] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14741] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_case_item_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 45}}};
	v->arr[14742] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14743] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6508)}}};
	v->arr[14744] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14745] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (76)}}};
	v->arr[14746] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14747] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_if_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	init_pae1072(v);
}

void	init_pae1072(t_parse_action_entries *v)
{
	v->arr[14748] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[14749] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_if_statement_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14749] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (418), .repetition = true}}};
	v->arr[14751] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14752] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_body, .child_count = 3, \
	.dynamic_precedence = 0, .production_id = 53}}};
	v->arr[14753] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14754] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6527)}}};
	v->arr[14755] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14756] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6581)}}};
	v->arr[14757] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14758] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (7009)}}};
	v->arr[14759] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14760] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6529)}}};
	init_pae1073(v);
}

void	init_pae1073(t_parse_action_entries *v)
{
	v->arr[14761] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14762] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3614)}}};
	v->arr[14763] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[14764] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6783)}}};
	v->arr[14765] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14766] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6783)}}};
	v->arr[14767] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14768] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (7272)}}};
	v->arr[14769] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14770] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_regex_replacement, \
	.child_count = 5, .dynamic_precedence = 0, .production_id = 121}}};
	v->arr[14771] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14772] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6544)}}};
	v->arr[14773] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14774] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (143)}}};
	init_pae1074(v);
}

void	init_pae1074(t_parse_action_entries *v)
{
	v->arr[14775] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[14776] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, .dynamic_precedence = 0, .production_id = 0}}};
	v->arr[14776] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (3860), .repetition = true}}};
	v->arr[14778] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14779] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = aux_sym_case_item_repeat1, .child_count = 2, \
	.dynamic_precedence = 0, .production_id = 46}}};
	v->arr[14780] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14781] = (t_pae){.action = {.shift = {.type = \
	ACT_TY_SHIFT, .state = (6957)}}};
	v->arr[14782] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14783] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_regex_replacement, \
	.child_count = 3, .dynamic_precedence = 0, .production_id = 62}}};
	v->arr[14784] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[14785] = (t_pae){.action = {.reduce = {.type = \
ACT_TY_REDUCE, .symbol = sym__expansion_body, .child_count = 1, \
	.dynamic_precedence = 0, .production_id = 7}}};
	v->arr[14786] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae1075(v);
}

// file funcs214.c
