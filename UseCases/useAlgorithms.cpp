#include "../Useful/algorithms.h"
#include "useAlgorithms.h"

namespace Project::Use {

void use_power_mod() {
    SmallInteger a = 45, b = 789, n = 32;
    std::cout << (Useful::power_mod(a, b, n) == 29);
}
}  // namespace Project::Use
