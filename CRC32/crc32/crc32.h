#ifndef YADROTASKS_CRC32_H
#define YADROTASKS_CRC32_H

#include <algorithm>
#include <array>
#include <cstdint>



class crc32 {

    static constexpr uint32_t primitive_polynomial = 0xEDB88320;

public:

    static constexpr std::array<uint32_t, 256> crc32_table = []() {
        std::array<uint32_t, 256> table{};
        for (size_t i = 0; i < 256; ++i) {
            table[i] = static_cast<uint32_t>(i);
            for (size_t j = 0; j < 8; ++j) {
                table[i] = (table[i] & 1) ? ((table[i] >> 1) ^ primitive_polynomial) : (table[i] >> 1);
            }
        }
        return table;
    }();

    static constexpr uint32_t proccess(const char* str, uint32_t);
};


#endif //YADROTASKS_CRC32_H