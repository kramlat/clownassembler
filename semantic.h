/*
 * Copyright (C) 2022 Clownacy
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef SEMANTIC_H
#define SEMANTIC_H

#include <stdio.h>

#include "clowncommon.h"

#ifdef __cplusplus
extern "C" {
#endif

cc_bool ClownAssembler_Assemble(
	FILE *input_file,
	FILE *output_file,
	FILE *error_file,
	FILE *listing_file,
	FILE *symbol_file,
	const char *input_file_path,
	cc_bool debug,
	cc_bool case_insensitive,
	cc_bool equ_set_descope_local_labels,
	cc_bool output_local_labels_to_sym_file,
	cc_bool warnings_enabled,
	void (*definition_callback)(void *internal, void *user_data, void (*add_definition)(void *internal, const char *identifier, size_t identifier_length, unsigned long value)),
	const void *user_data);

#ifdef __cplusplus
}
#endif

#endif /* SEMANTIC_H */
