/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs128.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	init_pae640(t_parse_action_entries *v)
{
	v->arr[8614] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6338)}}};
	v->arr[8615] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8616] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6364)}}};
	v->arr[8617] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8618] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2106)}}};
	v->arr[8619] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8620] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1748)}}};
	v->arr[8621] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8622] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5158)}}};
	v->arr[8623] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8624] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5762)}}};
	v->arr[8625] = (t_pae){.entry = {.count = 1, .reusable = false}};
	v->arr[8626] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5154)}}};
	v->arr[8627] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8628] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5154)}}};
	init_pae641(v);
}

void	init_pae641(t_parse_action_entries *v)
{
	v->arr[8629] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8630] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2071)}}};
	v->arr[8631] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8632] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (1961)}}};
	v->arr[8633] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8634] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (2015)}}};
	v->arr[8635] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8636] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6368)}}};
	v->arr[8637] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8638] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4840)}}};
	v->arr[8639] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8640] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6433)}}};
	v->arr[8641] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8642] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4804)}}};
	v->arr[8643] = (t_pae){.entry = {.count = 1, .reusable = true}};
	init_pae642(v);
}

void	init_pae642(t_parse_action_entries *v)
{
	v->arr[8644] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6461)}}};
	v->arr[8645] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[8646] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__heredoc_command, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 67}}};
	v->arr[8646] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5062), repetition = true}}};
	v->arr[8648] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[8649] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__heredoc_command, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 67}}};
	v->arr[8649] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4006), repetition = true}}};
	v->arr[8651] = (t_pae){.entry = {.count = 1, .reusable = true}};
	v->arr[8652] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__heredoc_command, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 67}}};
	v->arr[8653] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[8654] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__heredoc_command, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 67}}};
	init_pae643(v);
}

void	init_pae643(t_parse_action_entries *v)
{
	v->arr[8654] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4005), repetition = true}}};
	v->arr[8656] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[8657] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__heredoc_command, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 67}}};
	v->arr[8657] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6005), repetition = true}}};
	v->arr[8659] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[8660] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__heredoc_command, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 67}}};
	v->arr[8660] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5034), repetition = true}}};
	v->arr[8662] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[8663] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__heredoc_command, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 67}}};
	v->arr[8663] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (5741), repetition = true}}};
	v->arr[8665] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[8666] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__heredoc_command, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 67}}};
	init_pae644(v);
}

void	init_pae644(t_parse_action_entries *v)
{
	v->arr[8666] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4837), repetition = true}}};
	v->arr[8668] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[8669] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__heredoc_command, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 67}}};
	v->arr[8669] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (6352), repetition = true}}};
	v->arr[8671] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[8672] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__heredoc_command, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 67}}};
	v->arr[8672] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (4857), repetition = true}}};
	v->arr[8674] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[8675] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__heredoc_command, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 67}}};
	v->arr[8675] = (t_pae){.action = {.shift = {.type = TSParseActionTypeShift, \
	.state = (110), repetition = true}}};
	v->arr[8677] = (t_pae){.entry = {.count = 2, .reusable = false}};
	v->arr[8678] = (t_pae){.action = {reduce = {.type = \
TSParseActionTypeReduce, symbol = aux_sym__heredoc_command, .child_count = 2, \
	dynamic_precedence = 0, .production_id = 67}}};
	init_pae645(v);
}

// file funcs128.c
