/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func174.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_func_869(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__simple_variable_name_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(17, s));
	if (s->lookahead == 'a')
		return (lex_advance(870, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('b' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1(), \
	12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_870(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__simple_variable_name_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(17, s));
	if (s->lookahead == 'c')
		return (lex_advance(660, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1(), \
	12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_871(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__simple_variable_name_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(17, s));
	if (s->lookahead == 's')
		return (lex_advance(869, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1(), \
	12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_872(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__simple_variable_name_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(17, s));
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1(), \
	12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_873(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__simple_variable_name_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(17, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1(), \
	12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

// End of File
