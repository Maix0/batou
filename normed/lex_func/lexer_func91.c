/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func91.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_func_454(t_lexer	*lexer, t_lex_state	*s)
{
	if (lex_advence_map_454(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(382, s));
	if (s->lookahead == '_')
		return (lex_advance(948, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '}')
		return (lex_advance(818, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(454, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_455(t_lexer	*lexer, t_lex_state	*s)
{
	if (lex_advence_map_455(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(391, s));
	if (s->lookahead == '_')
		return (lex_advance(948, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(455, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_456(t_lexer	*lexer, t_lex_state	*s)
{
	if (lex_advence_map_456(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(382, s));
	if (s->lookahead == '_')
		return (lex_advance(948, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '}')
		return (lex_advance(818, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(454, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_457(t_lexer	*lexer, t_lex_state	*s)
{
	if (lex_advence_map_457(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(457, s));
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

enum e_lex_ret	lex_func_458(t_lexer	*lexer, t_lex_state	*s)
{
	if (lex_advence_map_458(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(458, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0 && \
	s->lookahead != ';' && \
	s->lookahead != '<')
		return (lex_advance(958, s));
	return (LEX_STOP);
}

// End of File
