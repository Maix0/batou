/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func178.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_889(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_889(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(246, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_890(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_890(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(247, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < ';' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_891(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_891(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(249, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_892(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_892(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(250, s));
	if (('1' <= s->lookahead && s->lookahead <= '9'))
		return (lex_advance(807, s));
	if (('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(873, s));
	if (s->lookahead != 0 && \
	(s->lookahead < '&' || '*' < s->lookahead) && \
	(s->lookahead < ';' || ']' < s->lookahead) && \
	(s->lookahead < '_' || '}' < s->lookahead))
		return (lex_advance(958, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_893(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = aux_sym__multiline_variable_name_token1;
	lexer->mark_end(lexer);
	if (ts_lex_advence_map_893(lexer, s))
		return (s->lex_ret);
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(252, s));
	if (('1' <= s->lookahead && s->lookahead <= '9') || \
	('A' <= s->lookahead && s->lookahead <= 'Z') || \
	('a' <= s->lookahead && s->lookahead <= 'z'))
		return (lex_advance(879, s));
	return (LEX_STOP);
}

// End of File
