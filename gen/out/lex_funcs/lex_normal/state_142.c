/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_142.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s710(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(710, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(211, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s711(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(711, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(158, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s712(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(712, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(326, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s713(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(713, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(188, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s714(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_heredoc_redirect_token1, lexer, \
	s);
	if (s->lookahead == '\n')
		return (lex_advance(714, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(215, lexer, s));
	return (lex_end_state(lexer, s));
}
