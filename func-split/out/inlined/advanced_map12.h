/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map12.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP12_H
# define ADVANCED_MAP12_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"
static inline bool	ts_lex_advence_map_287(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 745, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 804, ';', 554, '<', 610, '>', 617, '\\', 344, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_288(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 746, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 608, '>', 617, '?', 761, '@', 942, '\\', 176, '_', 947, '`', 855, '|', 516, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_289(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 747, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 803, ';', 554, '<', 609, '>', 617, '\\', 346, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_290(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 748, '!', 672, '"', 788, '#', 816, '$', 781, '&', 599, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, '<', 495, '>', 496, '?', 761, '@', 942, '\\', 100, '_', 947, '`', 855, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_291(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 749, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 803, ';', 554, '<', 610, '>', 617, '\\', 347, '`', 856, 'e', 956, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
