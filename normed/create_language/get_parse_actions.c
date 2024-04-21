/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_parse_actions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:37:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 20:42:04 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/parser.h"
#include "../parse_actions/funcs.h"

const t_parse_action_entry	*get_parse_actions(void)
{
	static t_parse_action_entries	table = {};
	static bool						init = false;

	if (!init)
	{
		init_pae0(&table);
		init = true;
	}
	return (&table.arr[0]);
}
