/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func190.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_949(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_word;
	lexer->mark_end(lexer);
	if (s->lookahead == '.')
		return (lex_advance(777, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_950(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_word;
	lexer->mark_end(lexer);
	if (s->lookahead == '0')
		return (lex_advance(803, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_951(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_word;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(606, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_952(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_word;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(604, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (s->lookahead == '~')
		return (lex_advance(679, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_953(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_word;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (s->lookahead == 'a')
		return (lex_advance(954, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

// End of File
