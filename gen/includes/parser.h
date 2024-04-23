#ifndef TREE_SITTER_PARSER_H_
#define TREE_SITTER_PARSER_H_

#include <cstdint>
#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define ts_builtin_sym_error ((t_symbol)-1)
#define ts_builtin_sym_end 0
#define TREE_SITTER_SERIALIZATION_BUFFER_SIZE 1024

#ifndef TREE_SITTER_API_H_
typedef uint16_t t_state_id;
typedef uint16_t t_symbol;
typedef uint16_t t_field_id;
typedef struct TSLanguage TSLanguage;
#endif

typedef struct {
  t_field_id field_id;
  uint8_t child_index;
  bool inherited;
} t_field_map_entry;

static inline t_field_map_entry
fmap_entry(t_field_id field_id, uint8_t child_index, bool inherited) {
  return ((t_field_map_entry){
      .field_id = field_id,
      .child_index = child_index,
      .inherited = inherited,
  });
}

typedef struct {
  uint16_t index;
  uint16_t length;
} t_field_map_slice;

static inline t_field_map_slice fmap_slice(uint16_t index, uint16_t length) {
  return ((t_field_map_slice){
      .index = index,
      .length = length,
  });
}

typedef struct {
  bool visible;
  bool named;
  bool supertype;
} t_symbol_metadata;

static inline t_symbol_metadata symbol_metadata(bool visible, bool named,
                                                bool supertype) {
  return ((t_symbol_metadata){
      .visible = visible,
      .named = named,
      .supertype = supertype,
  });
}

typedef struct t_lexer t_lexer;

struct t_lexer {
  int32_t lookahead;
  t_symbol result_symbol;
  void (*advance)(t_lexer *, bool);
  void (*mark_end)(t_lexer *);
  uint32_t (*get_column)(t_lexer *);
  bool (*is_at_included_range_start)(const t_lexer *);
  bool (*eof)(const t_lexer *);
};

typedef enum {
  ActionTypeShift,
  ActionTypeReduce,
  ActionTypeAccept,
  ActionTypeRecover,
} t_parse_action_type;

typedef union {
  struct {
    uint8_t type;
    t_state_id state;
    bool extra;
    bool repetition;
  } shift;
  struct {
    uint8_t type;
    uint8_t child_count;
    t_symbol symbol;
    int16_t dynamic_precedence;
    uint16_t production_id;
  } reduce;
  uint8_t type;
} t_parse_action;

typedef struct {
  uint16_t lex_state;
  uint16_t external_lex_state;
} t_lex_mode;

typedef union {
  t_parse_action action;
  struct {
    uint8_t count;
    bool reusable;
  } entry;
} t_parse_action_entry;

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

static inline t_parse_action_entry entry(uint8_t count, bool reusable) {
  return (
      (t_parse_action_entry){.entry = {.count = count, .reusable = reusable}});
}

#define SHIFT(state_value)                                                     \
  {                                                                            \
    {                                                                          \
      .shift = {.type = t_parse_action_typeshift, .state = (state_value) }     \
    }                                                                          \
  }

static inline t_parse_action_entry shift(t_state_id state_value) {
  return ((t_parse_action_entry){{.shift = {
                                      .type = ActionTypeShift,
                                      .state = (state_value),
                                  }}});
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

static inline t_parse_action_entry shift_repeat(t_state_id state_value) {
  return ((t_parse_action_entry){{.shift = {.type = ActionTypeShift,
                                            .state = (state_value),
                                            .repetition = true}}});
}

#define SHIFT_EXTRA()                                                          \
  {                                                                            \
    {                                                                          \
      .shift = {.type = ActionTypeShift, .extra = true }                       \
    }                                                                          \
  }

static inline t_parse_action_entry shift_extra(void) {
  return ((t_parse_action_entry){
      {.shift = {.type = ActionTypeShift, .extra = true}}});
}

#define REDUCE(symbol_val, child_count_val, ...)                               \
  {                                                                            \
    {                                                                          \
      .reduce = {.type = ActionTypeReduce,                                     \
                 .symbol = symbol_val,                                         \
                 .child_count = child_count_val,                               \
                 __VA_ARGS__},                                                 \
    }                                                                          \
  }

static inline t_parse_action_entry reduce(

    t_symbol symbol, uint8_t child_count, int16_t dynamic_precedence,
    uint16_t production_id) {
  return ((t_parse_action_entry){{.reduce = {
                                      .type = ActionTypeReduce,
                                      .child_count = child_count,
                                      .symbol = symbol,
                                      .dynamic_precedence = dynamic_precedence,
                                      .production_id = production_id,
                                  }}});
}

#define RECOVER()                                                              \
  {                                                                            \
    { .type = ActionTypeRecover }                                              \
  }

static inline t_parse_action_entry recover(void) {
  return ((t_parse_action_entry){{.type = ActionTypeRecover}});
}

#define ACCEPT_INPUT()                                                         \
  {                                                                            \
    { .type = ActionTypeAccept }                                               \
  }

static inline t_parse_action_entry accept(void) {
  return ((t_parse_action_entry){{.type = ActionTypeAccept}});
}

#ifdef __cplusplus
}
#endif

#endif // TREE_SITTER_PARSER_H_
