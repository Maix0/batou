/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map8.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP8_H
# define ADVANCED_MAP8_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"
static inline bool	lex_advence_map_267(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 725, '!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 193, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_268(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 726, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 46, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_269(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 727, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 803, ';', 554, '<', 610, '>', 617, '\\', 398, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_270(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 728, '!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 611, '>', 618, '?', 760, '@', 941, '\\', 213, '_', 948, '|', 516, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_271(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 729, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 226, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
