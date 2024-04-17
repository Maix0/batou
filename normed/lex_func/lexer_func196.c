/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func196.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_keywords_func_18(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(35, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_19(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'h')
		return (lex_advance(36, s));
	if (s->lookahead == 'y')
		return (lex_advance(37, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_20(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_u;
	lexer->mark_end(lexer);
	if (s->lookahead == 'n')
		return (lex_advance(38, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_21(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'h')
		return (lex_advance(39, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_22(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\\')
		return (lex_skip(8, s));
	if (s->lookahead == 'c')
		return (lex_advance(10, s));
	if (s->lookahead == 'd')
		return (lex_advance(11, s));
	if (s->lookahead == 'e')
		return (lex_advance(12, s));
	if (s->lookahead == 'f')
		return (lex_advance(13, s));
	if (s->lookahead == 'i')
		return (lex_advance(14, s));
	if (s->lookahead == 'l')
		return (lex_advance(16, s));
	if (s->lookahead == 'r')
		return (lex_advance(17, s));
	if (s->lookahead == 's')
		return (lex_advance(18, s));
	if (s->lookahead == 't')
		return (lex_advance(19, s));
	if (s->lookahead == 'u')
		return (lex_advance(40, s));
	if (s->lookahead == 'w')
		return (lex_advance(21, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(22, s));
	return (LEX_STOP);
}

// End of File
