/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func103.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_514(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 's')
		return (lex_advance(511, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_515(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '{')
		return (lex_advance(817, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_516(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '|')
		return (lex_advance(586, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_517(t_lexer	*lexer, t_lex_state	*s)
{
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(811, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_518(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead != 0 && \
	(s->lookahead < '\t' || '\r' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

// End of File
