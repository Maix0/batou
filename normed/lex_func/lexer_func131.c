/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func131.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_func_654(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LPAREN;
	lexer->mark_end(lexer);
	if (s->lookahead == '(')
		return (lex_advance(551, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_655(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_RPAREN;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_656(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__c_word_token1;
	lexer->mark_end(lexer);
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(656, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_657(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_esac;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_658(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_esac;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(518, s));
	if (('0' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	s->lookahead == '_' || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(868, s));
	if ((!s->eof && set_contains(sym__comment_word_character_set_1(), \
	12, s->lookahead)))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

// End of File
