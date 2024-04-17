/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func197.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_keywords_func_23(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(22, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_24(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 's')
		return (lex_advance(41, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_25(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'c')
		return (lex_advance(42, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_26(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_do;
	lexer->mark_end(lexer);
	if (s->lookahead == 'n')
		return (lex_advance(43, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_27(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'i')
		return (lex_advance(44, s));
	if (s->lookahead == 's')
		return (lex_advance(45, s));
	return (LEX_STOP);
}

// End of File
