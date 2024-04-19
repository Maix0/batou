#include "../normed_src/headers/parser.h"
#include "tree_sitter/api.h"

const TSLanguage *tree_sitter_bash(void)
{
	static bool		  init = false;
	static t_language language = {
		.version = 14,
		.symbol_count = 280,
		.alias_count = 0,
		.token_count = 175,
		.external_token_count = 29,
		.state_count = 7671,
		.large_state_count = 528,
		.production_id_count = 159,
		.field_count = 19,
		.max_alias_sequence_length = 8,
	};
	if (!init)
	{
		language.parse_table = &ts_parse_table[0][0];
		language.small_parse_table = ts_small_parse_table;
		language.small_parse_table_map = ts_small_parse_table_map;
		language.parse_actions = ts_parse_actions;
		language.symbol_names = ts_symbol_names;
		language.field_names = ts_field_names;
		language.field_map_slices = ts_field_map_slices;
		language.field_map_entries = ts_field_map_entries;
		language.symbol_metadata = ts_symbol_metadata;
		language.public_symbol_map = ts_symbol_map;
		language.alias_map = ts_non_terminal_alias_map;
		language.alias_sequences = &ts_alias_sequences[0][0];
		language.lex_modes = ts_lex_modes;
		language.lex_fn = ts_lex;
		language.keyword_lex_fn = ts_lex_keywords;
		language.keyword_capture_token = sym_word;
		language.external_scanner = {
			&ts_external_scanner_states[0][0],
			ts_external_scanner_symbol_map,
			tree_sitter_bash_external_scanner_create,
			tree_sitter_bash_external_scanner_destroy,
			tree_sitter_bash_external_scanner_scan,
			tree_sitter_bash_external_scanner_serialize,
			tree_sitter_bash_external_scanner_deserialize,
		};
		language.primary_state_ids = ts_primary_state_ids;
		init = true;
	}
	return ((TSLanguage *)&language);
}