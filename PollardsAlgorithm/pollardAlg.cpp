#include "pollardAlg.h"
#include "../Utils/algorithms.h"

namespace Project::Detail {

LongInteger Pollard::pollard_p_minus_1_fact(const LongInteger& n, const LongInteger& c, const LongInteger& max) {
    LongInteger m = c;

    for (LongInteger i = 1; i < max; i++) {
        m = Utils::power_mod(m, i , n);
        if (i % 10 == 0) {
            LongInteger g = Utils::gcd(m - 1, n);
            if (g == n) // we need to change c
                return 0;
            else if (g > 1) // g is a proper divisor
                return g;
        }
    }
    return 0; // we need to change c
}
}  // namespace Project::Detail
