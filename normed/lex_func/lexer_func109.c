/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func109.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_func_544(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (s->lookahead == '\r')
		return (lex_skip(526, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_skip(520, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_545(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (lex_advence_map_545(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(545, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_546(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->eof)
		return (lex_advance(547, s));
	if (lex_advence_map_546(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(546, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(805, s));
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_547(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = ts_builtin_sym_end;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_548(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_in;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

// End of File