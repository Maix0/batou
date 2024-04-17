/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func148.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_739(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(739, s));
	if (s->lookahead == '\\')
		return (lex_advance(339, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_740(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(740, s));
	if (s->lookahead == '\\')
		return (lex_advance(168, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_741(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(741, s));
	if (s->lookahead == '\\')
		return (lex_advance(341, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_742(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(742, s));
	if (s->lookahead == '\\')
		return (lex_advance(58, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_743(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym_heredoc_redirect_token1;
	lexer->mark_end(lexer);
	if (s->lookahead == '\n')
		return (lex_advance(743, s));
	if (s->lookahead == '\\')
		return (lex_advance(343, s));
	return (LEX_STOP);
}

// End of File
