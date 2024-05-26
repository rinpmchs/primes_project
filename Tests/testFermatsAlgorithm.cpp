#include "../FermatsAlgorithm/fermatsFact.h"
#include "testFermatsAlgorithm.h"
#include "../Useful/profiler.h"
#include <typeinfo>

namespace Project::FermatFact {

void test_factorization() {
    Project::SmallUInteger n;
    std::cout << "number to check: ";
    std::cin >> n;
//    assert (typeid(n).name() == Project::SmallUInteger);
    Useful::Profiler::start();
    std::pair<Project::SmallUInteger, Project::SmallUInteger> factors = factorize(n);
    Useful::Profiler::finish();
    if (factors.second == 1)
        std::cout << "n = " << factors.first << ", prime\n";
    else
        std::cout << "n = " << factors.first << " * " << factors.second << ", composite\n";
    std::cout << "execution time: " << Useful::Profiler::getExecutionTimeDouble() << " ms\n";
}

}
