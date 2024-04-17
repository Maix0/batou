/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func14.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_69(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(932, s));
	if (s->lookahead == '\r')
		return (lex_advance(68, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(432, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_70(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(434, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_71(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(435, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_72(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(423, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_73(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_advance(919, s));
	return (LEX_STOP);
}

// End of File
