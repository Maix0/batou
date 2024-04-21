/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_small_parse_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:37:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 20:39:07 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/parser.h"
#include "../small_parse_table/funcs.h"

const uint16_t *get_small_parse_table(void)
{
	static t_small_table table = {};
	static bool			 init = false;

	if (!init)
	{
		init_small_table0(&table);
		init = true;
	}
	return (&table.arr[0]);
}
