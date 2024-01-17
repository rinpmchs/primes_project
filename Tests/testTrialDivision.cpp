#include "testTrialDivision.h"

namespace TrialDivision {

void test_compositeness() {
    TypeU64_t num = 6901760918081918081;
    bool p = is_composite(num);
    if (p)
        std::cout << ("composite") << '\n';
    else
        std::cout << ("prime or pseudoprime") << '\n';
}

void test_factorization() {
    TypeU64_t n, max;
    std::cout << "input number and max divisor: ";
    std::cin >> n >> max;
    std::map<TypeU64_t, int> factors = factorize(n, max);
//    assert(factors.empty() && "n is prime or pseudoprime");
    if (factors.empty())
        std::cout << "n is prime or pseudoprime\n";
    else
        std::cout << "n is composite, n = ";
    for (std::map<TypeU64_t, int>::iterator it = factors.begin(); it != --factors.end(); it++)
        std::cout << it->first << "^" << it->second << " * ";
    std::cout << (--factors.end())->first << '\n';
}

void test_time() {

    std::cout << "";
}

}