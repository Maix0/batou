/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func96.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_479(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_479(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(479, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '{' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_480(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '"')
		return (lex_advance(788, s));
	if (s->lookahead == '#')
		return (lex_advance(797, s));
	if (s->lookahead == '$')
		return (lex_advance(783, s));
	if (s->lookahead == '(')
		return (lex_advance(796, s));
	if (s->lookahead == '\\')
		return (lex_advance(302, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '\n' || \
	s->lookahead == '\r')
		return (lex_skip(480, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_advance(795, s));
	if (s->lookahead != 0)
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_481(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_481(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(375, s));
	if (s->lookahead == '^')
		return (lex_advance(598, s));
	if (s->lookahead == '}')
		return (lex_advance(818, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(482, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_482(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '#')
		return (lex_advance(816, s));
	if (s->lookahead == '%')
		return (lex_advance(648, s));
	if (s->lookahead == ',')
		return (lex_advance(558, s));
	if (s->lookahead == '/')
		return (lex_advance(643, s));
	if (s->lookahead == ':')
		return (lex_advance(762, s));
	if (s->lookahead == '[')
		return (lex_advance(673, s));
	if (s->lookahead == '\\')
		return (lex_skip(375, s));
	if (s->lookahead == '^')
		return (lex_advance(598, s));
	if (s->lookahead == '}')
		return (lex_advance(818, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(482, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_483(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '$')
		return (lex_advance(515, s));
	if (s->lookahead == '&')
		return (lex_advance(489, s));
	if (s->lookahead == '-')
		return (lex_advance(504, s));
	if (s->lookahead == '0')
		return (lex_advance(808, s));
	if (s->lookahead == '<')
		return (lex_advance(613, s));
	if (s->lookahead == '>')
		return (lex_advance(618, s));
	if (s->lookahead == '\\')
		return (lex_skip(385, s));
	if (s->lookahead == ']')
		return (lex_advance(675, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (s->lookahead == '[' || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(483, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(810, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

// End of File
