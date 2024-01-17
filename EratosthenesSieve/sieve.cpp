#include "sieve.h"

namespace Sieve
{
void sieve(const TypeU16_t &j, const TypeU32_t &n, std::vector<TypeU32_t> &a)
{
    TypeU16_t t = 2 * j;
    while (t <= n)
    {
        a[t] = 0;
        t += j;
    }
}

std::vector<TypeU32_t> generate_primes(TypeU32_t n)
{
    std::vector<TypeU32_t> a(n + 1, 1);
    std::vector<TypeU32_t> v;

    for (TypeU32_t i = 2; i <= n; ++i)
    {
        a[i] = i;
    }

    TypeU16_t j = 2;
    while (j * j <= n)
    {
        if (a[j] != 0)
            sieve(j, n, a);
        j++;
    }

    // make a vector of primes up to n
    for (TypeU32_t i = 2; i <= n; i++)
    {
        if (a[i] == 0)
        {
            v.push_back(i);
        }
    }
    return v;
}

bool is_prime(const TypeU32_t& n, const std::vector<TypeU32_t>& v) {
    if (std::find(v.begin(), v.end(), n) == v.end())
        return true;
    return false;
}
}