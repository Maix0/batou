/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_non_terminal_alias_map.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:48:31 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 22:18:38 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/parser.h"
#include "../headers/symbols.h"

const uint16_t	*get_non_terminal_alias_map(void)
{
	static const uint16_t	non_terminal_alias_map_val[] = {\
		aux_sym__literal_repeat1, 2, aux_sym__literal_repeat1, sym_word, 0, };

	return (non_terminal_alias_map_val);
}
