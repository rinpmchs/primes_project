#include "../FermatsAlgorithm/fermatsFact.h"
#include "../Utils/profiler.h"
#include <gtest/gtest.h>
#include <vector>
#include <fstream>

namespace Project::Tests {

using namespace Detail;
using namespace Utils;

namespace FermatTests {

std::ofstream fermat_test_results("../Tests/Data/fermat_test_results.csv", std::ios::out | std::ios::app);

class FermatTest : public ::testing::Test {
protected:
    void SetUp() override {
        if (!fermat_test_results.is_open()) {
            std::cerr << "Failed to open TEST_F results file" << std::endl;
        }
    }

    void TearDown() override {
        if (fermat_test_results.is_open()) {
            fermat_test_results.flush();
        }
    }

    FermatFact factorizer;
    Profiler profiler;
};
} // namespace FermatTests

using namespace FermatTests;

TEST_F(FermatTest, Factorization) {
    SmallUInteger n1 = 15;
    profiler.start();
    auto factors1 = factorizer.factorize(n1);
    profiler.finish();
    auto duration = profiler.getExecutionTimeDouble();
    bool result = (factors1.first == 3 && factors1.second == 5) ||
                  (factors1.first == 5 && factors1.second == 3);
    EXPECT_TRUE(result);
    fermat_test_results << "FermatTest,Factorization," << n1 << "," << result << "," << duration << "\n";

    SmallUInteger n2 = 91;
    profiler.start();
    auto factors2 = factorizer.factorize(n2);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = (factors2.first == 7 && factors2.second == 13) ||
             (factors2.first == 13 && factors2.second == 7);
    EXPECT_TRUE(result);
    fermat_test_results << "FermatTest,Factorization," << n2 << "," << result << "," << duration << "\n";

    SmallUInteger n3 = 561;
    profiler.start();
    auto factors3 = factorizer.factorize(n3);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = (factors3.first == 33 && factors3.second == 17) ||
             (factors3.first == 17 && factors3.second == 33);
    EXPECT_TRUE(result);
    fermat_test_results << "FermatTest,Factorization," << n3 << "," << result << "," << duration << "\n";

    SmallUInteger n4 = 56628;
    profiler.start();
    auto factors4 = factorizer.factorize(n4);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = (factors4.first == 242 && factors4.second == 234) ||
             (factors4.first == 234 && factors4.second == 242);
    EXPECT_TRUE(result);
    fermat_test_results << "FermatTest,Factorization," << n4 << "," << result << "," << duration << "\n";

    SmallUInteger n5 = 2975616;
    profiler.start();
    auto factors5 = factorizer.factorize(n5);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = (factors5.first == 1722 && factors5.second == 1728) ||
             (factors5.first == 1728 && factors5.second == 1722);
    EXPECT_TRUE(result);
    fermat_test_results << "FermatTest,Factorization," << n5 << "," << result << "," << duration << "\n";
}

TEST_F(FermatTest,SmallPrime) {
    SmallUInteger number = 13;
    profiler.start();
    auto factors = factorizer.factorize(number);
    profiler.finish();
    auto duration = profiler.getExecutionTimeDouble();
    bool result = factors.second == 1;
    EXPECT_TRUE(result);
    fermat_test_results << "FermatTest,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 137;
    profiler.start();
    factors = factorizer.factorize(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = factors.second == 1;
    EXPECT_TRUE(result);
    fermat_test_results << "FermatTest,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 919;
    profiler.start();
    factors = factorizer.factorize(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = factors.second == 1;
    EXPECT_TRUE(result);
    fermat_test_results << "FermatTest,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 2441;
    profiler.start();
    factors = factorizer.factorize(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = factors.second == 1;
    EXPECT_TRUE(result);
    fermat_test_results << "FermatTest,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 7321;
    profiler.start();
    factors = factorizer.factorize(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = factors.second == 1;
    EXPECT_TRUE(result);
    fermat_test_results << "FermatTest,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 19507;
    profiler.start();
    factors = factorizer.factorize(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = factors.second == 1;
    EXPECT_TRUE(result);
    fermat_test_results << "FermatTest,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 56093;
    profiler.start();
    factors = factorizer.factorize(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = factors.second == 1;
    EXPECT_TRUE(result);
    fermat_test_results << "FermatTest,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 56101;
    profiler.start();
    factors = factorizer.factorize(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = factors.second == 1;
    EXPECT_TRUE(result);
    fermat_test_results << "FermatTest,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 88811;
    profiler.start();
    factors = factorizer.factorize(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = factors.second == 1;
    EXPECT_TRUE(result);
    fermat_test_results << "FermatTest,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 94543;
    profiler.start();
    factors = factorizer.factorize(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = factors.second == 1;
    EXPECT_TRUE(result);
    fermat_test_results << "FermatTest,SmallPrime," << number << "," << result << "," << duration << "\n";

}

TEST_F(FermatTest, SmallComposite) {
    SmallUInteger number = 143;  // 11 * 13
    profiler.start();
    auto factors = factorizer.factorize(number);
    profiler.finish();
    auto duration = profiler.getExecutionTimeDouble();
    bool result = factors.second == 1;
    EXPECT_FALSE(result);
    fermat_test_results << "FermatTest,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 145;  // 5 * 19
    profiler.start();
    factors = factorizer.factorize(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = factors.second == 1;
    EXPECT_FALSE(result);
    fermat_test_results << "FermatTest,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 925;  // 25 * 37
    profiler.start();
    factors = factorizer.factorize(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = factors.second == 1;
    EXPECT_FALSE(result);
    fermat_test_results << "FermatTest,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 2465;  // 5 * 17 * 29
    profiler.start();
    factors = factorizer.factorize(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = factors.second == 1;
    EXPECT_FALSE(result);
    fermat_test_results << "FermatTest,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 7357;  // 7 * 1051
    profiler.start();
    factors = factorizer.factorize(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = factors.second == 1;
    EXPECT_FALSE(result);
    fermat_test_results << "FermatTest,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 19669;  // 89 * 221
    profiler.start();
    factors = factorizer.factorize(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = factors.second == 1;
    EXPECT_FALSE(result);
    fermat_test_results << "FermatTest,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 56133;  // 3 * 18711
    profiler.start();
    factors = factorizer.factorize(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = factors.second == 1;
    EXPECT_FALSE(result);
    fermat_test_results << "FermatTest,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 56125;  // 5 * 11225
    profiler.start();
    factors = factorizer.factorize(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = factors.second == 1;
    EXPECT_FALSE(result);
    fermat_test_results << "FermatTest,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 88877;  // 73 * 1217
    profiler.start();
    factors = factorizer.factorize(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = factors.second == 1;
    EXPECT_FALSE(result);
    fermat_test_results << "FermatTest,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 94545;  // 5 * 18809
    profiler.start();
    factors = factorizer.factorize(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    result = factors.second == 1;
    EXPECT_FALSE(result);
    fermat_test_results << "FermatTest,SmallComposite," << number << "," << !result << "," << duration << "\n";
}

TEST_F(FermatTest, Duration) {
    SmallUInteger n = 320239240;

    profiler.start();
    auto factors = factorizer.factorize(n);
    profiler.finish();
    auto duration = profiler.getExecutionTimeDouble();
    bool result = 1;
    fermat_test_results << "FermatTest,Duration," << n << "," << result << "," << duration << "\n";

    EXPECT_LT(duration, 100.0);
    EXPECT_LT(duration, 50.0);
    EXPECT_LT(duration, 25.0);
    EXPECT_LT(duration, 10.0);
    EXPECT_LT(duration, 1.0);
}
}  // namespace Project::Tests
