#include "../Combinations/combination2.h"
#include "../Useful/profiler.h"
#include <gtest/gtest.h>
#include <fstream>

namespace Project::Tests {

namespace Comb2Tests {

std::ofstream comb2_test_results("../Tests/Data/comb2_test_results.csv", std::ios::out | std::ios::app);

class Comb2Test : public ::testing::Test {
protected:
    void SetUp() override {
        if (!comb2_test_results.is_open()) {
            std::cerr << "Failed to open test results file" << std::endl;
        }
    }

    void TearDown() override {
        if (comb2_test_results.is_open()) {
            comb2_test_results.flush();
        }
    }

    Detail::Comb2 comb2;
};
}  // namespace Comb2Tests

using namespace Comb2Tests;
using namespace Useful;

TEST_F(Comb2Test, SmallPrime) {
    LongInteger number = 13;
    Profiler::start();
    bool result = comb2.comb2_primality_test(number);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 137;
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 919;
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 2441;
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 7321;
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 19507;
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 56093;
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 56101;
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 88811;
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 94543;
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,SmallPrime," << number << "," << result << "," << duration << "\n";
}

TEST_F(Comb2Test, SmallComposite) {
    LongInteger number = 14;  // 2 * 7
    Profiler::start();
    bool result = comb2.comb2_primality_test(number);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 143;  // 11 * 13
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 925;  // 25 * 37
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 2465;  // 5 * 17 * 29
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 7357;  // 7 * 1051
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 19669;  // 89 * 221
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 56133;  // 3 * 18711
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 56125;  // 5 * 11225
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 88877;  // 73 * 1217
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 94545;  // 5 * 18809
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,SmallComposite," << number << "," << !result << "," << duration << "\n";
}

TEST_F(Comb2Test, LargePrime) {
    LongInteger number = 638371;
    Profiler::start();
    bool result = comb2.comb2_primality_test(number);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,LargePrime," << number << "," << result << "," << duration << "\n";

    number = 744977;
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,LargePrime," << number << "," << result << "," << duration << "\n";

    number = 923509;
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,LargePrime," << number << "," << result << "," << duration << "\n";

    number = 2327138083;
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,LargePrime," << number << "," << result << "," << duration << "\n";

    number = 12345678923;
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,LargePrime," << number << "," << result << "," << duration << "\n";

    number = 37898818253;
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,LargePrime," << number << "," << result << "," << duration << "\n";

    number = 19981091998181;
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,LargePrime," << number << "," << result << "," << duration << "\n";

    number = 41434547495153;
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,LargePrime," << number << "," << result << "," << duration << "\n";

    number = 60818091990661;
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,LargePrime," << number << "," << result << "," << duration << "\n";

    number = 999998727899999;
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,LargePrime," << number << "," << result << "," << duration << "\n";
}

TEST_F(Comb2Test, LargeComposite) {
    LongInteger number = 638399;  // = 641 * 997
    Profiler::start();
    bool result = comb2.comb2_primality_test(number);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,LargeComposite," << number << "," << !result << "," << duration << "\n";

    number = 744989;  // = 773 * 963
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,LargeComposite," << number << "," << !result << "," << duration << "\n";

    number = 923527;  // = 941 * 981
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,LargeComposite," << number << "," << !result << "," << duration << "\n";

    number = 2327138119;  // = 19289 * 120641
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,LargeComposite," << number << "," << !result << "," << duration << "\n";

    number = 12345678989; // = 7919 * 1559297
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,LargeComposite," << number << "," << !result << "," << duration << "\n";

    number = 37898818277;  // = 175717 * 215681
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,LargeComposite," << number << "," << !result << "," << duration << "\n";

    number = 19981091998359; // = 1487 * 13441817
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,LargeComposite," << number << "," << !result << "," << duration << "\n";

    number = 41434547495169;  // = 14413 * 2875297
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,LargeComposite," << number << "," << !result << "," << duration << "\n";

    number = 60818091990673;  // = 16759 * 3630041
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,LargeComposite," << number << "," << !result << "," << duration << "\n";

    number = 999998727899997;  // = 47 * 21276568659531
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,LargeComposite," << number << "," << !result << "," << duration << "\n";

}

TEST_F(Comb2Test, ExtraLargePrime) {
    LongInteger number = LongInteger("1919191919171610101619191");
    Profiler::start();
    bool result = comb2.comb2_primality_test(number);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,ExtraLargePrime," << number << "," << result << "," << duration << "\n";

    number = LongInteger("999988886446696644688889999");
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,ExtraLargePrime," << number << "," << result << "," << duration << "\n";

    number = LongInteger("162259276829213363391578010288127");
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,ExtraLargePrime," << number << "," << result << "," << duration << "\n";

    number = LongInteger("7569656357555149453935332725211591");
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,ExtraLargePrime," << number << "," << result << "," << duration << "\n";

    number = LongInteger("56713727820156410577229101238628035243");
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,ExtraLargePrime," << number << "," << result << "," << duration << "\n";

    number = LongInteger("1036080103464110332031031766103033010288951027461");
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,ExtraLargePrime," << number << "," << result << "," << duration << "\n";

    number = LongInteger("8888888888888888888888888888888888888888888888888888888888888888888888888888881");
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,ExtraLargePrime," << number << "," << result << "," << duration << "\n";

    number = LongInteger("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000081");
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,ExtraLargePrime," << number << "," << result << "," << duration << "\n";

    number = LongInteger("9152125273335394549515557636569757781858791939599105111115117119121123125129133135141143145147153155159161165169171175177183185187189195201203205207209213215217219221225231235237243245247249253");
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,ExtraLargePrime," << number << "," << result << "," << duration << "\n";

    number = LongInteger("1357911131517193133353739515355575971737577799193959799111113115117119131133135137139151153155157159171173175177179191193195197199311313315317319331333335337339351353355357359371373375377379391393395397399511513515517519531533535537539551553555557559571573575577579591593595597599711713715717719731733735737739751753755757759771");
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb2_test_results << "Comb2Test,ExtraLargePrime," << number << "," << result << "," << duration << "\n";
}

TEST_F(Comb2Test, ExtraLargeComposite) {
    LongInteger number = LongInteger("1919191919171610101619193"); // = 184133 * 10422856952157462821
    Profiler::start();
    bool result = comb2.comb2_primality_test(number);
    Profiler::finish();
    auto duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,ExtraLargeComposite," << number << "," << !result << "," << duration << "\n";

    number = LongInteger("999988886446696644688889997"); // = 3733055489 * 267874101896773773
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,ExtraLargeComposite," << number << "," << !result << "," << duration << "\n";

    number = LongInteger("162259276829213363391578010288129"); // = 27737 * 584962500721158399

    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,ExtraLargeComposite," << number << "," << !result << "," << duration << "\n";

    number = LongInteger("7569656357555149453935332725211593"); // = 202129 * 37449630471407613226876562617
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,ExtraLargeComposite," << number << "," << !result << "," << duration << "\n";

    number = LongInteger("56713727820156410577229101238628035241"); // = 41 * 1383261654150156355542173200942147201
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,ExtraLargeComposite," << number << "," << !result << "," << duration << "\n";

    number = LongInteger("1036080103464110332031031766103033010288951027459"); // = 15973 * 64873589082109382983180527788331
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,ExtraLargeComposite," << number << "," << !result << "," << duration << "\n";

    number = LongInteger("8888888888888888888888888888888888888888888888888888888888888888888888888888883"); // = 37 * 24024024024024024024024024024024024024024024024024024024024024024024024024024021

    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,ExtraLargeComposite," << number << "," << !result << "," << duration << "\n";

    number = LongInteger("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000087"); // = 7 * 14285714285714285714285714285714285714285714285714285714285714285714285714285714285714285714285714285714285714285714285714285714285714285714285713
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,ExtraLargeComposite," << number << "," << !result << "," << duration << "\n";

    number = LongInteger("9152125273335394549515557636569757781858791939599105111115117119121123125129133135141143145147153155159161165169171175177183185187189187201203205207209213215217219221225231235237243245247249253"); // = 71 * 128887676949275297870812663584758542856620563380107464343111127288110901998615339294226779524666206479271586663042175846960467264515780021166708750636460353825117533064788949416588128929050025314961
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,ExtraLargeComposite," << number << "," << !result << "," << duration << "\n";

    number = LongInteger("1357911131517193133353739515355575971737577799193959799111113115117119131133135137139151153155157159171173175177179191193195197199311313315317319331333335337339351353355357359371373375377379391393395397399511513515517519531533535537539551553555557559571573575577579591593595597599711713715717719731733735737739751753755757759773"); // = 83 * 163536144150882183075506225073538384962890625679611925805892678239145953947515449806542262822937230812944865047236456767711724934288091126708352716245734388732214721153251791715897379053617327847259905320707136045663420562587123020466850476306014292376790184965847611546833874323135620228073310153891827788865807703676147426876495737655748
    Profiler::start();
    result = comb2.comb2_primality_test(number);
    Profiler::finish();
    duration = Profiler::getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb2_test_results << "Comb2Test,ExtraLargeComposite," << number << "," << !result << "," << duration << "\n";
}
}  // namespace Project::Tests
