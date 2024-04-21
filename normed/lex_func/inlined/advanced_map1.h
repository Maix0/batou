/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map1.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 18:51:35 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP1_H
# define ADVANCED_MAP1_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"

static inline bool	lex_advence_map_85(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 690, '#', 862, '$', 783, '&', 489, '(', 654, \
		'-', 504, '0', 808, ':', 762, '<', 611, '>', 618, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_146(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 691, '!', 951, '"', 788, '#', 862, '$', 781, \
		'%', 649, '&', 601, '\'', 491, '(', 654, ')', 655, '*', 638, '+', 630, \
			'-', 633, '/', 644, '0', 803, ';', 555, '<', 607, '=', 560, '>', \
			616, '?', 761, '\\', 316, '^', 596, '`', 856, '|', 592, '[', 786, \
			']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_200(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 692, '!', 669, '"', 788, '#', 816, '$', 780, \
		'&', 602, '*', 637, '-', 632, '0', 945, ';', 554, '<', 612, '>', 618, \
			'?', 760, '@', 941, '\\', 81, '_', 948, 'e', 877, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_219(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 693, '!', 672, '"', 788, '#', 816, '$', 781, \
		'&', 602, '\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, ';', 554, \
		'<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 27, '_', 947, \
		'`', 855, 'e', 871, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_236(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 694, '!', 951, '"', 788, '#', 862, '$', \
		781, '%', 649, \
		'&', 601, '\'', 491, '(', 654, ')', 655, '*', 638, '+', 630, '-', \
		633, '/', 644, '0', 803, ';', 555, '<', 607, '=', 560, '>', 616, \
		'?', 761, '\\', 317, '^', 596, '`', 855, '|', 592, '[', 786, ']', \
		786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
