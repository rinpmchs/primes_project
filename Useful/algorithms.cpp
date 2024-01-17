#include "algorithms.h"

namespace UsefulAlgorithms {

TypeU16_t power_mod(TypeU16_t a, TypeU16_t b, TypeU16_t m) {
    TypeU16_t n = 1;
    while (b > 0) {
        if (b % 2 == 1)
            n = (n * a) % m;
        b /= 2;
        a = (a * a) % m;
    }
    return n;
}

TypeU32_t power_mod(TypeU32_t a, TypeU32_t b, TypeU32_t m) {
    TypeU32_t n = 1;
    while (b > 0) {
        if (b % 2 == 1)
            n = (n * a) % m;
        b /= 2;
        a = (a * a) % m;
    }
    return n;
}

TypeU64_t power_mod(TypeU64_t a, TypeU64_t b, TypeU64_t m) {
    TypeU64_t n = 1;
    while (b > 0) {
        if (b % 2 == 1)
            n = (n * a) % m;
        b /= 2;
        a = (a * a) % m;
    }
    return n;
}

TypeInteger power_mod(TypeInteger a, TypeInteger b, TypeInteger m) {
    TypeInteger n = 1;
    while (b > 0) {
        if (b % 2 == 1)
            n = (n * a) % m;
        b /= 2;
        a = (a * a) % m;
    }
    return n;
}

// gcd: boost::math::gcd(a, b);
}