/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func205.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_keywords_func_63(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 't')
		return (lex_advance(74, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_64(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'l')
		return (lex_advance(75, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_65(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'o')
		return (lex_advance(76, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_66(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'c')
		return (lex_advance(77, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_67(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_then;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

// End of File
