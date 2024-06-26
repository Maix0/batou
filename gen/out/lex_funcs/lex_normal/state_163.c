/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_163.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s815(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_number_token2, lexer, s);
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= '@' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(813, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s816(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_POUND, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s817(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR_LBRACE, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s818(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_RBRACE3, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s819(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_BANG2, lexer, s);
	return (lex_end_state(lexer, s));
}
