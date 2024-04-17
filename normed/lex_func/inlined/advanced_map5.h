/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map5.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP5_H
# define ADVANCED_MAP5_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"
static inline bool	lex_advence_map_252(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 710, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 555, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 211, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_253(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 711, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 158, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_254(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 712, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 804, ';', 555, '<', 610, '>', 617, '\\', 326, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_255(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 713, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 555, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 188, '_', 948, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_256(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 714, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 215, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
