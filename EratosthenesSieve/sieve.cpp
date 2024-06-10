#include "sieve.h"

namespace Project::Detail {

void Sieve::sieve(SmallInteger p, SmallInteger n, std::vector<bool>& is_prime) const {
    SmallInteger mult = 2 * p;
    while (mult <= n) {
        is_prime[mult] = false;
        mult += p;
    }
}

std::vector<SmallInteger> Sieve::generate_primes(SmallInteger n) {
    std::vector<bool> is_prime(n + 1, true);
    std::vector<SmallInteger> primes;

    is_prime[0] = is_prime[1] = false;

    for (SmallInteger i = 2; i * i <= n; i++) {
        if (is_prime[i])
            sieve(i, n, is_prime);
    }

    for (SmallInteger i = 2; i <= n; i++) {
        if (is_prime[i])
            primes.push_back(i);
    }

    return primes;
}

bool Sieve::check_primality(SmallInteger n, const std::vector<SmallInteger>& primes) {
    return std::find(primes.begin(), primes.end(), n) != primes.end();
}
}  // namespace Project::Detail
