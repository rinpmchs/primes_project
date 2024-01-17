#include "../project.h"

namespace Sieve {

void sieve(const TypeU16_t& j, const TypeU32_t& n, std::vector<TypeU32_t>& a);

std::vector<TypeU32_t> generate_primes(TypeU32_t n);

bool is_prime(const TypeU32_t& n, const std::vector<TypeU32_t>& v);

}