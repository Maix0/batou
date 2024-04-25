/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_165.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s825(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_POUND2, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s826(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_EQ2, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s827(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_EQ2, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s828(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_COLON_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s829(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_COLON_EQ, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}