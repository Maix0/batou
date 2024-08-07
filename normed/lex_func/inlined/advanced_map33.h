/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map33.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 19:05:31 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP33_H
# define ADVANCED_MAP33_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"

static inline bool	lex_advence_map_536(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 738, '!', 672, '"', 788, '#', 816, '$', 781, \
		'&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, \
			'<', 610, '>', 617, '?', 761, '@', 942, '\\', 207, '_', 947, '`', \
			855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_537(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 739, '"', 788, '#', 862, '$', 781, '&', 602, \
		'\'', 491, '(', 654, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609, \
			'=', 952, '>', 617, '\\', 339, '`', 856, '|', 593, '[', 786, ']', \
			786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_538(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 751, '"', 788, '#', 862, '$', 781, '&', 602, \
		'\'', 491, '(', 494, ')', 655, '-', 950, '0', 804, ';', 555, '<', 610, \
			'>', 617, '\\', 349, '`', 856, '|', 593, '[', 786, ']', 786, '{', \
			786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_539(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 752, '"', 788, '#', 862, '$', 781, '&', 602, \
		'\'', 491, '(', 494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609, \
			'>', 617, '\\', 350, '`', 856, '|', 593, '[', 786, ']', 786, '{', \
			786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_540(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 754, '"', 788, '#', 862, '$', 781, '&', 602, \
		'\'', 491, '(', 494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 610, \
			'>', 617, '\\', 354, '`', 856, '|', 593, '[', 786, ']', 786, '{', \
			786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
