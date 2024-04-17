/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func122.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_func_609(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(682, s));
	if (s->lookahead == '(')
		return (lex_advance(858, s));
	if (s->lookahead == '<')
		return (lex_advance(624, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_610(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(682, s));
	if (s->lookahead == '(')
		return (lex_advance(858, s));
	if (s->lookahead == '<')
		return (lex_advance(623, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_611(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(682, s));
	if (s->lookahead == '<')
		return (lex_advance(505, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_612(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(682, s));
	if (s->lookahead == '<')
		return (lex_advance(624, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_613(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(682, s));
	if (s->lookahead == '<')
		return (lex_advance(623, s));
	return (LEX_STOP);
}

// End of File
