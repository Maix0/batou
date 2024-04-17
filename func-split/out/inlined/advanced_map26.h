/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map26.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP26_H
# define ADVANCED_MAP26_H

static inline bool	ts_lex_advence_map_457(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(', 654, '-', 950, '0', 803, '<', 608, '>', 617, '[', 674, '\\', 330, '`', 855, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_458(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 803, '<', 608, '>', 617, '\\', 340, '`', 855, '|', 590, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_459(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 803, '<', 608, '>', 617, '\\', 371, '`', 856, '|', 590, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_460(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 654, ')', 655, '-', 950, '0', 803, '<', 609, '>', 617, '\\', 338, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_461(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 654, '-', 950, '0', 803, '<', 609, '=', 952, '>', 617, '\\', 329, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
