#include "testSieve.h"

namespace Sieve {
void test_print_primes() {
    TypeU32_t n;
    std::cout << "upper bound for generating primes: ";
    std::cin >> n;
    for (TypeU32_t i : generate_primes(n))
        std::cout << i << " ";
}

//совсем неэффективный, но полностью надежный тест
void test_primality() {
    TypeU32_t n;
    std::cout << "number to check: ";
    std::cin >> n;
//    std::vector<TypeU32_t> v = std::move(generate_primes(n));
    if (is_prime(n, generate_primes(n)))
        std::cout << "n is prime";
    else
        std::cout << "n is composite";
}
}