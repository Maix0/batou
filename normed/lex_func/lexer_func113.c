/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func113.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_func_564(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PLUS_PLUS;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_565(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PLUS_PLUS;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, \
	12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_566(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH_DASH;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_567(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH_DASH;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, \
	12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_568(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PLUS_EQ;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

// End of File
