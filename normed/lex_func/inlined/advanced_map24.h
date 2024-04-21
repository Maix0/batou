/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map24.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 18:56:05 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP24_H
# define ADVANCED_MAP24_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"

static inline bool	lex_advence_map_447(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, \
		'*', 637, '-', 632, '0', 945, '<', 613, '>', 618, '?', 760, '@', 941, \
			'\\', 197, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_448(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, ')', 655, \
		'*', 637, '-', 632, '0', 945, '?', 760, '@', 941, '\\', 132, '_', 948, \
			'|', 590, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_449(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '*', 637, \
		'-', 632, '0', 945, '?', 760, '@', 941, '\\', 135, '_', 948, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_450(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '*', 637, \
		'-', 632, '0', 945, '?', 760, '@', 941, '\\', 134, '_', 948, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_451(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 862, '$', 785, '&', 489, \
		'(', 653, '+', 771, '-', 769, '0', 808, '<', 612, '>', 618, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
