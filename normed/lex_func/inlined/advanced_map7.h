/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map7.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP7_H
# define ADVANCED_MAP7_H

static inline bool	ts_lex_advence_map_262(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 720, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 610, '>', 617, '?', 761, '@', 942, '\\', 222, '_', 947, '`', 855, 'e', 871, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_263(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 721, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, '-', 950, '0', 803, ';', 554, '<', 610, '>', 617, '\\', 397, '`', 855, 'e', 956, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_264(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 722, '!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 106, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_265(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 723, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 43, '_', 947, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_266(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 724, '"', 788, '#', 862, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '-', 950, '0', 803, ';', 555, '<', 609, '>', 617, '\\', 331, '`', 855, '|', 593, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
