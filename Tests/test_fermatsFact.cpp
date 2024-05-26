#include "../FermatsAlgorithm/fermatsFact.h"
#include "../Useful/profiler.h"
#include <gtest/gtest.h>
#include <vector>
#include <iostream>

using namespace Useful;
using namespace Detail;

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
    auto factors1 = factorizer.factorize(p1);
    EXPECT_EQ(factors1.second, 1);

    SmallUInteger p2 = 997;
    auto factors2 = factorizer.factorize(p2);
    EXPECT_EQ(factors2.second, 1);

    SmallUInteger p3 = 22741;
    auto factors3 = factorizer.factorize(p3);
    EXPECT_EQ(factors3.second, 1);

    SmallUInteger p4 = 82913;
    auto factors4 = factorizer.factorize(p4);
    EXPECT_EQ(factors4.second, 1);
}

TEST(FermatFact, TimeComplexityTest) {
    FermatFact factorizer;
    SmallUInteger n = 320239240;

    Profiler::start();
    auto factors = factorizer.factorize(n);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();
    std::cout << "execution time: " << duration << " ms\n";
    EXPECT_LT(duration, 100.0);
    EXPECT_LT(duration, 50.0);
    EXPECT_LT(duration, 25.0);
    EXPECT_LT(duration, 10.0);
    EXPECT_LT(duration, 1.0);
}

}
