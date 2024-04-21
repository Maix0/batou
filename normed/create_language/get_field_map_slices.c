/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_field_map_slices.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:48:31 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 20:49:54 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../field_map_slices/funcs.h"

const t_field_map_slice	*get_field_map_slices(void)
{
	static t_fmap_slices	table = {};
	static bool				init = false;

	if (!init)
	{
		init_fmap_slices0(&table);
		init = true;
	}
	return (&table.arr[0]);
}
