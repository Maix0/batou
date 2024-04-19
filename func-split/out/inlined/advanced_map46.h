/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map46.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP46_H
# define ADVANCED_MAP46_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"
static inline bool	ts_lex_advence_map_936(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 197, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_937(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, ')', 655, '*', 637, '-', 632, '0', 945, '?', 760, '@', 941, '\\', 132, '_', 948, '|', 590, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_938(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '"', 788, '#', 816, '$', 780, '*', 637, '-', 632, '0', 945, '?', 760, '@', 941, '\\', 134, '_', 948, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_939(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 669, '#', 816, '$', 780, '*', 637, '-', 632, '0', 945, '?', 760, '@', 941, '\\', 138, '_', 948, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
