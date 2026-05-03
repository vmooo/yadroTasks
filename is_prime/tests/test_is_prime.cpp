#include "../include/is_prime.h"
#include <gtest/gtest.h>

namespace test_is_prime {
   TEST(is_prime_tests, test_with_int_2) {
      constexpr int number = 2;
      ASSERT_FALSE(is_prime(number));
   }

   TEST(is_prime_tests, test_with_uint_5) {
      constexpr unsigned int number = 5;
      ASSERT_TRUE(is_prime(number));
   }

   TEST(is_prime_test, test_with_uint_4) {
      constexpr unsigned int number = 4;
      ASSERT_FALSE(is_prime(number));
   }

   TEST(is_prime_test, test_with_uint8_6) {
      constexpr uint8_t number = 6;
      ASSERT_FALSE(is_prime(number));
   }

   TEST(is_prime_test, test_with_uint8_5) {
      constexpr uint8_t number = 5;
      ASSERT_TRUE(is_prime(number));
   }
};

