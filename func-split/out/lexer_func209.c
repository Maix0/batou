/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func209.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_keywords_func_83(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_export;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_84(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'o')
		return (lex_advance(90, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_85(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'l')
		return (lex_advance(91, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_86(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_select;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_87(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 't')
		return (lex_advance(92, s));
	return (LEX_STOP);
}

// End of File
