/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map9.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 19:32:50 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP9_H
# define ADVANCED_MAP9_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"

static inline bool	lex_advence_map_272(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 730, '"', 788, '#', 862, '$', 781, '&', 602, \
		'\'', 491, '(', 494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 610, \
			'>', 617, '\\', 399, '`', 855, '|', 593, '[', 786, ']', 786, '{', \
			786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_273(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 731, '!', 669, '"', 788, '#', 816, '$', 780, \
		'&', 599, '*', 637, '-', 632, '0', 945, ';', 555, '?', 760, '@', 941, \
			'\\', 128, '_', 948, 'i', 876, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_274(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 732, '!', 672, '"', 788, '#', 816, '$', 781, \
		'&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, \
			'<', 609, '>', 617, '?', 761, '@', 942, '\\', 166, '_', 947, '`', \
			855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_275(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 733, '"', 788, '#', 862, '$', 781, '&', \
		489, \
		'\'', 491, '(', 494, '-', 950, '0', 803, '<', 608, '>', 617, '\\', \
		333, \
			'`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_276(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 734, '!', 672, '"', 788, '#', 816, '$', 781, \
		'&', 489, '\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, '<', 609, \
			'=', 952, '>', 617, '?', 761, '@', 942, '\\', 48, '_', 947, '`', \
			855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
