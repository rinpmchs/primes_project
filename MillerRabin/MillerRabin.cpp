#include "MillerRabin.h"
#include "../Useful/algorithms.h"

namespace Project::Detail {

bool MillerRabin::miller_rabin_test(const LongInteger& base, LongInteger odd_m, SmallUInteger exp_t, const LongInteger& number) {
    LongInteger tmp = Useful::power_mod(base, odd_m, number);

    if (tmp == 1 || tmp == number - 1) {
        return true;
    }

    for (SmallUInteger j = 0; j < exp_t; ++j) {
        tmp = Useful::power_mod(tmp, 2, number);
        if (tmp == 1) {
            return false;
        }
        if (tmp == number - 1) {
            return true;
        }
    }
    return false;
}

bool MillerRabin::is_prime(LongInteger& number) {
    if ((number == 2) || (number == 3)) {
        return true;
    }
    if (number < 2 || number % 2 == 0 || number % 3 == 0) {
        return false;
    }

    LongInteger odd_m = number - 1;
    SmallUInteger exp_t = 0;
    while (odd_m % 2 == 0) {
        odd_m /= 2;
        exp_t++;
    }

    const LongInteger from_margin = 2;
    const LongInteger to_margin = number - 2;
    assert(from_margin <= to_margin);

    Useful::RandomGenerator rand(from_margin, to_margin);
    const SmallUInteger rounds_count = 40;

    for (SmallUInteger i = 0; i < rounds_count; ++i) {
        LongInteger base = rand.generate_number();
        if (!miller_rabin_test(base, odd_m, exp_t, number)) {
            return false;
        }
    }
    return true;
}
}  // namespace Project::Detail
