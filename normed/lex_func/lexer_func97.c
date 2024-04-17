/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func97.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_484(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_484(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(387, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(484, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_485(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_485(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(485, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '"' || '$' < s->lookahead) && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '[' || ']' < s->lookahead) && \
	s->lookahead != '`' && \
	(s->lookahead < '{' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_486(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '&')
		return (lex_advance(489, s));
	if (s->lookahead == '<')
		return (lex_advance(612, s));
	if (s->lookahead == '>')
		return (lex_advance(618, s));
	if (s->lookahead == '\\')
		return (lex_skip(388, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(486, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_487(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_487(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(487, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '"' || '$' < s->lookahead) && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_488(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '+')
		return (lex_advance(507, s));
	if (s->lookahead == '/')
		return (lex_advance(641, s));
	if (s->lookahead == '=')
		return (lex_advance(559, s));
	if (s->lookahead == '[')
		return (lex_advance(673, s));
	if (s->lookahead == '\\')
		return (lex_skip(396, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == '}')
		return (lex_advance(818, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(488, s));
	return (LEX_STOP);
}

// End of File
