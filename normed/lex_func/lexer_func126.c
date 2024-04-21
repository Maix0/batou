/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func126.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_func_629(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PLUS;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_630(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PLUS;
	lexer->mark_end(lexer);
	if (s->lookahead == '+')
		return (lex_advance(565, s));
	if (s->lookahead == '=')
		return (lex_advance(569, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, \
	12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_631(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_PLUS;
	lexer->mark_end(lexer);
	if (s->lookahead == '+')
		return (lex_advance(564, s));
	if (s->lookahead == '=')
		return (lex_advance(568, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_632(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_633(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DASH;
	lexer->mark_end(lexer);
	if (s->lookahead == '-')
		return (lex_advance(567, s));
	if (s->lookahead == '0')
		return (lex_advance(803, s));
	if (s->lookahead == '=')
		return (lex_advance(571, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1, \
	12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

// End of File
