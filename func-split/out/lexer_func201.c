/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func201.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_keywords_func_43(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(59, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_44(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'f')
		return (lex_advance(60, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_45(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(61, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_46(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'o')
		return (lex_advance(62, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_47(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_for;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

// End of File
