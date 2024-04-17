/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map39.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP39_H
# define ADVANCED_MAP39_H

static inline bool	ts_lex_advence_map_901(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 722, '!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 612, '>', 618, '?', 760, '@', 941, '\\', 106, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_902(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 723, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, '*', 640, '-', 636, '0', 943, ';', 554, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 43, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_903(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 725, '!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 613, '>', 618, '?', 760, '@', 941, '\\', 193, '_', 948, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_904(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 726, '!', 672, '"', 788, '#', 816, '$', 781, '&', 602, '\'', 491, '(', 494, ')', 655, '*', 640, '-', 636, '0', 943, ';', 555, '<', 609, '>', 617, '?', 761, '@', 942, '\\', 46, '_', 947, '`', 855, '|', 593, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_905(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 728, '!', 669, '"', 788, '#', 816, '$', 780, '&', 489, '*', 637, '-', 632, '0', 945, '<', 611, '>', 618, '?', 760, '@', 941, '\\', 213, '_', 948, '|', 516, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
