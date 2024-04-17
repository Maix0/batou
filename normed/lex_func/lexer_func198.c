/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func198.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_keywords_func_28(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'p')
		return (lex_advance(46, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_29(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_fi;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_30(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'r')
		return (lex_advance(47, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_31(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'n')
		return (lex_advance(48, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_32(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_if;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

// End of File
