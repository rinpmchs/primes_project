#include "pollardAlg.h"
#include "../Useful/algorithms.h"

namespace Pollard {

TypeInteger pollard_p_minus_1_fact(const TypeInteger& n, const TypeInteger& c, const TypeInteger& max) {
    TypeInteger m = c;

    // EXPONENTIATE
    for (TypeInteger i = 1; i < max; i++) {
        // MODEXPO
        m = UsefulAlgorithms::power_mod(m, i , n);
        if (i % 10 == 0) {
            // CHECK_GCD
            TypeInteger g = boost::math::gcd(m - 1, n);
            if (g == n) // we need to change c
                return 0;
            else if (g > 1) // g is a proper divisor
                return g;
        }
    }
    return 0; // we need to change c
}
}