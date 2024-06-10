#include "../TrialDivision/trialDiv.h"
#include "useTrialDivision.h"

namespace Project::Use {

void use_trial_compositeness() {
    using namespace Detail;
    SmallUInteger num = 6901760918081918081;
    TrialDivision tr_div;
    bool p = tr_div.is_composite(num);
    if (p)
        std::cout << ("composite") << '\n';
    else
        std::cout << ("prime or pseudoprime") << '\n';
}

void use_trial_factorization() {
    using namespace Detail;
    LongInteger n, max;
    std::cout << "input number and max divisor: ";
    std::cin >> n >> max;
    TrialDivision tr_div;
    std::map<LongInteger, int> factors = tr_div.factorize(n, max);
    if (factors.size() == 1 && factors.begin()->first == n)
        std::cout << "n is prime or pseudoprime, n = ";
    else
        std::cout << "n is composite, n = ";
    for (auto it = factors.begin(); it != --factors.end(); it++)
        std::cout << it->first << "^" << it->second << " * ";
    std::cout << (--factors.end())->first  << "^" << (--factors.end())->second << '\n';
}

}  // namespace Project::Use
