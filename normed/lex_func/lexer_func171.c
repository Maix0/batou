/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func171.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_854(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOLLAR_LPAREN;
	lexer->mark_end(lexer);
	if (s->lookahead == '(')
		return (lex_advance(773, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_855(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_BQUOTE;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_856(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_BQUOTE;
	lexer->mark_end(lexer);
	if (s->lookahead == '`')
		return (lex_advance(779, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_advance(510, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_857(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_DOLLAR_BQUOTE;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_858(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_LT_LPAREN;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

// End of File
