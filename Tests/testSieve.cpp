#include "../EratosthenesSieve/sieve.h"
#include "testSieve.h"

namespace Sieve {
void test_print_primes() {
    Project::SmallInteger n;
    std::cout << "upper bound for generating primes: ";
    std::cin >> n;
    for (Project::SmallInteger i : generate_primes(n))
        std::cout << i << " ";
}

//совсем неэффективный, но полностью надежный тест
void test_primality() {
    Project::SmallInteger n;
    std::cout << "number to check: ";
    std::cin >> n;
//    std::vector<Project::SmallInteger> v = std::move(generate_primes(n));
    if (is_prime(n, generate_primes(n)))
        std::cout << "n is prime";
    else
        std::cout << "n is composite";
}
}
