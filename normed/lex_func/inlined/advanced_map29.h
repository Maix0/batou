/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map29.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 19:12:41 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP29_H
# define ADVANCED_MAP29_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"

static inline bool	lex_advence_map_472(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, '\'', 491, '(', 654, \
		'-', 950, '0', 803, '<', 495, '>', 496, '\\', 366, '`', 855, 'e', 956, \
			'[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_473(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 781, '\'', 491, '(', 654, \
		'-', 950, '0', 803, '<', 495, '>', 496, '\\', 373, '`', 855, '}', 818, \
			'[', 786, ']', 786, '{', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_474(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 785, '&', 489, '(', 653, \
		')', 499, '+', 501, '-', 502, '0', 809, '<', 613, '=', 559, '>', 618, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_475(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 782, '\'', 491, '(', 653, \
		')', 655, ';', 553, '<', 495, '>', 496, '\\', 389, '`', 855, '{', 666, \
			'|', 590, '}', 818, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_476(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'"', 788, '#', 862, '$', 497, '%', 646, '*', 637, \
		'+', 629, '-', 632, '/', 641, ':', 762, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
