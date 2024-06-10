#include "useMillerRabin.h"
#include <iostream>

namespace Project::Use {

void use_miller_rabin_primality() {
    using namespace Detail;
    LongInteger n;
    std::cin >> n;
    MillerRabin MR;
    std::cout << MR.is_prime(n);
}
}  // namespace Project::Use
