/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func156.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_779(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_concatenation_token1;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_780(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOLLAR;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_781(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOLLAR;
	lexer->mark_end(lexer);
	if (s->lookahead == '\'')
		return (lex_advance(492, s));
	if (s->lookahead == '(')
		return (lex_advance(854, s));
	if (s->lookahead == '[')
		return (lex_advance(774, s));
	if (s->lookahead == '`')
		return (lex_advance(857, s));
	if (s->lookahead == '{')
		return (lex_advance(817, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_782(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOLLAR;
	lexer->mark_end(lexer);
	if (s->lookahead == '\'')
		return (lex_advance(492, s));
	if (s->lookahead == '(')
		return (lex_advance(853, s));
	if (s->lookahead == '`')
		return (lex_advance(857, s));
	if (s->lookahead == '{')
		return (lex_advance(817, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_783(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOLLAR;
	lexer->mark_end(lexer);
	if (s->lookahead == '(')
		return (lex_advance(854, s));
	if (s->lookahead == '[')
		return (lex_advance(774, s));
	if (s->lookahead == '`')
		return (lex_advance(857, s));
	if (s->lookahead == '{')
		return (lex_advance(817, s));
	return (LEX_STOP);
}

// End of File
