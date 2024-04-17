/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func192.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	lex_func_default(t_lexer	*lexer, t_lex_state	*s)
{
	return (LEX_STOP);
}

bool	lex_keywords(t_lexer	*lexer, t_state_id	state)
{
	t_lex_state	lex_state;

	lex_state = (t_lex_state){};
	lex_state.lex_ret = LEX_START;
	START_LEXER();
	eof = lexer->eof(lexer);
	while (lex_state.lex_ret != LEX_STOP)
	{
		if (lex_state.lex_ret & LEX_NEXT_STATE)
			lexer->advance(lexer, lex_state.skip);
		lex_state.lex_ret = LEX_STOP;
		lex_state.skip = false;
		lex_state.lookahead = lexer->lookahead;
		lex_state.lex_ret = lex_keywords_func_choose(lexer, state, &lex_state);
	}
	return (lex_state.result);
}

enum e_lex_ret	lex_keywords_func_0(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'A')
		return (lex_advance(1, s));
	if (s->lookahead == 'E')
		return (lex_advance(2, s));
	if (s->lookahead == 'K')
		return (lex_advance(3, s));
	if (s->lookahead == 'L')
		return (lex_advance(4, s));
	if (s->lookahead == 'P')
		return (lex_advance(5, s));
	if (s->lookahead == 'Q')
		return (lex_advance(6, s));
	if (s->lookahead == 'U')
		return (lex_advance(7, s));
	if (s->lookahead == '\\')
		return (lex_skip(8, s));
	if (s->lookahead == 'a')
		return (lex_advance(9, s));
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
	if (s->lookahead == 'k')
		return (lex_advance(15, s));
	if (s->lookahead == 'l')
		return (lex_advance(16, s));
	if (s->lookahead == 'r')
		return (lex_advance(17, s));
	if (s->lookahead == 's')
		return (lex_advance(18, s));
	if (s->lookahead == 't')
		return (lex_advance(19, s));
	if (s->lookahead == 'u')
		return (lex_advance(20, s));
	if (s->lookahead == 'w')
		return (lex_advance(21, s));
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(22, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_1(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_A;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

enum e_lex_ret	lex_keywords_func_2(t_lexer	*lexer, t_lex_state	*s)
{
	s->result = true;
	lexer->result_symbol = anon_sym_E;
	lexer->mark_end(lexer);
	return (LEX_STOP);
}

// End of File