/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map30.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 19:02:23 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP30_H
# define ADVANCED_MAP30_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"

static inline bool	lex_advence_map_478(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'"', 788, '#', 863, '$', 781, '\'', 491, '(', 654, \
		'-', 950, '0', 803, '<', 495, '>', 496, '\\', 374, '`', 855, '[', 786, \
			']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_479(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'"', 788, '#', 863, '$', 781, '\'', 491, '(', 494, \
		'-', 950, '0', 803, '<', 495, '>', 496, '\\', 376, ']', 675, '`', 855, \
			'[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_481(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'#', 816, '%', 648, '*', 823, '+', 833, ',', 558, \
		'-', 830, '/', 643, ':', 764, '=', 826, '?', 836, '@', 821, '[', 673, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_484(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'#', 862, '%', 646, '&', 489, '*', 637, '+', 629, \
		'-', 632, '/', 641, '<', 613, '>', 618, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_485(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'#', 862, '&', 508, '(', 654, '<', 611, '>', 618, \
		'[', 674, '\\', 392, '{', 666, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
