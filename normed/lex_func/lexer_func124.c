/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func124.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_func_619(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT;
	lexer->mark_end(lexer);
	if (s->lookahead == '(')
		return (lex_advance(859, s));
	if (s->lookahead == '=')
		return (lex_advance(622, s));
	if (s->lookahead == '>')
		return (lex_advance(628, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_620(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(622, s));
	if (s->lookahead == '>')
		return (lex_advance(628, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_621(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT_EQ;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_622(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT_EQ;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_623(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '-')
		return (lex_advance(687, s));
	return (LEX_STOP);
}

// End of File
