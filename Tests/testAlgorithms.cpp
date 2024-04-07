#include "../Useful/algorithms.h"
#include "testAlgorithms.h"

namespace UsefulAlgorithms {

void test_power_mod() {
    Project::SmallInteger a = 45, b = 789, n = 32;
    std::cout << (power_mod(a, b, n) == 29);
}

}
