#include "../FermatsAlgorithm/fermatsFact.h"
#include "../Useful/profiler.h"
#include <gtest/gtest.h>
#include <vector>
#include <fstream>
#include <iostream>

using namespace Useful;
using namespace Detail;


namespace FermatTests {

std::ofstream fermat_test_results("../Tests/Data/fermat_test_results.csv", std::ios::out | std::ios::app);

class FermatTest : public ::testing::Test {
protected:
    void SetUp() override {
        if (!fermat_test_results.is_open()) {
            std::cerr << "Failed to open test results file" << std::endl;
        }
    }

    void TearDown() override {
        if (fermat_test_results.is_open()) {
            fermat_test_results.flush();
        }
    }
};

} // namespace FermatTests

using namespace FermatTests;

namespace Tests {

TEST(FermatFact, FactorizationTest) {
    FermatFact factorizer;

    SmallUInteger n1 = 15;
    auto factors1 = factorizer.factorize(n1);
    EXPECT_TRUE((factors1.first == 3 && factors1.second == 5) ||
                (factors1.first == 5 && factors1.second == 3));

    SmallUInteger n2 = 91;
    auto factors2 = factorizer.factorize(n2);
    EXPECT_TRUE((factors2.first == 7 && factors2.second == 13) ||
                (factors2.first == 13 && factors2.second == 7));

    SmallUInteger n3 = 561;
    auto factors3 = factorizer.factorize(n3);
    EXPECT_TRUE((factors3.first == 33 && factors3.second == 17) ||
                (factors3.first == 17 && factors3.second == 33));

    SmallUInteger n4 = 56628;
    auto factors4 = factorizer.factorize(n4);
    EXPECT_TRUE((factors4.first == 242 && factors4.second == 234) ||
                (factors4.first == 234 && factors4.second == 242));

    SmallUInteger n5 = 2975616;
    auto factors5 = factorizer.factorize(n5);
    EXPECT_TRUE((factors5.first == 1722 && factors5.second == 1728) ||
                (factors5.first == 1728 && factors5.second == 1722));
}

TEST(FermatFact, PrimeNumberTest) {
    FermatFact factorizer;

    SmallUInteger p1 = 13;
    Profiler::start();
    auto factors1 = factorizer.factorize(p1);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();
    bool result = factors1.second == 1;
    EXPECT_EQ(result, 1);
    fermat_test_results << "FermatFact, PrimeNumberTest," << p1 << "," << result << "," << duration << "\n";

    SmallUInteger p2 = 997;
    Profiler::start();
    auto factors2 = factorizer.factorize(p2);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    result &= factors2.second == 1;
    EXPECT_EQ(result, 1);
    fermat_test_results << "FermatFact, PrimeNumberTest," << p2 << "," << result << "," << duration << "\n";

    SmallUInteger p3 = 22741;
    Profiler::start();
    auto factors3 = factorizer.factorize(p3);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    result &= factors3.second == 1;
    EXPECT_EQ(result, 1);
    fermat_test_results << "FermatFact, PrimeNumberTest," << p3 << "," << result << "," << duration << "\n";

    SmallUInteger p4 = 82913;
    Profiler::start();
    auto factors4 = factorizer.factorize(p4);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    result &= factors4.second == 1;
    EXPECT_EQ(result, 1);
    fermat_test_results << "FermatFact, PrimeNumberTest," << p4 << "," << result << "," << duration << "\n";
}

TEST(FermatFact, TimeComplexityTest) {
    FermatFact factorizer;
    SmallUInteger n = 320239240;

    Profiler::start();
    auto factors = factorizer.factorize(n);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();
    bool result = 1;
    fermat_test_results << "FermatFact, PrimeNumberTest," << n << "," << result << "," << duration << "\n";

    EXPECT_LT(duration, 100.0);
    EXPECT_LT(duration, 50.0);
    EXPECT_LT(duration, 25.0);
    EXPECT_LT(duration, 10.0);
    EXPECT_LT(duration, 1.0);
}
}  // namespace Tests
