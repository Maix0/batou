/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map18.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 18:44:35 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP18_H
# define ADVANCED_MAP18_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"

static inline bool	lex_advence_map_417(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 862, '$', 781, '&', 508, \
		'\'', 491, '(', 654, ')', 655, '-', 950, '0', 803, ';', 490, '<', 608, \
			'>', 617, '[', 674, '\\', 304, '`', 855, '{', 666, '|', 590, ']', \
			786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_418(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 862, '$', 781, '&', 508, \
		'\'', 491, '(', 654, ')', 499, '+', 771, '-', 769, '0', 803, '<', 608, \
			'>', 617, '[', 674, '\\', 305, '`', 855, '{', 666, '|', 591, '~', \
			772, ']', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_419(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 862, '$', 781, '&', 508, \
		'\'', 491, '(', 654, '+', 771, '-', 769, '0', 803, '<', 608, '>', 617, \
			'[', 674, '\\', 306, ']', 675, '`', 855, '{', 666, '}', 786, '~', \
			772, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_420(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 862, '$', 781, '&', 508, \
		'\'', 491, '(', 654, '+', 771, '-', 769, '0', 803, '<', 608, '>', 617, \
			'[', 674, '\\', 320, '`', 855, '~', 772, ']', 786, '{', 786, \
			'}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_421(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 672, '"', 788, '#', 862, '$', 781, '&', 508, \
		'\'', 491, '(', 654, '-', 950, '0', 803, ';', 490, '<', 608, '>', 617, \
			'[', 674, '\\', 309, '`', 855, 'e', 956, '{', 666, ']', 786, '}', \
			786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
