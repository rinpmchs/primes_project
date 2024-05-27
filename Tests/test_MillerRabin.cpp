#include "../FermatsAlgorithm/fermatsFact.h"
#include "../Useful/profiler.h"
#include <gtest/gtest.h>
#include <vector>
#include <fstream>
#include <iostream>

using namespace Useful;
using namespace Detail;


namespace MillerRabinTests {

std::ofstream test_results("../Tests/Data/pollard_test_results.csv", std::ios::app);

class MillerRabinTest : public ::testing::Test {
protected:
    void SetUp() override {
        if (!test_results.is_open()) {
            std::cerr << "Failed to open test results file" << std::endl;
        }
    }

    void TearDown() override {
        if (test_results.is_open()) {
            test_results.flush();
        }
    }
};

} // namespace FermatTests

using namespace MillerRabinTests;

namespace Tests {

TEST(MillerRabinTest, ) {

}
}  // namespace Tests
