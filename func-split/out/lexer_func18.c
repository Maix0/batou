/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func18.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_89(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(690, s));
	if (s->lookahead == '#')
		return (lex_advance(862, s));
	if (s->lookahead == '&')
		return (lex_advance(599, s));
	if (s->lookahead == ';')
		return (lex_advance(555, s));
	if (s->lookahead == '\\')
		return (lex_skip(394, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == 'i')
		return (lex_advance(513, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	s->lookahead == '{' || \
	s->lookahead == '}')
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(89, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_90(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(883, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_91(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(883, s));
	if (s->lookahead == '\r')
		return (lex_advance(90, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(237, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_92(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(472, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_93(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(437, s));
	return (LEX_STOP);
}

// End of File
