#include "../project.h"

using namespace Project;

namespace Sieve {

void sieve(SmallInteger j, SmallInteger n, std::vector<SmallInteger>& a);

std::vector<SmallInteger> generate_primes(SmallInteger n);

bool is_prime(SmallInteger n, const std::vector<SmallInteger>& v);

}  // namespace Sieve
