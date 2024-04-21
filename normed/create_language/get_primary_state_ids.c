/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_primary_state_ids.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:43:22 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 21:44:59 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/parser.h"
#include "../primary_state_id/funcs.h"

const t_state_id		   *get_primary_state_ids(void)
{
	static t_state_ids	table = {};
	static bool			init;

	if (!init)
	{
		init_state_ids0(&table);
		init = true;
	}
	return (&table.arr[0]);
}
