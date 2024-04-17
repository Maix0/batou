/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func123.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_614(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '(')
		return (lex_advance(858, s));
	if (s->lookahead == '<')
		return (lex_advance(626, s));
	if (s->lookahead == '=')
		return (lex_advance(621, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_615(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '<')
		return (lex_advance(626, s));
	if (s->lookahead == '=')
		return (lex_advance(621, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_616(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(683, s));
	if (s->lookahead == '(')
		return (lex_advance(859, s));
	if (s->lookahead == '=')
		return (lex_advance(622, s));
	if (s->lookahead == '>')
		return (lex_advance(628, s));
	if (s->lookahead == '|')
		return (lex_advance(684, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_617(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(683, s));
	if (s->lookahead == '(')
		return (lex_advance(859, s));
	if (s->lookahead == '>')
		return (lex_advance(627, s));
	if (s->lookahead == '|')
		return (lex_advance(684, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_618(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(683, s));
	if (s->lookahead == '>')
		return (lex_advance(627, s));
	if (s->lookahead == '|')
		return (lex_advance(684, s));
	return (LEX_STOP);
}

// End of File
