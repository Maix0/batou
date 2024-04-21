/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lang.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:34:20 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/21 21:41:10 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/parser.h"
#include "tree_sitter/api.h"

const uint16_t			   *get_parse_table(void);
const uint16_t			   *get_small_parse_table(void);
const uint32_t			   *get_small_parse_table_map(void);
const t_parse_action_entry *get_parse_actions(void);
const char *const		   *get_symbol_names(void);
const char *const		   *get_field_names(void);
const t_field_map_slice	   *get_field_map_slices(void);
const t_field_map_entry	   *get_field_map_entries(void);
const t_symbol_metadata	   *get_symbol_metadata(void);
const t_symbol			   *get_symbol_map(void);
const t_symbol			   *get_non_terminal_alias_map(void);
const t_symbol			   *get_alias_sequences(void);
const t_lex_mode		   *get_lex_modes(void);
const t_state_id		   *get_primary_state_ids(void);
const bool				   *get_external_scanner_states(void);
const t_symbol			   *get_external_scanner_symbol_map(void);
bool						lex(t_lexer *lexer, t_state_id state);
bool						lex_keywords(t_lexer *lexer, t_state_id state);
void					   *tree_sitter_bash_external_scanner_create(void);
void	 tree_sitter_bash_external_scanner_destroy(void *ctx);
bool	 tree_sitter_bash_external_scanner_scan(void *ctx, t_lexer *lexer,
												const bool *ret);
uint32_t tree_sitter_bash_external_scanner_serialize(void *ctx, char *s);
void	 tree_sitter_bash_external_scanner_deserialize(void *ctx, const char *s,
													   uint32_t val);

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
		language.parse_table = get_parse_table();
		language.small_parse_table = get_small_parse_table();
		language.small_parse_table_map = get_small_parse_table_map();
		language.parse_actions = get_parse_actions();
		language.symbol_names = get_symbol_names();
		language.field_names = get_field_names();
		language.field_map_slices = get_field_map_slices();
		language.field_map_entries = get_field_map_entries();
		language.symbol_metadata = get_symbol_metadata();
		language.public_symbol_map = get_symbol_map();
		language.alias_map = get_non_terminal_alias_map();
		language.alias_sequences = get_alias_sequences();
		language.lex_modes = get_lex_modes();
		language.primary_state_ids = get_primary_state_ids();
		language.lex_fn = lex;
		language.keyword_lex_fn = lex_keywords;
		language.keyword_capture_token = 0; // ts_sym_word;
		language.external_scanner = (t_external_scanner){
			get_external_scanner_states(),
			get_external_scanner_symbol_map(),
			tree_sitter_bash_external_scanner_create,
			tree_sitter_bash_external_scanner_destroy,
			tree_sitter_bash_external_scanner_scan,
			tree_sitter_bash_external_scanner_serialize,
			tree_sitter_bash_external_scanner_deserialize,
		};
		init = true;
	}
	return ((TSLanguage *)&language);
}
