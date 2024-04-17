/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func210.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_keywords_func_88(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'n')
		return (lex_advance(93, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_89(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_declare;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_90(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'n')
		return (lex_advance(94, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_91(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'y')
		return (lex_advance(95, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_92(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_typeset;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

// End of File
