#include "../project.h"

namespace Project::Sieve {

void sieve(Project::SmallInteger j, Project::SmallInteger n, std::vector<Project::SmallInteger>& a);

std::vector<Project::SmallInteger> generate_primes(Project::SmallInteger n);

bool is_prime(Project::SmallInteger n, const std::vector<Project::SmallInteger>& v);

}  // namespace Project::Sieve
