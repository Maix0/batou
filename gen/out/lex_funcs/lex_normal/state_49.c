/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_49.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s245(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map245(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(245, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(805, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s246(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map246(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(246, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(879, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s247(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map247(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(247, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(807, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(873, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < '*')))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s248(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map248(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(248, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(806, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= '_' && s->lookahead <= 'z')))
		return (lex_advance(868, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '&' && \
	s->lookahead < ')')))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s249(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map249(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(249, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(879, lexer, s));
	return (lex_end_state(lexer, s));
}