#ifndef PEANO_H
#define PEANO_H

namespace Peano {
    struct Zero {
        static constexpr int value = 0;
    };

    template<typename T>
    struct Succ {
        static constexpr int value = T::value + 1;
    };

    template<typename X, typename Y>
    struct Add;

    template<typename X>
    struct Add<X, Zero> {
        using type = X;
    };

    template<typename X, typename Y>
    struct Add<X, Succ<Y>> {
        using type = Succ<typename Add<X, Y>::type>;
    };

    template<typename X, typename Y>
    struct Mul;

    template<typename X>
    struct Mul<X, Zero> {
        using type = Zero;
    };

    template<typename X, typename Y>
    struct Mul<X, Succ<Y>> {
        using type = typename Add<X, typename Mul<X, Y>::type>::type;
    };

    using One = Succ<Zero>;
    using Two = Succ<One>;
    using Three = Succ<Two>;
}

#endif //PEANO_H