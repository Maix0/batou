/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map32.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 19:04:47 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP32_H
# define ADVANCED_MAP32_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"

static inline bool	lex_advence_map_531(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 714, '!', 672, '"', 788, '#', 816, '$', 781, \
		'&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, \
			'<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 215, '_', \
			947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_532(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 716, '!', 669, '"', 788, '#', 816, '$', 780, \
		'&', 602, '*', 637, '-', 632, '0', 945, ';', 555, '<', 613, '>', 618, \
			'?', 760, '@', 941, '\\', 218, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_533(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 724, '"', 788, '#', 862, '$', 781, '&', 602, \
		'\'', 491, '(', 494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609, \
			'>', 617, '\\', 331, '`', 855, '|', 593, '[', 786, ']', 786, '{', \
			786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_534(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 730, '"', 788, '#', 862, '$', 781, '&', 602, \
		'\'', 491, '(', 494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 610, \
			'>', 617, '\\', 399, '`', 855, '|', 593, '[', 786, ']', 786, '{', \
			786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_535(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 732, '!', 672, '"', 788, '#', 816, '$', 781, \
		'&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, \
			'<', 609, '>', 617, '?', 761, '@', 942, '\\', 166, '_', 947, '`', \
			855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
