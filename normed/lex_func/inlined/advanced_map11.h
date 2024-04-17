/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map11.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP11_H
# define ADVANCED_MAP11_H

static inline bool	ts_lex_advence_map_282(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 740, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 168, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_283(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 741, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 804, ';', 554, '<', 610, '>', 617, '\\', 341, '`', 856, 'e', 866, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_284(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 742, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 58, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_285(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 743, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 803, ';', 554, '<', 609, '>', 617, '\\', 343, '`', 856, 'e', 956, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_286(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 744, '!', 672, '"', 788, '#', 816, '$', 781, '&', 489, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 233, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
