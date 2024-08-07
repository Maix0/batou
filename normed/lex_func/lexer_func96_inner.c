/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func96_inner.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 21:17:53 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

bool	lex_func_483_inner(t_lexer	*lexer, t_lex_state	*s)
{	
	if (s->lookahead == '#')
		return (s->lex_ret = lex_advance(862, s), true);
	if (s->lookahead == '$')
		return (s->lex_ret = lex_advance(515, s), true);
	if (s->lookahead == '&')
		return (s->lex_ret = lex_advance(489, s), true);
	if (s->lookahead == '-')
		return (s->lex_ret = lex_advance(504, s), true);
	if (s->lookahead == '0')
		return (s->lex_ret = lex_advance(808, s), true);
	if (s->lookahead == '<')
		return (s->lex_ret = lex_advance(613, s), true);
	if (s->lookahead == '>')
		return (s->lex_ret = lex_advance(618, s), true);
	if (s->lookahead == '\\')
		return (s->lex_ret = lex_skip(385, s), true);
	if (s->lookahead == ']')
		return (s->lex_ret = lex_advance(675, s), true);
	return (false);
}
