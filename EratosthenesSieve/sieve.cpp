#include "sieve.h"

namespace Sieve
{
void sieve(SmallInteger j, SmallInteger n, std::vector<bool> &is_prime) {
    SmallInteger t = 2 * j;
    while (t <= n)
    {
        is_prime[t] = false;
        t += j;
    }
}

std::vector<SmallInteger> generate_primes(SmallInteger n) {
    std::vector<bool> is_prime(n + 1, true);
    std::vector<SmallInteger> primes;

    is_prime[0] = is_prime[1] = false;

    for (SmallInteger i = 2; i * i <= n; i++) {
        if (is_prime[i])
            sieve(i, n, is_prime);
    }

    for (SmallInteger i = 2; i <= n; ++i) {
        if (is_prime[i])
            primes.push_back(i);
    }

    return primes;
}

bool is_prime(SmallInteger n, const std::vector<SmallInteger>& primes) {
    return std::find(primes.begin(), primes.end(), n) != primes.end();
}
}
