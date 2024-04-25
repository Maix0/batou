#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

void dump_to_file(const char *filename, void *data, size_t size, size_t elem_size)
{
	int file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0666);

	if (file < 0)
		return ((void)printf("[error] opening %s failed \n", filename));
	if (write(file, data, size) < size)
		printf("[error] writing to %s failed \n", filename);
	else
		printf("wrote %zu (%zu elems) to %s!\n", size, size / elem_size, filename);
	close(file);
}

int main(void)
{
	dump_to_file("./parse_table", ts_parse_table, sizeof(ts_parse_actions), sizeof(*ts_parse_actions));
	dump_to_file("./small_parse_table", ts_small_parse_table, sizeof(ts_small_parse_table), sizeof(*ts_small_parse_table));
	dump_to_file("./small_parse_table_map", ts_small_parse_table_map, sizeof(ts_small_parse_table_map), sizeof(*ts_small_parse_table_map));
	dump_to_file("./parse_actions_entries", ts_parse_actions, sizeof(ts_parse_actions), sizeof(*ts_parse_actions));
	// dump_to_file("./symbols_names", (void *)create_symbols_names(), 0);
	// dump_to_file("./field_names", (void *)create_field_names(), 0);
	dump_to_file("./field_map_slices", ts_field_map_slices, sizeof(ts_field_map_slices), sizeof(*ts_field_map_slices));
	dump_to_file("./field_map_entries", ts_field_map_entries, sizeof(ts_field_map_entries), sizeof(*ts_field_map_entries));
	dump_to_file("./symbols_metadata", ts_symbol_metadata, sizeof(ts_symbol_metadata), sizeof(*ts_symbol_metadata));
	dump_to_file("./unique_symbols_map", ts_symbol_map, sizeof(ts_symbol_map), sizeof(*ts_symbol_map));
	dump_to_file("./non_terminal_alias_map", ts_non_terminal_alias_map, sizeof(ts_non_terminal_alias_map), sizeof(*ts_non_terminal_alias_map));
	dump_to_file("./alias_sequences", ts_alias_sequences, sizeof(ts_alias_sequences), sizeof(*ts_alias_sequences));
	dump_to_file("./lex_modes", ts_lex_modes, sizeof(ts_lex_modes), sizeof(*ts_lex_modes));
	dump_to_file("./primary_state_ids", ts_primary_state_ids, sizeof(ts_primary_state_ids), sizeof(*ts_primary_state_ids));
	dump_to_file("./external_scanner_states", ts_external_scanner_states, sizeof(ts_external_scanner_states), sizeof(*ts_external_scanner_states));
	dump_to_file("./external_scanner_symbol_map", ts_external_scanner_symbol_map, sizeof(ts_external_scanner_symbol_map), sizeof(*ts_external_scanner_symbol_map));
}
