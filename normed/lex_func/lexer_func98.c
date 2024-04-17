/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func98.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_func_489(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '&')
		return (lex_advance(588, s));
	if (s->lookahead == '>')
		return (lex_advance(680, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_490(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '&')
		return (lex_advance(664, s));
	if (s->lookahead == ';')
		return (lex_advance(663, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_491(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\'')
		return (lex_advance(800, s));
	if (s->lookahead != 0)
		return (lex_advance(491, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_492(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\'')
		return (lex_advance(801, s));
	if (s->lookahead == '\\')
		return (lex_advance(493, s));
	if (s->lookahead != 0)
		return (lex_advance(492, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_493(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\'')
		return (lex_advance(802, s));
	if (s->lookahead == '\\')
		return (lex_advance(493, s));
	if (s->lookahead != 0)
		return (lex_advance(492, s));
	return (LEX_STOP);
}

// End of File
