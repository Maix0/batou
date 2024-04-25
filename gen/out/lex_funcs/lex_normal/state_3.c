/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s15(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(940, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s16(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(940, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(15, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s17(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(940, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(15, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '\t' && \
	s->lookahead < '\r')))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s18(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(918, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s19(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(918, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(18, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(402, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}