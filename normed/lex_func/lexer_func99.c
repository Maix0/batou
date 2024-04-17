/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func99.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_func_494(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '(')
		return (lex_advance(551, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_495(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '(')
		return (lex_advance(858, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_496(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '(')
		return (lex_advance(859, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_497(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '(')
		return (lex_advance(853, s));
	if (s->lookahead == '`')
		return (lex_advance(857, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_func_498(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == '(')
		return (lex_advance(853, s));
	if (s->lookahead == '`')
		return (lex_advance(857, s));
	if (s->lookahead == '{')
		return (lex_advance(817, s));
	return (LEX_STOP);
}

// End of File
