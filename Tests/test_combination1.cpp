#include "../Combinations/combination1.h"
#include "../Utils/profiler.h"
#include <gtest/gtest.h>
#include <fstream>

namespace Project::Tests {

using namespace Utils;
using namespace Detail;

namespace Comb1Tests {

std::ofstream comb1_test_results("../Tests/Data/comb1_test_results.csv", std::ios::out | std::ios::app);

class Comb1Test : public ::testing::Test {
protected:
    void SetUp() override {
        if (!comb1_test_results.is_open()) {
            std::cerr << "Failed to open test results file" << std::endl;
        }
    }

    void TearDown() override {
        if (comb1_test_results.is_open()) {
            comb1_test_results.flush();
        }
    }

    Comb1 comb1;
    Profiler profiler;
};
}  // namespace Comb1Tests

using namespace Comb1Tests;

TEST_F(Comb1Test, SmallPrime) {
    LongInteger number = 13;
    profiler.start();
    bool result = comb1.check_primality(number);
    profiler.finish();
    auto duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 137;
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 919;
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 2441;
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 7321;
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 19507;
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 56093;
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 56101;
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 88811;
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,SmallPrime," << number << "," << result << "," << duration << "\n";

    number = 94543;
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,SmallPrime," << number << "," << result << "," << duration << "\n";
}

TEST_F(Comb1Test, SmallComposite) {
    LongInteger number = 14;  // 2 * 7
    profiler.start();
    bool result = comb1.check_primality(number);
    profiler.finish();
    auto duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 143;  // 11 * 13
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 925;  // 25 * 37
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 2465;  // 5 * 17 * 29
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 7357;  // 7 * 1051
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 19669;  // 89 * 221
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 56133;  // 3 * 18711
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 56125;  // 5 * 11225
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 88877;  // 73 * 1217
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,SmallComposite," << number << "," << !result << "," << duration << "\n";

    number = 94545;  // 5 * 18809
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,SmallComposite," << number << "," << !result << "," << duration << "\n";
}

TEST_F(Comb1Test, LargePrime) {
    LongInteger number = 638371;
    profiler.start();
    bool result = comb1.check_primality(number);
    profiler.finish();
    auto duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,LargePrime," << number << "," << result << "," << duration << "\n";

    number = 744977;
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,LargePrime," << number << "," << result << "," << duration << "\n";

    number = 923509;
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,LargePrime," << number << "," << result << "," << duration << "\n";

    number = 2327138083;
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,LargePrime," << number << "," << result << "," << duration << "\n";

    number = 12345678923;
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,LargePrime," << number << "," << result << "," << duration << "\n";

    number = 37898818253;
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,LargePrime," << number << "," << result << "," << duration << "\n";

    number = 19981091998181;
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,LargePrime," << number << "," << result << "," << duration << "\n";

    number = 41434547495153;
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,LargePrime," << number << "," << result << "," << duration << "\n";

    number = 60818091990661;
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,LargePrime," << number << "," << result << "," << duration << "\n";

    number = 999998727899999;
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,LargePrime," << number << "," << result << "," << duration << "\n";
}

TEST_F(Comb1Test, LargeComposite) {
    LongInteger number = 638399;  // = 641 * 997
    profiler.start();
    bool result = comb1.check_primality(number);
    profiler.finish();
    auto duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,LargeComposite," << number << "," << !result << "," << duration << "\n";

    number = 744989;  // = 773 * 963
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,LargeComposite," << number << "," << !result << "," << duration << "\n";

    number = 923527;  // = 941 * 981
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,LargeComposite," << number << "," << !result << "," << duration << "\n";

    number = 2327138119;  // = 19289 * 120641
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,LargeComposite," << number << "," << !result << "," << duration << "\n";

    number = 12345678989; // = 7919 * 1559297
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,LargeComposite," << number << "," << !result << "," << duration << "\n";

    number = 37898818277;  // = 10959 * 3458377
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,LargeComposite," << number << "," << !result << "," << duration << "\n";

    number = 19981091998359; // = 1487 * 13441817
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,LargeComposite," << number << "," << !result << "," << duration << "\n";

    number = 41434547495169;  // = 14413 * 2875297
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,LargeComposite," << number << "," << !result << "," << duration << "\n";

    number = 60818091990673;  // = 16759 * 3630041
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,LargeComposite," << number << "," << !result << "," << duration << "\n";

    number = 999998727899997;  // = 47 * 21276568659531
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,LargeComposite," << number << "," << !result << "," << duration << "\n";

}

TEST_F(Comb1Test, ExtraLargePrime) {
    LongInteger number = LongInteger("1919191919171610101619191");
    profiler.start();
    bool result = comb1.check_primality(number);
    profiler.finish();
    auto duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,ExtraLargePrime," << number << "," << result << "," << duration << "\n";

    number = LongInteger("999988886446696644688889999");
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,ExtraLargePrime," << number << "," << result << "," << duration << "\n";

    number = LongInteger("162259276829213363391578010288127");
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,ExtraLargePrime," << number << "," << result << "," << duration << "\n";

    number = LongInteger("7569656357555149453935332725211591");
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,ExtraLargePrime," << number << "," << result << "," << duration << "\n";

    number = LongInteger("56713727820156410577229101238628035243");
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,ExtraLargePrime," << number << "," << result << "," << duration << "\n";

    number = LongInteger("1036080103464110332031031766103033010288951027461");
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,ExtraLargePrime," << number << "," << result << "," << duration << "\n";

    number = LongInteger("8888888888888888888888888888888888888888888888888888888888888888888888888888881");
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,ExtraLargePrime," << number << "," << result << "," << duration << "\n";

    number = LongInteger("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000081");
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,ExtraLargePrime," << number << "," << result << "," << duration << "\n";

    number = LongInteger("9152125273335394549515557636569757781858791939599105111115117119121123125129133135141143145147153155159161165169171175177183185187189195201203205207209213215217219221225231235237243245247249253");
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,ExtraLargePrime," << number << "," << result << "," << duration << "\n";

    number = LongInteger("1357911131517193133353739515355575971737577799193959799111113115117119131133135137139151153155157159171173175177179191193195197199311313315317319331333335337339351353355357359371373375377379391393395397399511513515517519531533535537539551553555557559571573575577579591593595597599711713715717719731733735737739751753755757759771");
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_TRUE(result);
    comb1_test_results << "Comb1Test,ExtraLargePrime," << number << "," << result << "," << duration << "\n";
}

TEST_F(Comb1Test, ExtraLargeComposite) {
    LongInteger number = LongInteger("1919191919171610101619193"); // = 10301 * 186343694983303
    profiler.start();
    bool result = comb1.check_primality(number);
    profiler.finish();
    auto duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,ExtraLargeComposite," << number << "," << !result << "," << duration << "\n";

    number = LongInteger("999988886446696644688889997"); // = 998001 * 1000007888887009
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,ExtraLargeComposite," << number << "," << !result << "," << duration << "\n";

    number = LongInteger("162259276829213363391578010288129"); // = 27737 * 584962500721158399

    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,ExtraLargeComposite," << number << "," << !result << "," << duration << "\n";

    number = LongInteger("7569656357555149453935332725211593"); // = 2953 * 2562651821538753311987
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,ExtraLargeComposite," << number << "," << !result << "," << duration << "\n";

    number = LongInteger("56713727820156410577229101238628035241"); // = 12451 * 4556471721910438305735118377

    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,ExtraLargeComposite," << number << "," << !result << "," << duration << "\n";

    number = LongInteger("1036080103464110332031031766103033010288951027459"); // = 15973 * 64873589082109382983180527788331

    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,ExtraLargeComposite," << number << "," << !result << "," << duration << "\n";

    number = LongInteger("8888888888888888888888888888888888888888888888888888888888888888888888888888883"); // = 37 * 24024024024024024024024024024024024024024024024024024024024024024024024024024021

    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,ExtraLargeComposite," << number << "," << !result << "," << duration << "\n";

    number = LongInteger("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000087"); // = 7 * 14285714285714285714285714285714285714285714285714285714285714285714285714285714285714285714285714285714285714285714285714285714285714285714285713
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,ExtraLargeComposite," << number << "," << !result << "," << duration << "\n";

    number = LongInteger("9152125273335394549515557636569757781858791939599105111115117119121123125129133135141143145147153155159161165169171175177183185187189187201203205207209213215217219221225231235237243245247249253"); // = 71 * 128887676949275297870812663584758542856620563380107464343111127288110901998615339294226779524666206479271586663042175846960467264515780021166708750636460353825117533064788949416588128929050025314961
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,ExtraLargeComposite," << number << "," << !result << "," << duration << "\n";

    number = LongInteger("1357911131517193133353739515355575971737577799193959799111113115117119131133135137139151153155157159171173175177179191193195197199311313315317319331333335337339351353355357359371373375377379391393395397399511513515517519531533535537539551553555557559571573575577579591593595597599711713715717719731733735737739751753755757759773"); // = 83 * 163536144150882183075506225073538384962890625679611925805892678239145953947515449806542262822937230812944865047236456767711724934288091126708352716245734388732214721153251791715897379053617327847259905320707136045663420562587123020466850476306014292376790184965847611546833874323135620228073310153891827788865807703676147426876495737655748
    profiler.start();
    result = comb1.check_primality(number);
    profiler.finish();
    duration = profiler.getExecutionTimeDouble();
    EXPECT_FALSE(result);
    comb1_test_results << "Comb1Test,ExtraLargeComposite," << number << "," << !result << "," << duration << "\n";
}
}  // namespace Project::Tests
