/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func118.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_589(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASHa;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_590(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PIPE;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_591(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PIPE;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(668, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_592(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PIPE;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(668, s));
	if (s->lookahead == '=')
		return (lex_advance(585, s));
	if (s->lookahead == '|')
		return (lex_advance(586, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_593(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PIPE;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(668, s));
	if (s->lookahead == '|')
		return (lex_advance(586, s));
	return (LEX_STOP);
}

// End of File
