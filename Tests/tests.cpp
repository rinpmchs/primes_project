#include "tests.h"
#include "../Exceptions/except.h"
#include "../AKSAlgorithm/AKSAlg.h"
#include <gtest/gtest.h>

using namespace Project;

namespace Tests {

int run_all_tests() {
    try {
        ::testing::InitGoogleTest();
        return RUN_ALL_TESTS();
    } catch (...) {
        Except::handleException("gtests run failed");
    }
    return -1;
}

}
