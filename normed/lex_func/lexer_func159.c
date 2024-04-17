/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func159.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_794(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_string_content;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_794(lexer, s))
		return (s->lex_ret);
	if (s->lookahead == '\n' || \
	s->lookahead == '\r')
		return (lex_skip(452, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_advance(794, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	if (s->lookahead != 0 && \
	(s->lookahead < ' ' || '$' < s->lookahead) && \
	(s->lookahead < '_' || 'z' < s->lookahead))
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_795(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_string_content;
	lexer->mark_end(lexer);
	if (s->lookahead == '"')
		return (lex_advance(788, s));
	if (s->lookahead == '#')
		return (lex_advance(797, s));
	if (s->lookahead == '$')
		return (lex_advance(783, s));
	if (s->lookahead == '(')
		return (lex_advance(796, s));
	if (s->lookahead == '\\')
		return (lex_advance(302, s));
	if (s->lookahead == '`')
		return (lex_advance(855, s));
	if (s->lookahead == '\n' || \
	s->lookahead == '\r')
		return (lex_skip(480, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\f') || \
	s->lookahead == ' ')
		return (lex_advance(795, s));
	if (s->lookahead != 0)
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_796(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_string_content;
	lexer->mark_end(lexer);
	if (s->lookahead == '(')
		return (lex_advance(551, s));
	if (s->lookahead == '\\')
		return (lex_advance(303, s));
	if (s->lookahead != 0 && \
	s->lookahead != '\n' && \
	s->lookahead != '\r' && \
	s->lookahead != '"' && \
	s->lookahead != '$' && \
	s->lookahead != '`')
		return (lex_advance(798, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_797(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_string_content;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(860, s));
	if (s->lookahead != 0 && \
	s->lookahead != '\n' && \
	s->lookahead != '\r' && \
	s->lookahead != '"' && \
	s->lookahead != '$' && \
	s->lookahead != '`')
		return (lex_advance(797, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_798(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = sym_string_content;
	lexer->mark_end(lexer);
	if (s->lookahead == '\\')
		return (lex_advance(303, s));
	if (s->lookahead != 0 && \
	s->lookahead != '\n' && \
	s->lookahead != '\r' && \
	s->lookahead != '"' && \
	s->lookahead != '$' && \
	s->lookahead != '`')
		return (lex_advance(798, s));
	return (LEX_STOP);
}

// End of File
