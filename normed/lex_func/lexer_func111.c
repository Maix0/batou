/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func111.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_func_554(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SEMI;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(664, s));
	if (s->lookahead == ';')
		return (lex_advance(663, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_555(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_SEMI;
	lexer->mark_end(lexer);
	if (s->lookahead == ';')
		return (lex_advance(662, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_556(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COMMA;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_557(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COMMA;
	lexer->mark_end(lexer);
	if (s->lookahead == ',')
		return (lex_advance(850, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1(), \
	12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_558(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COMMA;
	lexer->mark_end(lexer);
	if (s->lookahead == ',')
		return (lex_advance(849, s));
	return (LEX_STOP);
}

// End of File
