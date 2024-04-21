/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map44.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 19:25:54 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP44_H
# define ADVANCED_MAP44_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"

static inline bool	lex_advence_map_926(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 816, '$', 781, '\'', 491, \
		'(', 494, ')', 655, '*', 640, '-', 636, '0', 943, '<', 495, '>', 496, \
			'?', 761, '@', 942, '\\', 110, '_', 947, '`', 855, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_927(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, \
		'&', 600, ')', 655, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, \
			'<', 615, '=', 562, '>', 620, '?', 760, '@', 941, '\\', 67, '^', \
			597, '_', 948, '|', 594, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_928(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, \
		'&', 600, ')', 499, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, \
			'<', 615, '=', 562, '>', 620, '?', 760, '@', 941, '\\', 181, '^', \
			597, '_', 948, '|', 594, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_929(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, \
		'&', 600, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, ':', 762, \
			'<', 615, '=', 562, '>', 620, '?', 760, '@', 941, '\\', 64, '^', \
			597, '_', 948, '|', 594, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_930(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, \
		'&', 600, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615, \
			'=', 562, '>', 620, '?', 760, '@', 941, '\\', 60, ']', 675, '^', \
			597, '_', 948, '|', 594, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
