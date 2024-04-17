/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func195.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_keywords_func_13(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'i')
		return (lex_advance(29, s));
	if (s->lookahead == 'o')
		return (lex_advance(30, s));
	if (s->lookahead == 'u')
		return (lex_advance(31, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_14(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'f')
		return (lex_advance(32, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_15(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_k;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_16(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'o')
		return (lex_advance(33, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_17(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(34, s));
	return (LEX_STOP);
}

// End of File
