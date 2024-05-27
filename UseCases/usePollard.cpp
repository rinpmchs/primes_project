#include "../PollardsAlgorithm/pollardAlg.h"
#include "usePollard.h"

namespace Use {

void use_pollard_factorization() {
    LongInteger n, c, max, g;
    std::cout << "enter n, c, and max for Pollard's p - 1 factorization: ";
    std::cin >> n >> c >> max;
    Detail::Pollard pollard;
    g = pollard.pollard_p_minus_1_fact(n, c, max);
    while (g == 0)
    {
        std::cout << "try another c (power base)\n";
        std::cout << "enter  c and max: ";
        std::cin >> c >> max;
        g = pollard.pollard_p_minus_1_fact(n, c, max);
    }
    std::cout << "n = " << g << " * " << n / g << '\n';
}
}  // namespace Use
