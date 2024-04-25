/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lex.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:49:43 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/22 15:43:29 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEX_H
# define LEX_H

# include <stdbool.h>
# include <stdint.h>
# include "./parser.h"
# include "./symbols.h"
# include "./field.h"

enum e_lex_ret
{
	LEX_STOP = 0,
	LEX_START = 1 << 0,
	LEX_NEXT_STATE = 1 << 1,
};

typedef struct s_lex_state
{
	bool						result;
	bool						eof;
	bool						skip;
	uint32_t					lookahead;
	enum e_lex_ret				lex_ret;
	t_state_id					state;
}								t_lex_state;

typedef struct s_pair
{
	uint32_t					lookahead;
	t_state_id					state;
}								t_pair;

typedef struct s_char_list
{
	t_pair						*val;
	uint32_t					len;
}								t_char_list;

static inline enum e_lex_ret	lex_skip(t_state_id state, t_lex_state *s)
{
	s->skip = true;
	s->state = state;
	return (LEX_NEXT_STATE);
}

static inline enum e_lex_ret	lex_advance(t_state_id state, t_lex_state *s)
{
	s->state = state;
	return (LEX_NEXT_STATE);
}

typedef enum e_lex_ret	t_lex_n_funcs(t_lexer	*lexer, t_lex_state	*s);

typedef struct s_lex_normal_funcs
{
	t_lex_n_funcs	*arr[959];
}	t_lex_normal_funcs;

typedef enum e_lex_ret	t_lex_k_funcs(t_lexer	*lexer, t_lex_state	*s);

typedef struct s_lex_keyword_funcs
{
	t_lex_k_funcs	*arr[97];
}	t_lex_keyword_funcs;

static inline bool	lex_advance_map(uint32_t *map, uint32_t map_size,
		t_lex_state *s)
{
	uint32_t	i;

	i = 0;
	while (i < map_size)
	{
		if (map[i] == s->lookahead)
		{
			s->state = map[i + 1];
			s->lex_ret = LEX_NEXT_STATE;
			return (true);
		}
		i += 2;
	}
	return (false);
}

enum e_lex_ret	lex_func_choose(t_lexer *lexer, t_state_id state_id, \
	t_lex_state *s);
enum e_lex_ret	lex_keywords_func_choose(t_lexer *lexer, t_state_id state_id, \
	t_lex_state *s);

void			init_lex_func_array0(t_lex_normal_funcs *v);
void			init_lex_keywords_func_array0(t_lex_keyword_funcs *v);


#endif /* LEX_H */
