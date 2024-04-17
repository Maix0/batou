/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func207.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_keywords_func_73(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 't')
		return (lex_advance(83, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_74(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'i')
		return (lex_advance(84, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_75(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_local;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_76(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'n')
		return (lex_advance(85, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_77(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 't')
		return (lex_advance(86, s));
	return (LEX_STOP);
}

// End of File
