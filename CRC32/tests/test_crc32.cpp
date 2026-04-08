#include "crc32.h"
#include <gtest/gtest.h>

namespace test_crc32 {
    constexpr auto crc_table = crc32::crc32_table;

    TEST(crc32_table_tests, isComputedAtCompileTime) {
        static_assert(crc_table.size() == 256, "crc_table computed at compile time");
    }

    TEST(crc32_table_tests, cell_1) {
        static_assert(crc_table[0] == 0x00000000, "crc_cell_1 is correct");
    }

    TEST(crc32_table_tests, cell_2) {
        static_assert(crc_table[1] == 0x77073096, "crc_cell_1 is correct");
    }

    TEST(crc32_table_tests, cell_3) {
        static_assert(crc_table[2] == 0xee0e612c, "crc_cell_1 is correct");
    }

    TEST(crc32_table_tests, cell_4) {
        static_assert(crc_table[3] == 0x990951ba, "crc_cell_1 is correct");
    }

    TEST(crc32_table_tests, cell_5) {
        static_assert(crc_table[4] == 0x076dc419, "crc_cell_1 is correct");
    }

    TEST(crc32_table_tests, cell_6) {
        static_assert(crc_table[5] == 0x706af48f, "crc_cell_1 is correct");
    }
};

