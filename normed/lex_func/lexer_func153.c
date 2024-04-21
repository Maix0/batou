/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func153.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_func_764(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COLON;
	lexer->mark_end(lexer);
	if (s->lookahead == '+')
		return (lex_advance(834, s));
	if (s->lookahead == '-')
		return (lex_advance(831, s));
	if (s->lookahead == '=')
		return (lex_advance(828, s));
	if (s->lookahead == '?')
		return (lex_advance(838, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_765(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_COLON;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1(), \
	12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_766(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PLUS_PLUS2;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_767(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH_DASH2;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_768(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH2;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

// End of File
