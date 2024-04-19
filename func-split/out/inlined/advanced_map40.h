/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map40.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP40_H
# define ADVANCED_MAP40_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"
static inline bool	ts_lex_advence_map_906(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 729, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 226, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_907(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 731, '!', 669, '"', 788, '#', 816, '$', 780, '&', 599, '*', 637, '-', 632, '0', 945, ';', 555, '?', 760, '@', 941, '\\', 128, '_', 948, 'i', 876, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_908(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 732, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 166, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_909(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 734, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 48, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_910(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 736, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '*', 640, '-', 636, '0', 943, ';', 555, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 228, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
