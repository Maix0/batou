/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map28.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP28_H
# define ADVANCED_MAP28_H

static inline bool	ts_lex_advence_map_467(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-', 950, '0', 803, '<', 610, '>', 617, '\\', 363, ']', 675, '`', 856, '|', 593, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_468(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-', 950, '0', 803, '<', 610, '>', 617, '\\', 364, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_469(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-', 950, '0', 803, '<', 610, '>', 617, '\\', 400, ']', 675, '`', 855, '|', 593, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_470(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-', 950, '0', 804, '<', 610, '>', 617, '\\', 334, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_471(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-', 950, '0', 804, '<', 610, '>', 617, '\\', 359, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
