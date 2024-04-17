/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func102.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_509(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == ']')
		return (lex_advance(677, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_510(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '`')
		return (lex_advance(779, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_advance(510, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_511(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'a')
		return (lex_advance(512, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_512(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'c')
		return (lex_advance(657, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_513(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'n')
		return (lex_advance(548, s));
	return (LEX_STOP);
}

// End of File
