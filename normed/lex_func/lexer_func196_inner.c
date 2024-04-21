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

bool	lex_keywords_func_22_inner(t_lexer *lexer, t_lex_state *s)
{
	if (s->lookahead == '\\')
		return (s->lex_ret = lex_skip(8, s), true);
	if (s->lookahead == 'c')
		return (s->lex_ret = lex_advance(10, s), true);
	if (s->lookahead == 'd')
		return (s->lex_ret = lex_advance(11, s), true);
	if (s->lookahead == 'e')
		return (s->lex_ret = lex_advance(12, s), true);
	if (s->lookahead == 'f')
		return (s->lex_ret = lex_advance(13, s), true);
	if (s->lookahead == 'i')
		return (s->lex_ret = lex_advance(14, s), true);
	if (s->lookahead == 'l')
		return (s->lex_ret = lex_advance(16, s), true);
	if (s->lookahead == 'r')
		return (s->lex_ret = lex_advance(17, s), true);
	return (false);
}
