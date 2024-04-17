/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func162.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_809(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_number_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '#')
		return (lex_advance(815, s));
	if (s->lookahead == 'x')
		return (lex_advance(517, s));
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(811, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_810(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_number_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '#')
		return (lex_advance(815, s));
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(810, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_811(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_number_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '#')
		return (lex_advance(815, s));
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(811, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_812(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_number_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('@' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(812, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, 12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_813(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_number_token1;
	lexer->mark_end(lexer);
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('@' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(813, s));
	return (LEX_STOP);
}

// End of File
