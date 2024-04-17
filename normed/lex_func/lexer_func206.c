/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_func206.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lexer_funcs.h"

enum e_lex_ret	ts_lex_keywords_func_68(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 's')
		return (lex_advance(78, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_69(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 't')
		return (lex_advance(79, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_70(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'l')
		return (lex_advance(80, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_71(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'e')
		return (lex_advance(81, s));
	return (LEX_STOP);
}

enum e_lex_ret	ts_lex_keywords_func_72(t_lexer	*lexer, t_lex_state	*s)
{
	if (s->lookahead == 'r')
		return (lex_advance(82, s));
	return (LEX_STOP);
}

// End of File
