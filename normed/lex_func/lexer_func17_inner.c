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

bool	lex_func_86_inner(t_lexer *lexer, t_lex_state *s)
{	
	if (s->lookahead == '\n')
		return (s->lex_ret = lex_advance(690, s), true);
	if (s->lookahead == '#')
		return (s->lex_ret = lex_advance(862, s), true);
	if (s->lookahead == '&')
		return (s->lex_ret = lex_advance(602, s), true);
	if (s->lookahead == ';')
		return (s->lex_ret = lex_advance(554, s), true);
	if (s->lookahead == '<')
		return (s->lex_ret = lex_advance(612, s), true);
	if (s->lookahead == '>')
		return (s->lex_ret = lex_advance(618, s), true);
	if (s->lookahead == '\\')
		return (s->lex_ret = lex_skip(379, s), true);
	return (false);
}

bool	lex_func_87_inner(t_lexer *lexer, t_lex_state *s)
{	
	if (s->lookahead == '\n')
		return (s->lex_ret = lex_advance(690, s), true);
	if (s->lookahead == '#')
		return (s->lex_ret = lex_advance(862, s), true);
	if (s->lookahead == '&')
		return (s->lex_ret = lex_advance(602, s), true);
	if (s->lookahead == ';')
		return (s->lex_ret = lex_advance(554, s), true);
	if (s->lookahead == '<')
		return (s->lex_ret = lex_advance(613, s), true);
	if (s->lookahead == '>')
		return (s->lex_ret = lex_advance(618, s), true);
	if (s->lookahead == '\\')
		return (s->lex_ret = lex_skip(380, s), true);
	return (false);
}
