/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func128.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_639(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_STAR;
	lexer->mark_end(lexer);
	if (s->lookahead == '*')
		return (lex_advance(652, s));
	if (s->lookahead == '=')
		return (lex_advance(572, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_640(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_STAR;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_641(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SLASH;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_642(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SLASH;
	lexer->mark_end(lexer);
	if (s->lookahead == '#')
		return (lex_advance(846, s));
	if (s->lookahead == '%')
		return (lex_advance(848, s));
	if (s->lookahead == '/')
		return (lex_advance(844, s));
	if (s->lookahead == '=')
		return (lex_advance(575, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym_word_character_set_1, 11, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_643(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SLASH;
	lexer->mark_end(lexer);
	if (s->lookahead == '#')
		return (lex_advance(845, s));
	if (s->lookahead == '%')
		return (lex_advance(847, s));
	if (s->lookahead == '/')
		return (lex_advance(843, s));
	return (LEX_STOP);
}

// End of File
