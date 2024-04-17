/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map6.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP6_H
# define ADVANCED_MAP6_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"
static inline bool	lex_advence_map_257(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 715, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 803, ';', 554, '<', 609, '>', 617, '\\', 327, '`', 855, 'e', 956, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_258(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 716, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 555, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 218, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_259(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 717, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 37, '_', 947, '`', 855, 'e', 871, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_260(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 718, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 803, ';', 554, '<', 609, '>', 617, '\\', 328, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_261(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 719, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, ')', 655, '*', 637, '-', 632, '0', 945, ';', 555, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 190, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
