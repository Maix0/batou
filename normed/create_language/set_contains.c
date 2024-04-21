/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_contains.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:34:10 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 20:34:18 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/parser.h"

bool set_contains(t_char_range *ranges, uint32_t len, int32_t lookahead)
{
	uint32_t	  index;
	uint32_t	  size;
	uint32_t	  half_size;
	uint32_t	  mid_index;
	t_char_range *range;

	index = 0;
	size = len - index;
	while (size > 1)
	{
		half_size = size / 2;
		mid_index = index + half_size;
		range = &ranges[mid_index];
		if (lookahead >= range->start && lookahead <= range->end)
		{
			return (true);
		}
		else if (lookahead > range->end)
		{
			index = mid_index;
		}
		size -= half_size;
	}
	range = &ranges[index];
	return (lookahead >= range->start && lookahead <= range->end);
}
