#include "testAlgorithms.h"

namespace UsefulAlgorithms {

void test_power_mod() {
    TypeU16_t a = 45, b = 789, n = 32;
    std::cout << (power_mod(a, b, n) == 29);
}

}