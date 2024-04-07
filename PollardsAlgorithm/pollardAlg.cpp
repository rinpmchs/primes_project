#include "pollardAlg.h"
#include "../Useful/algorithms.h"

namespace Pollard {

Project::LongInteger pollard_p_minus_1_fact(const Project::LongInteger& n,
                                            const Project::LongInteger& c,
                                            const Project::LongInteger& max) {
    Project::LongInteger m = c;

    // EXPONENTIATE
    for (Project::LongInteger i = 1; i < max; i++) {
        // MODEXPO
        m = UsefulAlgorithms::power_mod(m, i , n);
        if (i % 10 == 0) {
            // CHECK_GCD
            Project::LongInteger g = UsefulAlgorithms::gcd(m - 1, n);
            if (g == n) // we need to change c
                return 0;
            else if (g > 1) // g is a proper divisor
                return g;
        }
    }
    return 0; // we need to change c
}
}
