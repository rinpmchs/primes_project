#include <gtest/gtest.h>
#include "../TrialDivision/trialDiv.h"
#include "../Useful/profiler.h"
#include <map>
#include <fstream>

namespace TrialDivTests {

std::ofstream trialdiv_test_results("../Tests/Data/trialdiv_test_results.csv", std::ios::out | std::ios::app);

class TrialDivisionTest : public ::testing::Test {
protected:
    void SetUp() override {
        if (!trialdiv_test_results.is_open()) {
            std::cerr << "Failed to open test results file" << std::endl;
        }
    }

    void TearDown() override {
        if (trialdiv_test_results.is_open()) {
            trialdiv_test_results.flush();
        }
    }
    Detail::TrialDivision trialDivision;
};
} // namespace TrialDivTests

using namespace TrialDivTests;
using namespace Useful;

namespace Tests {

TEST_F(TrialDivisionTest, DivideTest) {
    LongInteger number = 100;
    Profiler::start();
    int result = trialDivision.divide(number, 2);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();
    EXPECT_EQ(result, 2);
    EXPECT_EQ(number, 25);
    trialdiv_test_results << "TrialDivisionTest,DivideTest," << number << "," << result << "," << duration << "\n";
}

TEST_F(TrialDivisionTest, SmallPrime) {
    SmallUInteger number = 100069;
    Profiler::start();
    bool result = trialDivision.is_composite(number);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    trialdiv_test_results << "TrialDivisionTest,SmallPrime," << number << "," << result << "," << duration << "\n";
}

TEST_F(TrialDivisionTest, SmallComposite) {
    SmallUInteger number = 100068;
    Profiler::start();
    bool result = trialDivision.is_composite(number);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    trialdiv_test_results << "TrialDivisionTest,SmallComposite," << number << "," << result << "," << duration << "\n";
}


TEST_F(TrialDivisionTest, Factorization) {
    LongInteger number = 100;
    LongInteger max = 10;
    std::map<LongInteger, int> expected_factors = {{2, 2}, {5, 2}};
    Profiler::start();
    std::map<LongInteger, int> factors = trialDivision.factorize(number, max);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();
    bool result = factors == expected_factors;
    EXPECT_TRUE(result);
    trialdiv_test_results << "TrialDivisionTest,Factorization," << number << "," << result << "," << duration << "\n";

    number = 279119;
    max = 10000;
    expected_factors = {{279119, 1}};
    Profiler::start();
    factors = trialDivision.factorize(number, max);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    result = factors == expected_factors;
    EXPECT_TRUE(result);
    trialdiv_test_results << "TrialDivisionTest,Factorization," << number << "," << result << "," << duration << "\n";

    number = 123456;
    max = 1000;
    expected_factors = {{2, 6}, {3, 1}, {643, 1}};
    Profiler::start();
    factors = trialDivision.factorize(number, max);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    result = factors == expected_factors;
    EXPECT_TRUE(result);
    trialdiv_test_results << "TrialDivisionTest,Factorization," << number << "," << result << "," << duration << "\n";

    number = LongInteger("146753698127862376382412536");
    max = 100000000000000;
    expected_factors = {{2, 3}, {37, 1}, {829, 1}, {25262537, 1}, {23673684195767, 1}};
    Profiler::start();
    factors = trialDivision.factorize(number, max);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    result = factors == expected_factors;
    EXPECT_TRUE(result);
    trialdiv_test_results << "TrialDivisionTest,Factorization," << number << "," << result << "," << duration << "\n";
}
}  // Tests
