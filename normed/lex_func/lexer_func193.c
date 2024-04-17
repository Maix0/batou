/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func193.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_keywords_func_3(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_K;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_4(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_L;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_5(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_P;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_6(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_Q;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_7(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_U;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

// End of File
