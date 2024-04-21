/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map10.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 17:46:00 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP10_H
# define ADVANCED_MAP10_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"

static inline bool	lex_advence_map_277(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 735, '"', 788, '#', 862, '$', 781, '&', 602, \
		'\'', 491, '(', 654, '-', 950, '0', 803, ';', 554, '<', 609, '=', 952, \
		'>', 617, '\\', 335, '`', 856, 'e', 956, '|', 593, '[', 786, ']', \
		786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_278(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 736, '!', 672, '"', 788, '#', 816, '$', 781, \
		'&', 602, '\'', 491, '(', 494, ')', 655, '*', 640, '-', 636, '0', 943, \
			';', 555, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 228, '_', \
			947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_279(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 737, '"', 788, '#', 862, '$', 781, '&', 602, \
		'\'', 491, '(', 654, '-', 950, '0', 803, ';', 554, '<', 609, '=', 952, \
		'>', 617, '\\', 337, '`', 856, '|', 593, '[', 786, ']', 786, '{', \
		786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_280(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 738, '!', 672, '"', 788, '#', 816, '$', 781, \
		'&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, \
		'<', 610, '>', 617, '?', 761, '@', 942, '\\', 207, '_', 947, '`', 855, \
		'|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_281(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 739, '"', 788, '#', 862, '$', 781, '&', 602, \
		'\'', 491, '(', 654, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609, \
		'=', 952, '>', 617, '\\', 339, '`', 856, '|', 593, '[', 786, ']', \
		786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
