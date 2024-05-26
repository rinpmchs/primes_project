#include "../Useful/algorithms.h"
#include "useAlgorithms.h"

namespace Use {

void use_power_mod() {
    SmallInteger a = 45, b = 789, n = 32;
    std::cout << (Useful::power_mod(a, b, n) == 29);
}

}
