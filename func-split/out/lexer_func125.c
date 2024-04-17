/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func125.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_624(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '-')
		return (lex_advance(687, s));
	if (s->lookahead == '<')
		return (lex_advance(759, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_625(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '-')
		return (lex_advance(687, s));
	if (s->lookahead == '<')
		return (lex_advance(759, s));
	if (s->lookahead == '=')
		return (lex_advance(580, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_626(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT_LT;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(580, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_627(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT_GT;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_628(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_GT_GT;
	lexer->mark_end(lexer);
	if (s->lookahead == '=')
		return (lex_advance(581, s));
	return (LEX_STOP);
}

// End of File
