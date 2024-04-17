/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func105.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_524(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\n')
		return (lex_skip(519, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_525(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\n')
		return (lex_skip(522, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_526(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\n')
		return (lex_skip(520, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_527(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (ts_lex_advence_map_527(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(527, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_528(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (ts_lex_advence_map_528(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(528, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

// End of File
