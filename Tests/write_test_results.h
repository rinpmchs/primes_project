#include <fstream>
#include <iostream>
#include <gtest/gtest.h>

namespace Tests {

extern std::ofstream test_results;

class WriteTest : public ::testing::Test {
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
} // namespace Tests
