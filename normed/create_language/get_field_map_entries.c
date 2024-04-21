/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_field_map_entries.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:48:31 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 20:50:54 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../field_map_entries/funcs.h"

const t_field_map_entry *get_field_map_entries(void)
{
	static t_fmap_entries table = {};
	static bool			  init = false;

	if (!init)
	{
		init_fmap_entries0(&table);
		init = true;
	}
	return (&table.arr[0]);
}
