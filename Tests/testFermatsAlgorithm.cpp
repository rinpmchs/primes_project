#include "testFermatsAlgorithm.h"

namespace FermatFact {

void test_factorization() {
    TypeU64_t n;
    std::cout << "number to check: ";
    std::cin >> n;
    std::pair<TypeU64_t, TypeU64_t> factors = factorize(n);
    if (factors.second == 1)
        std::cout << "n = " << factors.first << ", prime\n";
    else
        std::cout << "n = " << factors.first << " * " << factors.second << ", composite\n";
}

}