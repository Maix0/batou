/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map4.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP4_H
# define ADVANCED_MAP4_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"
static inline bool	lex_advence_map_247(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 705, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 654, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 156, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_248(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 706, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 804, ';', 554, '<', 610, '>', 617, '\\', 324, '`', 855, 'e', 866, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_249(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 707, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, ')', 655, '*', 637, '-', 632, '0', 945, ';', 555, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 98, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_250(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 708, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 202, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_251(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 709, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 804, ';', 554, '<', 610, '>', 617, '\\', 325, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
