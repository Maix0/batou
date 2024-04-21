/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func172.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_func_859(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT_LPAREN;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_860(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_comment;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(798, s));
	if (s->lookahead == '\r')
		return (lex_advance(792, s));
	if (s->lookahead != 0)
		return (lex_advance(797, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_861(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_comment;
	lexer->mark_end(lexer);
	if (s->lookahead == '\t' || \
	(0x0b <= s->lookahead && s->lookahead <= '\r'))
		return (lex_advance(862, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '\t' || '\r' < s->lookahead))
		return (lex_advance(863, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_862(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_comment;
	lexer->mark_end(lexer);
	if (s->lookahead != 0 && \
	s->lookahead != '\n')
		return (lex_advance(862, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_863(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym__comment_word;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(861, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1(), \
	12, s->lookahead)))
		return (lex_advance(863, s));
	return (LEX_STOP);
}

// End of File
