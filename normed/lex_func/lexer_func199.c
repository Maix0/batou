/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func199.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_keywords_func_33(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'c')
		return (lex_advance(49, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_34(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'a')
		return (lex_advance(50, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_35(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'l')
		return (lex_advance(51, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_36(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(52, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_37(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'p')
		return (lex_advance(53, s));
	return (LEX_STOP);
}

// End of File
