#include "../TrialDivision/trialDiv.h"
#include "useTrialDivision.h"

using namespace Project;

namespace Use {

void use_trial_compositeness() {
    SmallUInteger num = 6901760918081918081;
    Detail::TrialDivision tr_div;
    bool p = tr_div.is_composite(num);
    if (p)
        std::cout << ("composite") << '\n';
    else
        std::cout << ("prime or pseudoprime") << '\n';
}

void use_trial_factorization() {
    LongInteger n, max;
    std::cout << "input number and max divisor: ";
    std::cin >> n >> max;
    Detail::TrialDivision tr_div;
    std::map<LongInteger, int> factors = tr_div.factorize(n, max);
//    assert(factors.empty() && "n is prime or pseudoprime");
    if (factors.size() == 1 && factors.begin()->first == n) //&& factors.begin()->second == 1)
        std::cout << "n is prime or pseudoprime, n = ";
    else
        std::cout << "n is composite, n = ";
    for (std::map<LongInteger, int>::iterator it = factors.begin(); it != --factors.end(); it++)
        std::cout << it->first << "^" << it->second << " * ";
    std::cout << (--factors.end())->first  << "^" << (--factors.end())->second << '\n';
}

}  // namespace Use
