/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs101.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae505(t_parse_action_entries *v)
{
	v->arr[6690] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6691] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3957)}}};
	v->arr[6692] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6693] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6693] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3885), repetition = true}}};
	v->arr[6695] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6696] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2713)}}};
	v->arr[6697] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6698] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6698] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3865), repetition = true}}};
	v->arr[6700] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6701] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3962)}}};
	v->arr[6702] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae506(v);
}

void	init_pae506(t_parse_action_entries *v)
{
	v->arr[6703] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3954)}}};
	v->arr[6704] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6705] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3958)}}};
	v->arr[6706] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6707] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4116)}}};
	v->arr[6708] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6709] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4293)}}};
	v->arr[6710] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6711] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3656)}}};
	v->arr[6712] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6713] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7018)}}};
	v->arr[6714] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6715] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6715] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4016), repetition = true}}};
	init_pae507(v);
}

void	init_pae507(t_parse_action_entries *v)
{
	v->arr[6717] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6718] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3757)}}};
	v->arr[6719] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6720] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3760)}}};
	v->arr[6721] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6722] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3701)}}};
	v->arr[6723] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6724] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3099)}}};
	v->arr[6725] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6726] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3616)}}};
	v->arr[6727] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6728] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6833)}}};
	v->arr[6729] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6730] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym_concatenation_repeat1, .child_count = \
	2, dynamic_precedence = 0, .production_id = 0}}};
	init_pae508(v);
}

void	init_pae508(t_parse_action_entries *v)
{
	v->arr[6730] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3738), repetition = true}}};
	v->arr[6732] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6733] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6370)}}};
	v->arr[6734] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6735] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3644)}}};
	v->arr[6736] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6737] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4055)}}};
	v->arr[6738] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6739] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4014)}}};
	v->arr[6740] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6741] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7198)}}};
	v->arr[6742] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6743] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4177)}}};
	v->arr[6744] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6745] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4015)}}};
	init_pae509(v);
}

void	init_pae509(t_parse_action_entries *v)
{
	v->arr[6746] = (t_pae){.entry = {.count = 2, .reusable = true}};
	v->arr[6747] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__literal_repeat1, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6747] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2713), repetition = true}}};
	v->arr[6749] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6750] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__extglob_blob, child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6751] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6752] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, .symbol = sym__extglob_blob, child_count = 2, \
	.dynamic_precedence = 0, .production_id = 0}}};
	v->arr[6753] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6754] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2724)}}};
	v->arr[6755] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6756] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6969)}}};
	v->arr[6757] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6758] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2702)}}};
	init_pae510(v);
}

// file funcs101.c
