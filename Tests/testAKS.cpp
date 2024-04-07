#include "testAKS.h"
#include "../Useful/profiler.h"

void AKS::test_AKS() {
    AKS aks;
    Project::SmallUInteger n;

    std::cout << "number to check: ";
    std::cin >> n;
//    assert (typeid(n).name() == Project::SmallUInteger);

    Profiler::start();
    if (aks.is_prime(n))
        std::cout << "n is prime";
    else
        std::cout << "n is composite";
    Profiler::finish();
}

// что-то не работает, начиная с 67, хз почему