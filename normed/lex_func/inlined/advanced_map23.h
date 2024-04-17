/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map23.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP23_H
# define ADVANCED_MAP23_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"
static inline bool	lex_advence_map_442(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '#', 862, '%', 650, '&', 600, ')', 499, '*', 639, '+', 631, ',', 556, '-', 635, '/', 645, '<', 615, '=', 561, '>', 620, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_443(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '#', 862, '%', 650, '&', 600, ')', 499, '*', 639, '+', 631, '-', 634, '/', 645, ':', 762, '<', 615, '=', 562, '>', 620, '?', 760, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_444(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 108, ']', 675, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_445(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 114, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_446(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 195, ']', 675, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
