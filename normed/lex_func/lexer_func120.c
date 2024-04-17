/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func120.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_func_599(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_AMP;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_600(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_AMP;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(588, s));
	if (s->lookahead == '=')
		return (lex_advance(582, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_601(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_AMP;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(588, s));
	if (s->lookahead == '=')
		return (lex_advance(582, s));
	if (s->lookahead == '>')
		return (lex_advance(680, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_602(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_AMP;
	lexer->mark_end(lexer);
	if (s->lookahead == '&')
		return (lex_advance(588, s));
	if (s->lookahead == '>')
		return (lex_advance(680, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_603(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_EQ_EQ;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

// End of File
