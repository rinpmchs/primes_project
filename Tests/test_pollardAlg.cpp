#include "pollardAlg.h"
#include "../Useful/profiler.h"
#include <gtest/gtest.h>
#include <fstream>
#include <iostream>

using namespace Detail;
using namespace Useful;

namespace PollardTests {

std::ofstream pollard_test_results("../Tests/Data/pollard_test_results.csv", std::ios::out | std::ios::app);

class PollardTest : public ::testing::Test {
protected:
    void SetUp() override {
        if (!pollard_test_results.is_open()) {
            std::cerr << "Failed to open test results file" << std::endl;
        }
    }

    void TearDown() override {
        if (pollard_test_results.is_open()) {
            pollard_test_results.flush();
        }
    }
};

} // namespace PollardTests

using namespace PollardTests;

namespace Tests {

TEST_F(PollardTest, PollardPMinus1Factorization1) {
    Pollard pollard;
    LongInteger n = 10403; // 10403 = 101 * 103
    LongInteger c = 2;
    LongInteger max = 1000;

    Profiler::start();
    LongInteger factor = pollard.pollard_p_minus_1_fact(n, c, max);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();

    bool result = (factor == 101 || factor == 103);
    pollard_test_results << "PollardTest, PollardPMinus1Factorization1," << n << "," << result << "," << duration << "\n";

    EXPECT_TRUE(result);
}

TEST_F(PollardTest, PollardPMinus1Factorization2) {
    Pollard pollard;
    LongInteger n = 589823; // 589823 = 761 * 775
    LongInteger c = 2;
    LongInteger max = 2000;

    Profiler::start();
    LongInteger factor = pollard.pollard_p_minus_1_fact(n, c, max);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();

    bool result = (factor == 9997) || (factor == 59);
    pollard_test_results << "PollardTest, PollardPMinus1Factorization2," << n << "," << result << "," << duration << "\n";

    EXPECT_TRUE(result);
}

TEST_F(PollardTest, PollardPMinus1Factorization3) {
    Pollard pollard;
    LongInteger n = 4321767235498; // 4321767235498 = 2477 * 1744758674
    LongInteger c = 42;
    LongInteger max = 248165932849;

    Profiler::start();
    LongInteger factor = pollard.pollard_p_minus_1_fact(n, c, max);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();

    bool result = (factor == 2477) || (factor == 1744758674);
    pollard_test_results << "PollardTest, PollardPMinus1FactorizationLarge3," << n << "," << result << "," << duration << "\n";

    EXPECT_TRUE(result);
}

TEST_F(PollardTest, PollardPMinus1Factorization4) {
    Pollard pollard;
    LongInteger n = 82913; // prime
    LongInteger c = 2;
    LongInteger max = 10000;

    Profiler::start();
    LongInteger factor = pollard.pollard_p_minus_1_fact(n, c, max);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();

    bool result = (factor == 0);
    pollard_test_results << "PollardTest, PollardPMinus1Factorization4," << n << "," << result << "," << duration << "\n";

    EXPECT_TRUE(result);
}

TEST_F(PollardTest, PollardPMinus1Factorization5) {
    Pollard pollard;
    LongInteger n = 13864283; // 13864283 = 677 * 20479
    LongInteger c = 3;
    LongInteger max = 3000000;

    Profiler::start();
    LongInteger factor = pollard.pollard_p_minus_1_fact(n, c, max);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();
    bool result = (factor == 677) || (factor == 20479);
    pollard_test_results << "PollardTest, PollardPMinus1Factorization5," << n << "," << result << "," << duration << "\n";

    EXPECT_TRUE(result);
}

TEST_F(PollardTest, PollardPMinus1Factorization6) {
    Pollard pollard;
    LongInteger n = LongInteger("456982729475816873973268467");
    // 456982729475816873973268467 = 9 * 50775858830646319330363163
    LongInteger c = 32;
    LongInteger max = LongInteger("246192838493234214323");

    Profiler::start();
    LongInteger factor = pollard.pollard_p_minus_1_fact(n, c, max);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();
    bool result = (factor == 9) || (factor == LongInteger ("50775858830646319330363163"));
    pollard_test_results << "PollardTest, PollardPMinus1Factorization6," << n << "," << result << "," << duration << "\n";

    EXPECT_TRUE(result);
}
}  // namespace Tests
