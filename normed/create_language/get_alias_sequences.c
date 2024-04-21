/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_alias_sequences.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:48:31 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 21:42:08 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../alias_seq/alias_seq.h"

const t_symbol *get_alias_sequences(void)
{
	static t_alias_seq table = {};
	static bool				  init = false;

	if (!init)
	{
		init_alias_seq(&table);
		init = true;
	}
	return (&table.arr[0][0]);
}
