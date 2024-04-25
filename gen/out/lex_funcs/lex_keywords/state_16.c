/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_16.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_keywords_funcs.h"

bool	lex_keywords_s80(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_until, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s81(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_while, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s82(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'e')
		return (lex_advance(89, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s83(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_export, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s84(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'o')
		return (lex_advance(90, lexer, s));
	return (lex_end_state(lexer, s));
}