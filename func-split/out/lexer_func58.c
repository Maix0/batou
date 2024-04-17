/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func58.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_289(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_289(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(289, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_290(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_290(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(290, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_291(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_291(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(291, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || ')' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_292(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_292(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(292, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	s->lookahead != ';' && \
	s->lookahead != '<' && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_293(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_293(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(293, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(806, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

// End of File
