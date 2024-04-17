/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func87.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_func_434(t_lexer	*lexer, t_lex_state	*s)
{
	if (lex_advence_map_434(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(345, s));
	if (s->lookahead == ']')
		return (lex_advance(509, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == 'e')
		return (lex_advance(514, s));
	if (s->lookahead == 'i')
		return (lex_advance(513, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (s->lookahead == '}')
		return (lex_advance(818, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(434, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_435(t_lexer	*lexer, t_lex_state	*s)
{
	if (lex_advence_map_435(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(348, s));
	if (s->lookahead == ']')
		return (lex_advance(675, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (s->lookahead == '[' || \
	('{' <= s->lookahead && s->lookahead <= '}'))
		return (lex_advance(786, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(435, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_436(t_lexer	*lexer, t_lex_state	*s)
{
	if (lex_advence_map_436(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(369, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(436, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_437(t_lexer	*lexer, t_lex_state	*s)
{
	if (lex_advence_map_437(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(367, s));
	if (s->lookahead == ']')
		return (lex_advance(675, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '`')
		return (lex_advance(510, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (s->lookahead == '}')
		return (lex_advance(818, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(437, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_438(t_lexer	*lexer, t_lex_state	*s)
{
	if (lex_advence_map_438(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(360, s));
	if (s->lookahead == ']')
		return (lex_advance(675, s));
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
		return (lex_skip(438, s));
	return (LEX_STOP);
}

// End of File
