#include "../TrialDivision/trialDiv.h"
#include "testTrialDivision.h"

namespace TrialDivision {

void test_compositeness() {
    Project::SmallUInteger num = 6901760918081918081;
    bool p = is_composite(num);
    if (p)
        std::cout << ("composite") << '\n';
    else
        std::cout << ("prime or pseudoprime") << '\n';
}

void test_factorization() {
    Project::LongInteger n, max;
    std::cout << "input number and max divisor: ";
    std::cin >> n >> max;
    std::map<Project::LongInteger, int> factors = factorize(n, max);
//    assert(factors.empty() && "n is prime or pseudoprime");
    if (factors.size() == 1 && factors.begin()->first == n) //&& factors.begin()->second == 1)
        std::cout << "n is prime or pseudoprime, n = ";
    else
        std::cout << "n is composite, n = ";
    for (std::map<Project::LongInteger, int>::iterator it = factors.begin(); it != --factors.end(); it++)
        std::cout << it->first << "^" << it->second << " * ";
    std::cout << (--factors.end())->first  << "^" << (--factors.end())->second << '\n';
}

void test_time() {

    std::cout << "";
}

}
