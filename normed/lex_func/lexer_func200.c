/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func200.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_keywords_func_38(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 's')
		return (lex_advance(54, s));
	if (s->lookahead == 't')
		return (lex_advance(55, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_39(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'i')
		return (lex_advance(56, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_40(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'n')
		return (lex_advance(38, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_41(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(57, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_42(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'l')
		return (lex_advance(58, s));
	return (LEX_STOP);
}

// End of File
