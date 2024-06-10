#include "../EratosthenesSieve/sieve.h"
#include "useSieve.h"

namespace Project::Use {
void use_sieve_print_primes() {
    SmallInteger n;
    std::cout << "upper bound for generating primes: ";
    std::cin >> n;
    Detail::Sieve sieve;
    for (SmallInteger i : sieve.generate_primes(n))
        std::cout << i << " ";
}

//совсем неэффективный, но полностью надежный тест
void use_sieve_primality() {
    SmallInteger n;
    std::cout << "number to check: ";
    std::cin >> n;
    Detail::Sieve sieve;
//    std::vector<SmallInteger> v = std::move(generate_primes(n));
    if (sieve.check_primality(n, sieve.generate_primes(n)))
        std::cout << "n is prime";
    else
        std::cout << "n is composite";
}

}  // namespace Project::Use
