#ifndef IS_PRIME_H
#define IS_PRIME_H

#include "Peano.h"
#include <type_traits>

template<typename T>
static bool is_prime(T value) {
    if constexpr (!std::is_integral_v<T> || !std::is_unsigned_v<T>) {
        return false;
    }
    for (T i = 2; i * i <= value; ++i) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}



#endif //IS_PRIME_H