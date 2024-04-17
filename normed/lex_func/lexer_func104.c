/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func104.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_func_519(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\n')
		return (lex_advance(690, s));
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '&')
		return (lex_advance(602, s));
	if (s->lookahead == ')')
		return (lex_advance(655, s));
	if (s->lookahead == ';')
		return (lex_advance(555, s));
	if (s->lookahead == '<')
		return (lex_advance(612, s));
	if (s->lookahead == '>')
		return (lex_advance(618, s));
	if (s->lookahead == '\\')
		return (lex_skip(542, s));
	if (s->lookahead == '`')
		return (lex_advance(856, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(519, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_520(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\n')
		return (lex_advance(690, s));
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '&')
		return (lex_advance(602, s));
	if (s->lookahead == ')')
		return (lex_advance(655, s));
	if (s->lookahead == ';')
		return (lex_advance(555, s));
	if (s->lookahead == '<')
		return (lex_advance(612, s));
	if (s->lookahead == '>')
		return (lex_advance(618, s));
	if (s->lookahead == '\\')
		return (lex_skip(544, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(520, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_521(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\n')
		return (lex_advance(690, s));
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '&')
		return (lex_advance(602, s));
	if (s->lookahead == ')')
		return (lex_advance(655, s));
	if (s->lookahead == ';')
		return (lex_advance(555, s));
	if (s->lookahead == '<')
		return (lex_advance(613, s));
	if (s->lookahead == '>')
		return (lex_advance(618, s));
	if (s->lookahead == '\\')
		return (lex_skip(541, s));
	if (s->lookahead == '`')
		return (lex_advance(856, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(521, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_522(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\n')
		return (lex_advance(690, s));
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '&')
		return (lex_advance(602, s));
	if (s->lookahead == ')')
		return (lex_advance(655, s));
	if (s->lookahead == ';')
		return (lex_advance(555, s));
	if (s->lookahead == '<')
		return (lex_advance(613, s));
	if (s->lookahead == '>')
		return (lex_advance(618, s));
	if (s->lookahead == '\\')
		return (lex_skip(543, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(522, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_523(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\n')
		return (lex_skip(521, s));
	return (LEX_STOP);
}

// End of File
