/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_map0.h:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADVANCED_MAP0_H
# define ADVANCED_MAP0_H

static inline bool	ts_lex_advence_map_0(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'!', 820, '"', 788, '#', 825, '$', 781, '%', 647, '&', 601, '\'', 491, '(', 654, ')', 655, '*', 824, '+', 770, ',', 557, '-', 768, '.', 949, '/', 642, '0', 944, ':', 763, ';', 554, '<', 607, '=', 827, '>', 616, '?', 837, '@', 822, '[', 674, '\\', 301, ']', 675, '^', 595, '_', 946, '`', 856, 'e', 956, 'i', 955, '{', 666, '|', 592, '}', 778, '~', 772, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_6(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 688, '!', 670, '"', 788, '#', 862, '$', 781, '%', 649, '&', 601, '\'', 491, '(', 654, ')', 655, '*', 638, '+', 771, '-', 769, '/', 644, '0', 803, ';', 555, '<', 607, '=', 560, '>', 616, '?', 761, '\\', 307, '^', 596, '`', 856, '|', 592, '~', 772, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_12(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 689, '!', 670, '"', 788, '#', 816, '$', 781, '%', 649, '&', 601, '\'', 491, '(', 654, ')', 655, '*', 638, '+', 630, '-', 633, '/', 644, '0', 943, ';', 555, '<', 607, '=', 560, '>', 616, '?', 761, '@', 942, '\\', 14, '^', 596, '_', 947, '`', 855, '|', 592, '[', 786, ']', 786, '{', 786, '}', 786, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_83(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 690, '!', 506, '#', 862, '%', 650, '&', 600, '*', 639, '+', 631, ',', 556, '-', 635, '/', 645, ';', 553, '<', 615, '=', 561, '>', 620, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

static inline bool	ts_lex_advence_map_84(t_lexer	*lexer, t_lex_state	*s)
{
	static uint32_t	map = {'\n', 690, '"', 788, '#', 862, '$', 785, '&', 599, '(', 653, '+', 500, ',', 556, '-', 502, '0', 809, ';', 553, };

	return (lex_advance_map(map, sizeof(map) / sizeof(*map), s));
}

#endif
