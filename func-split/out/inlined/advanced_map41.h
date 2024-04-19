/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map41.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP41_H
# define ADVANCED_MAP41_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"
static inline bool	ts_lex_advence_map_911(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 738, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 207, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_912(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 740, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 168, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_913(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 742, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 58, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_914(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 744, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 233, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_915(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 746, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 608, '>', 617, '?', 761, '@', 942, '\\', 176, '_', 947, '`', 855, '|', 516, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
