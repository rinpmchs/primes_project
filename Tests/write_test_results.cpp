#include "write_test_results.h"

namespace Tests {

std::ofstream test_results("../Tests/Data/test_results.csv", std::ios::app);

} // namespace Tests
