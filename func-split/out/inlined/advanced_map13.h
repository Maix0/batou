/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map13.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP13_H
# define ADVANCED_MAP13_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"
static inline bool	ts_lex_advence_map_292(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 750, '!', 672, '"', 788, '#', 816, '$', 781, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, '<', 495, '>', 496, '?', 761, '@', 942, '\\', 112, '_', 947, '`', 855, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_293(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 751, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 804, ';', 555, '<', 610, '>', 617, '\\', 349, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_294(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 752, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609, '>', 617, '\\', 350, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_295(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 753, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 803, ';', 554, '<', 610, '>', 617, '\\', 351, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_296(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 754, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 610, '>', 617, '\\', 354, '`', 856, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
