#include "useMillerRabin.h"
#include <iostream>

namespace Project::Use {

void use_miller_rabin_primality() {
    LongInteger n;
    std::cin >> n;
    Detail::MillerRabin MR;
    std::cout << MR.is_prime(n);
}
}  // namespace Project::Use
