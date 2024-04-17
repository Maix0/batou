/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func28.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_139(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(485, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_140(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(476, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_141(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(89, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_142(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(477, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_143(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(488, s));
	return (LEX_STOP);
}

// End of File
