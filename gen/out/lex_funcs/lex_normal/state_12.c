/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_12.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s60(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(930, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(59, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(430, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s61(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(923, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s62(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(923, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(61, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(413, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s63(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(929, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s64(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(929, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(63, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(429, lexer, s));
	return (lex_end_state(lexer, s));
}