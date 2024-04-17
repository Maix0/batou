/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func160.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_func_799(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_string_content;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(303, s));
	if (s->lookahead != 0 && \
	s->lookahead != '\r' && \
	s->lookahead != '"' && \
	s->lookahead != '$' && \
	s->lookahead != '`')
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_800(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_raw_string;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_801(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_ansi_c_string;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_802(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_ansi_c_string;
	lexer->mark_end(lexer);
	if (s->lookahead == '\'')
		return (lex_advance(801, s));
	if (s->lookahead == '\\')
		return (lex_advance(493, s));
	if (s->lookahead != 0)
		return (lex_advance(492, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_803(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_number_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '#')
		return (lex_advance(814, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (s->lookahead == 'x')
		return (lex_advance(957, s));
	if (('0' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if ((!s->eof && set_contains(sym_word_character_set_1, 11, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

// End of File
