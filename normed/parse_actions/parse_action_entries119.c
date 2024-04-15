/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs119.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae595(t_parse_action_entries *v)
{
	v->arr[7944] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7945] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6449)}}};
	v->arr[7946] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7947] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = sym__expansion_regex_replacement, \
	.child_count = 4, dynamic_precedence = 0, .production_id = 89}}};
	v->arr[7948] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7949] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6748)}}};
	v->arr[7950] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7951] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6410)}}};
	v->arr[7952] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7953] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5137)}}};
	v->arr[7954] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7955] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3915)}}};
	v->arr[7956] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7957] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3593)}}};
	init_pae596(v);
}

void	init_pae596(t_parse_action_entries *v)
{
	v->arr[7958] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7959] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3892)}}};
	v->arr[7960] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7961] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5875)}}};
	v->arr[7962] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7963] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5110)}}};
	v->arr[7964] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7965] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5861)}}};
	v->arr[7966] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7967] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5137)}}};
	v->arr[7968] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7969] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4377)}}};
	v->arr[7970] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7971] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6281)}}};
	v->arr[7972] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae597(v);
}

void	init_pae597(t_parse_action_entries *v)
{
	v->arr[7973] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4800)}}};
	v->arr[7974] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7975] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (252)}}};
	v->arr[7976] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7977] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (259)}}};
	v->arr[7978] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7979] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (260)}}};
	v->arr[7980] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7981] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (131)}}};
	v->arr[7982] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7983] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4759)}}};
	v->arr[7984] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7985] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4759)}}};
	v->arr[7986] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7987] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5138)}}};
	init_pae598(v);
}

void	init_pae598(t_parse_action_entries *v)
{
	v->arr[7988] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7989] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (7641)}}};
	v->arr[7990] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7991] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3466)}}};
	v->arr[7992] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7993] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4169)}}};
	v->arr[7994] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7995] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3551)}}};
	v->arr[7996] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[7997] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4166)}}};
	v->arr[7998] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[7999] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5971)}}};
	v->arr[8000] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8001] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3476)}}};
	v->arr[8002] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae599(v);
}

void	init_pae599(t_parse_action_entries *v)
{
	v->arr[8003] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5716)}}};
	v->arr[8004] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8005] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3466)}}};
	v->arr[8006] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8007] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3516)}}};
	v->arr[8008] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8009] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6332)}}};
	v->arr[8010] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8011] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4668)}}};
	v->arr[8012] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8013] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (255)}}};
	v->arr[8014] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8015] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (256)}}};
	v->arr[8016] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8017] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (257)}}};
	init_pae600(v);
}

// file funcs119.c
