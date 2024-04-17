/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map37.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP37_H
# define ADVANCED_MAP37_H

static inline bool	ts_lex_advence_map_891(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 707, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, ')', 655, '*', 637, '-', 632, '0', 945, ';', 555, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 98, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_892(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 708, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 202, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_893(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 710, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 555, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 211, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_894(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 711, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '=', 952, '>', 617, '?', 761, '@', 942, '\\', 158, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_895(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 713, '!', 669, '"', 788, '#', 816, '$', 780, '&', 602, '*', 637, '-', 632, '0', 945, ';', 555, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 188, '_', 948, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
