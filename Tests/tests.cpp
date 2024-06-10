#include "tests.h"
#include "../Exceptions/except.h"
#include <gtest/gtest.h>

namespace Project::Tests {

int run_all_tests() {
    try {
        ::testing::InitGoogleTest();
        return RUN_ALL_TESTS();
    } catch (...) {
        Except::handleException("gtests run failed");
    }
    return -1;
}
}  // namespace Project::Tests
