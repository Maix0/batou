/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_parse_table.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:35:15 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 20:50:11 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../parse_table/funcs.h"

const uint16_t *get_parse_table(void);

const uint16_t *get_parse_table(void)
{
	static t_parse_table table = {};
	static bool			 init = false;

	if (!init)
	{
		init_parse_table0(&table);
		init = true;
	}
	return (&table.arr[0][0]);
}
