/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map42.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP42_H
# define ADVANCED_MAP42_H

static inline bool	ts_lex_advence_map_916(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 748, '!', 672, '"', 788, '#', 816, '$', 781, '&', 599, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, '<', 495, '>', 496, '?', 761, '@', 942, '\\', 100, '_', 947, '`', 855, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_917(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 750, '!', 672, '"', 788, '#', 816, '$', 781, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 495, '>', 496, '?', 761, '@', 942, '\\', 112, '_', 947, '`', 855, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_918(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 670, '"', 788, '#', 816, '$', 781, '%', 649, '&', 601, '\'', 491, '(', 654, '*', 638, '+', 630, '-', 633, '/', 644, '0', 943, '<', 607, '=', 560, '>', 616, '?', 761, '@', 942, '\\', 19, ']', 675, '^', 596, '_', 947, '`', 855, '|', 592, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_919(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '&', 508, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 608, '>', 617, '?', 761, '@', 942, '\\', 74, '_', 947, '`', 855, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_920(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 51, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
