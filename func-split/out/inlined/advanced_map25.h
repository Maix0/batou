/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map25.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP25_H
# define ADVANCED_MAP25_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"
static inline bool	ts_lex_advence_map_452(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '#', 816, '$', 780, '*', 637, '-', 632, '0', 945, '?', 760, '@', 941, '\\', 136, '_', 948, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_453(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '#', 816, '$', 780, '*', 637, '-', 632, '0', 945, '?', 760, '@', 941, '\\', 138, '_', 948, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_454(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '#', 816, '$', 784, '*', 637, '-', 632, '0', 945, '?', 760, '@', 941, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_455(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '#', 816, '$', 784, '*', 637, '-', 632, '0', 945, '?', 760, '@', 941, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_456(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 819, '#', 825, '$', 784, '*', 637, '-', 632, '0', 945, '=', 826, '?', 760, '@', 941, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
