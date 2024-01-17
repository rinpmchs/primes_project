#include "testPollard.h"

namespace Pollard {

void test_pollard_factorization() {
    TypeInteger n, c, max, g;
    std::cout << "enter n, c, and max for Pollard's p - 1 factorization: ";
    std::cin >> n >> c >> max;
    g = pollard_p_minus_1_fact(n, c, max);
    if (g == 0)
        std::cout << "try another c (power base)\n";
    else
        std::cout << "n = " << g << " * " << n / g << '\n';
}
}