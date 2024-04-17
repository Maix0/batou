/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func127.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_func_634(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH;
	lexer->mark_end(lexer);
	if (s->lookahead == '-')
		return (lex_advance(566, s));
	if (s->lookahead == '=')
		return (lex_advance(570, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_635(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH;
	lexer->mark_end(lexer);
	if (s->lookahead == '-')
		return (lex_advance(566, s));
	if (s->lookahead == '=')
		return (lex_advance(570, s));
	if (s->lookahead == 'a')
		return (lex_advance(589, s));
	if (s->lookahead == 'o')
		return (lex_advance(587, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_636(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH;
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

enum e_lex_ret	lex_func_637(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_STAR;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_638(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_STAR;
	lexer->mark_end(lexer);
	if (s->lookahead == '*')
		return (lex_advance(651, s));
	if (s->lookahead == '=')
		return (lex_advance(573, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

// End of File
