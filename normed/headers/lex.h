/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lex.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:49:43 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/16 17:21:10 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEX_H
# define LEX_H

# include <stdbool.h>
# include <stdint.h>

enum							e_lex_ret
{
	LEX_STOP = 0,
	LEX_START = 1 << 0,
	LEX_NEXT_STATE = 1 << 1,
};
typedef int						t_state_id;

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

static inline enum e_lex_ret	lex_adance(t_state_id state, t_lex_state *s)
{
	s->state = state;
	return (LEX_NEXT_STATE);
}

// static inline void lex_next_state(t_lexer *lexer, t_lex_state   *s)
//{
//
//}

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

#endif /* LEX_H */
