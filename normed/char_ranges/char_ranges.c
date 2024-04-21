/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_ranges.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:35:12 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 21:12:06 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/parser.h"

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
