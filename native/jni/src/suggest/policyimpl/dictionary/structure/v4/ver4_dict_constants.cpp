/*
 * Copyright (C) 2013, The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "suggest/policyimpl/dictionary/structure/v4/ver4_dict_constants.h"

namespace latinime {

// These values MUST match the definitions in FormatSpec.java.
const char *const Ver4DictConstants::TRIE_FILE_EXTENSION = ".trie";
const char *const Ver4DictConstants::HEADER_FILE_EXTENSION = ".header";
const char *const Ver4DictConstants::FREQ_FILE_EXTENSION = ".freq";
// tat = Terminal Address Table
const char *const Ver4DictConstants::TERMINAL_ADDRESS_TABLE_FILE_EXTENSION = ".tat";
const char *const Ver4DictConstants::BIGRAM_FILE_EXTENSION = ".bigram_freq";
const char *const Ver4DictConstants::BIGRAM_LOOKUP_TABLE_FILE_EXTENSION = ".bigram_lookup";
const char *const Ver4DictConstants::BIGRAM_CONTENT_TABLE_FILE_EXTENSION = ".bigram_index_freq";
const char *const Ver4DictConstants::SHORTCUT_FILE_EXTENSION = ".shortcut_shortcut";
const char *const Ver4DictConstants::SHORTCUT_LOOKUP_TABLE_FILE_EXTENSION = ".shortcut_lookup";
const char *const Ver4DictConstants::SHORTCUT_CONTENT_TABLE_FILE_EXTENSION =
        ".shortcut_index_shortcut";

// Version 4 dictionary size is implicitly limited to 8MB due to 3-byte offsets.
const int Ver4DictConstants::MAX_DICTIONARY_SIZE = 8 * 1024 * 1024;
// Extended region size, which is not GCed region size in dict file + additional buffer size, is
// limited to 1MB to prevent from inefficient traversing.
const int Ver4DictConstants::MAX_DICT_EXTENDED_REGION_SIZE = 1 * 1024 * 1024;

const int Ver4DictConstants::NOT_A_TERMINAL_ID = -1;
const int Ver4DictConstants::PROBABILITY_SIZE = 1;
const int Ver4DictConstants::FLAGS_IN_PROBABILITY_FILE_SIZE = 1;
const int Ver4DictConstants::TERMINAL_ADDRESS_TABLE_ADDRESS_SIZE = 3;
const int Ver4DictConstants::NOT_A_TERMINAL_ADDRESS = 0;
const int Ver4DictConstants::TERMINAL_ID_FIELD_SIZE = 4;
const int Ver4DictConstants::TIME_STAMP_FIELD_SIZE = 4;
const int Ver4DictConstants::WORD_LEVEL_FIELD_SIZE = 1;
const int Ver4DictConstants::WORD_COUNT_FIELD_SIZE = 1;

const int Ver4DictConstants::BIGRAM_ADDRESS_TABLE_BLOCK_SIZE = 16;
const int Ver4DictConstants::BIGRAM_ADDRESS_TABLE_DATA_SIZE = 4;
const int Ver4DictConstants::SHORTCUT_ADDRESS_TABLE_BLOCK_SIZE = 64;
const int Ver4DictConstants::SHORTCUT_ADDRESS_TABLE_DATA_SIZE = 4;

const int Ver4DictConstants::BIGRAM_TARGET_TERMINAL_ID_FIELD_SIZE = 3;
// Unsigned int max value of BIGRAM_TARGET_TERMINAL_ID_FIELD_SIZE-byte is used for representing
// invalid terminal ID in bigram lists.
const int Ver4DictConstants::INVALID_BIGRAM_TARGET_TERMINAL_ID =
        (1 << (BIGRAM_TARGET_TERMINAL_ID_FIELD_SIZE * 8)) - 1;
const int Ver4DictConstants::BIGRAM_FLAGS_FIELD_SIZE = 1;
const int Ver4DictConstants::BIGRAM_PROBABILITY_MASK = 0x0F;
const int Ver4DictConstants::BIGRAM_HAS_NEXT_MASK = 0x80;
const int Ver4DictConstants::BIGRAM_LARGE_PROBABILITY_FIELD_SIZE = 1;

const int Ver4DictConstants::SHORTCUT_FLAGS_FIELD_SIZE = 1;
const int Ver4DictConstants::SHORTCUT_PROBABILITY_MASK = 0x0F;
const int Ver4DictConstants::SHORTCUT_HAS_NEXT_MASK = 0x80;

} // namespace latinime