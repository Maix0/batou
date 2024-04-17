/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func202.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_keywords_func_48(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'c')
		return (lex_advance(63, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_49(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'a')
		return (lex_advance(64, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_50(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'd')
		return (lex_advance(65, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_51(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(66, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_52(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'n')
		return (lex_advance(67, s));
	return (LEX_STOP);
}

// End of File
