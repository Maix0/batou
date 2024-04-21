/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func17.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_func_84(t_lexer	*lexer, t_lex_state	*s)
{
	if (lex_advence_map_84(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(378, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(84, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(811, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(656, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_85(t_lexer	*lexer, t_lex_state	*s)
{
	if (lex_advence_map_85(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(386, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '|')
		return (lex_advance(516, s));
	if (s->lookahead == '}')
		return (lex_advance(818, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(85, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(810, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('_' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}
bool	lex_func_86_inner(t_lexer *lexer, t_lex_state *s);

enum e_lex_ret	lex_func_86(t_lexer	*lexer, t_lex_state	*s)
{
	if (lex_func_86_inner(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == 'e')
		return (lex_advance(514, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(86, s));
	return (LEX_STOP);
}

bool	lex_func_87_inner(t_lexer *lexer, t_lex_state *s);

enum e_lex_ret	lex_func_87(t_lexer	*lexer, t_lex_state	*s)
{
	if (lex_func_87_inner(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == 'e')
		return (lex_advance(514, s));
	if (s->lookahead == '|')
		return (lex_advance(593, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(87, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_88(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(690, s));
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '&')
		return (lex_advance(489, s));
	if (s->lookahead == '<')
		return (lex_advance(611, s));
	if (s->lookahead == '>')
		return (lex_advance(618, s));
	if (s->lookahead == '\\')
		return (lex_skip(390, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == '|')
		return (lex_advance(516, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(88, s));
	return (LEX_STOP);
}

// End of File
