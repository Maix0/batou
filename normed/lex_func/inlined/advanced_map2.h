/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map2.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 19:01:13 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP2_H
# define ADVANCED_MAP2_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"

static inline bool	lex_advence_map_237(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 695, '!', 669, '"', 788, '#', 816, '$', 780, \
		'&', 602, '*', 637, '-', 632, '0', 945, ';', 554, '<', 612, '>', 618, \
			'?', 760, '@', 941, '\\', 91, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_238(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 696, '!', 672, '"', 788, '#', 816, '$', 781, \
		'&', 602, '\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, ';', 554, \
			'<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 30, '_', \
			947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_239(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 697, '"', 788, '#', 862, '$', 781, '&', 602, \
		'\'', 491, '(', 654, '-', 950, '0', 803, ';', 554, '<', 609, '=', 952, \
			'>', 617, '\\', 321, '`', 855, 'e', 956, '|', 593, '[', 786, ']', \
			786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_240(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 698, '!', 669, '"', 788, '#', 816, '$', 780, \
		'&', 602, '*', 637, '-', 632, '0', 945, ';', 554, '<', 613, '>', 618, \
			'?', 760, '@', 941, '\\', 183, '_', 948, 'e', 877, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_241(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 699, '!', 672, '"', 788, '#', 816, '$', 781, \
		'&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, \
			'<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 153, '_', \
			947, '`', 855, 'e', 871, '|', 593, '[', 786, ']', 786, '{', 786, \
			'}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
