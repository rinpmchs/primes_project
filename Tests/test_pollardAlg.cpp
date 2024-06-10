#include "pollardAlg.h"
#include "../Utils/profiler.h"
#include <gtest/gtest.h>
#include <fstream>
#include <iostream>

namespace Project::Tests {

using namespace Detail;
using namespace Utils;

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

    Pollard pollard;
    Profiler profiler;
};
} // namespace PollardTests

using namespace PollardTests;

TEST_F(PollardTest, Factorization) {
    LongInteger n = 10403; // 10403 = 101 * 103
    LongInteger c = 2;
    LongInteger max = 1000;

    profiler.start();
    LongInteger factor = pollard.pollard_p_minus_1_fact(n, c, max);
    profiler.finish();
    auto duration = profiler.getExecutionTimeDouble();
    bool result = (factor == 101) || (factor == 103);
    EXPECT_TRUE(result);
    pollard_test_results << "PollardTest, Factorization," << n << "," << result << "," << duration << "\n";


    n = 589823; // 589823 = 761 * 775
    c = 2;
    max = 2000;
    profiler.start();
    factor = pollard.pollard_p_minus_1_fact(n, c, max);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = (factor == 9997) || (factor == 59);
    EXPECT_TRUE(result);
    pollard_test_results << "PollardTest, Factorization," << n << "," << result << "," << duration << "\n";

    n = 4321767235498; // 4321767235498 = 2477 * 1744758674
    c = 42;
    max = 248165932849;
    profiler.start();
    factor = pollard.pollard_p_minus_1_fact(n, c, max);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = (factor == 2477) || (factor == 1744758674);
    EXPECT_TRUE(result);
    pollard_test_results << "PollardTest, Factorization," << n << "," << result << "," << duration << "\n";

    n = 82913; // prime
    c = 2;
    max = 10000;
    profiler.start();
    factor = pollard.pollard_p_minus_1_fact(n, c, max);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = (factor == 0);
    EXPECT_TRUE(result);
    pollard_test_results << "PollardTest, Factorization," << n << "," << result << "," << duration << "\n";

    n = 13864283; // 13864283 = 677 * 20479
    c = 3;
    max = 3000000;
    profiler.start();
    factor = pollard.pollard_p_minus_1_fact(n, c, max);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = result = (factor == 677) || (factor == 20479);
    EXPECT_TRUE(result);
    pollard_test_results << "PollardTest, Factorization," << n << "," << result << "," << duration << "\n";

    n = LongInteger("456982729475816873973268467");
    // 456982729475816873973268467 = 9 * 50775858830646319330363163
    c = 32;
    max = LongInteger("246192838493234214323");
    profiler.start();
    factor = pollard.pollard_p_minus_1_fact(n, c, max);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = (factor == 9) || (factor == LongInteger ("50775858830646319330363163"));
    EXPECT_TRUE(result);
    pollard_test_results << "PollardTest, Factorization," << n << "," << result << "," << duration << "\n";
}
}  // namespace Project::Tests
