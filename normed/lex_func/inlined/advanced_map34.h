/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map34.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 19:09:30 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP34_H
# define ADVANCED_MAP34_H

# include "../../headers/parser.h"
# include "../../headers/lex.h"

static inline bool	lex_advence_map_545(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'!', 670, '"', 788, '#', 816, '$', 781, '%', 647, \
		'&', 601, '\'', 491, '(', 654, ')', 655, '*', 638, '+', 770, ',', 557, \
			'-', 768, '/', 642, '0', 944, ':', 765, ';', 554, '<', 607, '=', \
			563, '>', 616, '?', 761, '@', 942, '[', 674, '\\', 301, ']', 675, \
			'^', 595, '_', 946, '`', 856, 'e', 956, 'i', 955, '{', 666, '|', \
			592, '}', 818, '~', 772, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_546(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'!', 672, '"', 788, '#', 862, '$', 781, '&', 508, \
		'\'', 491, '(', 654, ')', 655, '-', 950, '0', 803, ';', 490, '<', 608, \
			'>', 617, '[', 674, '\\', 304, '`', 855, '{', 666, '|', 590, ']', \
			786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_793(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'!', 669, '"', 788, '#', 816, '$', 780, '*', 637, \
		'-', 632, '0', 945, '?', 760, '@', 941, '\\', 135, '_', 948, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_794(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'!', 669, '#', 816, '$', 780, '*', 637, '-', 632, \
		'0', 945, '?', 760, '@', 941, '\\', 136, '_', 948, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	lex_advence_map_880(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map[] = {'\n', 689, '!', 670, '"', 788, '#', 816, '$', 781, \
		'%', 649, '&', 601, '\'', 491, '(', 654, ')', 655, '*', 638, '+', 630, \
			'-', 633, '/', 644, '0', 943, ';', 555, '<', 607, '=', 560, '>', \
			616, '?', 761, '@', 942, '\\', 14, '^', 596, '_', 947, '`', 855, \
			'|', 592, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
