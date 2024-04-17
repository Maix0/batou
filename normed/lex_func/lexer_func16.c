/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func16.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_func_79(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(439, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_80(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(881, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_81(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(881, s));
	if (s->lookahead == '\r')
		return (lex_advance(80, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(200, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_82(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(83, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_83(t_lexer	*lexer, t_lex_state	*s)
{
	if (lex_advence_map_83(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\\')
		return (lex_skip(365, s));
	if (s->lookahead == '^')
		return (lex_advance(597, s));
	if (s->lookahead == '|')
		return (lex_advance(594, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(83, s));
	return (LEX_STOP);
}

// End of File
