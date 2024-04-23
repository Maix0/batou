/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:51:24 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/23 20:08:36 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEXER_H
#define LEXER_H

#include <stdbool.h>
#include <stdint.h>

#ifndef TREE_SITTER_API_H_
typedef uint16_t		  t_state_id;
typedef uint16_t		  t_symbol;
typedef uint16_t		  t_field_id;
typedef struct s_language t_language;
#endif

typedef struct s_lexer t_lexer;

struct s_lexer
{
	int32_t	 lookahead;
	t_symbol result_symbol;
	void (*advance)(t_lexer *, bool);
	void (*mark_end)(t_lexer *);
	uint32_t (*get_column)(t_lexer *);
	bool (*is_at_included_range_start)(const t_lexer *);
	bool (*eof)(const t_lexer *);
};

typedef struct s_lexer_state
{
	int32_t	   lookahead;
	t_state_id state;
	bool	   result;
	bool	   skip;
	bool	   eof;
} t_lexer_state;

static inline bool shift(t_state_id state_value, t_lexer *lexer,
						 t_lexer_state *s)
{
	s->skip = true;
	s->state = state_value;
	return (true);
}

static inline bool advance(t_state_id state_value, t_lexer *lexer,
						   t_lexer_state *s)
{
	s->state = state_value;
	return (true);
}

static inline bool accept_token(t_symbol symbol_value, t_lexer *lexer,
								t_lexer_state *s)
{
	s->result = true;
	lexer->result_symbol = symbol_value;
	lexer->mark_end(lexer);
	return (true);
}

static inline bool end_state(t_lexer *lexer, t_lexer_state *s)
{
	(void)(lexer);
	(void)(s);
	return (false);
}

#endif /* LEXER_H */
