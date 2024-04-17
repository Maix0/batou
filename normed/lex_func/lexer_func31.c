/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func31.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_154(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(283, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_155(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(890, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_156(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(890, s));
	if (s->lookahead == '\r')
		return (lex_advance(155, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(247, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_157(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(894, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_158(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(894, s));
	if (s->lookahead == '\r')
		return (lex_advance(157, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(253, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

// End of File
