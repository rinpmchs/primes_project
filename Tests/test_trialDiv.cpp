#include <gtest/gtest.h>
#include "../TrialDivision/trialDiv.h"
#include <map>

using namespace Detail;

namespace Tests {

bool maps_are_equal(const std::map<LongInteger, int>& map1, const std::map<LongInteger, int>& map2) {
    return map1 == map2;
}

TEST(TrialDivision, DivideTest) {
    TrialDivision trialDivision;
    LongInteger number = 100;
    int result = trialDivision.divide(number, 2);
    EXPECT_EQ(result, 2);
    EXPECT_EQ(number, 25);
}

TEST(TrialDivision, FactorizeTest) {
    TrialDivision trialDivision;
    LongInteger number = 100;
    LongInteger max = 10;
    std::map<LongInteger, int> expected_factors = {{2, 2}, {5, 2}};
    std::map<LongInteger, int> factors = trialDivision.factorize(number, max);
    EXPECT_TRUE(maps_are_equal(factors, expected_factors));
}

TEST(TrialDivision, IsCompositeTest) {
    TrialDivision trialDivision;
    SmallUInteger number = 100;
    bool result = trialDivision.is_composite(number);
    EXPECT_TRUE(result);

    number = 101;
    result = trialDivision.is_composite(number);
    EXPECT_FALSE(result);
}

TEST(TrialDivision, FactorizePrimeTest) {
    TrialDivision trialDivision;
    LongInteger number = 13;
    LongInteger max = 10;
    std::map<LongInteger, int> expected_factors = {{13, 1}};
    std::map<LongInteger, int> factors = trialDivision.factorize(number, max);
    EXPECT_TRUE(maps_are_equal(factors, expected_factors));
}

TEST(TrialDivision, FactorizeLargeNumberTest) {
    TrialDivision trialDivision;
    LongInteger number = 123456;
    LongInteger max = 1000;
    std::map<LongInteger, int> expected_factors = {{2, 6}, {3, 1}, {643, 1}};
    std::map<LongInteger, int> factors = trialDivision.factorize(number, max);
    EXPECT_TRUE(maps_are_equal(factors, expected_factors));
}
}
