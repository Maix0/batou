/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map27.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 18:59:07 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP27_H
# define ADVANCED_MAP27_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"

static inline bool	lex_advence_map_462(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, \
		'(', 654, '-', 950, '0', 803, '<', 609, '=', 952, '>', 617, '\\', 353, \
			'`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_463(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, \
		'(', 494, ')', 655, '-', 950, '0', 803, '<', 609, '>', 617, '\\', 358, \
			'`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_464(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, \
		'(', 494, '-', 950, '0', 803, '<', 609, '>', 617, '\\', 336, ']', 675, \
			'`', 855, '|', 593, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_465(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, \
		'(', 494, '-', 950, '0', 803, '<', 609, '>', 617, '\\', 355, ']', 675, \
			'`', 856, '|', 593, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_466(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, \
		'(', 494, '-', 950, '0', 803, '<', 610, '>', 617, '\\', 342, '`', 855, \
			'|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
