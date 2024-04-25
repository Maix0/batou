/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func0.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/22 16:58:36 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

#include "stdio.h"

bool	lex(t_lexer	*lexer, t_state_id	state)
{
	t_lex_state	lex_state;

	lex_state = (t_lex_state){};
	lex_state.state = state;
	lex_state.lex_ret = LEX_START;
	lex_state.eof = lexer->eof(lexer);
	while (lex_state.lex_ret)
	{
		if (lex_state.lex_ret & LEX_NEXT_STATE)
			lexer->advance(lexer, lex_state.skip);
		lex_state.skip = false;
		lex_state.lookahead = lexer->lookahead;
		lex_state.lex_ret = lex_func_choose(lexer, lex_state.state, &lex_state);
	}
	return (lex_state.result);
}

enum e_lex_ret	lex_func_0(t_lexer	*lexer, t_lex_state	*s)
{
	printf("eof\n");
	if (s->eof)
		return (lex_advance(547, s));
	printf("advance_map_0\n");
	if (lex_advence_map_0(lexer, s))
		return (s->lex_ret);
	printf("whitespace!\n");
	if (('\t' <= s->lookahead && s->lookahead <= '\r') || \
	s->lookahead == ' ')
		return (lex_skip(545, s));
	printf("nullbyte!\n");
	if (s->lookahead != 0)
		return (lex_advance(958, s));
	printf("stop!\n");
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_1(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(401, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_2(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(417, s));
	return (LEX_STOP);
}

enum e_lex_ret	lex_func_3(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '\n')
		return (lex_skip(418, s));
	return (LEX_STOP);
}

// End of File
