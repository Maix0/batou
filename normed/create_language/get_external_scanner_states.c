/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_external_scanner_states.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:48:31 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 21:01:01 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../external_states/funcs.h"

const bool	*get_external_scanner_states(void)
{
	static t_external_scanner_states	table = {};
	static bool							init = false;

	if (!init)
	{
		init_ext_scanner_states0(&table);
		init = true;
	}
	return (&table.arr[0][0]);
}
