/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lex_choose.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:36:56 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/22 15:45:44 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_func_array.h"

enum e_lex_ret	lex_func_choose(t_lexer *lexer, t_state_id state_id, \
	t_lex_state *s)
{
	static t_lex_normal_funcs	table = {};
	static bool 				init = false;

	if (!init)
	{
		init_lex_func_array0(&table);
		init = true;
	}

	if (state_id < 959)
		return ((table.arr[state_id])(lexer, s));
	else 
		return (lex_func_default(lexer, s));
}

enum e_lex_ret	lex_keywords_func_choose(t_lexer *lexer, t_state_id state_id, \
	t_lex_state *s)
{

	static t_lex_keyword_funcs	table = {};
	static bool 				init = false;

	if (!init)
	{
		init_lex_keywords_func_array0(&table);
		init = true;
	}
	if (state_id < 97)
		return ((table.arr[state_id])(lexer, s));
	else 
		return (lex_keywords_func_default(lexer, s));
}
