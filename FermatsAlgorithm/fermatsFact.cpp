#include "fermatsFact.h"

namespace FermatFact {

TypeU64_t squareroot(const TypeU64_t& n) {
    TypeU64_t sqrt_n = (TypeU64_t) std::sqrt(n);
    if (sqrt_n ==  std::sqrt(n))
        return sqrt_n;
    else
        return sqrt_n + 1;
}

std::pair<TypeU64_t, TypeU64_t> factorize(const TypeU64_t& n) {
    TypeU64_t sqrt_n = squareroot(n);
    TypeU64_t u, v;
    u = 2 * sqrt_n + 1;
    v = 1;
    Type64_t r = sqrt_n * sqrt_n - n;

    // X_LOOP
    while (r != 0) {
        // if r is positive then we increase y by 1. This decreases r by v.
        if (r > 0) {
            // Y_LOOP
            while (r > 0) {
                r -= v;
                v += 2;
            }
        }
        // if r is negative then we increase x by 1.
        if (r < 0) {
            r += u;
            u += 2;
        }
    }
//    assert ((u - v) / 2 == 1)
    return {(u + v - 2) / 2, (u - v) / 2};
}
}