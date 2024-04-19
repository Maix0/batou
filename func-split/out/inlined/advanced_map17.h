/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map17.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP17_H
# define ADVANCED_MAP17_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"
static inline bool	ts_lex_advence_map_412(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 55, ']', 675, '_', 947, '`', 855, '|', 593, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_413(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 62, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_414(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 231, ']', 675, '_', 947, '`', 855, '|', 593, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_415(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 235, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_416(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '\'', 491, '(', 494, ')', 655, '*', 640, '-', 636, '0', 943, '<', 495, '>', 496, '?', 761, '@', 942, '\\', 110, '_', 947, '`', 855, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
