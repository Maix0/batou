/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func95.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_474(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_474(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(383, s));
	if (s->lookahead == ']')
		return (lex_advance(675, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (s->lookahead == '[' || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(474, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(811, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(656, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_475(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_475(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(475, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	(s->lookahead < '[' || ']' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_476(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_476(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(393, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '}')
		return (lex_advance(818, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	s->lookahead == '{')
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(476, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_477(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '"')
		return (lex_advance(788, s));
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '\'')
		return (lex_advance(491, s));
	if (s->lookahead == ')')
		return (lex_advance(655, s));
	if (s->lookahead == '\\')
		return (lex_skip(395, s));
	if (s->lookahead == '}')
		return (lex_advance(818, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_advance(842, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_478(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_478(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(478, s));
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

// End of File
