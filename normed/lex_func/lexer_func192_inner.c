/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func192.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

bool	lex_keywords_func_0_inner(t_lexer *lexer, t_lex_state *s)
{
	if (s->lookahead == 'A')
		return (s->lex_ret = lex_advance(1, s), true);
	if (s->lookahead == 'E')
		return (s->lex_ret = lex_advance(2, s), true);
	if (s->lookahead == 'K')
		return (s->lex_ret = lex_advance(3, s), true);
	if (s->lookahead == 'L')
		return (s->lex_ret = lex_advance(4, s), true);
	if (s->lookahead == 'P')
		return (s->lex_ret = lex_advance(5, s), true);
	if (s->lookahead == 'Q')
		return (s->lex_ret = lex_advance(6, s), true);
	if (s->lookahead == 'U')
		return (s->lex_ret = lex_advance(7, s), true);
	if (s->lookahead == '\\')
		return (s->lex_ret = lex_skip(8, s), true);
	if (s->lookahead == 'a')
		return (s->lex_ret = lex_advance(9, s), true);
	if (s->lookahead == 'c')
		return (s->lex_ret = lex_advance(10, s), true);
	if (s->lookahead == 'd')
		return (s->lex_ret = lex_advance(11, s), true);
	if (s->lookahead == 'e')
		return (s->lex_ret = lex_advance(12, s), true);
	return (false);
}
