#include "../PollardsAlgorithm/pollardAlg.h"
#include "testPollard.h"

namespace Pollard {

void test_pollard_factorization() {
    Project::LongInteger n, c, max, g;
    std::cout << "enter n, c, and max for Pollard's p - 1 factorization: ";
    std::cin >> n >> c >> max;
    auto t1 = std::chrono::high_resolution_clock::now();
    g = pollard_p_minus_1_fact(n, c, max);
    if (g == 0)
        std::cout << "try another c (power base)\n";
    else
        std::cout << "n = " << g << " * " << n / g << '\n';

    auto t2 = std::chrono::high_resolution_clock::now();
    auto ms_int = duration_cast<std::chrono::milliseconds>(t2 - t1);
    std::cout << ms_int.count() << "ms\n";
}
}
