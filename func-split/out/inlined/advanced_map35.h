/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map35.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP35_H
# define ADVANCED_MAP35_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"
static inline bool	ts_lex_advence_map_881(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 692, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 554, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 81, '_', 948, 'e', 877, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_882(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 693, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 27, '_', 947, '`', 855, 'e', 871, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_883(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 695, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 554, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 91, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_884(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 696, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 30, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_885(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 698, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 554, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 183, '_', 948, 'e', 877, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
