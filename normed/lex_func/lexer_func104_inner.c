/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func104_inner                              .c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

bool	lex_func_519_inner(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (s->let_ret = lex_advance(547, s), true);
	if (s->lookahead == '\n')
		return (s->let_ret = lex_advance(690, s), true);
	if (s->lookahead == '#')
		return (s->let_ret = lex_advance(862, s), true);
	if (s->lookahead == '&')
		return (s->let_ret = lex_advance(602, s), true);
	if (s->lookahead == ')')
		return (s->let_ret = lex_advance(655, s), true);
	return (false);
}

bool	lex_func_520_inner(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (s->let_ret = lex_advance(547, s), true);
	if (s->lookahead == '\n')
		return (s->let_ret = lex_advance(690, s), true);
	if (s->lookahead == '#')
		return (s->let_ret = lex_advance(862, s), true);
	if (s->lookahead == '&')
		return (s->let_ret = lex_advance(602, s), true);
	if (s->lookahead == ')')
		return (s->let_ret = lex_advance(655, s), true);
	if (s->lookahead == ';')
		return (s->let_ret = lex_advance(555, s), true);
	if (s->lookahead == '<')
		return (s->let_ret = lex_advance(612, s), true);
	return (false);
}

bool	lex_func_521_inner(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (s->let_ret = lex_advance(547, s), true);
	if (s->lookahead == '\n')
		return (s->let_ret = lex_advance(690, s), true);
	if (s->lookahead == '#')
		return (s->let_ret = lex_advance(862, s), true);
	if (s->lookahead == '&')
		return (s->let_ret = lex_advance(602, s), true);
	if (s->lookahead == ')')
		return (s->let_ret = lex_advance(655, s), true);
	if (s->lookahead == ';')
		return (s->let_ret = lex_advance(555, s), true);
	if (s->lookahead == '<')
		return (s->let_ret = lex_advance(613, s), true);
	return (false);
}

bool	lex_func_522_inner(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (s->let_ret = lex_advance(547, s), true);
	if (s->lookahead == '\n')
		return (s->let_ret = lex_advance(690, s), true);
	if (s->lookahead == '#')
		return (s->let_ret = lex_advance(862, s), true);
	if (s->lookahead == '&')
		return (s->let_ret = lex_advance(602, s), true);
	if (s->lookahead == ')')
		return (s->let_ret = lex_advance(655, s), true);
	if (s->lookahead == ';')
		return (s->let_ret = lex_advance(555, s), true);
	if (s->lookahead == '<')
		return (s->let_ret = lex_advance(613, s), true);
	return (false);
}
