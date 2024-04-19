/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map21.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP21_H
# define ADVANCED_MAP21_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"
static inline bool	ts_lex_advence_map_432(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 671, '"', 788, '#', 816, '$', 780, '%', 650, '&', 600, '*', 639, '+', 631, '-', 634, '/', 645, '0', 945, '<', 615, '=', 562, '>', 620, '?', 760, '@', 941, '\\', 69, '^', 597, '_', 948, '|', 594, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_433(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '"', 788, '#', 862, '$', 785, '%', 650, '&', 600, ')', 499, '*', 639, '+', 631, ',', 556, '-', 634, '.', 503, '/', 645, ':', 762, ';', 490, '<', 615, '=', 562, '>', 620, '?', 760, '[', 673, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_434(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '"', 788, '#', 862, '$', 785, '%', 650, '&', 600, ')', 499, '*', 639, '+', 631, ',', 556, '-', 634, '/', 645, ':', 762, ';', 490, '<', 615, '=', 562, '>', 620, '?', 760, '[', 673, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_435(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '"', 788, '#', 862, '$', 498, '%', 650, '&', 600, '(', 494, ')', 655, '*', 639, '+', 631, ',', 556, '-', 634, '/', 645, '<', 615, '=', 562, '>', 620, '?', 760, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_436(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '#', 862, '%', 650, '&', 600, ')', 655, '*', 639, '+', 631, ',', 556, '-', 635, '/', 645, '<', 615, '=', 561, '>', 620, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
