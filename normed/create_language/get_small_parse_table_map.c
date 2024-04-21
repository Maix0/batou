/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_small_parse_table_map.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:37:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 20:40:09 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/parser.h"
#include "../small_parse_table_map/funcs.h"

const uint32_t	*get_small_parse_table_map(void)
{
	static t_small_table_map	table = {};
	static bool					init = false;

	if (!init)
	{
		init_small_table_map0(&table);
		init = true;
	}
	return (&table.arr[0]);
}
