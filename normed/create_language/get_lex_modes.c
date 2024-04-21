/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lex_modes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:48:31 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 20:58:55 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lex_mode/funcs.h"

const t_lex_mode *get_lex_modes(void)
{
	static t_lex_modes table = {};
	static bool				  init = false;

	if (!init)
	{
		lex_modes0(&table);
		init = true;
	}
	return (&table.arr[0]);
}
