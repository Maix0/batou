/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_symbol_metadata.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:48:31 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 20:52:38 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../symbols_metadata/funcs.h"

const t_symbol_metadata	*get_symbol_metadata(void)
{
	static t_symbols_metadata	table = {};
	static bool					init = false;

	if (!init)
	{
		init_sym_metadata0(&table);
		init = true;
	}
	return (&table.arr[0]);
}
