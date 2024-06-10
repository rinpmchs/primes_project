#include "useFermat.h"
#include "../Utils/profiler.h"

namespace Project::Use {

void use_fermat_factorization() {
    using namespace Detail;
    using namespace Utils;
    SmallUInteger n;
    std::cout << "number to check: ";
    std::cin >> n;

    Profiler profiler;
    profiler.start();
    FermatFact factorizer;
    std::pair<SmallUInteger, SmallUInteger> factors = factorizer.factorize(n);
    profiler.finish();

    if (factors.second == 1)
        std::cout << "n = " << factors.first << ", prime\n";
    else
        std::cout << "n = " << factors.first << " * " << factors.second << ", composite\n";
    std::cout << "execution time: " << profiler.getExecutionTimeDouble() << " ms\n";
}

} // namespace Project::Use
