/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func100.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_499(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == ')')
		return (lex_advance(552, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_500(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '+')
		return (lex_advance(564, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_501(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '+')
		return (lex_advance(564, s));
	if (s->lookahead == '=')
		return (lex_advance(568, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_502(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '-')
		return (lex_advance(566, s));
	if (s->lookahead == '0')
		return (lex_advance(809, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(811, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_503(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '.')
		return (lex_advance(776, s));
	return (LEX_STOP);
}

// End of File
