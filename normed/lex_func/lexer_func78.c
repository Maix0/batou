/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func78.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_389(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(126, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(475, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_390(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(129, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(88, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_391(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(130, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(455, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_392(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(139, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(485, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_393(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\r')
		return (lex_skip(140, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(476, s));
	return (LEX_STOP);
}

// End of File
