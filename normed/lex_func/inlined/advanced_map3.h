/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map3.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 19:14:04 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP3_H
# define ADVANCED_MAP3_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"

static inline bool	lex_advence_map_242(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 700, '"', 788, '#', 862, '$', 781, '&', 602, \
		'\'', 491, '(', 654, '-', 950, '0', 803, ';', 554, '<', 609, '=', 952, \
			'>', 617, '\\', 322, '`', 855, '|', 593, '[', 786, ']', 786, '{', \
			786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_243(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 701, '!', 669, '"', 788, '#', 816, '$', 780, \
		'&', 602, '*', 637, '-', 632, '0', 945, ';', 554, '<', 613, '>', 618, \
			'?', 760, '@', 941, '\\', 185, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_244(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 702, '!', 672, '"', 788, '#', 816, '$', 781, \
		'&', 602, '\'', 491, '(', 654, ')', 655, '*', 640, '-', 636, '0', 943, \
			';', 555, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', \
			32, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, \
			'}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_245(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 703, '"', 788, '#', 862, '$', 781, '&', 602, \
		'\'', 491, '(', 654, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609, \
			'=', 952, '>', 617, '\\', 323, '`', 855, '|', 593, '[', 786, ']', \
			786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_246(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 704, '!', 669, '"', 788, '#', 816, '$', 780, \
		'&', 602, '*', 637, '-', 632, '0', 945, ';', 555, '<', 612, '>', 618, \
			'?', 760, '@', 941, '\\', 96, '_', 948, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
