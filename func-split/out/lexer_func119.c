/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func119.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_594(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PIPE;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(585, s));
	if (s->lookahead == '|')
		return (lex_advance(586, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_595(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_CARET;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(584, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (s->lookahead == '^')
		return (lex_advance(852, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_596(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_CARET;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(584, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_597(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_CARET;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(583, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_598(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_CARET;
	lexer->mark_end(lexer);
	if (s->lookahead == '^')
		return (lex_advance(851, s));
	return (LEX_STOP);
}

// End of File
