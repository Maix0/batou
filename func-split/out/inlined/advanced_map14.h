/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map14.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP14_H
# define ADVANCED_MAP14_H

static inline bool	ts_lex_advence_map_297(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 755, '"', 788, '#', 862, '$', 781, '&', 599, '\'', 491, '(', 654, '-', 950, '0', 803, ';', 555, '<', 495, '>', 496, '\\', 357, '`', 855, 'e', 956, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_298(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 756, '"', 788, '#', 862, '$', 781, '&', 489, '\'', 491, '(', 494, '-', 950, '0', 803, '<', 608, '>', 617, '\\', 370, '`', 856, '|', 516, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_299(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 757, '"', 788, '#', 862, '$', 781, '&', 599, '\'', 491, '(', 494, '-', 950, '0', 803, ';', 555, '<', 495, '>', 496, '\\', 372, '`', 855, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_300(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 758, '"', 788, '#', 862, '$', 781, '&', 599, '\'', 491, '(', 494, '-', 950, '0', 803, ';', 555, '<', 495, '>', 496, '\\', 381, '`', 856, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_401(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 670, '"', 788, '#', 816, '$', 781, '%', 647, '&', 601, '\'', 491, '(', 654, ')', 655, '*', 638, '+', 770, ',', 557, '-', 768, '/', 642, '0', 944, ':', 765, ';', 554, '<', 607, '=', 563, '>', 616, '?', 761, '@', 942, '[', 674, '\\', 301, ']', 675, '^', 595, '_', 946, '`', 856, 'e', 956, 'i', 955, '{', 666, '|', 592, '}', 818, '~', 772, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
