/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func88.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_func_439(t_lexer	*lexer, t_lex_state	*s)
{
	if (lex_advence_map_439(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(362, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(439, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_440(t_lexer	*lexer, t_lex_state	*s)
{
	if (lex_advence_map_440(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(356, s));
	if (s->lookahead == ']')
		return (lex_advance(787, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (s->lookahead == '[' || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(440, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_441(t_lexer	*lexer, t_lex_state	*s)
{
	if (lex_advence_map_441(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(368, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (s->lookahead == '}')
		return (lex_advance(778, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(442, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_442(t_lexer	*lexer, t_lex_state	*s)
{
	if (lex_advence_map_442(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(368, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(442, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_443(t_lexer	*lexer, t_lex_state	*s)
{
	if (lex_advence_map_443(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(361, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (('[' <= s->lookahead && s->lookahead <= ']') || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(443, s));
	return (LEX_STOP);
}

// End of File
