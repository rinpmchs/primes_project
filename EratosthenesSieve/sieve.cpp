#include "sieve.h"

namespace Sieve
{
void sieve(Project::SmallInteger j, Project::SmallInteger n, std::vector<Project::SmallInteger> &a)
{
    Project::SmallInteger t = 2 * j;
    while (t <= n)
    {
        a[t] = 0;
        t += j;
    }
}

std::vector<Project::SmallInteger> generate_primes(Project::SmallInteger n)
{
    std::vector<Project::SmallInteger> vec_is_prime(n + 1, 1);
    std::vector<Project::SmallInteger> v;

    for (Project::SmallInteger i = 2; i <= n; ++i)
    {
        vec_is_prime[i] = i;
    }

    Project::SmallInteger j = 2;
    while (j * j <= n)
    {
        if (vec_is_prime[j] != 0)
            sieve(j, n, vec_is_prime);
        j++;
    }

    // make vec_is_prime vector of primes up to n
    for (Project::SmallInteger i = 2; i <= n; i++)
    {
        if (vec_is_prime[i] != 0)
        {
            v.push_back(i);
        }
    }
    return v;
}

bool is_prime(Project::SmallInteger n, const std::vector<Project::SmallInteger>& v) {
    if (std::find(v.begin(), v.end(), n) == v.end())
        return true;
    return false;
}
}
