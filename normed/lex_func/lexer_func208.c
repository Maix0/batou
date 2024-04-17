/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func208.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_keywords_func_78(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(87, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_79(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_unset;
	lexer->mark_end(lexer);
	if (s->lookahead == 'e')
		return (lex_advance(88, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_80(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_until;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_81(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_while;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_82(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(89, s));
	return (LEX_STOP);
}

// End of File
