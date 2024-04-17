/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map19.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP19_H
# define ADVANCED_MAP19_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"
static inline bool	lex_advence_map_422(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 862, '$', 781, '&', 508, '\'', 491, '(', 654, '-', 950, '0', 803, '<', 608, '>', 617, '[', 674, '\\', 310, ']', 786, '`', 855, '{', 666, '}', 667, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_423(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 862, '$', 781, '\'', 491, '(', 654, ')', 499, '+', 771, '-', 769, '0', 803, '<', 495, '>', 496, '\\', 352, '`', 855, '~', 772, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_424(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 862, '$', 781, '\'', 491, '(', 654, ')', 499, '+', 771, '-', 769, '0', 804, '<', 495, '>', 496, '\\', 332, '`', 855, '~', 772, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_425(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 951, '"', 788, '#', 862, '$', 781, '%', 649, '&', 601, '\'', 491, '(', 654, '*', 638, '+', 630, '-', 633, '/', 644, '0', 803, '<', 607, '=', 560, '>', 616, '?', 761, '\\', 318, ']', 675, '^', 596, '`', 856, '|', 592, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_426(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 951, '"', 788, '#', 862, '$', 781, '%', 649, '&', 601, '\'', 491, '(', 654, '*', 638, '+', 630, '-', 633, '/', 644, '0', 803, '<', 607, '=', 560, '>', 616, '?', 761, '\\', 319, ']', 675, '^', 596, '`', 855, '|', 592, '[', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
