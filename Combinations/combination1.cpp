#include "combination1.h"  // Trial Division + Eratosthenes Sieve + Miller-Rabin
#include "../EratosthenesSieve/sieve.h"
#include "../TrialDivision/trialDiv.h"
#include "../MillerRabin/MillerRabin.h"
#include "../Utils/algorithms.h"

namespace Project::Detail {

bool Comb1::check_primality(const LongInteger& number) {
    if (number < 2)
        return false;

    Sieve sieve;
    SmallInteger limit = 10000;
    auto small_primes = sieve.generate_primes(limit);

    if (number < small_primes.back() * small_primes.back()) {
        return adapt_trial_division(number, small_primes);
    }

    SmallInteger rounds_count = 10;
    return adapt_miller_rabin(number, rounds_count);
}

bool Comb1::adapt_trial_division(const LongInteger& number, std::vector<SmallInteger>& primes) {
    for (SmallInteger prime : primes) {
        if (prime * prime > number) break;
        if (number % prime == 0) return false;
    }
    return true; // number may be prime or pseudoprime
}

bool Comb1::adapt_miller_rabin(const LongInteger& number, SmallInteger rounds_count) {
    MillerRabin MR;

    LongInteger odd_m = number - 1;
    SmallUInteger exp_t = 0;
    while (odd_m % 2 == 0) {
        odd_m /= 2;
        exp_t++;
    }

    const LongInteger from_margin = 2;
    const LongInteger to_margin = number - 2;
    assert(from_margin <= to_margin);

    Utils::RandomGenerator rand(from_margin, to_margin);

    for (SmallUInteger i = 0; i < rounds_count; ++i) {
        LongInteger base = rand.generate_number();
        if (!MR.miller_rabin_test(base, odd_m, exp_t, number)) {
            return false;
        }
    }
    return true;
}
} // namespace Project::Detail
