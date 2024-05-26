#include "useMillerRabin.h"
#include <iostream>

namespace Use {

void use_miller_rabin_primality() {
    LongInteger n;
    std::cin >> n;
    MillerRabin MR;
    std::cout << MR.is_prime(n);
}

}