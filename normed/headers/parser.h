/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:42:58 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 16:58:45 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include <stdbool.h>
# include <stdint.h>
# include <stdlib.h>

# define TREE_SITTER_SERIALIZATION_BUFFER_SIZE 1024

typedef uint16_t						t_state_id;
typedef uint16_t						t_symbol;
typedef uint16_t						t_field_id;

typedef struct s_field_map_entry
{
	t_field_id							field_id;
	uint8_t								child_index;
	bool								inherited;
}										t_field_map_entry;

typedef struct s_field_map_slice
{
	uint16_t							index;
	uint16_t							length;
}										t_field_map_slice;

typedef struct s_symbol_metadata
{
	bool								visible;
	bool								named;
	bool								supertype;
}										t_symbol_metadata;

typedef struct s_lexer
{
	int32_t								lookahead;
	t_symbol							result_symbol;
	void								(*advance)(struct s_lexer *, bool);
	void								(*mark_end)(struct s_lexer *);
	uint32_t							(*get_column)(struct s_lexer *);
	bool								(*is_at_included_range_start) \
	(const struct s_lexer *);
	bool								(*eof)(const struct s_lexer *);
}										t_lexer;

typedef enum e_parse_action_type
{
	TSParseActionTypeShift,
	TSParseActionTypeReduce,
	TSParseActionTypeAccept,
	TSParseActionTypeRecover,
}										t_parse_action_type;

struct									s_parse_action_shift
{
	uint8_t								type;
	t_state_id							state;
	bool								extra;
	bool								repetition;
};

struct									s_parse_action_reduce
{
	uint8_t								type;
	uint8_t								child_count;
	t_symbol							symbol;
	int16_t								dynamic_precedence;
	uint16_t							production_id;
};

typedef union u_parse_action
{
	struct s_parse_action_shift			shift;
	struct s_parse_action_reduce		reduce;
	uint8_t								type;
}										t_parse_action;

typedef struct s_lex_mode
{
	uint16_t							lex_state;
	uint16_t							external_lex_state;
}										t_lex_mode;

struct									s_parse_action_entry_inner
{
	uint8_t								count;
	bool								reusable;
};

typedef union u_parse_action_entry
{
	t_parse_action						action;
	struct s_parse_action_entry_inner	entry;
}										t_parse_action_entry;

typedef struct s_char_range
{
	int32_t								start;
	int32_t								end;
}										t_char_range;

typedef bool							(*t_external_scanner_scan)(void *ctx,
								t_lexer *lexer, const bool *symbol_whitelist);

typedef void							(*t_external_scanner_deserialize) \
(void *ctx, const char *s, unsigned num);

struct									s_external_scanner
{
	const bool							*states;
	const t_symbol						*symbol_map;
	void								*(*create)(void);
	void								(*destroy)(void *ctx);
	t_external_scanner_scan				scan;
	unsigned							(*serialize)(void *ctx, char *s);
	t_external_scanner_deserialize		deserialize;
};

typedef bool							(*t_lang_lex_fn)(t_lexer *lexer,
								t_state_id state_id);

typedef bool							(*t_lang_keyword_lex_fn)(t_lexer *lexer,
								t_state_id state_id);
typedef struct s_language
{
	uint32_t							version;
	uint32_t							symbol_count;
	uint32_t							alias_count;
	uint32_t							token_count;
	uint32_t							external_token_count;
	uint32_t							state_count;
	uint32_t							large_state_count;
	uint32_t							production_id_count;
	uint32_t							field_count;
	uint16_t							max_alias_sequence_length;
	const uint16_t						*parse_table;
	const uint16_t						*small_parse_table;
	const uint32_t						*small_parse_table_map;
	const t_parse_action_entry			*parse_actions;
	const char *const					*symbol_names;
	const char *const					*field_names;
	const t_field_map_slice				*field_map_slices;
	const t_field_map_entry				*field_map_entries;
	const t_symbol_metadata				*symbol_metadata;
	const t_symbol						*public_symbol_map;
	const uint16_t						*alias_map;
	const t_symbol						*alias_sequences;
	const t_lex_mode					*lex_modes;
	t_lang_lex_fn						lex_fn;
	t_lang_keyword_lex_fn				keyword_lex_fn;
	t_symbol							keyword_capture_token;
	struct s_external_scanner			external_scanner;
	const t_state_id					*primary_state_ids;
}										t_language;

static inline bool	set_contains(t_char_range *ranges, uint32_t len,
		int32_t lookahead)
{
	uint32_t		index;
	uint32_t		size;
	uint32_t		half_size;
	uint32_t		mid_index;
	t_char_range	*range;

	index = 0;
	size = len - index;
	while (size > 1)
	{
		half_size = size / 2;
		mid_index = index + half_size;
		range = &ranges[mid_index];
		if (lookahead >= range->start && lookahead <= range->end)
		{
			return (true);
		}
		else if (lookahead > range->end)
		{
			index = mid_index;
		}
		size -= half_size;
	}
	range = &ranges[index];
	return (lookahead >= range->start && lookahead <= range->end);
}

#endif
