/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dumper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 22:19:52 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/25 22:42:41 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_types.h"
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

const uint16_t			   *create_parse_table(void);
const uint16_t			   *create_small_parse_table(void);
const uint32_t			   *create_small_parse_table_map(void);
const t_parse_action_entry *create_parse_actions_entries(void);
const char *const		   *create_symbols_names(void);
const char *const		   *create_field_names(void);
const t_field_map_slice	   *create_field_map_slices(void);
const t_field_map_entry	   *create_field_map_entries(void);
const t_symbol_metadata	   *create_symbols_metadata(void);
const t_symbol			   *create_unique_symbols_map(void);
const t_symbol			   *create_non_terminal_alias_map(void);
const t_symbol			   *create_alias_sequences(void);
const t_lex_modes		   *create_lex_modes(void);
const t_state_id		   *create_primary_state_ids(void);
const bool				   *create_external_scanner_states(void);
const t_symbol			   *create_external_scanner_symbol_map(void);

void dump_to_file(const char *filename, void *data, size_t size)
{
	int file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0666);

	if (file < 0)
		return ((void)printf("[error] opening %s failed \n", filename));
	if (write(file, data, size) < size)
		printf("[error] writing to %s failed \n", filename);
	else
		printf("wrote %zu to %s!\n", size, filename);
	close(file);
}

int main(void)
{
	dump_to_file("./parse_table", (void *)create_parse_table(), 295680);
	dump_to_file("./small_parse_table", (void *)create_small_parse_table(),
				 648788);
	dump_to_file("./small_parse_table_map",
				 (void *)create_small_parse_table_map(), 30684);
	dump_to_file("./parse_actions_entries",
				 (void *)create_parse_actions_entries(), 133856);
	// dump_to_file("./symbols_names", (void *)create_symbols_names(), 0);
	// dump_to_file("./field_names", (void *)create_field_names(), 0);
	dump_to_file("./field_map_slices", (void *)create_field_map_slices(), 636);
	dump_to_file("./field_map_entries", (void *)create_field_map_entries(),
				 1152);
	dump_to_file("./symbols_metadata", (void *)create_symbols_metadata(), 843);
	dump_to_file("./unique_symbols_map", (void *)create_unique_symbols_map(),
				 562);
	dump_to_file("./non_terminal_alias_map",
				 (void *)create_non_terminal_alias_map(), 10);
	dump_to_file("./alias_sequences", (void *)create_alias_sequences(), 2544);
	dump_to_file("./lex_modes", (void *)create_lex_modes(), 30684);
	dump_to_file("./primary_state_ids", (void *)create_primary_state_ids(),
				 15342);
	dump_to_file("./external_scanner_states",
				 (void *)create_external_scanner_states(), 3799);
	dump_to_file("./external_scanner_symbol_map",
				 (void *)create_external_scanner_symbol_map(), 58);
}
