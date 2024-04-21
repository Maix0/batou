/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map38.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 19:12:31 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP38_H
# define ADVANCED_MAP38_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"

static inline bool	lex_advence_map_896(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 714, '!', 672, '"', 788, '#', 816, '$', 781, \
		'&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, \
			'<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 215, '_', \
			947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_897(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 716, '!', 669, '"', 788, '#', 816, '$', 780, \
		'&', 602, '*', 637, '-', 632, '0', 945, ';', 555, '<', 613, '>', 618, \
			'?', 760, '@', 941, '\\', 218, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_898(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 717, '!', 672, '"', 788, '#', 816, '$', 781, \
		'&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, \
			'<', 609, '>', 617, '?', 761, '@', 942, '\\', 37, '_', 947, '`', \
			855, 'e', 871, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_899(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 719, '!', 669, '"', 788, '#', 816, '$', 780, \
		'&', 602, ')', 655, '*', 637, '-', 632, '0', 945, ';', 555, '<', 613, \
			'>', 618, '?', 760, '@', 941, '\\', 190, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_900(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 720, '!', 672, '"', 788, '#', 816, '$', 781, \
		'&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, \
			'<', 610, '>', 617, '?', 761, '@', 942, '\\', 222, '_', 947, '`', \
			855, 'e', 871, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
