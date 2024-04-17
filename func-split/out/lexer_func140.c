/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func140.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_699(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(699, s));
	if (s->lookahead == '\\')
		return (lex_advance(153, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_700(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(700, s));
	if (s->lookahead == '\\')
		return (lex_advance(322, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_701(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(701, s));
	if (s->lookahead == '\\')
		return (lex_advance(185, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_702(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(702, s));
	if (s->lookahead == '\\')
		return (lex_advance(32, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_703(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(703, s));
	if (s->lookahead == '\\')
		return (lex_advance(323, s));
	return (LEX_STOP);
}

// End of File
