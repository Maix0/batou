/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func142.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_709(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(709, s));
	if (s->lookahead == '\\')
		return (lex_advance(325, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_710(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(710, s));
	if (s->lookahead == '\\')
		return (lex_advance(211, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_711(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(711, s));
	if (s->lookahead == '\\')
		return (lex_advance(158, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_712(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(712, s));
	if (s->lookahead == '\\')
		return (lex_advance(326, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_713(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(713, s));
	if (s->lookahead == '\\')
		return (lex_advance(188, s));
	return (LEX_STOP);
}

// End of File
