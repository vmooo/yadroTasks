#include <gtest/gtest.h>
#include "Peano.h"

namespace test_Peano {

    using namespace Peano;

    TEST(Peano_tests, test_Zero) {
        Zero zero;
        ASSERT_TRUE(zero.value == 0);
    }

    TEST(Peano_tests, test_One) {
        One one;
        ASSERT_TRUE(one.value == Succ<Zero>::value);
    }

    TEST(Peano_tests, test_Two) {
        Two two;
        ASSERT_TRUE(two.value == Succ<One>::value);
    }

    TEST(Peano_tests, test_Three) {
        Three three;
        ASSERT_TRUE(three.value == Succ<Succ<One>>::value);
    }

};