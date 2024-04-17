/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func157.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_784(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOLLAR;
	lexer->mark_end(lexer);
	if (s->lookahead == '(')
		return (lex_advance(853, s));
	if (s->lookahead == '`')
		return (lex_advance(857, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_785(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOLLAR;
	lexer->mark_end(lexer);
	if (s->lookahead == '(')
		return (lex_advance(853, s));
	if (s->lookahead == '`')
		return (lex_advance(857, s));
	if (s->lookahead == '{')
		return (lex_advance(817, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_786(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym__special_character;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_787(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym__special_character;
	lexer->mark_end(lexer);
	if (s->lookahead == ']')
		return (lex_advance(677, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_788(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DQUOTE;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

// End of File
