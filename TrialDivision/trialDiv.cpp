#include "trialDiv.h"

namespace TrialDivision {

int divide(TypeU64_t& f, TypeU64_t d, int& i) {
    i++;
    int pow = 0;
    while (f % d == 0) {
        f /= d;
        pow++;
    }
    return pow;
}

// works fine for numbers up to ten or eleven digits --> TypeU32_t is not enough
std::map<TypeU64_t , int> factorize(const TypeU64_t& n, const TypeU64_t& max) {
    int i = 0; // number of distinct prime factors
    TypeU64_t f = n; // still unfactored portion
    std::map<TypeU64_t , int> factors;

    // TRY_2&3
    for (TypeU64_t d = 2; d <= 3; d++) {
        if (f % d == 0)
            factors[d] = divide(f, d, i);
    }

    // TRY_LOOP
    TypeU64_t d = 5;
    int add = 2;
    while (d <= max && d * d <= f) {
        if (f % d == 0)
            factors[d] = divide(f, d, i);
        d += add;
        add = 6 - add;
    }

//    assert(f == n && "n is prime or pseudoprime");
    if (f != 1) {
        factors[f] = 1;
    }

    return factors;
}

bool is_composite(TypeU64_t n) {
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0)
            return true;
        i++;
    }
    return false; // n may be prime or pseudoprime
}
}