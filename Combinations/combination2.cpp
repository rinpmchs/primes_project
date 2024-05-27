#include "combination2.h"  //  Eratosthenes Sieve + Trial Division + Pollard's p − 1 Algorithm
#include "combination1.h"
#include "../EratosthenesSieve/sieve.h"
#include "../PollardsAlgorithm/pollardAlg.h"
#include "../Useful/algorithms.h"

namespace Detail {
bool Comb2::comb2_primality_test(const LongInteger& number) {
    if (number < 2)
        return false;

    Sieve sieve;
    SmallInteger limit = 100;
    auto small_primes = sieve.generate_primes(limit);

    Comb1 comb1;
    if (comb1.adapt_trial_division(number, small_primes))
        return true;

    Pollard pollard;
    LongInteger max = number / sizeof(number);
    SmallInteger count = 10;
    for (LongInteger c = 2; c < count; c++)
    {
        LongInteger factor = pollard.pollard_p_minus_1_fact(number, c, max);
        if (factor < number)
            return false;
    }
    return true;
}
}  // namespace Detail
