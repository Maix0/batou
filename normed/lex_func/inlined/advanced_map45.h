/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map45.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 19:26:48 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP45_H
# define ADVANCED_MAP45_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"

static inline bool	lex_advence_map_931(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, \
		'&', 600, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615, \
			'=', 562, '>', 620, '?', 760, '@', 941, '\\', 178, ']', 509, '^', \
			597, '_', 948, '|', 594, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_932(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, \
		'&', 600, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615, \
			'=', 562, '>', 620, '?', 760, '@', 941, '\\', 69, '^', 597, '_', \
			948, '|', 594, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_933(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, \
		'*', 637, '-', 632, '0', 945, '<', 612, '>', 618, '?', 760, '@', 941, \
			'\\', 108, ']', 675, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_934(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, \
		'*', 637, '-', 632, '0', 945, '<', 612, '>', 618, '?', 760, '@', 941, \
			'\\', 114, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_935(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, \
		'*', 637, '-', 632, '0', 945, '<', 613, '>', 618, '?', 760, '@', 941, \
			'\\', 195, ']', 675, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
