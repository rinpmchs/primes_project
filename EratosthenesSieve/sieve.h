#include "../integer.h"

namespace Project::Detail {
class Sieve {
public:
    std::vector<SmallInteger> generate_primes(SmallInteger n);
    bool check_primality(SmallInteger n, const std::vector<SmallInteger>& primes);
private:
    void sieve(SmallInteger p, SmallInteger n, std::vector<bool>& is_prime) const;
};
}  // namespace Project::Detail
