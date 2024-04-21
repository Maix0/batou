/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_external_scanner_symbol_map.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:48:31 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 22:20:59 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../external/funcs.h"

const t_symbol	*get_external_scanner_symbol_map(void)
{
	static t_scanner_states	table = {};
	static bool				init = false;

	if (!init)
	{
		init_scanner_states0(&table);
		init = true;
	}
	return (&table.arr[0]);
}
