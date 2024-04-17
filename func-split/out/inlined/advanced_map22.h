/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map22.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP22_H
# define ADVANCED_MAP22_H

static inline bool	ts_lex_advence_map_437(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '#', 862, '%', 650, '&', 600, ')', 655, '*', 639, '+', 631, '-', 634, '/', 645, '<', 615, '=', 562, '>', 620, '?', 760, '[', 673, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_438(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '#', 862, '%', 650, '&', 600, ')', 655, '*', 639, '+', 631, '-', 634, '/', 645, '<', 615, '=', 562, '>', 620, '?', 760, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_439(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '#', 862, '%', 650, '&', 600, ')', 655, '*', 639, '+', 631, '-', 634, '/', 645, '<', 615, '=', 562, '>', 620, '?', 760, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_440(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '#', 862, '%', 650, '&', 600, ')', 499, '*', 639, '+', 631, ',', 556, '-', 634, '/', 645, ':', 762, '<', 615, '=', 562, '>', 620, '?', 760, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_441(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 506, '#', 862, '%', 650, '&', 600, ')', 499, '*', 639, '+', 631, ',', 556, '-', 635, '/', 645, '<', 615, '=', 561, '>', 620, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
