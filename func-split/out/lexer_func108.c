/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func108.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_539(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (ts_lex_advence_map_539(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(539, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_540(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (ts_lex_advence_map_540(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(540, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_541(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\r')
		return (lex_skip(523, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(521, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_542(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\r')
		return (lex_skip(524, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(519, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_543(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\r')
		return (lex_skip(525, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(522, s));
	return (LEX_STOP);
}

// End of File
