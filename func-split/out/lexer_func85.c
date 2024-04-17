/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func85.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_424(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_424(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(424, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(806, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '_' || '~' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_425(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_425(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(425, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < ' ' || '+' < s->lookahead) && \
	(s->lookahead < ';' || '?' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_426(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_426(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(426, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < ' ' || '+' < s->lookahead) && \
	(s->lookahead < ';' || '?' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_427(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_427(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(427, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_428(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_428(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(428, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

// End of File
