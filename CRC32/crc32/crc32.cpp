#include "crc32.h"

static constexpr uint32_t compute_table_cell(size_t value) {
    return value;
}

static consteval std::array<uint32_t, 256> compute_crc32_table() {
    constexpr std::array<uint32_t, 256> crc32_table{};

    return crc32_table;
}

static constexpr uint32_t proccess(const char* str, uint32_t crc = 0xFFFFFFFF) {

}