#include "useFermat.h"
#include "../Useful/profiler.h"

namespace Project::Use {

void use_fermat_factorization() {
    SmallUInteger n;
    std::cout << "number to check: ";
    std::cin >> n;

    Useful::Profiler::start();
    Detail::FermatFact factorizer;
    std::pair<SmallUInteger, SmallUInteger> factors = factorizer.factorize(n);
    Useful::Profiler::finish();

    if (factors.second == 1)
        std::cout << "n = " << factors.first << ", prime\n";
    else
        std::cout << "n = " << factors.first << " * " << factors.second << ", composite\n";
    std::cout << "execution time: " << Useful::Profiler::getExecutionTimeDouble() << " ms\n";
}

} // namespace Project::Use
