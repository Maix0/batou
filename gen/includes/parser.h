#ifndef TREE_SITTER_PARSER_H_
#define TREE_SITTER_PARSER_H_

#include <cstdint>
#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include "./lexer.h"

#define ts_builtin_sym_error ((t_symbol)-1)
#define ts_builtin_sym_end 0
#define TREE_SITTER_SERIALIZATION_BUFFER_SIZE 1024

#ifndef PARSER_RAW_TYPES_H
typedef uint16_t t_state_id;
typedef uint16_t t_symbol;
typedef uint16_t t_field_id;
typedef struct TSLanguage TSLanguage;
#endif

struct TSLanguage {
  uint32_t version;
  uint32_t symbol_count;
  uint32_t alias_count;
  uint32_t token_count;
  uint32_t external_token_count;
  uint32_t state_count;
  uint32_t large_state_count;
  uint32_t production_id_count;
  uint32_t field_count;
  uint16_t max_alias_sequence_length;
  const uint16_t *parse_table;
  const uint16_t *small_parse_table;
  const uint32_t *small_parse_table_map;
  const t_parse_action_entry *parse_actions;
  const char *const *symbol_names;
  const char *const *field_names;
  const t_field_map_slice *field_map_slices;
  const t_field_map_entry *field_map_entries;
  const t_symbol_metadata *symbol_metadata;
  const t_symbol *public_symbol_map;
  const uint16_t *alias_map;
  const t_symbol *alias_sequences;
  const t_lex_mode *lex_modes;
  bool (*lex_fn)(t_lexer *, t_state_id);
  bool (*keyword_lex_fn)(t_lexer *, t_state_id);
  t_symbol keyword_capture_token;
  struct {
    const bool *states;
    const t_symbol *symbol_map;
    void *(*create)(void);
    void (*destroy)(void *);
    bool (*scan)(void *, t_lexer *, const bool *symbol_whitelist);
    unsigned (*serialize)(void *, char *);
    void (*deserialize)(void *, const char *, unsigned);
  } external_scanner;
  const t_state_id *primary_state_ids;
};

/*
 *  Lexer Macros
 */

#define START_LEXER()                                                          \
  bool result = false;                                                         \
  bool skip = false;                                                           \
  bool eof = false;                                                            \
  int32_t lookahead;                                                           \
  goto start;                                                                  \
  next_state:                                                                  \
  lexer->advance(lexer, skip);                                                 \
  start:                                                                       \
  skip = false;                                                                \
  lookahead = lexer->lookahead;

#define ADVANCE(state_value)                                                   \
  {                                                                            \
    state = state_value;                                                       \
    goto next_state;                                                           \
  }

#define SKIP(state_value)                                                      \
  {                                                                            \
    skip = true;                                                               \
    state = state_value;                                                       \
    goto next_state;                                                           \
  }

#define ACCEPT_TOKEN(symbol_value)                                             \
  result = true;                                                               \
  lexer->result_symbol = symbol_value;                                         \
  lexer->mark_end(lexer);

#define END_STATE() return result;

/*
 *  Parse Table Macros
 */

#define SMALL_STATE(id) ((id)-LARGE_STATE_COUNT)

#define STATE(id) id

#define ACTIONS(id) id


#define SHIFT(state_value)                                                     \
  {                                                                            \
    {                                                                          \
      .shift = {.type = t_parse_action_typeshift, .state = (state_value) }     \
    }                                                                          \
  }


#define SHIFT_REPEAT(state_value)                                              \
  {                                                                            \
    {                                                                          \
      .shift = {                                                               \
        .type = ActionTypeShift,                                               \
        .state = (state_value),                                                \
        .repetition = true                                                     \
      }                                                                        \
    }                                                                          \
  }


#define SHIFT_EXTRA()                                                          \
  {                                                                            \
    {                                                                          \
      .shift = {.type = ActionTypeShift, .extra = true }                       \
    }                                                                          \
  }

#ifdef __cplusplus
}
#endif

#endif // TREE_SITTER_PARSER_H_
