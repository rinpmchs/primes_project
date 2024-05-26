#include "../Useful/algorithms.h"
#include "testAlgorithms.h"

namespace Useful {

void test_power_mod() {
    SmallInteger a = 45, b = 789, n = 32;
    std::cout << (power_mod(a, b, n) == 29);
}

}
