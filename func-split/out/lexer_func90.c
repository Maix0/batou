/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func90.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_449(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_449(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\n' || \
	s->lookahead == '\r')
		return (lex_skip(449, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_advance(793, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '_' || 'z' < s->lookahead))
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_450(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_450(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(450, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_451(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_451(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(377, s));
	if (s->lookahead == ']')
		return (lex_advance(675, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (s->lookahead == '~')
		return (lex_advance(772, s));
	if (s->lookahead == '[' || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(451, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(810, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_452(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_452(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\n' || \
	s->lookahead == '\r')
		return (lex_skip(452, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_advance(794, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	if (s->lookahead != 0 && \
	(s->lookahead < ' ' || '$' < s->lookahead) && \
	(s->lookahead < '_' || 'z' < s->lookahead))
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_453(t_lexer	*lexer, t_lex_state	*s)
{
	if (ts_lex_advence_map_453(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(453, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

// End of File
