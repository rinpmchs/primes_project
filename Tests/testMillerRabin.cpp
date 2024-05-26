#include "testMillerRabin.h"
#include <iostream>

namespace Project::Detail {

void Testt::test_miller_rabin_primality() {
    LongInteger n;
    std::cin >> n;
    MillerRabin MR;
    std::cout << MR.is_prime(n);
}

}