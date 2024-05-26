#include "sieve.h"

namespace Project::Sieve
{
void sieve(SmallInteger j, SmallInteger n, std::vector<SmallInteger> &a) {
    SmallInteger t = 2 * j;
    while (t <= n)
    {
        a[t] = 0;
        t += j;
    }
}

std::vector<SmallInteger> generate_primes(SmallInteger n) {
    std::vector<SmallInteger> vec_is_prime(n + 1, 1);
    std::vector<SmallInteger> v;

    for (SmallInteger i = 2; i <= n; ++i)
    {
        vec_is_prime[i] = i;
    }

    SmallInteger j = 2;
    while (j * j <= n)
    {
        if (vec_is_prime[j] != 0)
            sieve(j, n, vec_is_prime);
        j++;
    }

    // make vec_is_prime vector of primes up to n
    for (SmallInteger i = 2; i <= n; i++)
    {
        if (vec_is_prime[i] != 0)
        {
            v.push_back(i);
        }
    }
    return v;
}

bool is_prime(SmallInteger n, const std::vector<SmallInteger>& v) {
    if (std::find(v.begin(), v.end(), n) == v.end())
        return false;
    return true;
}
}
