/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs104.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae520(t_parse_action_entries *v)
{
	v->arr[6890] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3970)}}};
	v->arr[6891] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6892] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4093)}}};
	v->arr[6893] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6894] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4091)}}};
	v->arr[6895] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6896] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4090)}}};
	v->arr[6897] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6898] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4084)}}};
	v->arr[6899] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6900] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4073)}}};
	v->arr[6901] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6902] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4072)}}};
	v->arr[6903] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6904] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4072)}}};
	init_pae521(v);
}

void	init_pae521(t_parse_action_entries *v)
{
	v->arr[6905] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6906] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4070)}}};
	v->arr[6907] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6908] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4068)}}};
	v->arr[6909] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6910] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4064)}}};
	v->arr[6911] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[6912] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4001)}}};
	v->arr[6913] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6914] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3731)}}};
	v->arr[6915] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6916] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3842)}}};
	v->arr[6917] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6918] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1378)}}};
	v->arr[6919] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae522(v);
}

void	init_pae522(t_parse_action_entries *v)
{
	v->arr[6920] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1411)}}};
	v->arr[6921] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6922] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4340)}}};
	v->arr[6923] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6924] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (982)}}};
	v->arr[6925] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6926] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4295)}}};
	v->arr[6927] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6928] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1476)}}};
	v->arr[6929] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6930] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4461)}}};
	v->arr[6931] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6932] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1506)}}};
	v->arr[6933] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6934] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1008)}}};
	init_pae523(v);
}

void	init_pae523(t_parse_action_entries *v)
{
	v->arr[6935] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6936] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1452)}}};
	v->arr[6937] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6938] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1224)}}};
	v->arr[6939] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6940] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1218)}}};
	v->arr[6941] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6942] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5404)}}};
	v->arr[6943] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6944] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2643)}}};
	v->arr[6945] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6946] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5525)}}};
	v->arr[6947] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6948] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2859)}}};
	v->arr[6949] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae524(v);
}

void	init_pae524(t_parse_action_entries *v)
{
	v->arr[6950] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (871)}}};
	v->arr[6951] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6952] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5688)}}};
	v->arr[6953] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6954] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (3331)}}};
	v->arr[6955] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6956] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5481)}}};
	v->arr[6957] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6958] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4313)}}};
	v->arr[6959] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6960] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6561)}}};
	v->arr[6961] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6962] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5402)}}};
	v->arr[6963] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[6964] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2482)}}};
	init_pae525(v);
}

// file funcs104.c
