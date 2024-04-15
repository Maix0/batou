/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_ranges.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:35:12 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/15 16:39:01 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/parser.h"
#include "../headers/symbols.h"
#include <stdint.h>

const uint16_t	*non_terminal_alias_map(void)
{
	static uint16_t non_terminal_alias_map_val[] \
	= {aux_sym__literal_repeat1, 2, aux_sym__literal_repeat1, sym_word, 0 \
	};
	return (non_terminal_alias_map_val);
}

t_char_range	*sym__comment_word_character_set_1(void)
{
	static t_char_range sym__comment_word_character_set_1_val[] \
	= {{0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'#', '#'}, {'%', '%'}, \
	{'*', ':'}, {'=', '='}, {'?', 'Z'}, {'\\', '\\'}, {'^', '_'}, \
	{'a', 'z'}, {'~', 0x10ffff}
	};
	return (sym__comment_word_character_set_1_val);
}

t_char_range	*sym_word_character_set_1(void)
{
	static t_char_range sym_word_character_set_1_val[] \
	= {{0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'%', '%'}, {'*', ':'}, {'=', '='}, \
	{'?', 'Z'}, {'\\', '\\'}, {'^', '_'}, {'a', 'z'}, {'~', 0x10ffff}
	};
	return (sym_word_character_set_1_val);
}
