/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func151.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_754(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(754, s));
	if (s->lookahead == '\\')
		return (lex_advance(354, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_755(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(755, s));
	if (s->lookahead == '\\')
		return (lex_advance(357, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_756(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(756, s));
	if (s->lookahead == '\\')
		return (lex_advance(370, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_757(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(757, s));
	if (s->lookahead == '\\')
		return (lex_advance(372, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_758(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(758, s));
	if (s->lookahead == '\\')
		return (lex_advance(381, s));
	return (LEX_STOP);
}

// End of File
