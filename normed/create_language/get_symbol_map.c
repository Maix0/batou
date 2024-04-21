/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_symbol_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:48:31 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 20:53:36 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../symbols_map/funcs.h"

const t_symbol *get_symbol_map(void)
{
	static t_symbols_map table = {};
	static bool				  init = false;

	if (!init)
	{
		init_symbols_map0(&table);
		init = true;
	}
	return (&table.arr[0]);
}
