/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map31.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 19:03:52 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP31_H
# define ADVANCED_MAP31_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"

static inline bool	lex_advence_map_487(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'#', 862, '&', 489, '<', 612, '>', 618, '\\', \
	384, \
		']', 675, '`', 510, '|', 593, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_527(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 703, '"', 788, '#', 862, '$', 781, '&', \
	602, \
	'\'', 491, '(', 654, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609, \
	'=', 952, '>', 617, '\\', 323, '`', 855, '|', 593, '[', 786, ']', \
	786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_528(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 705, '!', 672, '"', 788, '#', 816, '$', \
	781, \
	'&', 602, '\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, ';', 555, \
	'<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 156, '_', \
	947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_529(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 710, '!', 669, '"', 788, '#', 816, \
	'$', 780, \
		'&',
		602, '*', 637, '-', 632, '0', 945, ';', 555, '<', 612, '>', \
		618, '?', \
		760, \
		'@', 941, '\\', 211, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_530(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 712, '"', 788, '#', 862, '$', 781, \
	'&', 602, \
	'\'', \
		491, '(', 494, ')', 655, '-', 950, '0', 804, ';', 555, '<', 610, \
	'>', \
	617, \
		'\\', 326, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, \
	'}', \
			786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
